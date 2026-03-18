/*
 * XREFs of ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     InternalBeginDeferWindowPos @ 0x14004E1DC (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x14004EA98 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     PWInsertAfter @ 0x140064E98 (PWInsertAfter.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     _MonitorFromPoint @ 0x140091A70 (_MonitorFromPoint.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x1401894A8 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401B3FF8 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x14021E738 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x14026B5C0 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline @ 0x140272100 (Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1DwmNotifyMoveReason@@QEAA@XZ @ 0x1402A68D8 (--1DwmNotifyMoveReason@@QEAA@XZ.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D4CF4 (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxUpdatePosAndStateForAction(
        ULONG_PTR a1,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        ULONG_PTR a7,
        char a8,
        struct tagRECT *a9,
        __int64 a10)
{
  __int64 v12; // r13
  char v13; // bl
  int v14; // eax
  int v15; // esi
  struct tagWND *v16; // rdx
  __int64 v17; // rdx
  int v18; // edi
  char v19; // r14
  char v20; // si
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  bool v25; // cl
  struct tagRECT *v26; // r12
  bool v27; // al
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  _OWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  char v38; // si
  char v39; // di
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  bool v43; // di
  __int64 v44; // rax
  int v45; // edx
  int v46; // r8d
  char v47; // r12
  char v48; // si
  __int64 v49; // rax
  int v50; // edx
  int v51; // r8d
  __int64 *v52; // rsi
  __int64 v53; // rax
  char v54; // r12
  char v55; // si
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  unsigned int v59; // r8d
  INT *p_left; // rcx
  __int64 v61; // rdx
  int v62; // eax
  __int16 v63; // [rsp+30h] [rbp-A9h]
  __int16 v64; // [rsp+30h] [rbp-A9h]
  int v65; // [rsp+50h] [rbp-89h]
  unsigned int v66; // [rsp+50h] [rbp-89h]
  struct tagRECT v68; // [rsp+58h] [rbp-81h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-71h] BYREF
  int v70; // [rsp+78h] [rbp-61h]
  ULONG_PTR v71; // [rsp+80h] [rbp-59h] BYREF
  __int16 v72; // [rsp+88h] [rbp-51h]
  ULONG_PTR v73[2]; // [rsp+90h] [rbp-49h] BYREF
  __int64 *v74; // [rsp+A0h] [rbp-39h] BYREF
  ULONG_PTR v75; // [rsp+A8h] [rbp-31h]
  __int64 v76; // [rsp+B0h] [rbp-29h]
  int v77; // [rsp+B8h] [rbp-21h]
  char v78; // [rsp+BCh] [rbp-1Dh]
  __int128 v79; // [rsp+C0h] [rbp-19h]

  v12 = a1;
  BugCheckParameter3[0] = a7;
  v13 = 1;
  v72 = 0;
  v14 = *(_DWORD *)(a10 + 4);
  v15 = v14 & 0x20000;
  v73[0] = a1;
  v71 = a1;
  v65 = v14 & 0x20000;
  if ( (v14 & 0x1000) != 0 )
  {
    *(_DWORD *)(a1 + 380) |= 0x200u;
    HIBYTE(v72) = 1;
  }
  if ( a3 == 3 )
  {
    if ( (unsigned int)Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v15 )
      {
        *(_DWORD *)(v12 + 380) |= 0x200000u;
        LOBYTE(v72) = 1;
      }
      AdvancedWindowPos::MarkWindowAsArranged((AdvancedWindowPos *)v12, v16);
    }
    else
    {
      UpdateDwmSnapArrangedInitiated((struct tagWND *)v12, (__int64)v16);
    }
    if ( !a2 )
      CHECKPOINT::Restore((struct tagWND *)v12, a9);
  }
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
    || (*(_DWORD *)(a10 + 4) & 1) == 0 )
  {
    v18 = a5;
  }
  else
  {
    v70 = a4 | 0x400000;
    v18 = a5 | 0x100;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v19 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v19 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v20 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v20 = 0;
    }
    if ( v19 || v20 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v17);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v23,
        v22,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        4,
        87,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
    v15 = v65;
    a4 = v70;
  }
  v24 = a3;
  v25 = a3 != a2 && (a3 != 3 || a2);
  v26 = (struct tagRECT *)BugCheckParameter3[0];
  v27 = a3 == 1 && (BugCheckParameter3[0] || a8);
  if ( v25 || v27 )
  {
    if ( !v15 )
      v18 |= 0x10000u;
    v76 = *(_QWORD *)(a10 + 32);
    v75 = 0LL;
    v77 = 0;
    v78 = 0;
    v79 = 0LL;
    if ( BugCheckParameter3[0] )
    {
      v75 = BugCheckParameter3[0];
      if ( a3 == 3 )
      {
        v18 |= 8u;
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
          v18 |= 0x800000u;
        goto LABEL_80;
      }
      v18 |= 0x200000u;
    }
    else if ( a8 )
    {
      if ( !a3 )
      {
        v18 |= 8u;
        v75 = (ULONG_PTR)a9;
        goto LABEL_80;
      }
LABEL_96:
      if ( a3 != 3 )
      {
        if ( a3 == 1 )
        {
          v66 = 3;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v54 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v54 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v55 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v55 = 0;
          }
          if ( v54 || v55 )
          {
            v56 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a3);
            LOBYTE(v57) = v55;
            LOBYTE(v58) = v54;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v58,
              v57,
              *(_QWORD *)(v56 + 69160),
              5,
              4,
              89,
              (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
          }
          v18 |= 2u;
        }
        else
        {
          v66 = 6;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v47 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v48 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v48 = 0;
          }
          if ( v47 || v48 )
          {
            v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a3);
            v64 = 90;
            goto LABEL_90;
          }
        }
LABEL_91:
        v73[0] = -1LL;
        v52 = 0LL;
        v73[1] = 0LL;
        if ( a3 != 2 )
        {
          if ( (*(_DWORD *)a10 & 0x100) != 0 )
          {
            v53 = MonitorFromPoint(*(_QWORD *)(a10 + 100), 2u, 0x12u);
          }
          else
          {
            if ( BugCheckParameter3[0] )
            {
              v59 = 18;
              p_left = (INT *)BugCheckParameter3[0];
            }
            else
            {
              if ( a3 != 1 || !a8 )
                goto LABEL_129;
              p_left = &a9->left;
              v59 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL);
            }
            v53 = MonitorFromRect(p_left, 2u, v59);
          }
          v52 = (__int64 *)v53;
        }
LABEL_129:
        if ( (*(_DWORD *)(a10 + 4) & 0x200) != 0 )
        {
          v52 = (__int64 *)MonitorFromPoint(*(_QWORD *)(a10 + 100), 2u, 0x12u);
          if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
            v18 |= 0x80u;
        }
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() && v52 )
          v18 |= 0x80u;
        Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v73, (__int64)v52);
        v74 = v52;
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
          v77 = *(_DWORD *)(a10 + 132);
        xxxMinMaximizeEx(v12, v66, v18, &v74);
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() && v78 )
        {
          *(_DWORD *)a10 |= 0x400u;
          v62 = v77;
          *(_DWORD *)(a10 + 108) |= 2u;
          *(_DWORD *)(a10 + 132) = v62;
        }
        Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(v73, v61);
        goto LABEL_141;
      }
LABEL_80:
      v66 = 9;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v47 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v48 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v48 = 0;
      }
      if ( v47 || v48 )
      {
        v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
        v64 = 88;
LABEL_90:
        LOBYTE(v51) = v48;
        LOBYTE(v50) = v47;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v50,
          v51,
          *(_QWORD *)(v49 + 69160),
          5,
          4,
          v64,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
        goto LABEL_91;
      }
      goto LABEL_91;
    }
    if ( !a3 )
      goto LABEL_80;
    goto LABEL_96;
  }
  v28 = PWInsertAfter(*(_QWORD *)(a10 + 32), a3);
  v30 = v28;
  BugCheckParameter3[0] = -1LL;
  BugCheckParameter3[1] = 0LL;
  if ( (unsigned __int64)(v28 - 2) <= 0xFFFFFFFFFFFFFFFBuLL )
    Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(BugCheckParameter3, v28);
  v68 = *a9;
  if ( v26 )
    v68 = *v26;
  v31 = InternalBeginDeferWindowPos(1LL, v29);
  if ( !v31
    || (v33 = _DeferWindowPos(
                (__int64)v31,
                v12,
                v30,
                v68.left,
                v68.top,
                v68.right - v68.left,
                v68.bottom - v68.top,
                a4,
                0),
        (v34 = v33) == 0) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v13 = 0;
    }
    v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v13 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_73;
    v44 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v32);
    v63 = 93;
    goto LABEL_72;
  }
  *(_DWORD *)(*(_QWORD *)(v33 + 40) + 156LL) = *(_DWORD *)(*(_QWORD *)(v33 + 40) + 156LL) & 0xFFFFFBFF | (a6 << 10);
  if ( (*(_DWORD *)(a10 + 4) & 0x200) != 0 )
  {
    v35 = MonitorFromPoint(*(_QWORD *)(a10 + 100), 2u, 0x12u);
    v37 = 0LL;
    if ( v35 )
      v37 = *(_QWORD *)MonitorFromPoint(*(_QWORD *)(a10 + 100), 2u, 0x12u);
    *(_QWORD *)(*(_QWORD *)(v34 + 40) + 128LL) = v37;
    *(_DWORD *)(*(_QWORD *)(v34 + 40) + 156LL) |= 0x200u;
    *(_DWORD *)(*(_QWORD *)(v34 + 40) + 32LL) |= 0x80000u;
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
      v40 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v36);
      LOBYTE(v41) = v39;
      LOBYTE(v42) = v38;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v42,
        v41,
        *(_QWORD *)(v40 + 69160),
        5,
        4,
        91,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
  }
  if ( !(unsigned int)xxxEndDeferWindowPosEx((struct tagSMWP *)v34, 0LL) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v13 = 0;
    }
    v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v13 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_73;
    v44 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v32);
    v63 = 92;
LABEL_72:
    LOBYTE(v46) = v43;
    LOBYTE(v45) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v45,
      v46,
      *(_QWORD *)(v44 + 69160),
      2,
      4,
      v63,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
LABEL_73:
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v32);
    goto LABEL_144;
  }
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v32);
  v12 = v73[0];
LABEL_141:
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() && a3 == 3 )
    *(_DWORD *)(v12 + 380) |= 0x4000000u;
LABEL_144:
  DwmNotifyMoveReason::~DwmNotifyMoveReason((DwmNotifyMoveReason *)&v71);
}
