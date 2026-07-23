/*
 * XREFs of MiReleasePageHash @ 0x140714BDC
 * Callers:
 *     MiAttemptChangePagingFileMaximum @ 0x1406FD33C (MiAttemptChangePagingFileMaximum.c)
 *     MiPagefileMaximumChangePrepare @ 0x1406FDBD4 (MiPagefileMaximumChangePrepare.c)
 *     MiTargetedPageFileReductionApc @ 0x1407124C8 (MiTargetedPageFileReductionApc.c)
 *     MiDeletePagefile @ 0x140871A84 (MiDeletePagefile.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&stru_140E366D8.WaitBlockList,
           (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           (unsigned int)((a2 * (unsigned __int64)(unsigned int)dword_140E360CC) >> 12)
         + (((a2 * (unsigned __int64)(unsigned int)dword_140E360CC) & 0xFFF) != 0));
}
