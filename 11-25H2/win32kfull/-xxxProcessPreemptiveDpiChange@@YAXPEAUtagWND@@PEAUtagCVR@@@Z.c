/*
 * XREFs of ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x140233760
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x140064088 (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x1400654C0 (xxxNotifyMonitorChanged.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddq @ 0x1402722A4 (WPP_RECORDER_AND_TRACE_SF_ddddq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddds @ 0x1402723E0 (WPP_RECORDER_AND_TRACE_SF_qddddddds.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxProcessPreemptiveDpiChange(struct tagWND *a1, struct tagCVR *a2)
{
  struct tagWND *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r9
  __int16 v6; // r10
  unsigned int v7; // r11d
  char v8; // al
  char v9; // si
  LONG v10; // r14d
  LONG v11; // r15d
  LONG v12; // eax
  __int64 v13; // rdx
  struct tagMONITOR *v14; // rbx
  bool v15; // r14
  __int64 v16; // rbx
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rdx
  bool v21; // r14
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rdx
  __int16 WindowDpiLastNotify; // ax
  __int64 v27; // rdx
  __int16 v28; // r8
  char v29; // bl
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rcx
  bool v34; // al
  __int64 v35; // rax
  LONG right; // r8d
  LONG v37; // edx
  __int64 v38; // rdx
  bool v39; // r14
  __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  __int64 v45; // rdx
  unsigned __int64 v46; // xmm0_8
  bool v47; // bl
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  bool v51; // bl
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  bool v55; // di
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  bool v59; // [rsp+90h] [rbp-29h]
  bool v60; // [rsp+91h] [rbp-28h]
  LONG top; // [rsp+94h] [rbp-25h]
  char v63; // [rsp+A0h] [rbp-19h]
  struct tagRECT v64; // [rsp+A8h] [rbp-11h] BYREF
  __m128i v65; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v66; // [rsp+C8h] [rbp+Fh]

  v3 = a1;
  if ( (*((_DWORD *)a2 + 8) & 0x80000) == 0 )
    return;
  if ( (*((_DWORD *)a2 + 39) & 0x20) == 0 )
    return;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
    return;
  if ( (*((_DWORD *)a1 + 95) & 0x100000) == 0 )
    return;
  if ( !IsTopLevelWindow((__int64)a1) )
    return;
  v8 = *(_BYTE *)(v5 + 31);
  v9 = 1;
  if ( (v8 & 1) != 0 || (v8 & 0x20) != 0 )
    return;
  v10 = *((_DWORD *)a2 + 4);
  v11 = *((_DWORD *)a2 + 5);
  v64.right = v10 + *((_DWORD *)a2 + 6);
  v12 = v11 + *((_DWORD *)a2 + 7);
  v64.left = v10;
  top = v11;
  v64.top = v11;
  v64.bottom = v12;
  if ( (v6 & 0x200) != 0 )
  {
    v65.m128i_i64[0] = ValidateHmonitorNoRip(*((_QWORD *)a2 + 16), v4);
    v14 = (struct tagMONITOR *)v65.m128i_i64[0];
    if ( !v65.m128i_i64[0] )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v9 = 0;
      }
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = *(_QWORD *)v3;
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v18) = v15;
        LOBYTE(v19) = v9;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v19,
          v18,
          *(_QWORD *)(UserSessionState + 69160),
          3,
          4,
          10,
          (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
          v16);
      }
      return;
    }
    goto LABEL_26;
  }
  v65.m128i_i64[0] = MonitorFromRect(&v64.left, 0, v7);
  v14 = (struct tagMONITOR *)v65.m128i_i64[0];
  if ( v65.m128i_i64[0] )
  {
    top = v64.top;
LABEL_26:
    v25 = *((_QWORD *)v3 + 5);
    if ( *(_QWORD *)(v25 + 256) != *(_QWORD *)v14 || *(_WORD *)(v25 + 286) )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v3);
      if ( v28 != WindowDpiLastNotify
        || *(_QWORD *)(v27 + 88) == *(_QWORD *)&v64.left && *(_QWORD *)(v27 + 96) == *(_QWORD *)&v64.right )
      {
        v33 = *(_QWORD *)&WPP_GLOBAL_Control;
        v34 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v59 = v34;
        v60 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v33) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v35 = W32GetUserSessionState(v33, v27);
          right = v64.right;
          v37 = top;
          LOBYTE(right) = v60;
          LOBYTE(v37) = v59;
          WPP_RECORDER_AND_TRACE_SF_qddddddds(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v37,
            right,
            *(_QWORD *)(v35 + 69160));
          v3 = a1;
          v14 = (struct tagMONITOR *)v65.m128i_i64[0];
        }
        v65.m128i_i64[0] = 0LL;
        if ( (unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND **)v3, v14, &v65, 0) )
        {
          v66 = *(_OWORD *)(*((_QWORD *)v3 + 5) + 88LL);
          xxxNotifyMonitorChanged(v3, &v64, (struct tagBWL *)v65.m128i_i64[0], 0);
          v65 = *(__m128i *)(*((_QWORD *)v3 + 5) + 88LL);
          v63 = v65.m128i_i8[0];
          v46 = _mm_srli_si128(v65, 8).m128i_u64[0];
          if ( v65.m128i_i64[0] == *(_QWORD *)&v64.left && v46 == *(_QWORD *)&v64.right )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v9 = 0;
            }
            v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
              LOBYTE(v49) = v47;
              LOBYTE(v50) = v9;
              WPP_RECORDER_AND_TRACE_SF_(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v50,
                v49,
                *(_QWORD *)(v48 + 69160),
                4,
                4,
                15,
                (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids);
            }
            *((_DWORD *)a2 + 8) |= 0x403u;
          }
          else if ( __PAIR128__(v46, v65.m128i_u64[0]) == v66 )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v9 = 0;
            }
            v51 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v52 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
              LOBYTE(v53) = v51;
              LOBYTE(v54) = v9;
              WPP_RECORDER_AND_TRACE_SF_(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v54,
                v53,
                *(_QWORD *)(v52 + 69160),
                4,
                4,
                16,
                (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids);
            }
          }
          else
          {
            *((_DWORD *)a2 + 8) |= 0x403u;
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
            {
              v9 = 0;
            }
            v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v56 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
              LOBYTE(v57) = v55;
              LOBYTE(v58) = v9;
              WPP_RECORDER_AND_TRACE_SF_dddd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v58,
                v57,
                *(_QWORD *)(v56 + 69160),
                3,
                4,
                17,
                (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
                v63,
                v65.m128i_i8[4],
                v46,
                v65.m128i_i8[12]);
            }
          }
        }
        else
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
          {
            v9 = 0;
          }
          v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v40 = *(_QWORD *)v14;
            v41 = *(_QWORD *)v3;
            v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v38);
            LOBYTE(v43) = v39;
            LOBYTE(v44) = v9;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v44,
              v43,
              *(_QWORD *)(v42 + 69160),
              2,
              4,
              14,
              (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
              v41,
              v40);
          }
        }
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v29 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v9 = 0;
        }
        if ( v29 || v9 )
        {
          v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v27);
          LOBYTE(v31) = v9;
          LOBYTE(v32) = v29;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v32,
            v31,
            *(_QWORD *)(v30 + 69160),
            5,
            4,
            12,
            (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids);
        }
      }
    }
    return;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
  {
    v9 = 0;
  }
  v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
    LOBYTE(v23) = v21;
    LOBYTE(v24) = v9;
    WPP_RECORDER_AND_TRACE_SF_ddddq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v24,
      v23,
      *(_QWORD *)(v22 + 69160));
  }
}
