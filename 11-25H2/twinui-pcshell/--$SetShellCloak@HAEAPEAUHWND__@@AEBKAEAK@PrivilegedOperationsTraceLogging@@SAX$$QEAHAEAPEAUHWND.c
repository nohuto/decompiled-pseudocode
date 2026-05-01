/*
 * XREFs of ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1801501E0
 * Callers:
 *     ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180150340 (-SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilege.c)
 * Callees:
 *     ?get@?$static_lazy@VPrivilegedOperationsTraceLogging@@@details@wil@@QEAAPEAVPrivilegedOperationsTraceLogging@@P6AXXZ@Z @ 0x1801504B4 (-get@-$static_lazy@VPrivilegedOperationsTraceLogging@@@details@wil@@QEAAPEAVPrivilegedOperations.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

int __fastcall PrivilegedOperationsTraceLogging::SetShellCloak<int,HWND__ * &,unsigned long const &,unsigned long &>(
        _DWORD *a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+3Ch] [rbp-45h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v14; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v17; // [rsp+78h] [rbp-9h]
  int v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+84h] [rbp+3h]
  _DWORD *v20; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  __int64 *v22; // [rsp+98h] [rbp+17h]
  __int64 v23; // [rsp+A0h] [rbp+1Fh]
  int *v24; // [rsp+A8h] [rbp+27h]
  __int64 v25; // [rsp+B0h] [rbp+2Fh]
  int *v26; // [rsp+B8h] [rbp+37h]
  __int64 v27; // [rsp+C0h] [rbp+3Fh]

  v8 = wil::details::static_lazy<PrivilegedOperationsTraceLogging>::get(
         a1,
         _lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_);
  v9 = *(_QWORD *)(v8 + 8);
  if ( *(_DWORD *)v9 > 5u )
  {
    v11 = *a4;
    v12 = *a3;
    v14 = *a2;
    v13[0] = *a1;
    v26 = &v11;
    v24 = &v12;
    v22 = &v14;
    v20 = v13;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v9 + 8);
    v27 = 4LL;
    v25 = 4LL;
    v23 = 8LL;
    v21 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v17 = &unk_1807CB611;
    UserData.Reserved = 2;
    v18 = 54;
    v19 = 1;
    v13[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v8) = EventWriteTransfer(*(_QWORD *)(v9 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return v8;
}
