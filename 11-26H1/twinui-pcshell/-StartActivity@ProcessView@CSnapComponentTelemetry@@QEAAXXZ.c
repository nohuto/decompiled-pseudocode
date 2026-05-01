/*
 * XREFs of ?StartActivity@ProcessView@CSnapComponentTelemetry@@QEAAXXZ @ 0x18006F278
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18006E57C (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Instance@WindowManagementLogging@@KAPEAV1@XZ @ 0x1800704FC (-Instance@WindowManagementLogging@@KAPEAV1@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007B158 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall CSnapComponentTelemetry::ProcessView::StartActivity(CSnapComponentTelemetry::ProcessView *this)
{
  __int64 v2; // rdi
  ULONGLONG v3; // rdx
  __int64 v4; // r8
  const GUID *v5; // rcx
  _DWORD v6[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v7; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  __int64 *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]
  _DWORD *v15; // [rsp+80h] [rbp+37h]
  __int64 v16; // [rsp+88h] [rbp+3Fh]

  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v2 = *((_QWORD *)WindowManagementLogging::Instance() + 1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v6[0] = GetCurrentThreadId();
    v3 = 0LL;
    v7 = 0LL;
    v4 = *((_QWORD *)this + 34);
    if ( !*(_BYTE *)(v4 + 4) || _tlgGuidIsZero((const struct _GUID *)(v4 + 24)) )
      v5 = (const GUID *)v3;
    v15 = v6;
    v16 = 4LL;
    v13 = &v7;
    v14 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = v3;
    UserData.Ptr = *(_QWORD *)(v2 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v10 = &unk_180822FEC;
    v11 = 55;
    v12 = 1;
    v6[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v2 + 32), &EventDescriptor, (LPCGUID)(v4 + 8), v5, 4u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
