/*
 * XREFs of BgkResumeFinished @ 0x140C09404
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1404633C0 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x140B1AB90 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x140C4F9A8 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140C541C0 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140E65D30 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140E65D30 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140E65D3E = 0;
  return result;
}
