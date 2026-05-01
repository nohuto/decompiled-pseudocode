/*
 * XREFs of ?StartActivity@ShowAltTab@XamlSwitcherTelemetry@@QEAAXII@Z @ 0x18009E6FC
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x18009C350 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18009E4F4 (-Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18009E8A8 (-zInternalStart@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowAltTab::StartActivity(
        XamlSwitcherTelemetry::ShowAltTab *this,
        int a2,
        int a3)
{
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rax
  const struct _tlgProvider_t *v8; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  const GUID *v11; // r9
  const GUID *v12; // rcx
  int v13; // [rsp+38h] [rbp-59h] BYREF
  int v14; // [rsp+3Ch] [rbp-55h] BYREF
  _DWORD v15[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v16; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  void *v19; // [rsp+78h] [rbp-19h]
  int v20; // [rsp+80h] [rbp-11h]
  int v21; // [rsp+84h] [rbp-Dh]
  __int64 *v22; // [rsp+88h] [rbp-9h]
  __int64 v23; // [rsp+90h] [rbp-1h]
  _DWORD *v24; // [rsp+98h] [rbp+7h]
  __int64 v25; // [rsp+A0h] [rbp+Fh]
  int *v26; // [rsp+A8h] [rbp+17h]
  __int64 v27; // [rsp+B0h] [rbp+1Fh]
  int *v28; // [rsp+B8h] [rbp+27h]
  __int64 v29; // [rsp+C0h] [rbp+2Fh]

  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v7 = XamlSwitcherLogging::Provider(v6);
  v8 = v7;
  if ( *(_DWORD *)v7 > 5u
    && (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v7 + 3) & 0x400000000000LL) == *((_QWORD *)v7 + 3) )
  {
    v13 = a3;
    v14 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v10 = *((_QWORD *)this + 34);
    v11 = 0LL;
    v15[0] = CurrentThreadId;
    v16 = 0x2000000LL;
    if ( !*(_BYTE *)(v10 + 4) || _tlgGuidIsZero((const struct _GUID *)(v10 + 24)) )
      v12 = v11;
    v29 = 4LL;
    v28 = &v13;
    v27 = 4LL;
    v26 = &v14;
    v25 = 4LL;
    v24 = v15;
    v23 = 8LL;
    v22 = &v16;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v8 + 1);
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v19 = &unk_180833396;
    UserData.Reserved = 2;
    v20 = 91;
    v21 = 1;
    v15[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v8 + 4), &EventDescriptor, (LPCGUID)(v10 + 8), v12, 6u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
