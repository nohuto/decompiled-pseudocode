/*
 * XREFs of ?GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x1400DAB5C
 * Callers:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400DA83C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ??$GrepIsLockOwnedExclusiveByCurrentThread@$04PEAVRFONT@@@@YA_NAEBQEAVRFONT@@@Z @ 0x1400DAB3C (--$GrepIsLockOwnedExclusiveByCurrentThread@$04PEAVRFONT@@@@YA_NAEBQEAVRFONT@@@Z.c)
 *     ??$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14026F428 (--$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBA.c)
 *     GrepIsRFONTListSemaphoreOwnedByCurrentThread @ 0x14030FC70 (GrepIsRFONTListSemaphoreOwnedByCurrentThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall GrepIsLockOwnedExclusiveByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredExclusiveLite(a1) != 0;
}
