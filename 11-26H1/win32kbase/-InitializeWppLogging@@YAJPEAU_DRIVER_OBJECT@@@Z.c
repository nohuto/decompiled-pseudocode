/*
 * XREFs of ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140142028
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?InitializeWppRecorder@@YAJPEAPEAURECORDER_LOG__@@PEADK@Z @ 0x140142190 (-InitializeWppRecorder@@YAJPEAPEAURECORDER_LOG__@@PEADK@Z.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x140142280 (-UninitializeBaseWppLog@@YAXXZ.c)
 *     IsCurrentSessionHostServiceSession @ 0x140142338 (IsCurrentSessionHostServiceSession.c)
 *     ApiSetEditionInitializeWppLogging @ 0x140227724 (ApiSetEditionInitializeWppLogging.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     WppLoadTracingSupport @ 0x1402D39F8 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1402D3B7C (WppInitKm.c)
 */

__int64 __fastcall InitializeWppLogging(struct _DRIVER_OBJECT *a1)
{
  PDRIVER_OBJECT v1; // rdi
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 UserSessionState; // rax
  unsigned int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // ebx
  int v10; // r8d
  __int64 v11; // rax
  unsigned int v12; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+34h] [rbp-24h]
  int v17; // [rsp+3Ch] [rbp-1Ch]

  v1 = gpWin32kDriverObject;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Win32kWPP");
  if ( (unsigned int)IsCurrentSessionHostServiceSession() )
  {
    *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
    WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_Win32kbaseTraceGuid;
    WPP_MAIN_CB.NextDevice = 0LL;
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WPP_MAIN_CB.Timer = (PIO_TIMER)1;
    WPP_MAIN_CB.DeviceExtension = 0LL;
    WPP_MAIN_CB.DeviceType = 0;
    WppLoadTracingSupport();
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WppInitKm(v1, &DestinationString);
    v15 = 16;
    v17 = 2;
    v16 = 0x200000000LL;
    imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v15);
  }
  UserSessionState = W32GetUserSessionState(v3, v2, v4);
  v9 = InitializeWppRecorder((struct RECORDER_LOG__ **)(UserSessionState + 69136), "win32kbase", v6);
  if ( v9 < 0
    || (v11 = W32GetUserSessionState(v8, v7, v10),
        v9 = InitializeWppRecorder((struct RECORDER_LOG__ **)(v11 + 19368), "win32kbase_rim", v12),
        v9 < 0)
    || (v9 = ApiSetEditionInitializeWppLogging(v1, &DestinationString), v9 < 0) )
  {
    UninitializeBaseWppLog();
  }
  return (unsigned int)v9;
}
