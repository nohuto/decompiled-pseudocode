/*
 * XREFs of ?Registered@ShellWindowManagement@@YA_NXZ @ 0x14023F5B0
 * Callers:
 *     NtUserEnableShellWindowManagementBehavior @ 0x14023F4A0 (NtUserEnableShellWindowManagementBehavior.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402AE7B0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall ShellWindowManagement::Registered(ShellWindowManagement *this)
{
  return *(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)this) + 61) + 328LL) != 0LL;
}
