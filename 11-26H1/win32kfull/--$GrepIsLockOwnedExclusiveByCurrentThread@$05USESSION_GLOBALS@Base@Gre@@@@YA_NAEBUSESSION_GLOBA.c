/*
 * XREFs of ??$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140296F68
 * Callers:
 *     GreLockDisplayArea @ 0x140213BB8 (GreLockDisplayArea.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14028DA20 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     GreUnlockDisplayArea @ 0x1403188F8 (GreUnlockDisplayArea.c)
 * Callees:
 *     ?GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x1400D5794 (-GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 */

bool __fastcall GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>(struct _ERESOURCE **a1)
{
  return GrepIsLockOwnedExclusiveByCurrentThread(*a1 + 10);
}
