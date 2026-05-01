/*
 * XREFs of ?GetMonitor@CLauncherUIMode@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x18039B660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLauncherUIMode::GetMonitor(CLauncherUIMode *this, HMONITOR *a2)
{
  *a2 = (HMONITOR)*((_QWORD *)this + 9);
  return 0LL;
}
