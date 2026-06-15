/*
 * XREFs of ?HostedApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBG_KW4AppInteractivity@@@Z @ 0x1800BE440
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800026B0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800ABEAC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800BDE24 (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ?CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV?$unique_call@P6AJXZ$1?CoRevertToSelf@@YAJXZ$0A@@1@@Z @ 0x1800BE220 (-CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV-$unique_call@P6AJXZ$1-CoRevertTo.c)
 *     ?GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@@Z @ 0x1800BE320 (-GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV-$unique_any_t@V-$unique_s.c)
 */

__int64 __fastcall CApplicationTracker::HostedApplicationInteractivityChanged(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        ULONG a4)
{
  int v8; // eax
  __int64 v9; // rdx
  int ProcessHandleForClientOfObject_nothrow; // ebx
  __int64 v12; // rdx
  DWORD ProcessId; // edi
  NTSTATUS v14; // eax
  struct AudioSrvTelemetryProvider *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  _DWORD *v19; // rcx
  unsigned int ProcessInformation; // [rsp+50h] [rbp-30h] BYREF
  ULONG ReturnLength; // [rsp+54h] [rbp-2Ch] BYREF
  DWORD v22; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Process; // [rsp+60h] [rbp-20h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h] BYREF
  const wchar_t *v25; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  char v27; // [rsp+B0h] [rbp+30h] BYREF

  v27 = 0;
  v8 = wil::CoImpersonateClientOfObject_nothrow(a1 - 8, &v27);
  ProcessHandleForClientOfObject_nothrow = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)v8);
LABEL_3:
    if ( v27 )
      CoRevertToSelf();
    return (unsigned int)ProcessHandleForClientOfObject_nothrow;
  }
  Process = 0LL;
  ProcessHandleForClientOfObject_nothrow = wil::GetProcessHandleForClientOfObject_nothrow(a1 - 8, v9, (__int64)&Process);
  if ( ProcessHandleForClientOfObject_nothrow < 0 )
  {
    v12 = 85LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)ProcessHandleForClientOfObject_nothrow);
LABEL_9:
    wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&Process);
    goto LABEL_3;
  }
  ReturnLength = 0;
  ProcessId = GetProcessId(Process);
  ProcessInformation = 0;
  v14 = NtQueryInformationProcess(Process, ProcessSessionInformation, &ProcessInformation, 4u, &ReturnLength);
  if ( v14 < 0 )
  {
    ProcessHandleForClientOfObject_nothrow = wil::details::in1diag3::Return_NtStatus(
                                               retaddr,
                                               (void *)0x5D,
                                               (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
                                               (const char *)(unsigned int)v14);
    goto LABEL_9;
  }
  v15 = AudioSrvTelemetryProvider::Instance();
  v18 = ProcessInformation;
  v19 = (_DWORD *)*((_QWORD *)v15 + 1);
  if ( *v19 > 4u )
  {
    ReturnLength = a4;
    v24 = a3;
    v25 = a2;
    v22 = ProcessId;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (int)v19,
      (int)&unk_1801A2A17,
      v16,
      v17,
      (__int64)&v22,
      (__int64)&ProcessInformation,
      &v25,
      (__int64)&v24,
      (__int64)&ReturnLength);
  }
  if ( (unsigned int)IsPbmReportHostedAppStateChangeSupported() )
  {
    ProcessHandleForClientOfObject_nothrow = PbmReportHostedAppStateChange_2(
                                               v18,
                                               a2,
                                               a3,
                                               (unsigned int)(a4 != 1) + 2,
                                               a1 + 24);
    if ( ProcessHandleForClientOfObject_nothrow < 0 )
    {
      v12 = 108LL;
      goto LABEL_8;
    }
  }
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&Process);
  if ( v27 )
    CoRevertToSelf();
  return 0LL;
}
