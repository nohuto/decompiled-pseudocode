/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x140AFA6A0
 * Callers:
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x140AE1304 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x1404247C8 (PoIssueCoalescingNotification.c)
 */

__int64 CmpIssueNewDirtyCallback()
{
  __int64 result; // rax

  result = (unsigned int)CmpHoldLazyFlush;
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( WheapPfaLock.ApcStateFill[16] )
      return PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
  return result;
}
