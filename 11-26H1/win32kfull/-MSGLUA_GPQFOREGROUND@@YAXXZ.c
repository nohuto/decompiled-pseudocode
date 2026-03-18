/*
 * XREFs of ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1401736A8
 * Callers:
 *     EditionxxxReportMouseBreakToAccessibility @ 0x1401731F0 (EditionxxxReportMouseBreakToAccessibility.c)
 *     EditionLLMouseButtonHook @ 0x140173290 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1401734E0 (EditionLLMouseWheelHook.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1401E2640 (EditionForegroundQAccessibleToMouseProducer.c)
 *     ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x14029B5FC (-xxxInternalKeyEventDirect@@YA_NEGKK_K@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14029B9AC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x14029C7D4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x14029CCE0 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxInjectTouchInput @ 0x14029E10C (xxxInjectTouchInput.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z @ 0x140173868 (-MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall MSGLUA_GPQFOREGROUND(__int64 a1)
{
  struct tagTHREADINFO *v1; // rax

  v1 = PtiCurrent(a1);
  MSGLUA_GPQFOREGROUNDPTI(v1);
}
