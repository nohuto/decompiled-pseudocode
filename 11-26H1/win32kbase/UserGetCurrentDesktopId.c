/*
 * XREFs of UserGetCurrentDesktopId @ 0x1401CEA38
 * Callers:
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall UserGetCurrentDesktopId(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // edi
  struct tagTHREADINFO *v4; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx

  *a1 = -1LL;
  v3 = 0;
  v4 = PtiCurrent((__int64)a1, a2);
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 19176);
  if ( *((_QWORD *)v4 + 61) == v8 )
  {
    v3 = 1;
    *a1 = ***(_QWORD ***)(*((_QWORD *)PtiCurrent(v9, v8) + 61) + 8LL);
  }
  return v3;
}
