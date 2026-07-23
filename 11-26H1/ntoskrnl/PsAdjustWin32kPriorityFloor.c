/*
 * XREFs of PsAdjustWin32kPriorityFloor @ 0x1402396A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAdjustPriorityFloor @ 0x14023972C (KeAdjustPriorityFloor.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PsAdjustWin32kPriorityFloor(ULONG_PTR BugCheckParameter1, unsigned int a2)
{
  KSPIN_LOCK *v4; // rbp
  KIRQL v5; // al
  unsigned int v6; // esi
  KIRQL v7; // r14

  if ( a2 > 0x10 )
    return (unsigned int)*(char *)(BugCheckParameter1 + 1827);
  v4 = (KSPIN_LOCK *)(BugCheckParameter1 + 1912);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter1 + 1912));
  v6 = *(char *)(BugCheckParameter1 + 1827);
  v7 = v5;
  if ( v6 != a2 )
  {
    KeAdjustPriorityFloor(BugCheckParameter1);
    *(_BYTE *)(BugCheckParameter1 + 1827) = a2;
  }
  KeReleaseSpinLock(v4, v7);
  return v6;
}
