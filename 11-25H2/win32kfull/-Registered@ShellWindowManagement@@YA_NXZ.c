/*
 * XREFs of ?Registered@ShellWindowManagement@@YA_NXZ @ 0x14021AFAC
 * Callers:
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x140247CC0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserEnableShellWindowManagementBehavior @ 0x140296000 (NtUserEnableShellWindowManagementBehavior.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall ShellWindowManagement::Registered(ShellWindowManagement *this, __int64 a2)
{
  return *(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)this, a2) + 62) + 328LL) != 0LL;
}
