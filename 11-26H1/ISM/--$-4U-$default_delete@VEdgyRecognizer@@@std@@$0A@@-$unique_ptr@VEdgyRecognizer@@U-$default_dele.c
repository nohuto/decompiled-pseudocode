/*
 * XREFs of ??$?4U?$default_delete@VEdgyRecognizer@@@std@@$0A@@?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180155C2C
 * Callers:
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180158E78 (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VEdgyRecognizer@@@std@@QEBAXPEAVEdgyRecognizer@@@Z @ 0x180156AB8 (--R-$default_delete@VEdgyRecognizer@@@std@@QEBAXPEAVEdgyRecognizer@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<EdgyRecognizer>::operator=<std::default_delete<EdgyRecognizer>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<EdgyRecognizer>::operator()();
  return a1;
}
