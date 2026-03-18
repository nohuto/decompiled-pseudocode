/*
 * XREFs of ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x1402CF388
 * Callers:
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1401F16E4 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?MaxStateFromAwpState@@YA?AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z @ 0x1402CB784 (-MaxStateFromAwpState@@YA-AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z.c)
 *     ?SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z @ 0x1402CC850 (-SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402CCBD0 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptApplyWindowPos(
        WindowActions *this,
        const struct tagRECT *a2,
        const struct AdvancedWindowPos::WINDOWPOSANDSTATE *a3)
{
  char v5; // r14
  char v6; // di
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  int right; // ecx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rdx
  char v15; // r14
  char v16; // di
  const wchar_t *v17; // rbx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  LONG bottom; // eax
  char v22; // di
  char v23; // bl
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rax
  char v28; // di
  char v29; // bl
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  int *v33; // rcx
  int v34; // ecx
  LONG top; // edx
  LONG v36; // eax
  int v37; // eax
  char v38; // r15
  char v39; // r14
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  char v43; // di
  char v44; // bl
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  LONG v48; // eax
  struct tagRECT v49; // xmm0
  char v50; // r15
  char v51; // r14
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  INT *p_left; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  char v58; // di
  char v59; // bl
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  const struct tagMONITOR *v63; // rax
  int v64; // [rsp+70h] [rbp-49h] BYREF
  int v65; // [rsp+74h] [rbp-45h] BYREF
  int v66; // [rsp+7Ch] [rbp-3Dh]
  LONG v67; // [rsp+80h] [rbp-39h]
  int v68; // [rsp+84h] [rbp-35h]
  int v69; // [rsp+88h] [rbp-31h]
  __int64 v70; // [rsp+90h] [rbp-29h]
  int v71; // [rsp+98h] [rbp-21h]
  struct tagRECT v72; // [rsp+9Ch] [rbp-1Dh] BYREF
  int v73; // [rsp+BCh] [rbp+3h]

  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v5 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v6 = 0;
  }
  if ( v5 || v6 )
  {
    v7 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      4,
      54,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v7);
  }
  memset_0(&v65, 0, 0x5CuLL);
  right = a2->right;
  v64 = 32;
  v13 = MaxStateFromAwpState(right);
  v71 = v13;
  v14 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v12 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v12 & 8) == 0)
    || (v15 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v15 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v16 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v16 = 0;
  }
  if ( v15 || v16 )
  {
    if ( v13 == 1 )
    {
      v17 = L"WPS_MAXIMIZED";
    }
    else
    {
      v17 = L"WPS_MINIMIZED";
      if ( v13 != 2 )
        v17 = L"WPS_NORMAL";
    }
    v18 = W32GetUserSessionState(v12, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v19) = v16;
    LOBYTE(v20) = v15;
    WPP_RECORDER_AND_TRACE_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v20,
      v19,
      *(_QWORD *)(v18 + 69160),
      5,
      4,
      55,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      (__int64)v17);
    v13 = v71;
  }
  bottom = a2->bottom;
  if ( (bottom & 1) != 0 )
  {
    if ( (bottom & 2) == 0 )
    {
      v27 = *(_QWORD *)&a2->left;
      v64 |= 8u;
      v70 = v27;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v28 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v29 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v29 = 0;
      }
      if ( v28 || v29 )
      {
        v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
        LOBYTE(v31) = v29;
        LOBYTE(v32) = v28;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v32,
          v31,
          *(_QWORD *)(v30 + 69160),
          5,
          4,
          57,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
          v70);
        goto LABEL_47;
      }
    }
  }
  else
  {
    v64 |= 0x10u;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v22 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v23 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v23 = 0;
    }
    if ( v22 || v23 )
    {
      v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v26,
        v25,
        *(_QWORD *)(v24 + 69160),
        5,
        4,
        56,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
LABEL_47:
      v13 = v71;
    }
  }
  if ( v13 )
  {
    v48 = a2->bottom;
    if ( (v48 & 8) != 0 )
    {
      v49 = a2[1];
      v64 |= 0x40u;
      v72 = v49;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v50 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v50 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v51 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v51 = 0;
      }
      if ( v50 || v51 )
      {
        v52 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
        LOBYTE(v53) = v51;
        LOBYTE(v54) = v50;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v54,
          v53,
          *(_QWORD *)(v52 + 69160),
          5,
          4,
          60,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
          v72.left,
          v72.top,
          v72.right,
          v72.bottom,
          LOBYTE(v72.right) - LOBYTE(v72.left),
          LOBYTE(v72.bottom) - LOBYTE(v72.top));
      }
    }
    else if ( (v48 & 4) != 0 )
    {
      v63 = (const struct tagMONITOR *)MonitorFromRect(&a2[1].left, 2u, 0x12u);
      SetMonitorMovePoint((struct _WINDOW_ACTION *)&v64, v63);
    }
  }
  else if ( !IsRectEmptyInl(a2 + 1) )
  {
    v34 = *v33;
    top = a2[1].top;
    v36 = a2[1].right;
    v64 |= 6u;
    v68 = v36 - v34;
    v37 = a2[1].bottom - top;
    v66 = v34;
    v69 = v37;
    v67 = top;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v38 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v38 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v39 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v39 = 0;
    }
    if ( v38 || v39 )
    {
      v40 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v41) = v39;
      LOBYTE(v42) = v38;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v42,
        v41,
        *(_QWORD *)(v40 + 69160),
        5,
        4,
        58,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
        v66,
        v67,
        v68 + v66,
        v69 + v67,
        v68,
        v69);
    }
    if ( (a2->bottom & 0x100) == 0 )
    {
      v65 |= 1u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v43 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v43 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v44 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v44 = 0;
      }
      if ( v43 || v44 )
      {
        v45 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        LOBYTE(v46) = v44;
        LOBYTE(v47) = v43;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v47,
          v46,
          *(_QWORD *)(v45 + 69160),
          5,
          4,
          59,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
      }
    }
  }
  if ( (v64 & 0x42) != 0 )
  {
    p_left = &a2[1].left;
    if ( (v64 & 2) == 0 )
      p_left = (INT *)&v72;
    v56 = MonitorFromRect(p_left, 0, 0x12u);
    if ( v56 )
    {
      v65 |= 0x200u;
      v73 = *(unsigned __int16 *)(*(_QWORD *)(v56 + 40) + 60LL);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v58 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v58 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v59 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v59 = 0;
      }
      if ( v58 || v59 )
      {
        v60 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v57);
        LOBYTE(v61) = v59;
        LOBYTE(v62) = v58;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v62,
          v61,
          *(_QWORD *)(v60 + 69160),
          5,
          4,
          61,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
          v73);
      }
    }
  }
  if ( (a2->bottom & 0x10) != 0 )
  {
    if ( !SaveShellRequestedOperationData(this, (__int128 *)&a2[1].left, a2->right, a2[2].left) )
      return;
    v64 |= 0x400u;
  }
  xxxSendTransformableMessageTimeout(
    (struct tagTHREADINFO **)this,
    838LL,
    0LL,
    (struct tagDRAWITEMSTRUCT *)&v64,
    0,
    0,
    0LL,
    1,
    1);
}
