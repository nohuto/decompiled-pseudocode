/*
 * XREFs of PopFxIssueDirectedPowerTransition @ 0x140607D1C
 * Callers:
 *     PopIssueDirectedPowerTransition @ 0x140B5D89C (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxQueueWorkOrder @ 0x1403965EC (PopFxQueueWorkOrder.c)
 *     PopFxReferenceDevice @ 0x140396654 (PopFxReferenceDevice.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 */

void __fastcall PopFxIssueDirectedPowerTransition(ULONG_PTR BugCheckParameter2, char a2, __int64 a3)
{
  KSPIN_LOCK *v6; // rsi
  KIRQL v7; // r14

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 864), 0, 0) & 0x20) == 0 )
    PopFxBugCheck(0x910uLL, 1uLL, BugCheckParameter2, 0LL);
  v6 = (KSPIN_LOCK *)(BugCheckParameter2 + 1192);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 1192));
  if ( *(_DWORD *)(BugCheckParameter2 + 1200) || (*(_DWORD *)(BugCheckParameter2 + 32) & 0x2000) != 0 )
    PopFxBugCheck(0x910uLL, 3uLL, BugCheckParameter2, 0LL);
  if ( ((*(_DWORD *)(BugCheckParameter2 + 32) & 0x1000) != 0) == a2 )
    PopFxBugCheck(0x910uLL, (a2 != 0) + 4LL, BugCheckParameter2, 0LL);
  *(_DWORD *)(BugCheckParameter2 + 1200) = 2;
  _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 32), 0x2000u);
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 32), 0x5000u);
  else
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFEFFF);
  PopFxReferenceDevice(BugCheckParameter2, 5);
  *(_DWORD *)(BugCheckParameter2 + 1220) &= 0xFFFFFFFC;
  *(_QWORD *)(BugCheckParameter2 + 1208) = a3;
  *(_DWORD *)(BugCheckParameter2 + 1216) = -1073741436;
  PopFxQueueWorkOrder(BugCheckParameter2 + 960, BugCheckParameter2);
  KeReleaseSpinLock(v6, v7);
}
