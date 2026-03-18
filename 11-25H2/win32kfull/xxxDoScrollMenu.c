/*
 * XREFs of xxxDoScrollMenu @ 0x1402E8138
 * Callers:
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14003D91C (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     GetAppCompatFlags @ 0x1401BCA50 (GetAppCompatFlags.c)
 *     CalcSBStuff @ 0x14025FAB8 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x14026006C (GetWndSBDisableFlags.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402E35E8 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402E378C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dqq @ 0x1402E4FFC (WPP_RECORDER_AND_TRACE_SF_Dqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqldd @ 0x1402E6F5C (WPP_RECORDER_AND_TRACE_SF_qqldd.c)
 *     xxxSBTrackInit @ 0x1402E8980 (xxxSBTrackInit.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

_QWORD *__fastcall xxxDoScrollMenu(struct tagWND *a1, __int64 a2, unsigned int a3, ULONG_PTR a4)
{
  int v5; // edi
  __int64 v7; // rdx
  char v8; // r14
  bool v9; // r13
  __int64 UserSessionState; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rdx
  bool v14; // di
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // di
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  struct tagMENU *ScrollMenu; // rax
  __int64 v24; // rdx
  int v25; // ebx
  __int64 v26; // rdx
  bool v28; // [rsp+70h] [rbp-59h]
  __int64 v29[2]; // [rsp+78h] [rbp-51h] BYREF
  __int64 v30; // [rsp+88h] [rbp-41h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v32[64]; // [rsp+A0h] [rbp-29h] BYREF

  BugCheckParameter3[0] = a4;
  v5 = a4;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v29, a2);
  memset_0(v32, 0, sizeof(v32));
  v8 = 1;
  v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v28;
    WPP_RECORDER_AND_TRACE_SF_qqldd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v12,
      *(_QWORD *)(UserSessionState + 69160));
    v5 = BugCheckParameter3[0];
  }
  if ( (int)GetAppCompatFlags(0LL, v7) >= 0 )
  {
    CalcSBStuff((__int64)a1, (__int64)v32, a3);
    if ( (GetWndSBDisableFlags((__int64 *)a1, a3) & 3) == 3 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v8 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v19 = *(_QWORD *)a1;
        v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v21) = v18;
        LOBYTE(v22) = v8;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v22,
          v21,
          *(_QWORD *)(v20 + 69160),
          3,
          9,
          67,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v19,
          0);
      }
    }
    else
    {
      ScrollMenu = xxxGetScrollMenu(a1, a3);
      v30 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v29, (__int64)ScrollMenu);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v29) )
      {
        v24 = v30;
        if ( !v30 )
          v24 = *(_QWORD *)v29[0];
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v24);
        v25 = xxxTrackPopupMenuEx((__int64)v29, 386LL, (__int16)v5, SHIWORD(v5), (__int64)a1, 0LL);
        Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3, v26);
        if ( v25 )
        {
          if ( (unsigned __int8)v25 == 4 )
          {
            xxxSBTrackInit(a1);
          }
          else
          {
            xxxDoScroll(0LL, (struct tagTHREADINFO **)a1, (unsigned __int8)v25, 0, a3);
            xxxDoScroll(0LL, (struct tagTHREADINFO **)a1, 8u, 0, a3);
          }
        }
      }
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v8 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v8;
      WPP_RECORDER_AND_TRACE_SF_Dqq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v17,
        v16,
        *(_QWORD *)(v15 + 69160));
    }
  }
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v29, v13);
}
