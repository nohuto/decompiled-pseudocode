/*
 * XREFs of MiModwriterReturnUnusedPages @ 0x1407123A4
 * Callers:
 *     MiGatherPagefilePages @ 0x1403FFDF8 (MiGatherPagefilePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402AE9B4 (MiReleaseWriteInProgressCharges.c)
 *     MiWriteCompletePfn @ 0x1404008A0 (MiWriteCompletePfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiModwriterReturnUnusedPages(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v3; // rbp
  _QWORD *v4; // r14
  __int64 v5; // r15
  ULONG_PTR v6; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // rdx
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = v1 + 8 * (*(unsigned int *)(a1 + 12) + 19LL);
  v4 = (_QWORD *)(v1 + 8 * (*(unsigned int *)(a1 + 8) + 19LL));
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 64) + 224LL);
  do
  {
    v6 = 48LL * *v4 - 0x220000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v1) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v1);
    }
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    MiWriteCompletePfn(v6, 33, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    ++v4;
  }
  while ( (unsigned __int64)v4 < v3 );
  v8 = (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 16) -= v8;
  return MiReleaseWriteInProgressCharges(v5, v8, 0);
}
