/*
 * XREFs of ??0?$SEMOBJ@$0BH@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140215EE4
 * Callers:
 *     ?bAddPrintKView@@YAH_KPEAXK0PEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x140327B58 (-bAddPrintKView@@YAH_KPEAXK0PEAU_FONTFILE_PRINTKVIEW@@@Z.c)
 *     ?bFindPrintKView@@YAH_KKPEAPEAU_FONTFILE_PRINTKVIEW@@@Z @ 0x140327CB8 (-bFindPrintKView@@YAH_KKPEAPEAU_FONTFILE_PRINTKVIEW@@@Z.c)
 *     ?vClosePrintKView@@YAXXZ @ 0x140328130 (-vClosePrintKView@@YAXXZ.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BH@@@YAXXZ @ 0x140215F18 (--$GrepAcquireLockValidate@$0BH@@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<23>::SEMOBJ<23>(HSEMAPHORE *a1, __int64 a2)
{
  HSEMAPHORE v3; // rcx

  v3 = *(HSEMAPHORE *)(a2 + 19152);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<23>();
  return a1;
}
