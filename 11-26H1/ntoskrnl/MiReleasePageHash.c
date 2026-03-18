/*
 * XREFs of MiReleasePageHash @ 0x14070FEE0
 * Callers:
 *     MiAttemptChangePagingFileMaximum @ 0x1406F866C (MiAttemptChangePagingFileMaximum.c)
 *     MiPagefileMaximumChangePrepare @ 0x1406F8F04 (MiPagefileMaximumChangePrepare.c)
 *     MiTargetedPageFileReductionApc @ 0x14070D818 (MiTargetedPageFileReductionApc.c)
 *     MiDeletePagefile @ 0x14086B6A4 (MiDeletePagefile.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&stru_140E36558.WaitBlockList,
           (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           (unsigned int)((a2 * (unsigned __int64)(unsigned int)dword_140E35F4C) >> 12)
         + (((a2 * (unsigned __int64)(unsigned int)dword_140E35F4C) & 0xFFF) != 0));
}
