/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x140AF8000
 * Callers:
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x140AE37FC (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x140435CBC (PoIssueCoalescingNotification.c)
 */

__int64 CmpIssueNewDirtyCallback()
{
  __int64 result; // rax

  result = (unsigned int)CmpHoldLazyFlush;
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( LOBYTE(WheapPfaLock.TrapFrame) )
      return PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
  return result;
}
