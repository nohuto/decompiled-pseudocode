/*
 * XREFs of ?TrackFullscreenMode@@YAXH@Z @ 0x140151F78
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall TrackFullscreenMode(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (_DWORD)a1 )
  {
    v2 = PtiCurrent();
    *(_QWORD *)(W32GetUserSessionState(v4, v3) + 43240) = *((_QWORD *)v2 + 58);
  }
  else
  {
    *(_QWORD *)(W32GetUserSessionState(a1, a2) + 43240) = 0LL;
  }
}
