/*
 * XREFs of ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x140060B3C
 * Callers:
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x140060A80 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1401B0EE0 (EditionForegroundQAccessibleToMouseProducer.c)
 *     EditionxxxReportMouseBreakToAccessibility @ 0x1401B3B50 (EditionxxxReportMouseBreakToAccessibility.c)
 *     EditionLLMouseButtonHook @ 0x1401B3BF0 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1401B3E50 (EditionLLMouseWheelHook.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x140237B0C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x140238340 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxInjectTouchInput @ 0x14023D0FC (xxxInjectTouchInput.c)
 *     ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x14027603C (-xxxInternalKeyEventDirect@@YA_NEGKK_K@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x1402769F4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z @ 0x140060B5C (-MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall MSGLUA_GPQFOREGROUND(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rax

  v2 = PtiCurrent(a1, a2);
  MSGLUA_GPQFOREGROUNDPTI(v2);
}
