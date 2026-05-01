/*
 * XREFs of McGenEventTracingRegister @ 0x1801B9F50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall McGenEventTracingRegister(
        LPCGUID ControlGuid,
        WMIDPREQUEST RequestAddress,
        PTRACEHANDLE RegistrationHandle,
        _QWORD *a4)
{
  unsigned int v4; // ebx
  int v10; // esi
  ULONG (__stdcall *v11)(WMIDPREQUESTCODE, PVOID, ULONG *, PVOID); // rdx
  HMODULE ModuleHandleW; // rdi
  ULONG (__stdcall *v14)(WMIDPREQUESTCODE, PVOID, ULONG *, PVOID); // rcx
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [rsp+40h] [rbp-178h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+50h] [rbp-168h] BYREF

  v4 = 0;
  if ( a4 )
  {
    if ( *a4 )
      return v4;
    memset_0(&VersionInformation, 0, sizeof(VersionInformation));
    v10 = 0;
    if ( McGenTracingSupportInit )
    {
LABEL_10:
      if ( McGenPreVista )
      {
        if ( !RegistrationHandle )
          return 87;
        v14 = McGenControlCallback;
        if ( RequestAddress )
          v14 = RequestAddress;
        *a4 = RegistrationHandle;
        TraceGuidReg.Guid = ControlGuid;
        TraceGuidReg.RegHandle = 0LL;
        return RegisterTraceGuidsW(
                 v14,
                 RegistrationHandle,
                 ControlGuid,
                 1u,
                 &TraceGuidReg,
                 0LL,
                 0LL,
                 RegistrationHandle);
      }
      else
      {
        v11 = (ULONG (__stdcall *)(WMIDPREQUESTCODE, PVOID, ULONG *, PVOID))McGenControlCallbackV2;
        if ( RequestAddress )
          v11 = RequestAddress;
        return (unsigned int)PfnEventRegister(ControlGuid, v11, RegistrationHandle);
      }
    }
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( !GetVersionExW(&VersionInformation) )
      goto LABEL_15;
    McGenPreVista = VersionInformation.dwMajorVersion < 6;
    if ( VersionInformation.dwMajorVersion > 6
      || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion > 1 )
    {
      v10 = 1;
    }
    if ( VersionInformation.dwMajorVersion >= 6 )
    {
LABEL_15:
      ModuleHandleW = GetModuleHandleW(L"advapi32.dll");
      if ( ModuleHandleW || v10 && (ModuleHandleW = GetModuleHandleW(L"api-ms-win-eventing-provider-l1-1-0.dll")) != 0LL )
      {
        PfnEventWrite = (__int64)GetProcAddress(ModuleHandleW, "EventWrite");
        if ( PfnEventWrite )
        {
          PfnEventRegister = (__int64 (__fastcall *)(LPCGUID, WMIDPREQUEST, PTRACEHANDLE))GetProcAddress(
                                                                                            ModuleHandleW,
                                                                                            "EventRegister");
          if ( PfnEventRegister )
          {
            PfnEventUnregister = (__int64)GetProcAddress(ModuleHandleW, "EventUnregister");
            if ( PfnEventUnregister )
              goto LABEL_9;
          }
          PfnEventRegister = McGenEventTracingRegister;
        }
      }
      McGenPreVista = 1;
    }
LABEL_9:
    McGenTracingSupportInit = 1;
    goto LABEL_10;
  }
  return 87LL;
}
