/*
 * XREFs of xxxSetActivePpiForMonitor @ 0x14026B544
 * Callers:
 *     NtUserSetActiveProcessForMonitor @ 0x14024D090 (NtUserSetActiveProcessForMonitor.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxRefreshDisplayOrientation @ 0x14026B590 (xxxRefreshDisplayOrientation.c)
 *     ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x140272A30 (-IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall xxxSetActivePpiForMonitor(__int64 a1, struct tagMONITOR *a2)
{
  __int64 result; // rax

  if ( !a2 || (result = IsMonitorConnectedToInternalPanel(a2), (_DWORD)result) )
  {
    *(_QWORD *)(*((_QWORD *)PtiCurrent(a1, (__int64)a2) + 62) + 256LL) = a1;
    return xxxRefreshDisplayOrientation();
  }
  return result;
}
