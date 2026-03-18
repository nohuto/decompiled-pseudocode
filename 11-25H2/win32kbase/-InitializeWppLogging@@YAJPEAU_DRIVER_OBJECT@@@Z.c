/*
 * XREFs of ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140101280
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?InitializeWppRecorder@@YAJPEAPEAURECORDER_LOG__@@PEADK@Z @ 0x1401013E8 (-InitializeWppRecorder@@YAJPEAPEAURECORDER_LOG__@@PEADK@Z.c)
 *     IsCurrentSessionHostServiceSession @ 0x1401014D8 (IsCurrentSessionHostServiceSession.c)
 *     ApiSetEditionInitializeWppLogging @ 0x140101524 (ApiSetEditionInitializeWppLogging.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x1401AF930 (-UninitializeBaseWppLog@@YAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     WppLoadTracingSupport @ 0x1402CA59C (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1402CA718 (WppInitKm.c)
 */

__int64 __fastcall InitializeWppLogging(struct _DRIVER_OBJECT *a1)
{
  PDRIVER_OBJECT v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+34h] [rbp-24h]
  int v15; // [rsp+3Ch] [rbp-1Ch]

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
    v13 = 16;
    v15 = 2;
    v14 = 0x200000000LL;
    imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v13);
  }
  UserSessionState = W32GetUserSessionState(v3, v2);
  v8 = InitializeWppRecorder((struct RECORDER_LOG__ **)(UserSessionState + 69144), "win32kbase", v5);
  if ( v8 < 0
    || (v9 = W32GetUserSessionState(v7, v6),
        v8 = InitializeWppRecorder((struct RECORDER_LOG__ **)(v9 + 19336), "win32kbase_rim", v10),
        v8 < 0)
    || (v8 = ApiSetEditionInitializeWppLogging(v1, &DestinationString), v8 < 0) )
  {
    UninitializeBaseWppLog();
  }
  return (unsigned int)v8;
}
