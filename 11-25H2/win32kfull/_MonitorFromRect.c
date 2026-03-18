/*
 * XREFs of _MonitorFromRect @ 0x1400913B0
 * Callers:
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x140024CF0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14002538C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     ?Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x1400261C8 (-Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x14004EA98 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     GetNewMonitor @ 0x14006568C (GetNewMonitor.c)
 *     _GetWindowPlacement @ 0x1400904B8 (_GetWindowPlacement.c)
 *     CreateSpb @ 0x140155CBC (CreateSpb.c)
 *     xxxSetWindowPlacement @ 0x14016FB84 (xxxSetWindowPlacement.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1401A73E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1401A8180 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     CitGetWindowInfo @ 0x1401DEF10 (CitGetWindowInfo.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401F46B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x140233760 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     CheckFullScreen @ 0x140236038 (CheckFullScreen.c)
 *     ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x140250420 (-AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14028373C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z @ 0x1402A78B0 (-KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A9840 (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     xxxSetInternalWindowPos @ 0x1402ACC4C (xxxSetInternalWindowPos.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C26F0 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402C7B44 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x1402CF388 (-xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPo.c)
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402CFAB0 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402D12FC (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D8AA4 (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402DAD2C (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     _MonitorFromPoint @ 0x140091A70 (_MonitorFromPoint.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(INT *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v7; // rcx
  __int64 DispInfo; // r14
  unsigned __int16 v10; // bx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // r9
  unsigned __int16 v15; // dx
  int v16; // ebx
  __int64 v17; // rcx
  INT v18; // eax
  INT v19; // r14d
  INT v20; // ebx
  INT v21; // edi
  INT v22; // ebx
  __m128i v23; // xmm6
  INT v24; // eax
  int v25; // edi
  INT v26; // eax
  INT v27; // r11d
  INT v28; // r8d
  INT v29; // ecx
  INT v30; // eax
  INT v31; // ecx
  INT v32; // edx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r10
  int v39; // edx
  __int64 v40; // rdi
  __m128i si128; // xmm2
  int v42; // r14d
  __m128i *MonitorRectForDpi; // rax
  INT v44; // r9d
  INT v45; // r8d
  INT v46; // edx
  __m128i v47; // xmm0
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // xmm0_8
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // r13d
  unsigned int v53; // edi
  __int64 v54; // rbx
  unsigned __int16 v55; // r12
  __int32 v56; // r8d
  __int32 v57; // ecx
  unsigned int v58; // ecx
  __int32 v59; // r8d
  __int32 v60; // edx
  __int32 v61; // edx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  INT v64; // edx
  unsigned __int64 v65; // rdi
  __int64 v66; // rbx
  unsigned __int16 v67; // r12
  __int32 v68; // edx
  __int32 v69; // eax
  __int32 v70; // eax
  __int64 v71; // rdx
  __int32 v72; // eax
  INT v73; // ecx
  __int32 v74; // ecx
  __int32 v75; // ecx
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rdx
  int v78; // [rsp+28h] [rbp-79h]
  int v79; // [rsp+38h] [rbp-69h]
  int v80; // [rsp+38h] [rbp-69h]
  unsigned __int16 v81; // [rsp+40h] [rbp-61h]
  int v82; // [rsp+40h] [rbp-61h]
  INT v83; // [rsp+4Ch] [rbp-55h]
  INT a[4]; // [rsp+58h] [rbp-49h] BYREF
  __m128i v85; // [rsp+68h] [rbp-39h] BYREF
  __int64 v86; // [rsp+78h] [rbp-29h]
  __m128i v87; // [rsp+80h] [rbp-21h] BYREF
  __m128i v88; // [rsp+90h] [rbp-11h] BYREF
  __int128 v89; // [rsp+A0h] [rbp-1h]

  v3 = 0LL;
  v86 = 0LL;
  v89 = 0LL;
  DispInfo = GetDispInfo();
  v85.m128i_i64[0] = DispInfo;
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo() + 104);
  if ( *a1 >= a1[2] || a1[1] >= a1[3] )
    return MonitorFromPoint(*(_QWORD *)a1, a2, a3);
  if ( !a3 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v7);
    v35 = CurrentThreadDpiAwarenessContext;
    a3 = CurrentThreadDpiAwarenessContext;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      LOBYTE(v35) = CurrentThreadDpiAwarenessContext & 0xF;
      if ( !*((_QWORD *)PtiCurrent(v35, v34) + 62)
        || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v37, v36) + 62) + 8LL) + 64LL) & 1) == 0 )
      {
        a3 = 18;
      }
    }
  }
  v10 = (a3 >> 8) & 0x1FF;
  v11 = (__int64 *)GetDispInfo();
  v12 = *v11;
  if ( v10 )
  {
    if ( *(_DWORD *)v12 != 1 )
    {
      v40 = v11[14];
      si128 = 0LL;
      *(_OWORD *)a = 0LL;
      if ( v40 )
      {
        v78 = _mm_cvtsi128_si32((__m128i)0LL);
        v42 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
        v82 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
        v80 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
        do
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v40 + 40) + 24LL) & 1) != 0 )
          {
            MonitorRectForDpi = GetMonitorRectForDpi(&v87, v40, v10);
            v44 = v78;
            v45 = v82;
            v46 = v80;
            v47 = *MonitorRectForDpi;
            v48 = MonitorRectForDpi->m128i_i64[0];
            v49 = _mm_srli_si128(v47, 8).m128i_u64[0];
            if ( v78 >= (int)v48 )
              v44 = v48;
            v50 = HIDWORD(v48);
            a[0] = v44;
            v78 = v44;
            if ( v82 >= (int)v50 )
              v45 = v50;
            a[1] = v45;
            v82 = v45;
            if ( v80 <= (int)v49 )
              v46 = v49;
            a[2] = v46;
            v80 = v46;
            if ( v42 <= SHIDWORD(v49) )
              v42 = HIDWORD(v49);
            a[3] = v42;
            si128 = _mm_load_si128((const __m128i *)a);
          }
          v40 = *(_QWORD *)(v40 + 56);
        }
        while ( v40 );
        DispInfo = v85.m128i_i64[0];
      }
      *(__m128i *)a = si128;
      goto LABEL_10;
    }
    v51 = GetDispInfo();
    v13 = *GetMonitorRectForDpi(&v88, *(_QWORD *)(v51 + 104), v10);
  }
  else
  {
    v13 = *(__m128i *)(v12 + 24);
  }
  *(__m128i *)a = v13;
LABEL_10:
  if ( *a1 <= a[0] && a1[1] <= a[1] && a1[2] >= a[2] && a1[3] >= a[3] )
    return *(_QWORD *)(GetDispInfo() + 104);
  v14 = *(_QWORD *)(DispInfo + 112);
  v15 = (a3 >> 8) & 0x1FF;
  v16 = 0;
  v79 = 0;
  while ( 1 )
  {
    v87.m128i_i64[0] = v14;
    if ( !v14 )
      break;
    v17 = *(_QWORD *)(v14 + 40);
    if ( (*(_DWORD *)(v17 + 24) & 1) != 0 )
    {
      v18 = *(unsigned __int16 *)(v17 + 62);
      v81 = *(_WORD *)(v17 + 60);
      *(_OWORD *)a = *(_OWORD *)(v17 + 28);
      if ( v15 )
      {
        v19 = v15;
        v20 = v18;
        v83 = a[1];
        v21 = EngMulDiv(a[0], v15, v18);
        v22 = EngMulDiv(v83, v19, v20);
        v23 = *(__m128i *)a;
        v88.m128i_i64[0] = *(_QWORD *)a;
        v24 = v21 + EngMulDiv(0, v19, v81);
        v25 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 4));
        a[0] = v24;
        a[1] = v22 + EngMulDiv(v25 - v88.m128i_i32[1], v19, v81);
        a[2] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v23, 8)) - _mm_cvtsi128_si32(v23), v19, v81) + a[0];
        v26 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v23, 12)) - v25, v19, v81);
        v3 = v86;
        v16 = v79;
        v14 = v87.m128i_i64[0];
        a[3] = v26 + a[1];
      }
      v27 = a[0];
      v28 = a[2];
      if ( *a1 > a[0] )
        v27 = *a1;
      v29 = a1[2];
      LODWORD(v89) = v27;
      if ( v29 < a[2] )
        v28 = v29;
      DWORD2(v89) = v28;
      if ( v27 >= v28 )
        goto LABEL_26;
      v30 = a[1];
      if ( a1[1] > a[1] )
        v30 = a1[1];
      v31 = a1[3];
      v32 = a[3];
      DWORD1(v89) = v30;
      if ( v31 < a[3] )
        v32 = v31;
      HIDWORD(v89) = v32;
      if ( v30 < v32 )
      {
        v38 = v89 - *(_QWORD *)a1;
        if ( (_QWORD)v89 == *(_QWORD *)a1 )
          v38 = *((_QWORD *)&v89 + 1) - *((_QWORD *)a1 + 1);
        if ( !v38 )
          return v14;
        v39 = (v28 - v27) * (v32 - v30);
        if ( v39 > v16 )
        {
          v16 = v39;
          v79 = v39;
          v3 = v14;
          v86 = v14;
        }
      }
      else
      {
LABEL_26:
        v89 = 0LL;
      }
      v15 = (a3 >> 8) & 0x1FF;
    }
    v14 = *(_QWORD *)(v14 + 56);
  }
  if ( v16 > 0 )
    return v3;
  if ( !a2 )
    return 0LL;
  v52 = a2 - 1;
  if ( !v52 )
    return *(_QWORD *)(GetDispInfo() + 104);
  if ( v52 == 1 )
  {
    if ( (unsigned int)(*a1 + 0x8000) <= 0xFFFF
      && (unsigned int)(a1[1] + 0x8000) <= 0xFFFF
      && (unsigned int)(a1[2] + 0x8000) <= 0xFFFF
      && (unsigned int)(a1[3] + 0x8000) <= 0xFFFF )
    {
      v53 = -1;
      v54 = *(_QWORD *)(v85.m128i_i64[0] + 112);
      if ( v54 )
      {
        v55 = (a3 >> 8) & 0x1FF;
        while ( 1 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v54 + 40) + 24LL) & 1) == 0 )
            goto LABEL_84;
          GetMonitorRectForDpi(&v85, v54, v55);
          v56 = a1[2];
          if ( v56 <= v85.m128i_i32[0] )
            break;
          if ( *a1 >= v85.m128i_i32[2] )
          {
            v57 = *a1 - v85.m128i_i32[2];
            goto LABEL_75;
          }
          v58 = 0;
LABEL_76:
          if ( v58 < v53 )
          {
            v59 = a1[3];
            if ( v59 <= v85.m128i_i32[1] )
            {
              v60 = v85.m128i_i32[1] - v59;
              goto LABEL_79;
            }
            v64 = a1[1];
            if ( v64 < v85.m128i_i32[3] )
            {
              v61 = 0;
            }
            else
            {
              v60 = v64 - v85.m128i_i32[3];
LABEL_79:
              v61 = v60 + 1;
            }
            v62 = v58 * v58;
            if ( v62 < v53 && v62 + v61 < v53 )
            {
              v63 = v61 * v61 + v62;
              if ( v63 < v53 )
              {
                v53 = v63;
                v3 = v54;
              }
            }
          }
LABEL_84:
          v54 = *(_QWORD *)(v54 + 56);
          if ( !v54 )
            return v3;
        }
        v57 = v85.m128i_i32[0] - v56;
LABEL_75:
        v58 = v57 + 1;
        goto LABEL_76;
      }
      return v3;
    }
    v65 = -1LL;
    v66 = *(_QWORD *)(v85.m128i_i64[0] + 112);
    if ( !v66 )
      return v3;
    v67 = (a3 >> 8) & 0x1FF;
    while ( 1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v66 + 40) + 24LL) & 1) == 0 )
        goto LABEL_108;
      GetMonitorRectForDpi(&v85, v66, v67);
      v68 = a1[2];
      if ( v68 <= v85.m128i_i32[0] )
        break;
      if ( *a1 >= v85.m128i_i32[2] )
      {
        v69 = *a1 - v85.m128i_i32[2];
LABEL_98:
        v70 = v69 + 1;
        goto LABEL_99;
      }
      v70 = 0;
LABEL_99:
      v71 = v70;
      if ( v70 < v65 )
      {
        v72 = a1[3];
        if ( v72 <= v85.m128i_i32[1] )
        {
          v74 = v85.m128i_i32[1] - v72;
LABEL_103:
          v75 = v74 + 1;
        }
        else
        {
          v73 = a1[1];
          if ( v73 >= v85.m128i_i32[3] )
          {
            v74 = v73 - v85.m128i_i32[3];
            goto LABEL_103;
          }
          v75 = 0;
        }
        v76 = v71 * v71;
        if ( v76 < v65 && v76 + v75 < v65 )
        {
          v77 = v75 * (__int64)v75 + v76;
          if ( v77 < v65 )
          {
            v65 = v77;
            v3 = v66;
          }
        }
      }
LABEL_108:
      v66 = *(_QWORD *)(v66 + 56);
      if ( !v66 )
        return v3;
    }
    v69 = v85.m128i_i32[0] - v68;
    goto LABEL_98;
  }
  return 0LL;
}
