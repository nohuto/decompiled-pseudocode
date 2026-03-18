/*
 * XREFs of ?xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z @ 0x1402D1FC8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     Feature_3444625720__private_IsEnabledDeviceUsageNoInline @ 0x140272058 (Feature_3444625720__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptSetWindowPos(WindowActions *this, struct tagSMWP *a2)
{
  __int64 v2; // r14
  char v3; // si
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdx
  char v9; // di
  struct tagTHREADINFO *v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // di
  char v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  __int64 v22; // rax
  char v23; // di
  char v24; // bl
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  int v28; // eax
  char v29; // di
  char v30; // bl
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  int v34; // eax
  char v35; // di
  char v36; // bl
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  char v40; // di
  char v41; // bl
  __int64 v42; // rax
  int v43; // edx
  int v44; // r8d
  __int64 v45; // rax
  char v46; // di
  char v47; // bl
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  char v51; // di
  int v52; // ebx
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  __int64 v56; // rdx
  int v57; // eax
  __int64 *v58; // rbx
  int v59; // edi
  struct tagTHREADINFO *v60; // rax
  __int64 v61; // rdx
  __int16 v62; // [rsp+38h] [rbp-79h]
  int v63; // [rsp+58h] [rbp-59h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+60h] [rbp-51h] BYREF
  int v65; // [rsp+78h] [rbp-39h] BYREF
  int v66; // [rsp+7Ch] [rbp-35h]
  int v67; // [rsp+80h] [rbp-31h]
  int v68; // [rsp+84h] [rbp-2Dh]
  int v69; // [rsp+88h] [rbp-29h]
  int v70; // [rsp+8Ch] [rbp-25h]
  int v71; // [rsp+90h] [rbp-21h]
  __int64 v72; // [rsp+98h] [rbp-19h]
  int v73; // [rsp+C8h] [rbp+17h]
  int v74; // [rsp+CCh] [rbp+1Bh]

  v2 = *((_QWORD *)this + 5);
  v3 = 0;
  v63 = 0;
  v5 = 0;
  if ( *((int *)this + 7) > 0 )
  {
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      v6 = HMValidateHandleNoSecure(*(_QWORD *)v2, (__int64)a2);
      v7 = v6;
      if ( v6 )
      {
        if ( (*(_DWORD *)(v2 + 32) & 0x1000000) == 0 && (*(_DWORD *)(v6 + 384) & 0x10) != 0 )
          break;
      }
LABEL_112:
      v2 += 168LL;
      if ( ++v63 >= *((_DWORD *)this + 7) )
        goto LABEL_113;
    }
    if ( (unsigned int)Feature_3444625720__private_IsEnabledDeviceUsageNoInline() )
      ++v5;
    *(_QWORD *)v2 = 0LL;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
    {
      v3 = 1;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v9 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v9 = 0;
    }
    if ( v3 || v9 )
    {
      v10 = *(struct tagTHREADINFO **)v7;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
      LOBYTE(v12) = v9;
      LOBYTE(v13) = v3;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        4,
        36,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
        (char)v10);
    }
    memset_0(&v65, 0, 0x60uLL);
    if ( (*(_DWORD *)(v2 + 32) & 0x10) != 0 )
    {
      v3 = 0;
    }
    else
    {
      v65 = 16;
      v15 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
      {
        v3 = 0;
        v16 = 0;
      }
      else
      {
        v16 = 1;
        v3 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v17 = 0;
      }
      if ( v16 || v17 )
      {
        v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v20,
          v19,
          *(_QWORD *)(v18 + 69160),
          5,
          4,
          37,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
      }
    }
    v21 = *(_DWORD *)(v2 + 32);
    if ( (v21 & 4) == 0 )
    {
      v22 = *(_QWORD *)(v2 + 8);
      v65 |= 8u;
      v72 = v22;
      v15 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v23 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v23 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v24 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v24 = 0;
      }
      if ( v23 || v24 )
      {
        v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
        LOBYTE(v26) = v24;
        LOBYTE(v27) = v23;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v27,
          v26,
          *(_QWORD *)(v25 + 69160),
          5,
          4,
          38,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
          v72);
      }
      v21 = *(_DWORD *)(v2 + 32);
      if ( (v21 & 0x200) != 0 )
        v66 |= 0x10u;
    }
    if ( (v21 & 2) == 0 )
    {
      v28 = *(_DWORD *)(v2 + 16);
      v65 |= 2u;
      v68 = v28;
      v69 = *(_DWORD *)(v2 + 20);
      v15 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v29 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v30 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v30 = 0;
      }
      if ( v29 || v30 )
      {
        v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v29;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v33,
          v32,
          *(_QWORD *)(v31 + 69160),
          5,
          4,
          39,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
          v68,
          v69);
      }
    }
    if ( (*(_DWORD *)(v2 + 32) & 1) == 0 )
    {
      v34 = *(_DWORD *)(v2 + 24);
      v65 |= 4u;
      v70 = v34;
      v71 = *(_DWORD *)(v2 + 28);
      v15 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v35 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v35 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v36 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v36 = 0;
      }
      if ( v35 || v36 )
      {
        v37 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v35;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v39,
          v38,
          *(_QWORD *)(v37 + 69160),
          5,
          4,
          40,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
          v70,
          v71);
      }
    }
    a2 = (struct tagSMWP *)*(unsigned int *)(v2 + 32);
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0x10) != 0 )
    {
      if ( (char)a2 >= 0 )
        goto LABEL_89;
      v65 |= 1u;
      v67 = 0;
      v15 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v40 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v41 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v41 = 0;
      }
      if ( !v40 && !v41 )
        goto LABEL_89;
      v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v62 = 42;
    }
    else
    {
      if ( ((unsigned __int8)a2 & 0x40) == 0 )
        goto LABEL_89;
      v65 |= 1u;
      v67 = 1;
      v15 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v40 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v41 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v41 = 0;
      }
      if ( !v40 && !v41 )
        goto LABEL_89;
      v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v62 = 41;
    }
    LOBYTE(v44) = v41;
    LOBYTE(v43) = v40;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v43,
      v44,
      *(_QWORD *)(v42 + 69160),
      5,
      4,
      v62,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
LABEL_89:
    if ( (*(_DWORD *)(v2 + 156) & 0x200) != 0 )
    {
      v45 = ValidateHmonitor(*(_QWORD *)(v2 + 128));
      v66 |= 0x400u;
      a2 = (struct tagSMWP *)*(unsigned int *)(*(_QWORD *)(v45 + 40) + 44LL);
      v73 = *(_DWORD *)(*(_QWORD *)(v45 + 40) + 44LL);
      v74 = *(_DWORD *)(*(_QWORD *)(v45 + 40) + 48LL);
      v15 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v46 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v46 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v47 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v47 = 0;
      }
      if ( v46 || v47 )
      {
        v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v49) = v47;
        LOBYTE(v50) = v46;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v50,
          v49,
          *(_QWORD *)(v48 + 69160),
          5,
          4,
          43,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
          v73,
          v74);
      }
    }
    if ( v65 )
    {
      v60 = PtiCurrent(v15, (__int64)a2);
      Win32HM_LockIntoThread<0>((__int64)v60, v7, BugCheckParameter3);
      xxxSendTransformableMessageTimeout(
        (struct tagTHREADINFO **)v7,
        838LL,
        0LL,
        (struct tagDRAWITEMSTRUCT *)&v65,
        0,
        0,
        0LL,
        1,
        1);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v61);
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
      {
        v3 = 1;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v51 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v51 = 0;
      }
      if ( v3 || v51 )
      {
        v52 = *(_DWORD *)(v2 + 32);
        v53 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v54) = v51;
        LOBYTE(v55) = v3;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v55,
          v54,
          *(_QWORD *)(v53 + 69160),
          5,
          4,
          44,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
          v52);
      }
      v3 = 0;
    }
    goto LABEL_112;
  }
LABEL_113:
  if ( (unsigned int)Feature_3444625720__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v5 > 0 )
    {
      v57 = *((_DWORD *)this + 7);
      if ( v5 < v57 )
      {
        v58 = (__int64 *)*((_QWORD *)this + 5);
        v59 = 0;
        if ( v57 > 0 )
        {
          do
          {
            if ( *v58 )
            {
              LOBYTE(v56) = 1;
              if ( !HMValidateHandleNoSecure(*v58, v56) )
                *v58 = 0LL;
            }
            v58 += 21;
            ++v59;
          }
          while ( v59 < *((_DWORD *)this + 7) );
        }
      }
    }
  }
}
