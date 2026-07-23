/*
 * XREFs of PsRemoveVirtualizedTimer @ 0x1403B4F68
 * Callers:
 *     ExpDeleteTimer @ 0x1403B60F0 (ExpDeleteTimer.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 */

LONG_PTR __fastcall PsRemoveVirtualizedTimer(PVOID *a1, _QWORD *a2, KSPIN_LOCK *a3, unsigned __int8 a4)
{
  KSPIN_LOCK *v4; // rsi
  unsigned __int64 v7; // rbp
  __int64 v9; // rcx
  _QWORD *v10; // rax

  v4 = (KSPIN_LOCK *)*a1;
  v7 = a4;
  ObfReferenceObjectWithTag(*a1, 0x54567350u);
  KxReleaseSpinLock(a3);
  KxAcquireSpinLock(v4 + 225);
  KxAcquireSpinLock(a3);
  if ( *a1 )
  {
    v9 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v10 = (_QWORD *)a2[1], (_QWORD *)*v10 != a2) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    ObfDereferenceObjectWithTag(v4, 0x54567350u);
  }
  KxReleaseSpinLock(a3);
  KxReleaseSpinLock(v4 + 225);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  __writecr8(v7);
  return ObfDereferenceObjectWithTag(v4, 0x54567350u);
}
