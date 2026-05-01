/*
 * XREFs of ?StartActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXUtagPOINT@@IK@Z @ 0x1801DB840
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180268460 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007B158 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall CSnapComponentTelemetry::OnGetWindowArrangementRects::StartActivity(
        CSnapComponentTelemetry::OnGetWindowArrangementRects *this,
        struct tagPOINT a2,
        int a3,
        int a4)
{
  LONG x; // ebx
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  ULONGLONG v12; // r10
  const GUID *v13; // rcx
  int v14; // [rsp+30h] [rbp-99h] BYREF
  int v15; // [rsp+34h] [rbp-95h] BYREF
  LONG y; // [rsp+38h] [rbp-91h] BYREF
  LONG v17; // [rsp+3Ch] [rbp-8Dh] BYREF
  DWORD v18; // [rsp+40h] [rbp-89h] BYREF
  struct tagPOINT v19; // [rsp+48h] [rbp-81h]
  __int64 v20; // [rsp+50h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-59h] BYREF
  void *v23; // [rsp+80h] [rbp-49h]
  int v24; // [rsp+88h] [rbp-41h]
  int v25; // [rsp+8Ch] [rbp-3Dh]
  __int64 *v26; // [rsp+90h] [rbp-39h]
  __int64 v27; // [rsp+98h] [rbp-31h]
  DWORD *v28; // [rsp+A0h] [rbp-29h]
  __int64 v29; // [rsp+A8h] [rbp-21h]
  LONG *v30; // [rsp+B0h] [rbp-19h]
  __int64 v31; // [rsp+B8h] [rbp-11h]
  LONG *p_y; // [rsp+C0h] [rbp-9h]
  __int64 v33; // [rsp+C8h] [rbp-1h]
  int *v34; // [rsp+D0h] [rbp+7h]
  __int64 v35; // [rsp+D8h] [rbp+Fh]
  int *v36; // [rsp+E0h] [rbp+17h]
  __int64 v37; // [rsp+E8h] [rbp+1Fh]

  v19 = a2;
  x = a2.x;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = WindowManagementLogging::Provider(v8);
  if ( *(_DWORD *)v9 > 5u )
  {
    y = v19.y;
    v14 = a4;
    v15 = a3;
    v17 = x;
    CurrentThreadId = GetCurrentThreadId();
    v11 = *((_QWORD *)this + 34);
    v12 = 0LL;
    v18 = CurrentThreadId;
    v20 = 0LL;
    if ( !*(_BYTE *)(v11 + 4) || _tlgGuidIsZero((const struct _GUID *)(v11 + 24)) )
      v13 = (const GUID *)v12;
    v37 = 4LL;
    v27 = 8LL;
    v36 = &v14;
    v35 = 4LL;
    v34 = &v15;
    v33 = 4LL;
    p_y = &y;
    v30 = &v17;
    v28 = &v18;
    v26 = &v20;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v9 + 1);
    v31 = 4LL;
    v29 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = v12;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v23 = &unk_18082159A;
    UserData.Reserved = 2;
    v24 = 117;
    v25 = 1;
    v19.x = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v9 + 4), &EventDescriptor, (LPCGUID)(v11 + 8), v13, 8u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
