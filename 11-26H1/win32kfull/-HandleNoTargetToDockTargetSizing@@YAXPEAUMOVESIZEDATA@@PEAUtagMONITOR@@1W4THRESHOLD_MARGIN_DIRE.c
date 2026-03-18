/*
 * XREFs of ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1402C41AC
 * Callers:
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x140242080 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x140268C0C (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C4F6C (-SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1402C55A4 (-VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTIO.c)
 */

void __fastcall HandleNoTargetToDockTargetSizing(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  int v5; // ebp
  int v9; // eax
  bool v10; // di
  bool v11; // bp
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r9
  int v15; // eax
  int v16; // eax
  __int128 v17; // xmm6
  bool v18; // zf
  __int16 v19; // [rsp+30h] [rbp-28h]

  v5 = 0;
  if ( a4 == 3 )
  {
    v9 = *(_DWORD *)(a1 + 176);
    if ( v9 == 3 || (unsigned int)(v9 - 4) <= 1 )
    {
      v10 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v14 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69152);
      v19 = 41;
      goto LABEL_23;
    }
  }
  else if ( !a4 )
  {
    v15 = *(_DWORD *)(a1 + 176);
    if ( v15 == 6 || (unsigned int)(v15 - 7) <= 1 )
    {
      v10 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_37;
      v14 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69152);
      v19 = 42;
LABEL_23:
      LOBYTE(v13) = v11;
      LOBYTE(v12) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v13,
        v14,
        4,
        1,
        v19,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
LABEL_37:
      *(_QWORD *)(a1 + 240) = a2;
      return;
    }
  }
  v16 = *(_DWORD *)(a1 + 200);
  v17 = *(_OWORD *)(a1 + 40);
  if ( (v16 & 0x80000) == 0 )
  {
    v5 = 1;
    *(_DWORD *)(a1 + 200) = v16 | 0x80000;
  }
  if ( !(unsigned int)VerticalSizeRectFromHitTarget(a1, a2, a4) )
  {
    *(_DWORD *)(a1 + 200) &= ~0x80000u;
    *(_DWORD *)(a1 + 248) = a4;
    *(_OWORD *)(a1 + 40) = v17;
    goto LABEL_37;
  }
  if ( v5 && a5 )
    *a5 |= 2u;
  if ( !a4 || a4 == 3 )
  {
    *(_DWORD *)(a1 + 200) |= 0x10000000u;
    if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
      MakeArrangedStateObservable((const struct MOVESIZEDATA *)a1);
    SetDragInToDragOutThreshold((struct MOVESIZEDATA *)a1);
    v18 = (*(_DWORD *)(a1 + 200) & 0x80000) == 0;
    *(_DWORD *)(a1 + 248) = a4;
    if ( v18 )
      *(_QWORD *)(a1 + 216) = a2;
    goto LABEL_37;
  }
}
