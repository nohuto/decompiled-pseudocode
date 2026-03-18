/*
 * XREFs of ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x14014BC9C
 * Callers:
 *     EditionHandleHungWindow @ 0x14014BC00 (EditionHandleHungWindow.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x14014BC38 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x14014BE9C (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x14019CC50 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     NtUserQueryWindow @ 0x14024BE50 (NtUserQueryWindow.c)
 *     NtUserShellMigrateWindow @ 0x1402A14B0 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402A1990 (NtUserShellSetWindowPos.c)
 *     PsW32ScreenSaver_Show @ 0x1402B6BC0 (PsW32ScreenSaver_Show.c)
 * Callees:
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x14014BCD0 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ?IsPumpingInputMsgs@@YA_NPEBUtagWND@@@Z @ 0x14014BD00 (-IsPumpingInputMsgs@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall IsHungWindow(const struct tagTHREADINFO **a1)
{
  return IsThreadHung(a1[2]) || !IsPumpingInputMsgs((const struct tagWND *)a1);
}
