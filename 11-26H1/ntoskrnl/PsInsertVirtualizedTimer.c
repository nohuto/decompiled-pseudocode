/*
 * XREFs of PsInsertVirtualizedTimer @ 0x1404B24F4
 * Callers:
 *     ExpSetTimerObject @ 0x1406D2DD8 (ExpSetTimerObject.c)
 *     NtCreateTimer @ 0x140B5A440 (NtCreateTimer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerPause @ 0x1404B2CF0 (ExpTimerPause.c)
 */

void __fastcall PsInsertVirtualizedTimer(KSPIN_LOCK *Object, _QWORD *a2, KSPIN_LOCK *a3, KSPIN_LOCK **a4)
{
  unsigned __int8 CurrentIrql; // r14
  KSPIN_LOCK *v9; // rbp
  PVOID *v10; // rdx

  if ( (*((_DWORD *)Object + 125) & 0x40000008) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v9 = Object + 225;
    if ( a3 )
    {
      CurrentIrql = KeAcquireSpinLockRaiseToDpc(Object + 225);
      KxAcquireSpinLock(a3);
    }
    v10 = (PVOID *)Object[227];
    if ( *v10 != Object + 226 )
      __fastfail(3u);
    *a2 = Object + 226;
    a2[1] = v10;
    *v10 = a2;
    Object[227] = (KSPIN_LOCK)a2;
    if ( *((_BYTE *)Object + 1775) == 1 )
      ExpTimerPause(a2 - 36, MEMORY[0xFFFFF78000000014], MEMORY[0xFFFFF78000000008]);
    ObfReferenceObjectWithTag(Object, 0x54567350u);
    *a4 = Object;
    if ( a3 )
    {
      KxReleaseSpinLock(a3);
      KeReleaseSpinLock(v9, CurrentIrql);
    }
  }
}
