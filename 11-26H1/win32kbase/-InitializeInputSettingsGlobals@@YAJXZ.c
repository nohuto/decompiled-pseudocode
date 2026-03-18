/*
 * XREFs of ?InitializeInputSettingsGlobals@@YAJXZ @ 0x14024A8A8
 * Callers:
 *     ?InitializeInputGlobals@@YAJXZ @ 0x1401BCD80 (-InitializeInputGlobals@@YAJXZ.c)
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall InitializeInputSettingsGlobals(int a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int64 result; // rax
  __int128 v7; // xmm1
  __int128 Src_8; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+38h] [rbp-D0h]
  __int128 v10; // [rsp+48h] [rbp-C0h]
  const wchar_t *v11; // [rsp+58h] [rbp-B0h]
  __int64 v12; // [rsp+60h] [rbp-A8h]
  const wchar_t *v13; // [rsp+68h] [rbp-A0h]
  __int64 v14; // [rsp+70h] [rbp-98h]
  const wchar_t *v15; // [rsp+78h] [rbp-90h]
  int v16; // [rsp+80h] [rbp-88h]
  int v17; // [rsp+84h] [rbp-84h]
  const wchar_t *v18; // [rsp+88h] [rbp-80h]
  int v19; // [rsp+90h] [rbp-78h]
  int v20; // [rsp+94h] [rbp-74h]
  const wchar_t *v21; // [rsp+98h] [rbp-70h]
  __int64 v22; // [rsp+A0h] [rbp-68h]
  const wchar_t *v23; // [rsp+A8h] [rbp-60h]
  int v24; // [rsp+B0h] [rbp-58h]
  int v25; // [rsp+B4h] [rbp-54h]
  const wchar_t *v26; // [rsp+B8h] [rbp-50h]
  int v27; // [rsp+C0h] [rbp-48h]
  int v28; // [rsp+C4h] [rbp-44h]
  const wchar_t *v29; // [rsp+C8h] [rbp-40h]
  const wchar_t *v30; // [rsp+D0h] [rbp-38h]
  const wchar_t *v31; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v32; // [rsp+E0h] [rbp-28h]
  const wchar_t *v33; // [rsp+E8h] [rbp-20h]
  int v34; // [rsp+F0h] [rbp-18h]
  int v35; // [rsp+F4h] [rbp-14h]
  const wchar_t *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  const wchar_t *v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  const wchar_t *v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  __int128 v42; // [rsp+128h] [rbp+20h]

  *((_QWORD *)&Src_8 + 1) = 0LL;
  v30 = 0LL;
  v3 = W32GetUserSessionState(a1, a2, a3) + 17384;
  v32 = 0LL;
  *((_QWORD *)&v9 + 1) = 0x100000001LL;
  *(_QWORD *)&Src_8 = L"PanningDisabled";
  *(_QWORD *)&v9 = L"Inertia";
  *(_QWORD *)&v10 = L"Bouncing";
  v11 = L"Friction";
  v13 = L"TouchModeN_DtapDist";
  v15 = L"TouchModeN_DtapTime";
  v18 = L"TouchGate";
  v21 = L"TouchModeN_HoldTime_Animation";
  v23 = L"TouchModeN_HoldTime_BeforeAnimation";
  v26 = L"TouchMode_hold";
  v29 = L"Mobile_Inertia_Enabled";
  v31 = L"Minimum_Velocity";
  v33 = L"Thumb_Flick_Enabled";
  v36 = L"Left_Edgy_Enabled";
  v38 = L"Right_Edgy_Enabled";
  v40 = L"DualPressAndHold_Enabled";
  *((_QWORD *)&v10 + 1) = 0x100000001LL;
  v12 = 0x3200000032LL;
  v14 = 0x3200000032LL;
  v16 = 50;
  v17 = 50;
  v19 = 1;
  v20 = 1;
  v22 = 0x3200000032LL;
  v24 = 50;
  v25 = 50;
  v27 = 1;
  v28 = 1;
  v34 = 1;
  v35 = 1;
  v37 = 0x100000001LL;
  v39 = 0x100000001LL;
  v41 = 0x100000001LL;
  memmove((void *)v3, &Src_8, 0x100uLL);
  *(_QWORD *)(v3 + 264) = v3;
  *(_QWORD *)(v3 + 272) = L"MultiTouchEnabled";
  *(_DWORD *)(v3 + 280) = 1;
  *(_DWORD *)(v3 + 284) = 1;
  *(_QWORD *)(v3 + 296) = v3 + 272;
  *(_QWORD *)&Src_8 = L"AAPThreshold";
  *((_QWORD *)&Src_8 + 1) = 0x200000002LL;
  *((_QWORD *)&v10 + 1) = 0x3200000032LL;
  *(_QWORD *)&v9 = L"CursorSpeed";
  *((_QWORD *)&v9 + 1) = 0xA0000000ALL;
  *(_QWORD *)&v10 = L"FeedbackIntensity";
  v11 = L"ClickForceSensitivity";
  v13 = L"LeaveOnWithMouse";
  v15 = L"FeedbackEnabled";
  v18 = L"TapsEnabled";
  v21 = L"TapAndDrag";
  v23 = L"TwoFingerTapEnabled";
  v26 = L"RightClickZoneEnabled";
  v29 = L"HonorMouseAccelSetting";
  v31 = L"PanEnabled";
  v33 = L"ZoomEnabled";
  v36 = L"ScrollDirection";
  v38 = L"RightClickZoneWidth";
  v40 = L"RightClickZoneHeight";
  v12 = 0x3200000032LL;
  v14 = 0x100000001LL;
  v16 = 1;
  v17 = 1;
  v19 = 1;
  v20 = 1;
  v22 = 0x100000001LL;
  v24 = 1;
  v25 = 1;
  v27 = 1;
  v28 = 1;
  v30 = 0LL;
  v32 = 0x100000001LL;
  v34 = 1;
  v35 = 1;
  v37 = 0LL;
  v39 = 0LL;
  v41 = 0LL;
  memmove((void *)(v3 + 304), &Src_8, 0x100uLL);
  *(_QWORD *)(v3 + 568) = v3 + 304;
  *(_QWORD *)&Src_8 = L"Splash";
  *((_QWORD *)&Src_8 + 1) = 0x3200000032LL;
  *(_QWORD *)&v9 = L"DblDist";
  *(_QWORD *)&v10 = L"DblTime";
  v11 = L"TapTime";
  *((_QWORD *)&v9 + 1) = 0x3200000032LL;
  *((_QWORD *)&v10 + 1) = 0x12C0000012CLL;
  v12 = 0x6400000064LL;
  v14 = 0x12C0000012CLL;
  v13 = L"WaitTime";
  v15 = L"HoldTime";
  v19 = 1;
  v16 = 2300;
  v17 = 2300;
  v18 = L"FlickMode";
  v21 = L"FlickTolerance";
  v23 = L"LeftEdgyEnabled";
  v26 = L"RightEdgyEnabled";
  v20 = 1;
  v22 = 0x3200000032LL;
  v24 = 1;
  v25 = 1;
  v27 = 1;
  v28 = 1;
  memmove((void *)(v3 + 704), &Src_8, 0xA0uLL);
  *(_QWORD *)(v3 + 872) = v3 + 704;
  *((_QWORD *)&Src_8 + 1) = 0x4846455758C33841LL;
  *(_QWORD *)&Src_8 = L"Left";
  *((_QWORD *)&v9 + 1) = L"UpLeft";
  v11 = L"Up";
  v14 = (__int64)L"UpRight";
  v18 = L"Right";
  v22 = (__int64)L"DownRight";
  v26 = L"Down";
  v30 = L"DownLeft";
  *(_QWORD *)&v9 = 0x9F7145B888BB26B8uLL;
  *(_QWORD *)&v10 = 0x47F38E42CEFA51BCLL;
  *((_QWORD *)&v10 + 1) = 0xEBDFECA56A8CB1ACuLL;
  v12 = 0x450285124653D974LL;
  v13 = (const wchar_t *)0x8090833CF6D41AA0LL;
  v15 = (const wchar_t *)0x47F38E42CEFA51BCLL;
  v16 = 1787605420;
  v17 = -337646427;
  v19 = -1033389858;
  v20 = 1336411790;
  v21 = (const wchar_t *)0x4E301EF93B324FABLL;
  v23 = (const wchar_t *)0x47F38E42CEFA51BCLL;
  v24 = 1787605420;
  v25 = -337646427;
  v27 = 1142583377;
  v28 = 1129805542;
  v29 = (const wchar_t *)0xF7C82D37F0853D9BLL;
  v31 = (const wchar_t *)0x47F38E42CEFA51BCLL;
  v32 = 0xEBDFECA56A8CB1ACuLL;
  memmove((void *)(v3 + 880), &Src_8, 0xC0uLL);
  *(_QWORD *)(v3 + 1080) = v3 + 880;
  *((_QWORD *)&Src_8 + 1) = 0x800000008LL;
  *(_QWORD *)&Src_8 = L"Latency";
  *(_QWORD *)&v9 = L"SampleTime";
  *((_QWORD *)&v9 + 1) = 0x800000008LL;
  *(_QWORD *)&v10 = L"UseHWTimeStamp";
  v4 = v9;
  DWORD2(v10) = 1;
  *(_OWORD *)(v3 + 1088) = Src_8;
  HIDWORD(v10) = 1;
  v5 = v10;
  *((_QWORD *)&Src_8 + 1) = 0LL;
  *(_OWORD *)(v3 + 1104) = v4;
  DWORD2(v9) = 1;
  *(_OWORD *)(v3 + 1120) = v5;
  *(_QWORD *)(v3 + 1144) = v3 + 1088;
  *(_QWORD *)&Src_8 = L"SguiMode";
  *(_QWORD *)&v9 = L"HoldMode";
  *(_QWORD *)&v10 = L"MouseInputResolutionX";
  v11 = L"MouseInputResolutionY";
  v13 = L"MouseInputFrequency";
  v15 = L"EraseEnable";
  v18 = L"RightMaskEnable";
  HIDWORD(v9) = 1;
  *((_QWORD *)&v10 + 1) = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v16 = 1;
  v17 = 1;
  v19 = 1;
  v20 = 1;
  memmove((void *)(v3 + 576), &Src_8, 0x70uLL);
  *(_QWORD *)(v3 + 696) = v3 + 576;
  *(_QWORD *)&v42 = L"Color";
  *((_QWORD *)&v42 + 1) = 0x8000000080000000uLL;
  *(_OWORD *)(v3 + 1152) = v42;
  *(_QWORD *)(v3 + 1176) = v3 + 1152;
  *(_DWORD *)(v3 + 1240) = 16;
  *(_DWORD *)(v3 + 1244) = 8;
  *(_DWORD *)(v3 + 1248) = 8;
  *(_QWORD *)(v3 + 1252) = 1LL;
  *(_QWORD *)(v3 + 1260) = 105LL;
  *(_QWORD *)(v3 + 1268) = 8229LL;
  *(_QWORD *)(v3 + 1276) = 175LL;
  *(_QWORD *)(v3 + 1284) = 33LL;
  *(double *)&v9 = DOUBLE_0_5;
  *(double *)&v10 = DOUBLE_0_5;
  *((_QWORD *)&v9 + 1) = 1LL;
  *((_QWORD *)&v10 + 1) = 1LL;
  *(__m128i *)(v3 + 1184) = _mm_load_si128((const __m128i *)&_xmm);
  result = 0LL;
  v7 = v10;
  v11 = *(const wchar_t **)&DOUBLE_0_5;
  *(_OWORD *)(v3 + 1200) = v9;
  *(_QWORD *)&v5 = v11;
  *(_OWORD *)(v3 + 1216) = v7;
  *(_QWORD *)(v3 + 1232) = v5;
  return result;
}
