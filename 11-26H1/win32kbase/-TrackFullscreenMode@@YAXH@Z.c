/*
 * XREFs of ?TrackFullscreenMode@@YAXH@Z @ 0x14018DB74
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall TrackFullscreenMode(__int64 a1, __int64 a2, int a3)
{
  struct tagTHREADINFO *v3; // rbx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( (_DWORD)a1 )
  {
    v3 = PtiCurrent(a1, a2);
    *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 43240) = *((_QWORD *)v3 + 57);
  }
  else
  {
    *(_QWORD *)(W32GetUserSessionState(0, a2, a3) + 43240) = 0LL;
  }
}
