/*
 * XREFs of RemoteShadowCleanup @ 0x140124E84
 * Callers:
 *     NtUserRemoteShadowCleanup @ 0x14029D560 (NtUserRemoteShadowCleanup.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140123850 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     RemoteRedrawScreen @ 0x14012515C (RemoteRedrawScreen.c)
 *     GetRemoteHDEV @ 0x14026BD68 (GetRemoteHDEV.c)
 *     bDrvShadowDisconnect @ 0x14026C690 (bDrvShadowDisconnect.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall RemoteShadowCleanup(volatile void *a1, unsigned int a2)
{
  SIZE_T v2; // rsi
  __int64 v3; // rdx
  __int64 RemoteContext; // r14
  bool v5; // bl
  bool v6; // di
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 RemoteHDEV; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rax
  void *v33; // [rsp+40h] [rbp-18h]

  v2 = a2;
  RemoteContext = GreGetRemoteContext();
  v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v3);
    LOBYTE(v29) = v6;
    LOBYTE(v30) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v30,
      v29,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      24,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v7 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  if ( PsGetCurrentProcess() != v7 )
    return 3221225506LL;
  ProbeForRead(a1, v2, 1u);
  v33 = (void *)Win32AllocPoolWithQuotaZInit(v2, 1769435989LL);
  if ( !v33 )
    ExRaiseStatus(-1073741801);
  memmove(v33, (const void *)a1, v2);
  v10 = W32GetUserSessionState(v9, v8);
  if ( *(_DWORD *)(v10 + 68764) )
  {
    RemoteHDEV = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 68808);
  }
  else
  {
    v26 = *(_QWORD *)(RemoteContext + 40);
    v27 = W32GetUserSessionState(v12, v11);
    RemoteHDEV = GetRemoteHDEV(*(unsigned __int16 *)(v27 + 68752), v26);
  }
  bDrvShadowDisconnect(RemoteHDEV, v33, (unsigned int)v2);
  Win32FreePool(v33);
  if ( *(_DWORD *)(W32GetUserSessionState(v15, v14) + 68904) )
  {
    v31 = W32GetUserSessionState(v17, v16);
    --*(_DWORD *)(v31 + 68904);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v17, v16) + 68904) || *(_DWORD *)(W32GetUserSessionState(v19, v18) + 68756) )
  {
    v20 = W32GetUserSessionState(v19, v18);
    RemoteRedrawScreen(v20 + 19152);
  }
  LOBYTE(v19) = 1;
  SetPointerInternal(v19, 6LL);
  if ( !*(_DWORD *)(W32GetUserSessionState(v22, v21) + 68904) )
  {
    v32 = W32GetUserSessionState(v24, v23);
    *(_DWORD *)(*(_QWORD *)(v32 + 19872) + 2236LL) &= ~2u;
  }
  return 0LL;
}
