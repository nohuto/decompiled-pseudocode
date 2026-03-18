/*
 * XREFs of UserGetCurrentDesktopId @ 0x1401AC244
 * Callers:
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall UserGetCurrentDesktopId(_QWORD *a1)
{
  unsigned int v2; // edi
  struct tagTHREADINFO *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  *a1 = -1LL;
  v2 = 0;
  v3 = PtiCurrent();
  if ( *((_QWORD *)v3 + 62) == *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19144) )
  {
    v2 = 1;
    *a1 = ***(_QWORD ***)(*((_QWORD *)PtiCurrent() + 62) + 8LL);
  }
  return v2;
}
