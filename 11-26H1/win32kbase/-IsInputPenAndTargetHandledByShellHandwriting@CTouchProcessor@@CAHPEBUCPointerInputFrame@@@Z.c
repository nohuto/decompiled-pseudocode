/*
 * XREFs of ?IsInputPenAndTargetHandledByShellHandwriting@CTouchProcessor@@CAHPEBUCPointerInputFrame@@@Z @ 0x14008CB10
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x14008BFEC (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 */

bool __fastcall CTouchProcessor::IsInputPenAndTargetHandledByShellHandwriting(const struct CPointerInputFrame *a1)
{
  __int64 v1; // rcx
  struct tagWND *UserWindow; // rcx

  v1 = *((_QWORD *)a1 + 30);
  return *(_DWORD *)(v1 + 168) == 3
      && (UserWindow = CInputDest::GetUserWindow((CInputDest *)(v1 + 352))) != 0LL
      && *(_QWORD *)(*((_QWORD *)UserWindow + 2) + 1496LL) != 0LL;
}
