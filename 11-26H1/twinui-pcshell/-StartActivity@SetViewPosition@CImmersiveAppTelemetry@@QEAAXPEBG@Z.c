/*
 * XREFs of ?StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18005F898
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180040EF0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800424E4 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180043B24 (-Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall CImmersiveAppTelemetry::SetViewPosition::StartActivity(
        CImmersiveAppTelemetry::SetViewPosition *this,
        const unsigned __int16 *a2)
{
  const struct _tlgProvider_t *v4; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v6; // r8
  ULONGLONG v7; // rdx
  const GUID *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  _DWORD v11[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v12; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-9h] BYREF
  void *v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+74h] [rbp+13h]
  __int64 *v18; // [rsp+78h] [rbp+17h]
  __int64 v19; // [rsp+80h] [rbp+1Fh]
  _DWORD *v20; // [rsp+88h] [rbp+27h]
  __int64 v21; // [rsp+90h] [rbp+2Fh]
  const unsigned __int16 *v22; // [rsp+98h] [rbp+37h]
  int v23; // [rsp+A0h] [rbp+3Fh]
  int v24; // [rsp+A4h] [rbp+43h]

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v4 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v6 = *((_QWORD *)this + 34);
    v7 = 0LL;
    v11[0] = CurrentThreadId;
    v12 = 0LL;
    if ( !*(_BYTE *)(v6 + 4) || _tlgGuidIsZero((const struct _GUID *)(v6 + 24)) )
      v8 = (const GUID *)v7;
    if ( a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a2[v9] != (_WORD)v7 );
      v10 = 2 * v9 + 2;
    }
    else
    {
      a2 = &pvData;
      v10 = 2;
    }
    v23 = v10;
    v24 = v7;
    v20 = v11;
    v18 = &v12;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v4 + 1);
    EventDescriptor.Keyword = v7;
    v22 = a2;
    v21 = 4LL;
    v19 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v15 = &unk_1807E5CAA;
    UserData.Reserved = 2;
    v16 = 66;
    v17 = 1;
    v11[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v4 + 4), &EventDescriptor, (LPCGUID)(v6 + 8), v8, 5u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
