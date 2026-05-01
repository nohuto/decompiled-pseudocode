/*
 * XREFs of ?StartActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXUtagPOINT@@IK@Z @ 0x180049160
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180270510 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180016A80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180016E10 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180056FB8 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall CSnapComponentTelemetry::OnGetWindowArrangementRects::StartActivity(
        CSnapComponentTelemetry::OnGetWindowArrangementRects *this,
        struct tagPOINT a2,
        int a3,
        int a4)
{
  LONG x; // ebx
  const struct _tlgProvider_t *v8; // rsi
  const GUID *v9; // rax
  __int64 v10; // r8
  ULONGLONG v11; // rdx
  int v12; // [rsp+30h] [rbp-99h] BYREF
  int v13; // [rsp+34h] [rbp-95h] BYREF
  LONG y; // [rsp+38h] [rbp-91h] BYREF
  LONG v15; // [rsp+3Ch] [rbp-8Dh] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-89h] BYREF
  struct tagPOINT v17; // [rsp+48h] [rbp-81h]
  __int64 v18; // [rsp+50h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-59h] BYREF
  void *v21; // [rsp+80h] [rbp-49h]
  int v22; // [rsp+88h] [rbp-41h]
  int v23; // [rsp+8Ch] [rbp-3Dh]
  __int64 *v24; // [rsp+90h] [rbp-39h]
  __int64 v25; // [rsp+98h] [rbp-31h]
  DWORD *p_CurrentThreadId; // [rsp+A0h] [rbp-29h]
  __int64 v27; // [rsp+A8h] [rbp-21h]
  LONG *v28; // [rsp+B0h] [rbp-19h]
  __int64 v29; // [rsp+B8h] [rbp-11h]
  LONG *p_y; // [rsp+C0h] [rbp-9h]
  __int64 v31; // [rsp+C8h] [rbp-1h]
  int *v32; // [rsp+D0h] [rbp+7h]
  __int64 v33; // [rsp+D8h] [rbp+Fh]
  int *v34; // [rsp+E0h] [rbp+17h]
  __int64 v35; // [rsp+E8h] [rbp+1Fh]

  v17 = a2;
  x = a2.x;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    y = v17.y;
    v12 = a4;
    v13 = a3;
    v15 = x;
    CurrentThreadId = GetCurrentThreadId();
    v18 = 0LL;
    v9 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v10 = *((_QWORD *)this + 34);
    EventDescriptor.Keyword = v11;
    v35 = 4LL;
    v34 = &v12;
    v33 = 4LL;
    v32 = &v13;
    v31 = 4LL;
    p_y = &y;
    v28 = &v15;
    p_CurrentThreadId = &CurrentThreadId;
    v24 = &v18;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v8 + 1);
    v29 = 4LL;
    v27 = 4LL;
    v25 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v21 = &unk_1807E5C79;
    UserData.Reserved = 2;
    v22 = 117;
    v23 = 1;
    v17.x = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v8 + 4), &EventDescriptor, (LPCGUID)(v10 + 8), v9, 8u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
