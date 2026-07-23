/*
 * XREFs of BgkResumeFinished @ 0x140C0F614
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14045C380 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x140B1CE40 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x140C559A8 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140C5A1C0 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140E65F38 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140E65F38 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140E65F58 = 0;
  return result;
}
