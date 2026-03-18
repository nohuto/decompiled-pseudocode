/*
 * XREFs of ??$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14026F428
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14008DF34 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     GreUnlockDisplayArea @ 0x14032FFA0 (GreUnlockDisplayArea.c)
 * Callees:
 *     ?GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x1400DAB5C (-GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 */

bool __fastcall GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>(struct _ERESOURCE **a1)
{
  return GrepIsLockOwnedExclusiveByCurrentThread(*a1 + 10);
}
