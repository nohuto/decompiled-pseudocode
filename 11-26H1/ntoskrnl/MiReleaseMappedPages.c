/*
 * XREFs of MiReleaseMappedPages @ 0x1404FB928
 * Callers:
 *     MiBuildMappedClusterFillMdl @ 0x14042AA84 (MiBuildMappedClusterFillMdl.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402AE9B4 (MiReleaseWriteInProgressCharges.c)
 *     MiWriteCompletePfn @ 0x1404008A0 (MiWriteCompletePfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReleaseMappedPages(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  _QWORD *v4; // r14
  unsigned __int64 v5; // r15
  ULONG_PTR v6; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  __int64 v9; // [rsp+50h] [rbp+8h]
  int v10; // [rsp+58h] [rbp+10h] BYREF

  v9 = a1;
  v2 = a2;
  v3 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  if ( v3 )
  {
    v4 = (_QWORD *)(a2 + 48);
    v5 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
    do
    {
      v6 = 48LL * *v4 - 0x220000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1, a2);
      }
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v10);
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
      MiWriteCompletePfn(v6, 129, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      ++v4;
      --v5;
    }
    while ( v5 );
    *(_DWORD *)(v2 + 40) = 0;
    return MiReleaseWriteInProgressCharges(v9, v3, 1);
  }
  return result;
}
