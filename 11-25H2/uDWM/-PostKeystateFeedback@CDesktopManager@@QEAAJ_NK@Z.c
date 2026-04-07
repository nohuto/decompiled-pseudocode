/*
 * XREFs of ?PostKeystateFeedback@CDesktopManager@@QEAAJ_NK@Z @ 0x1800AD5F8
 * Callers:
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18002D574 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::PostKeystateFeedback(HANDLE *this, unsigned __int8 a2, unsigned int a3)
{
  return CDesktopManager::PostEventMessage(this, 0x408u, a2, a3);
}
