/*
 * XREFs of MiUnlockMirrorWritePages @ 0x1404A872C
 * Callers:
 *     MiWriteBrownPages @ 0x1404A8640 (MiWriteBrownPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUnlockMirrorWritePages(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r14
  unsigned __int8 CurrentIrql; // si
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 48 * a1 - 0x220000000000LL;
  v4 = v3 + 48 * a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v6 = (volatile signed __int32 *)(v3 + 24);
  do
  {
    v10 = 0;
    while ( _interlockedbittestandset64(v6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( *(__int64 *)v6 < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v3);
    _InterlockedAnd64((volatile signed __int64 *)v6, 0x7FFFFFFFFFFFFFFFuLL);
    v3 += 48LL;
    v6 += 12;
    if ( (++v2 & 0x3F) == 0 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v8 = KeGetCurrentIrql();
      if ( (_BYTE)v8 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = 2;
        KiRaiseIrqlProcessIrqlFlags(v8, v7);
      }
    }
  }
  while ( v3 < v4 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
