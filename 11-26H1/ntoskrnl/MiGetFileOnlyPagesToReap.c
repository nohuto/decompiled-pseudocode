/*
 * XREFs of MiGetFileOnlyPagesToReap @ 0x1406FEF2C
 * Callers:
 *     MiReapFileOnlyPfns @ 0x1406FF880 (MiReapFileOnlyPfns.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiGetFileOnlyPagesToReap(_QWORD *a1)
{
  __int64 v2; // r14
  __int64 *v3; // rdi
  __int64 *v4; // rcx
  __int64 *v5; // rax
  KIRQL v6; // r8
  __int64 *v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v11; // rbx
  unsigned __int64 v12; // rdi
  int v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  ExAcquireSpinLockExclusive(&dword_140E39B60);
  do
  {
    v5 = MiUnlinkPageChainHead((__int64)&qword_140E2D298);
    if ( !v5 )
      break;
    v4 = v5;
    if ( v2 )
      v4 = v3;
    ++v2;
    v3 = v4;
    if ( (__int64 *)qword_140E2D298 != v5 - 6 )
      break;
  }
  while ( (((unsigned __int8)HIBYTE(*(_DWORD *)(qword_140E2D298 + 32)) ^ (unsigned __int8)HIBYTE(*((_DWORD *)v4 + 8))) & 1) == 0 );
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E39B60);
  else
    ExReleaseSpinLockExclusive(&dword_140E39B60, v6);
  if ( !v2 )
    return -1LL;
  v8 = &v3[-6 * v2];
  v9 = (unsigned __int64)(v8 + 6);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( v9 <= (unsigned __int64)v3 )
  {
    v11 = (volatile signed __int32 *)(v8 + 9);
    v12 = ((unsigned __int64)v3 - v9) / 0x30 + 1;
    do
    {
      v13 = 0;
      while ( _interlockedbittestandset64(v11, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v13);
        while ( *(__int64 *)v11 < 0 );
      }
      _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
      v11 += 12;
      --v12;
    }
    while ( v12 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  *a1 = v2;
  return (__int64)(v8 + 0x44000000006LL) / 48;
}
