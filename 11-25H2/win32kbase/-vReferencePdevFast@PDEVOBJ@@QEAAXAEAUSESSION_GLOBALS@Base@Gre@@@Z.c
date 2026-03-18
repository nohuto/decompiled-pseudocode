/*
 * XREFs of ?vReferencePdevFast@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3F70
 * Callers:
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1401340E0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E2F4 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?IncrementClientReferenceCountFastOpt@PDEV@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C3DB0 (-IncrementClientReferenceCountFastOpt@PDEV@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall PDEVOBJ::vReferencePdevFast(PDEV **this, struct _ERESOURCE **a2)
{
  struct _ERESOURCE *v4; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJ<19>::SEMOBJ<19>(&v4, a2);
  PDEV::IncrementClientReferenceCountFastOpt(*this, (struct Gre::Base::SESSION_GLOBALS *)a2);
  if ( v4 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v4);
}
