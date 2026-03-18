/*
 * XREFs of ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402AB8B4
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14025388C (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z @ 0x1401C997C (-MoveDragRect@@YA_NPEBUMOVESIZEDATA@@UtagPOINT@@_NPEAUtagRECT@@@Z.c)
 *     ?SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@@Z @ 0x1401DA798 (-SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x140229024 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x140253DE8 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?GetRestoreAroundCursorOffset@@YAJJJJ@Z @ 0x14026C570 (-GetRestoreAroundCursorOffset@@YAJJJJ@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402A732C (-HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THR.c)
 *     ?UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z @ 0x1402A86C0 (-UpdateDragThresholdForMove@@YAXPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@1@Z.c)
 *     ?RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x1402DDBA8 (-RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1402DDD04 (-RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall xxxSizeOrMoveRect(struct MOVESIZEDATA *this, struct tagPOINT a2, struct tagRECT *a3, unsigned int *a4)
{
  unsigned int v6; // r8d
  LONG v9; // r14d
  char v10; // di
  char v11; // bl
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rcx
  unsigned int v18; // edi
  int v19; // r8d
  int v20; // edx
  char v21; // r11
  unsigned int v22; // eax
  __int64 v23; // rdx
  bool v24; // zf
  bool v25; // r10
  int v26; // eax
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  LONG x; // ebx
  LONG right; // ecx
  __m128i v31; // xmm0
  struct tagRECT v32; // xmm1
  struct tagPOINT v33; // rax
  int v34; // r8d
  int v35; // edx
  int RestoreAroundCursorOffset; // eax
  LONG top; // r8d
  int v38; // ecx
  int v39; // eax
  LONG left; // ecx
  __int64 v41; // rdx
  int v42; // ebx
  int v43; // r14d
  __int64 v44; // rcx
  char v45; // al
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  __int64 v49; // rcx
  char v50; // al
  LONG bottom; // edi
  LONG v52; // r14d
  LONG v53; // ebx
  LONG v54; // esi
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  __int64 v58; // rdx
  int v59; // r8d
  __int64 v60; // rcx
  char v61; // al
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  __int64 v65; // rcx
  int v66; // eax
  char v67; // r14
  bool v68; // bl
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx
  int v72; // eax
  char v73; // r8
  __int64 v74; // rdx
  char v75; // bl
  bool v76; // di
  __int64 v77; // rax
  int v78; // r8d
  int v79; // edx
  __int16 v80; // [rsp+30h] [rbp-D0h]
  char v81; // [rsp+80h] [rbp-80h]
  char v82; // [rsp+80h] [rbp-80h]
  char v83; // [rsp+80h] [rbp-80h]
  bool v84; // [rsp+81h] [rbp-7Fh]
  bool v85; // [rsp+81h] [rbp-7Fh]
  bool v86; // [rsp+81h] [rbp-7Fh]
  int v87; // [rsp+84h] [rbp-7Ch] BYREF
  bool v88; // [rsp+88h] [rbp-78h]
  bool v89; // [rsp+89h] [rbp-77h]
  int v90; // [rsp+8Ch] [rbp-74h]
  int v91; // [rsp+90h] [rbp-70h]
  struct tagPOINT v92; // [rsp+98h] [rbp-68h] BYREF
  struct tagRECT *v93; // [rsp+A0h] [rbp-60h]
  struct tagPOINT v94; // [rsp+A8h] [rbp-58h]
  int v95; // [rsp+B0h] [rbp-50h]
  int v96; // [rsp+B4h] [rbp-4Ch]
  __int64 v97; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v98; // [rsp+C0h] [rbp-40h]
  __int64 v99; // [rsp+C8h] [rbp-38h]
  unsigned int *v100; // [rsp+D0h] [rbp-30h]
  struct tagRECT v101; // [rsp+D8h] [rbp-28h]
  __int64 *v102[3]; // [rsp+E8h] [rbp-18h] BYREF
  int v103; // [rsp+100h] [rbp+0h]
  char v104; // [rsp+104h] [rbp+4h]
  __int128 v105; // [rsp+108h] [rbp+8h]

  v93 = a3;
  *a4 = 534;
  v6 = *((_DWORD *)this + 50);
  v100 = a4;
  v94 = a2;
  if ( (v6 & 0x200) == 0 )
    return MoveDragRect(this, a2, 0, a3);
  v9 = v94.y - *((_DWORD *)this + 43);
  v92.x = a2.x - *((_DWORD *)this + 42);
  v92.y = v9;
  if ( __PAIR64__(v9, v92.x) == *(_QWORD *)((char *)this + 252) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v10 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v11 = 0;
    }
    if ( !v10 && !v11 )
      return 0;
    v14 = *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(
                        *(_QWORD *)&WPP_GLOBAL_Control,
                        a2)
                    + 69160);
    v80 = 45;
LABEL_14:
    LOBYTE(v13) = v11;
    LOBYTE(v12) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v13,
      v14,
      5,
      1,
      v80,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
    return 0;
  }
  v15 = *(_QWORD *)((char *)this + 260);
  *(struct tagPOINT *)((char *)this + 252) = v92;
  v16 = *((_DWORD *)this + 44);
  v97 = 0LL;
  v87 = 0;
  HitTargetAndMonitorFromPoint(v16, v15, (v6 >> 11) & 7, &v97, &v87);
  v18 = v87;
  v91 = v87;
  if ( v87 == 3 )
  {
    v87 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3747);
  }
  v19 = *((_DWORD *)this + 62);
  v87 = v19;
  if ( v19 == 3 )
  {
    v87 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3748);
    v19 = *((_DWORD *)this + 62);
    v87 = v19;
  }
  v20 = *((_DWORD *)this + 50);
  v21 = 0x80;
  if ( (v20 & 0x80u) != 0 )
  {
    v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    if ( (*(_BYTE *)(v17 + 31) & 1) != 0 )
    {
      if ( v18 )
        v18 = 4;
      v91 = v18;
    }
  }
  LOBYTE(v17) = v18 != v19;
  v88 = v18 != v19;
  v22 = v20 & 0xF7FFFFFF ^ (v20 | ((v18 != v19) << 27)) & 0x8000000;
  v23 = v97;
  v24 = v97 == *((_QWORD *)this + 30);
  *((_DWORD *)this + 50) = v22;
  v89 = !v24;
  v25 = (v22 & 0x80) != 0 && (v18 == 4 || v18 != v19 && (v22 & 0x10000000) == 0 && (v22 & 0x20) != 0);
  *((_DWORD *)this + 62) = v18;
  *((_QWORD *)this + 30) = v23;
  if ( v18 != v19 || !v24 )
  {
    UpdateDragThresholdForMove(this, v18, v19);
    v19 = v87;
  }
  v26 = *((_DWORD *)this + 50);
  if ( v25 )
  {
    *((_DWORD *)this + 50) = v26 & 0xFFFFFF7F;
    UserSessionState = W32GetUserSessionState(v17, v23);
    Prop = GetProp(*((_QWORD *)this + 2), *(unsigned __int16 *)(UserSessionState + 41334), 1u);
    x = v92.x;
    right = a3->right;
    v31 = _mm_loadl_epi64((const __m128i *)(Prop + 28));
    v32 = *(struct tagRECT *)(Prop + 20);
    v33 = *(struct tagPOINT *)(Prop + 20);
    v98 = v31.m128i_i64[0];
    v94 = v33;
    v34 = _mm_cvtsi128_si32(v31) - v33.x;
    v33.x = a3->left;
    v35 = v92.x - a3->left;
    v96 = v34;
    v101 = v32;
    RestoreAroundCursorOffset = GetRestoreAroundCursorOffset(right - v33.x, v35, v34);
    top = a3->top;
    v90 = RestoreAroundCursorOffset;
    v38 = a3->bottom - top;
    v99 = (unsigned int)(HIDWORD(v98) - v94.y);
    v39 = GetRestoreAroundCursorOffset(v38, v9 - top, HIDWORD(v98) - v94.y);
    *a3 = v32;
    left = a3->left;
    v41 = (unsigned int)a3->top;
    v42 = x - a3->left - v90;
    v43 = v9 - v39 - v41;
    a3->right += v42;
    a3->bottom += v43;
    v95 = v39;
    a3->left = v42 + left;
    a3->top = v43 + v41;
    v44 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v45 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v45 = 0;
    }
    v81 = v45;
    v84 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v45 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v44) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v46 = W32GetUserSessionState(v44, v41);
      LOBYTE(v47) = v84;
      LOBYTE(v48) = v81;
      WPP_RECORDER_AND_TRACE_SF_dddddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v48,
        v47,
        *(_QWORD *)(v46 + 69160),
        4,
        1,
        46,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        v94.x,
        v101.top,
        v98,
        v101.bottom,
        v96,
        v99,
        v90,
        v95);
    }
    v49 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v50 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v50 = 0;
    }
    v82 = v50;
    v85 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v50 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      bottom = v93->bottom;
      v52 = v93->top;
      v53 = v93->right;
      v54 = v93->left;
      LOBYTE(v49) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v55 = W32GetUserSessionState(v49, v41);
      LOBYTE(v56) = v85;
      LOBYTE(v57) = v82;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v57,
        v56,
        *(_QWORD *)(v55 + 69160),
        4,
        1,
        47,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        v54,
        v52,
        v53,
        bottom,
        v53 - v54,
        bottom - v52);
      v18 = v91;
    }
    if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    {
      v66 = *((_DWORD *)this + 50);
      if ( (v66 & 0x20) != 0 )
        *((_DWORD *)this + 50) = v66 | 0x40000000;
      MOVESIZEDATA::RecomputeMouseOffset(this, v93, &v92);
    }
    else
    {
      v58 = *((unsigned int *)this + 50);
      v59 = *((_DWORD *)this + 50) & 0x20;
      if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 384LL) & 0x10) != 0 )
      {
        if ( v59 )
          *((_DWORD *)this + 50) = v58 | 0x40000000;
        MOVESIZEDATA::RecomputeMouseOffsetOld(this, v93);
      }
      else if ( v59 )
      {
        v60 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v61 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v61 = 0;
        }
        v83 = v61;
        v86 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v61 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v60) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v62 = W32GetUserSessionState(v60, v58);
          LOBYTE(v63) = v86;
          LOBYTE(v64) = v83;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v64,
            v63,
            *(_QWORD *)(v62 + 69160),
            4,
            1,
            48,
            (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
        }
        v102[1] = (__int64 *)&v93->left;
        v102[0] = 0LL;
        v102[2] = 0LL;
        *v100 = 532;
        v65 = *((_QWORD *)this + 2);
        v103 = 0;
        v104 = 0;
        v105 = 0LL;
        xxxMinMaximizeEx(v65, 9u, 12, v102);
      }
    }
    if ( (*((_DWORD *)this + 50) & 0x40000) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v67 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v67 = 0;
      }
      v68 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v67 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v69 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v58);
        LOBYTE(v70) = v68;
        LOBYTE(v71) = v67;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v71,
          v70,
          *(_QWORD *)(v69 + 69160),
          4,
          1,
          51,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
      }
      *((_DWORD *)this + 50) &= 0xFFFBFDFF;
    }
  }
  else
  {
    if ( (v26 & 0x8000000) == 0 && ((unsigned __int8)v26 & (unsigned __int8)v21) != 0 && (v26 & 0x10000000) == 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v10 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v11 = 0;
      }
      if ( !v10 && !v11 )
        return 0;
      v14 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23) + 69160);
      v80 = 49;
      goto LABEL_14;
    }
    v73 = 0;
    if ( !v18 && !v19 && (v26 & 0x10000000) != 0 )
    {
      v72 = *((_DWORD *)this + 50) & 0x3800;
      if ( v72 == 0x2000 || v72 == 10240 )
        v73 = 1;
    }
    if ( !MoveDragRect(this, a2, v73, a3) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v75 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
      {
        v75 = 0;
      }
      v76 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v75 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v77 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v74);
        LOBYTE(v78) = v76;
        LOBYTE(v79) = v75;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v79,
          v78,
          *(_QWORD *)(v77 + 69160),
          3,
          1,
          50,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
      }
      return 0;
    }
  }
  if ( v88
    || v89
    || MOVESIZEDATA::SHData_NeedsArrangementCallout((__int64)this, v18, (unsigned __int64 *)((char *)this + 260)) )
  {
    xxxUpdateArrangeDataForMove((__int64)this, v97, v18, v87);
  }
  return 1;
}
