/*
 * XREFs of NtUserPostThreadMessage @ 0x14024B7E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140175800 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x140181818 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     GetDesktopView @ 0x14019C310 (GetDesktopView.c)
 *     _PostThreadMessage @ 0x1401AAC30 (_PostThreadMessage.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x140283680 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_LDD @ 0x1402A4760 (WPP_RECORDER_AND_TRACE_SF_LDD.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B3154 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  tagTHREADINFO *v12; // r15
  int v13; // ecx
  struct tagTHREADINFO *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  __int64 UserSessionState; // rax
  UIPrivilegeIsolation *v20; // rcx
  const struct tagUIPI_INFO *v21; // r8
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  const struct tagUIPI_INFO *v28; // r8
  __int64 v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  const struct tagUIPI_INFO *v33; // r8
  const struct tagUIPI_INFO *v34; // rdx
  char v36; // [rsp+60h] [rbp-29h]
  bool v37; // [rsp+61h] [rbp-28h]
  __int64 v38; // [rsp+68h] [rbp-21h] BYREF
  __int64 v39; // [rsp+70h] [rbp-19h] BYREF
  __int64 v40; // [rsp+78h] [rbp-11h]
  __int64 v41; // [rsp+80h] [rbp-9h] BYREF
  int v42; // [rsp+88h] [rbp-1h]

  v40 = a4;
  v6 = a4;
  EnterCrit(0LL, 0LL);
  if ( (a2 & 0xFFFE0000) == 0 )
  {
    v9 = 0;
    v12 = (tagTHREADINFO *)PtiFromThreadId(a1);
    if ( !v12 )
    {
LABEL_4:
      v13 = 1444;
LABEL_5:
      UserSetLastError(v13);
      goto LABEL_45;
    }
    v14 = PtiCurrent(v11, v10);
    if ( *((_QWORD *)v14 + 62) != *((_QWORD *)v12 + 62)
      && (_InterlockedCompareExchange((volatile signed __int32 *)v14 + 132, 0, 0) & 8) == 0
      && !GetDesktopView(*((_QWORD *)v14 + 58), *((_QWORD *)v12 + 62)) )
    {
      v39 = 0LL;
      v38 = 0LL;
      if ( (unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
      {
        v17 = HasTcbPrivilege();
      }
      else
      {
        UserSessionState = W32GetUserSessionState(v16, v15);
        v17 = (unsigned int)IsPrivileged(UserSessionState + 42544) != 0;
      }
      if ( !v17 )
        goto LABEL_4;
      if ( (unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline(v18) )
      {
        if ( !UIPrivilegeIsolation::CheckAccess(
                (UIPrivilegeIsolation *)(*((_QWORD *)v14 + 58) + 864LL),
                (const struct tagUIPI_INFO *)(*((_QWORD *)v12 + 58) + 864LL),
                v21) )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x8000) == 0
            || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
          {
            v22 = 0;
          }
          v36 = v22;
          v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            tagTHREADINFO::GetTID(v12);
            tagTHREADINFO::GetTID(v14);
            v25 = W32GetUserSessionState(v24, v23);
            LOBYTE(v26) = v37;
            LOBYTE(v27) = v36;
            WPP_RECORDER_AND_TRACE_SF_LDD(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v27,
              v26,
              *(_QWORD *)(v25 + 69160));
            v6 = v40;
          }
          EtwTraceUIPIMsgError(*((_QWORD *)v14 + 58), *((_QWORD *)v12 + 58), a2, a3, v6);
          goto LABEL_4;
        }
      }
      else if ( UIPrivilegeIsolation::Enforced(v20) )
      {
        if ( !UIPrivilegeIsolation::CheckAccess(
                (UIPrivilegeIsolation *)(*((_QWORD *)v14 + 58) + 864LL),
                (const struct tagUIPI_INFO *)(*((_QWORD *)v12 + 58) + 864LL),
                v28) )
        {
          UserSetLastError(1444);
          EtwTraceUIPIMsgError(*((_QWORD *)v14 + 58), *((_QWORD *)v12 + 58), a2, a3, v6);
          goto LABEL_45;
        }
      }
      else if ( (int)GetProcessLuid(*(_QWORD *)v14, &v39) < 0
             || (int)GetProcessLuid(*(_QWORD *)v12, &v38) < 0
             || v39 != v38 )
      {
        goto LABEL_4;
      }
    }
    v29 = *((_QWORD *)v12 + 58);
    v30 = *((_QWORD *)v14 + 58);
    if ( v29 == v30 )
      goto LABEL_44;
    if ( a2 == 717 )
      goto LABEL_45;
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(*((struct tagPROCESSINFO **)v12 + 58), 0LL, a2)
      || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2, v31)
      || a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792
      || (!(unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline()
        ? (*(_QWORD *)v29 != *(_QWORD *)(W32GetUserGdiSessionState(v32) + 40)
         ? (v41 = *(_QWORD *)(v29 + 864), v42 = *(_DWORD *)(v29 + 872))
         : (v41 = 0x2000LL, v42 = 0),
           v34 = (const struct tagUIPI_INFO *)&v41)
        : (v34 = (const struct tagUIPI_INFO *)(v29 + 864)),
          UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v30 + 864), v34, v33)) )
    {
LABEL_44:
      v9 = PostThreadMessage(v12, a2, a3, v40);
      goto LABEL_45;
    }
    EtwTraceUIPIMsgError(v30, v29, a2, a3, v40);
    v13 = 5;
    goto LABEL_5;
  }
  UserSetLastError(87);
  v9 = 0;
LABEL_45:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
