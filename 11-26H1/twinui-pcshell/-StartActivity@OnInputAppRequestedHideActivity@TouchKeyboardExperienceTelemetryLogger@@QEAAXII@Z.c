/*
 * XREFs of ?StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x180015618
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180014B70 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180015898 (-zInternalStart@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAA.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::StartActivity(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *this,
        int a2,
        int a3)
{
  const struct _tlgProvider_t *v6; // rax
  const struct _tlgProvider_t *v7; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  const GUID *v10; // r9
  const GUID *v11; // rcx
  int v12; // [rsp+38h] [rbp-59h] BYREF
  int v13; // [rsp+3Ch] [rbp-55h] BYREF
  _DWORD v14[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v15; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  void *v18; // [rsp+78h] [rbp-19h]
  int v19; // [rsp+80h] [rbp-11h]
  int v20; // [rsp+84h] [rbp-Dh]
  __int64 *v21; // [rsp+88h] [rbp-9h]
  __int64 v22; // [rsp+90h] [rbp-1h]
  _DWORD *v23; // [rsp+98h] [rbp+7h]
  __int64 v24; // [rsp+A0h] [rbp+Fh]
  int *v25; // [rsp+A8h] [rbp+17h]
  __int64 v26; // [rsp+B0h] [rbp+1Fh]
  int *v27; // [rsp+B8h] [rbp+27h]
  __int64 v28; // [rsp+C0h] [rbp+2Fh]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v6 = TouchKeyboardExperienceTraceLogging::Provider();
  v7 = v6;
  if ( *(_DWORD *)v6 > 5u
    && (*((_QWORD *)v6 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v6 + 3) & 0x400000000000LL) == *((_QWORD *)v6 + 3) )
  {
    v12 = a3;
    v13 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v9 = *((_QWORD *)this + 34);
    v10 = 0LL;
    v14[0] = CurrentThreadId;
    v15 = 0x1000000LL;
    if ( !*(_BYTE *)(v9 + 4) || _tlgGuidIsZero((const struct _GUID *)(v9 + 24)) )
      v11 = v10;
    v28 = 4LL;
    v27 = &v12;
    v26 = 4LL;
    v25 = &v13;
    v24 = 4LL;
    v23 = v14;
    v22 = 8LL;
    v21 = &v15;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v7 + 1);
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v18 = &unk_18080E973;
    UserData.Reserved = 2;
    v19 = 102;
    v20 = 1;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v7 + 4), &EventDescriptor, (LPCGUID)(v9 + 8), v11, 6u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(this);
}
