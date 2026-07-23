/*
 * XREFs of MiWakeWaitersForAweCacheAttributeChange @ 0x140707A18
 * Callers:
 *     MiResolveAwePageConflict @ 0x1407076B4 (MiResolveAwePageConflict.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiWakeWaitersForAweCacheAttributeChange(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD **v3; // r14
  _QWORD *v5; // rdi
  unsigned __int8 CurrentIrql; // si
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rbx
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v3 = (_QWORD **)(a1 + 80);
  v5 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v11);
    while ( *(__int64 *)(v2 + 24) < 0 );
  }
  *(_DWORD *)(v2 + 32) &= ~0x200000u;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
  v7 = *v3;
  if ( *v3 )
  {
    do
    {
      v8 = (_QWORD *)*v7;
      if ( v7[1] == v2 )
      {
        *v7 = v5;
        v5 = v7;
        *v3 = v8;
      }
      else
      {
        v3 = (_QWORD **)v7;
      }
      v7 = v8;
    }
    while ( v8 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( v5 )
  {
    do
    {
      v10 = (_QWORD *)*v5;
      KeSignalGate((__int64)(v5 + 2), 1LL, v9);
      v5 = v10;
    }
    while ( v10 );
  }
}
