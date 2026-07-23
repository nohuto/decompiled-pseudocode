/*
 * XREFs of MiCoalesceActivePagesIntoFree @ 0x14070FFD8
 * Callers:
 *     MiFreeContiguousLargePageRun @ 0x140706440 (MiFreeContiguousLargePageRun.c)
 *     MiFreeCacheSlice @ 0x140716848 (MiFreeCacheSlice.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiLargePagePromote @ 0x140473560 (MiLargePagePromote.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiCoalesceActivePagesIntoFree(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // r12
  __int64 v6; // r15
  int PfnPageSizeIndex; // eax
  __int64 v8; // r13
  int v9; // eax
  int v10; // edx
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // bp
  int v15; // ebx
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 i; // rax
  int v20; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+40h] [rbp-58h]
  char v23; // [rsp+A0h] [rbp+8h]
  int v26; // [rsp+B8h] [rbp+20h] BYREF

  v20 = 0;
  v4 = 1;
  v5 = MiPageSizes[a3];
  v6 = 48 * a2 - 0x220000000000LL;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(v6);
  v8 = MiPageSizes[PfnPageSizeIndex];
  v9 = MiLargePageShifts[PfnPageSizeIndex];
  v22 = v8;
  v23 = v9;
  MiPageToNode(a2);
  v12 = 0LL;
  v13 = v6;
  CurrentIrql = 17;
  v15 = (*(_DWORD *)(v6 + 32) >> 22) & 3;
  v21 = v5 >> v23;
  v16 = 48 * v8;
  v17 = v6;
  while ( v12 < v21 )
  {
    if ( v13 == v6 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v10) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v10);
      }
      v26 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      goto LABEL_17;
    }
    ++v12;
    if ( ((*(_DWORD *)(v13 + 32) >> 22) & 3) != v15
      || (*(_DWORD *)(v13 + 32) & 0x40000000) != 0
      || (*(_QWORD *)(v13 + 40) & 0x20000000000LL) != 0 )
    {
LABEL_17:
      v4 = 0;
      goto LABEL_19;
    }
    v17 += v16;
    v13 = v17;
  }
  MiLargePagePromote(a2, a3, v11, 1, &v20);
LABEL_19:
  for ( i = v6 + 48 * ((v12 << v23) - v22); ; i -= v16 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( i == v6 )
      break;
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v4;
}
