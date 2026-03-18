/*
 * XREFs of ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140046B68
 * Callers:
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x14016327C (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140163388 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     NtUserQueryWindow @ 0x14019A8B0 (NtUserQueryWindow.c)
 *     EditionHandleHungWindow @ 0x140213430 (EditionHandleHungWindow.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x140258990 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     NtUserShellMigrateWindow @ 0x1402BED70 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402BF280 (NtUserShellSetWindowPos.c)
 *     PsW32ScreenSaver_Show @ 0x1402D10B0 (PsW32ScreenSaver_Show.c)
 * Callees:
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140046FE4 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ?IsPumpingInputMsgs@@YA_NPEBUtagWND@@@Z @ 0x1400486EC (-IsPumpingInputMsgs@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall IsHungWindow(const struct tagTHREADINFO **a1)
{
  return IsThreadHung(a1[2]) || !IsPumpingInputMsgs((const struct tagWND *)a1);
}
