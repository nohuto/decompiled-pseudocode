/*
 * XREFs of ?InitializeInputSettingsGlobals@@YAJXZ @ 0x140241504
 * Callers:
 *     ?InitializeInputGlobals@@YAJXZ @ 0x140241168 (-InitializeInputGlobals@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall InitializeInputSettingsGlobals(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-E0h]
  const wchar_t *Src; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+38h] [rbp-C8h]
  const wchar_t *v9; // [rsp+40h] [rbp-C0h]
  __int64 v10; // [rsp+48h] [rbp-B8h]
  const wchar_t *v11; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v12; // [rsp+58h] [rbp-A8h]
  const wchar_t *v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+68h] [rbp-98h]
  const wchar_t *v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+78h] [rbp-88h]
  const wchar_t *v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+8Ch] [rbp-74h]
  const wchar_t *v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+9Ch] [rbp-64h]
  const wchar_t *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  const wchar_t *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+BCh] [rbp-44h]
  const wchar_t *v28; // [rsp+C0h] [rbp-40h]
  int v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+CCh] [rbp-34h]
  const wchar_t *v31; // [rsp+D0h] [rbp-30h]
  const wchar_t *v32; // [rsp+D8h] [rbp-28h]
  const wchar_t *v33; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v34; // [rsp+E8h] [rbp-18h]
  const wchar_t *v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]
  const wchar_t *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  const wchar_t *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  const wchar_t *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  __int128 v44; // [rsp+130h] [rbp+30h]
  __int128 v45; // [rsp+140h] [rbp+40h]
  __int128 v46; // [rsp+150h] [rbp+50h]

  v8 = 0LL;
  v32 = 0LL;
  v2 = W32GetUserSessionState(a1, a2) + 17392;
  v34 = 0LL;
  v10 = 0x100000001LL;
  Src = L"PanningDisabled";
  v9 = L"Inertia";
  v11 = L"Bouncing";
  v13 = L"Friction";
  v15 = L"TouchModeN_DtapDist";
  v17 = L"TouchModeN_DtapTime";
  v20 = L"TouchGate";
  v23 = L"TouchModeN_HoldTime_Animation";
  v25 = L"TouchModeN_HoldTime_BeforeAnimation";
  v28 = L"TouchMode_hold";
  v31 = L"Mobile_Inertia_Enabled";
  v33 = L"Minimum_Velocity";
  v35 = L"Thumb_Flick_Enabled";
  v38 = L"Left_Edgy_Enabled";
  v40 = L"Right_Edgy_Enabled";
  v42 = L"DualPressAndHold_Enabled";
  v12 = 0x100000001LL;
  v14 = 0x3200000032LL;
  v16 = 0x3200000032LL;
  v18 = 50;
  v19 = 50;
  v21 = 1;
  v22 = 1;
  v24 = 0x3200000032LL;
  v26 = 50;
  v27 = 50;
  v29 = 1;
  v30 = 1;
  v36 = 1;
  v37 = 1;
  v39 = 0x100000001LL;
  v41 = 0x100000001LL;
  v43 = 0x100000001LL;
  memmove((void *)v2, &Src, 0x100uLL);
  *(_QWORD *)(v2 + 264) = v2;
  *(_QWORD *)(v2 + 272) = L"MultiTouchEnabled";
  *(_DWORD *)(v2 + 280) = 1;
  *(_DWORD *)(v2 + 284) = 1;
  *(_QWORD *)(v2 + 296) = v2 + 272;
  Src = L"AAPThreshold";
  v8 = 0x200000002LL;
  v12 = 0x3200000032LL;
  v9 = L"CursorSpeed";
  v10 = 0xA0000000ALL;
  v11 = L"FeedbackIntensity";
  v13 = L"ClickForceSensitivity";
  v15 = L"LeaveOnWithMouse";
  v17 = L"FeedbackEnabled";
  v20 = L"TapsEnabled";
  v23 = L"TapAndDrag";
  v25 = L"TwoFingerTapEnabled";
  v28 = L"RightClickZoneEnabled";
  v31 = L"HonorMouseAccelSetting";
  v33 = L"PanEnabled";
  v35 = L"ZoomEnabled";
  v38 = L"ScrollDirection";
  v40 = L"RightClickZoneWidth";
  v42 = L"RightClickZoneHeight";
  v14 = 0x3200000032LL;
  v16 = 0x100000001LL;
  v18 = 1;
  v19 = 1;
  v21 = 1;
  v22 = 1;
  v24 = 0x100000001LL;
  v26 = 1;
  v27 = 1;
  v29 = 1;
  v30 = 1;
  v32 = 0LL;
  v34 = 0x100000001LL;
  v36 = 1;
  v37 = 1;
  v39 = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  memmove((void *)(v2 + 304), &Src, 0x100uLL);
  *(_QWORD *)(v2 + 568) = v2 + 304;
  Src = L"Splash";
  v8 = 0x3200000032LL;
  v9 = L"DblDist";
  v11 = L"DblTime";
  v13 = L"TapTime";
  v10 = 0x3200000032LL;
  v12 = 0x12C0000012CLL;
  v14 = 0x6400000064LL;
  v16 = 0x12C0000012CLL;
  v15 = L"WaitTime";
  v17 = L"HoldTime";
  v21 = 1;
  v18 = 2300;
  v19 = 2300;
  v20 = L"FlickMode";
  v23 = L"FlickTolerance";
  v25 = L"LeftEdgyEnabled";
  v28 = L"RightEdgyEnabled";
  v22 = 1;
  v24 = 0x3200000032LL;
  v26 = 1;
  v27 = 1;
  v29 = 1;
  v30 = 1;
  memmove((void *)(v2 + 704), &Src, 0xA0uLL);
  *(_QWORD *)(v2 + 872) = v2 + 704;
  v8 = 0x4846455758C33841LL;
  Src = L"Left";
  v10 = (__int64)L"UpLeft";
  v13 = L"Up";
  v16 = (__int64)L"UpRight";
  v20 = L"Right";
  v24 = (__int64)L"DownRight";
  v28 = L"Down";
  v32 = L"DownLeft";
  v9 = (const wchar_t *)0x9F7145B888BB26B8LL;
  v11 = (const wchar_t *)0x47F38E42CEFA51BCLL;
  v12 = 0xEBDFECA56A8CB1ACuLL;
  v14 = 0x450285124653D974LL;
  v15 = (const wchar_t *)0x8090833CF6D41AA0LL;
  v17 = (const wchar_t *)0x47F38E42CEFA51BCLL;
  v18 = 1787605420;
  v19 = -337646427;
  v21 = -1033389858;
  v22 = 1336411790;
  v23 = (const wchar_t *)0x4E301EF93B324FABLL;
  v25 = (const wchar_t *)0x47F38E42CEFA51BCLL;
  v26 = 1787605420;
  v27 = -337646427;
  v29 = 1142583377;
  v30 = 1129805542;
  v31 = (const wchar_t *)0xF7C82D37F0853D9BLL;
  v33 = (const wchar_t *)0x47F38E42CEFA51BCLL;
  v34 = 0xEBDFECA56A8CB1ACuLL;
  memmove((void *)(v2 + 880), &Src, 0xC0uLL);
  *(_QWORD *)(v2 + 1080) = v2 + 880;
  *((_QWORD *)&v44 + 1) = 0x800000008LL;
  *(_QWORD *)&v44 = L"Latency";
  *(_QWORD *)&v45 = L"SampleTime";
  *((_QWORD *)&v45 + 1) = 0x800000008LL;
  *(_QWORD *)&v46 = L"UseHWTimeStamp";
  v3 = v45;
  DWORD2(v46) = 1;
  *(_OWORD *)(v2 + 1088) = v44;
  HIDWORD(v46) = 1;
  v4 = v46;
  v8 = 0LL;
  *(_OWORD *)(v2 + 1104) = v3;
  LODWORD(v10) = 1;
  *(_OWORD *)(v2 + 1120) = v4;
  *(_QWORD *)(v2 + 1144) = v2 + 1088;
  Src = L"SguiMode";
  v9 = L"HoldMode";
  v11 = L"MouseInputResolutionX";
  v13 = L"MouseInputResolutionY";
  v15 = L"MouseInputFrequency";
  v17 = L"EraseEnable";
  v20 = L"RightMaskEnable";
  HIDWORD(v10) = 1;
  v12 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  v18 = 1;
  v19 = 1;
  v21 = 1;
  v22 = 1;
  memmove((void *)(v2 + 576), &Src, 0x70uLL);
  *(_QWORD *)(v2 + 696) = v2 + 576;
  *(_QWORD *)&v6 = L"Color";
  *((_QWORD *)&v6 + 1) = 0x8000000080000000uLL;
  *(_OWORD *)(v2 + 1152) = v6;
  *(_QWORD *)(v2 + 1176) = v2 + 1152;
  result = 0LL;
  *(_DWORD *)(v2 + 1184) = 16;
  *(_DWORD *)(v2 + 1188) = 8;
  *(_DWORD *)(v2 + 1192) = 8;
  *(_QWORD *)(v2 + 1196) = 1LL;
  *(_QWORD *)(v2 + 1204) = 105LL;
  *(_QWORD *)(v2 + 1212) = 8229LL;
  *(_QWORD *)(v2 + 1220) = 175LL;
  *(_QWORD *)(v2 + 1228) = 33LL;
  return result;
}
