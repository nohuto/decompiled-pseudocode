/*
 * XREFs of ?zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z @ 0x140286AA0
 * Callers:
 *     NtUserUnhookWindowsHook @ 0x1402A2D40 (NtUserUnhookWindowsHook.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PhkFirstValid @ 0x1400C5E60 (PhkFirstValid.c)
 *     PhkNextValid @ 0x1400C5F24 (PhkNextValid.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C8FCC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C951C (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z @ 0x1400C95C8 (-zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzUnhookWindowsHook(unsigned int a1, __int64 (*a2)(void))
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rbp
  __int64 Valid; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 (*v12)(void); // rax
  __int64 v13; // rdx
  char v14; // di
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v20; // rdx
  char v21; // di
  bool v22; // si
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rdx
  char v27; // di
  bool v28; // bp
  __int64 UserSessionState; // rax
  int v30; // r8d
  int v31; // edx
  _BYTE v32[48]; // [rsp+50h] [rbp-58h] BYREF

  if ( a1 + 1 > 0xF )
  {
    UserSetLastError(1426);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
      || (v27 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
    {
      v27 = 0;
    }
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v30,
        *(_QWORD *)(UserSessionState + 69160),
        3,
        5,
        22,
        (__int64)&WPP_ee71345fc15630358c6b50546088a96d_Traceguids,
        a1);
    }
  }
  else
  {
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>((__int64)v32);
    v6 = PtiCurrent(v5, v4);
    Valid = PhkFirstValid((__int64)v6, a1);
    v10 = 0;
    while ( 1 )
    {
      v11 = Valid;
      if ( !Valid )
        break;
      if ( *(_DWORD *)(Valid + 68) == -1 )
        v12 = *(__int64 (**)(void))(Valid + 56);
      else
        v12 = (__int64 (*)(void))(*(_QWORD *)(Valid + 56)
                                + *(_QWORD *)(*((_QWORD *)PtiCurrent(v9, v8) + 58) + 8LL * *(int *)(Valid + 68) + 392));
      if ( v12 == a2 )
      {
        if ( *(struct tagTHREADINFO **)(v11 + 16) == v6 )
        {
          v10 = zzzUnhookWindowsHookEx((PETHREAD **)v11);
        }
        else
        {
          UserSetLastError(5);
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
            || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
          {
            v14 = 0;
          }
          v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
            LOBYTE(v17) = v15;
            LOBYTE(v18) = v14;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v18,
              v17,
              *(_QWORD *)(v16 + 69160),
              3,
              5,
              23,
              (__int64)&WPP_ee71345fc15630358c6b50546088a96d_Traceguids);
          }
        }
        DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v32);
        return v10;
      }
      Valid = PhkNextValid(v11, v8);
    }
    UserSetLastError(1431);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
      || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
    {
      v21 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v25,
        v24,
        *(_QWORD *)(v23 + 69160),
        3,
        5,
        24,
        (__int64)&WPP_ee71345fc15630358c6b50546088a96d_Traceguids);
    }
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v32);
  }
  return 0LL;
}
