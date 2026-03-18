/*
 * XREFs of ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402C43E4
 * Callers:
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x140242080 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x140161F20 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ @ 0x14019DA2C (-SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ.c)
 *     GetMonitorWorkRectForWindow @ 0x1401EFBA4 (GetMonitorWorkRectForWindow.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1402660F8 (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x140268C0C (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C4F20 (-SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C4F98 (-SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z @ 0x1402C5058 (-UpdateDragRectForSizingAway@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@1W4FrameBoundsOverlapInfo@@@Z.c)
 *     Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline @ 0x1402C83D8 (Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall HandleSizingAwayFromDockTarget(struct MOVESIZEDATA *a1, const struct CHECKPOINT *a2, unsigned int *a3)
{
  __m128i *MonitorWorkRectForWindow; // rax
  struct tagRECT *v7; // rdx
  __m128i v8; // xmm0
  __int64 v9; // rax
  struct tagRECT *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r14d
  bool v13; // cl
  int v14; // eax
  int v15; // esi
  __int128 v16; // xmm0
  bool v17; // di
  bool v18; // si
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // di
  bool v23; // r15
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v28; // r9
  int v29; // eax
  int v30; // eax
  int v31; // [rsp+3Ch] [rbp-2Dh]
  __m128i si128; // [rsp+40h] [rbp-29h]
  __m128i v33; // [rsp+50h] [rbp-19h]
  __m128i v34; // [rsp+60h] [rbp-9h] BYREF
  __m128i v35; // [rsp+70h] [rbp+7h] BYREF

  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(&v34, *((_QWORD *)a1 + 28), *((const struct tagWND **)a1 + 2));
  v7 = (struct tagRECT *)*((_QWORD *)a1 + 2);
  v8 = *MonitorWorkRectForWindow;
  v9 = *((_QWORD *)a1 + 28);
  v35 = v8;
  v10 = WindowMargins::ReduceRect(
          (WindowMargins *)&v34,
          v7,
          (struct MOVESIZEDATA *)((char *)a1 + 40),
          (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 60LL));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v34 = *(__m128i *)v10;
  v33 = _mm_load_si128((const __m128i *)&_xmm);
  v12 = ~*(&v31 + *((int *)a1 + 44)) & GetFrameBoundsOverlapInfo(&v35, &v34, 0);
  v13 = v12 && v12 != 15 && ((v12 - 1LL) & v12) != 0;
  v14 = *((_DWORD *)a1 + 50);
  v15 = v14 & 0x30080000;
  if ( (v14 & 0x80000) != 0 )
  {
    v16 = *(_OWORD *)((char *)a1 + 40);
    *((_DWORD *)a1 + 50) = v14 & 0xFFF7FFFF;
    *(_OWORD *)((char *)a1 + 72) = v16;
    if ( a3 )
      *a3 |= 1u;
  }
  if ( v13 )
  {
    v17 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v17;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        1,
        39,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
    }
    *((_DWORD *)a1 + 50) |= 0x10000000u;
    SetDragOutToDragInThreshold(a1);
  }
  else
  {
    v22 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(v24 + 69152),
        4,
        1,
        40,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
    }
    if ( v15 == 805306368 )
    {
      IsEnabledDeviceUsageNoInline = Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline();
      v34 = *(__m128i *)((char *)a2 + 20);
      v28 = IsEnabledDeviceUsageNoInline ? v12 : 0LL;
      UpdateDragRectForSizingAway(a1, &v35, &v34, v28);
      SetDragInThresholdAlways(a1);
      if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
        || (*(_DWORD *)(*((_QWORD *)a1 + 2) + 384LL) & 0x10) != 0 )
      {
        v29 = *((_DWORD *)a1 + 50);
        if ( (v29 & 0x20) != 0 )
          *((_DWORD *)a1 + 50) = v29 | 0x40000000;
      }
    }
    *((_DWORD *)a1 + 50) &= ~0x10000000u;
    MOVESIZEDATA::SHData_ResetRuntimeState(a1, v11);
    v30 = *((_DWORD *)a1 + 50);
    if ( (v30 & 0x20000) != 0 )
    {
      v30 &= 0xFFFDFEFF;
      *((_DWORD *)a1 + 50) = v30;
    }
    if ( (v30 & 0x40000) != 0 )
      *((_DWORD *)a1 + 50) = v30 & 0xFFFBFDFF;
  }
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    MakeArrangedStateObservable(a1);
  *((_DWORD *)a1 + 62) = 4;
}
