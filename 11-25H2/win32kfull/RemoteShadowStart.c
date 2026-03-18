/*
 * XREFs of RemoteShadowStart @ 0x1402B894C
 * Callers:
 *     NtUserRemoteShadowStart @ 0x14029D5F0 (NtUserRemoteShadowStart.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetPointer @ 0x140123830 (SetPointer.c)
 *     RemoteRedrawScreen @ 0x14012515C (RemoteRedrawScreen.c)
 *     GetRemoteHDEV @ 0x14026BD68 (GetRemoteHDEV.c)
 *     bDrvShadowConnect @ 0x14033FBC0 (bDrvShadowConnect.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall RemoteShadowStart(volatile void *a1, unsigned int a2)
{
  SIZE_T v2; // rsi
  __int64 v3; // rdx
  __int64 RemoteContext; // r14
  bool v5; // bl
  unsigned int *v6; // rcx
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 RemoteHDEV; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  void *v29; // [rsp+40h] [rbp-18h]

  v2 = a2;
  RemoteContext = GreGetRemoteContext();
  v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v6 = &WPP_RECORDER_INITIALIZED;
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v3);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      22,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v11 = *(_QWORD *)(W32GetUserGdiSessionState(v6) + 40);
  if ( PsGetCurrentProcess(v12) != v11 )
    return 3221225506LL;
  ProbeForRead(a1, v2, 1u);
  v29 = (void *)Win32AllocPoolWithQuotaZInit(v2, 1769435989LL);
  if ( !v29 )
    ExRaiseStatus(-1073741801);
  memmove(v29, (const void *)a1, v2);
  if ( *(_DWORD *)(W32GetUserSessionState(v15, v14) + 68764) )
  {
    RemoteHDEV = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 68808);
  }
  else
  {
    v19 = *(_QWORD *)(RemoteContext + 40);
    v20 = W32GetUserSessionState(v17, v16);
    RemoteHDEV = GetRemoteHDEV(*(unsigned __int16 *)(v20 + 68752), v19);
  }
  v21 = bDrvShadowConnect(RemoteHDEV, v29, (unsigned int)v2);
  Win32FreePool(v29);
  if ( !v21 )
    return 3221880856LL;
  v24 = W32GetUserSessionState(v23, v22);
  RemoteRedrawScreen((void **)(v24 + 19152), v25);
  SetPointer(1LL);
  v28 = W32GetUserSessionState(v27, v26);
  *(_DWORD *)(*(_QWORD *)(v28 + 19872) + 2236LL) |= 2u;
  return 0LL;
}
