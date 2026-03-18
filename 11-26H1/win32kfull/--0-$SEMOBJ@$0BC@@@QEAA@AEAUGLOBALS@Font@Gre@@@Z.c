/*
 * XREFs of ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C3C14
 * Callers:
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x14030EED4 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 *     vUnlinkEudcRFONTs @ 0x140325380 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1403254C8 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BC@@@YAXXZ @ 0x1400C3C48 (--$GrepAcquireLockValidate@$0BC@@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<18>::SEMOBJ<18>(HSEMAPHORE *a1, __int64 a2)
{
  HSEMAPHORE v3; // rcx

  v3 = *(HSEMAPHORE *)(a2 + 15464);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<18>();
  return a1;
}
