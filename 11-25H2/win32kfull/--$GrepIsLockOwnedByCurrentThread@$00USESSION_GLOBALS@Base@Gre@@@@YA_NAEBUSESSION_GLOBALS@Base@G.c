/*
 * XREFs of ??$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140008F6C
 * Callers:
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z @ 0x140007D00 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXAEAVPDEVOBJ@@@Z.c)
 *     vDisableSynchronize @ 0x140008E70 (vDisableSynchronize.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1400F6C80 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     ?GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x140008F8C (-GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 */

bool __fastcall GrepIsLockOwnedByCurrentThread<1,Gre::Base::SESSION_GLOBALS>(_QWORD *a1)
{
  return GrepIsLockOwnedByCurrentThread((HSEMAPHORE)(*a1 + 624LL));
}
