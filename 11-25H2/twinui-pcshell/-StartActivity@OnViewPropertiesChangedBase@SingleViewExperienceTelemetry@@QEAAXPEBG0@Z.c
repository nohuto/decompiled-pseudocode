/*
 * XREFs of ?StartActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1801A7740
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801A71E8 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180016A80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180016E10 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180030348 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800310C4 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::StartActivity(
        SingleViewExperienceTelemetry::OnViewPropertiesChangedBase *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // r14
  __int64 v8; // rax
  ULONGLONG v9; // rdx
  const GUID *v10; // r8
  __int64 v11; // rcx
  const GUID *v12; // r9
  __int64 v13; // rax
  int v14; // eax
  int v15; // ecx
  _DWORD v16[2]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v17; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  void *v20; // [rsp+60h] [rbp-19h]
  int v21; // [rsp+68h] [rbp-11h]
  int v22; // [rsp+6Ch] [rbp-Dh]
  __int64 *v23; // [rsp+70h] [rbp-9h]
  __int64 v24; // [rsp+78h] [rbp-1h]
  _DWORD *v25; // [rsp+80h] [rbp+7h]
  __int64 v26; // [rsp+88h] [rbp+Fh]
  const unsigned __int16 *v27; // [rsp+90h] [rbp+17h]
  int v28; // [rsp+98h] [rbp+1Fh]
  int v29; // [rsp+9Ch] [rbp+23h]
  const unsigned __int16 *v30; // [rsp+A0h] [rbp+27h]
  int v31; // [rsp+A8h] [rbp+2Fh]
  int v32; // [rsp+ACh] [rbp+33h]

  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v7 = SingleViewExperienceLogging::Provider(v6);
  if ( *(_DWORD *)v7 > 5u )
  {
    v16[0] = GetCurrentThreadId();
    v17 = 0LL;
    v8 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v10 = (const GUID *)(*((_QWORD *)this + 34) + 8LL);
    v11 = -1LL;
    v12 = (const GUID *)v8;
    if ( a3 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a3[v13] != (_WORD)v9 );
      v14 = 2 * v13 + 2;
    }
    else
    {
      a3 = &LocaleName;
      v14 = v9 + 2;
    }
    v30 = a3;
    v31 = v14;
    v32 = v9;
    if ( a2 )
    {
      do
        ++v11;
      while ( a2[v11] != (_WORD)v9 );
      v15 = 2 * v11 + 2;
    }
    else
    {
      a2 = &LocaleName;
      v15 = v9 + 2;
    }
    v28 = v15;
    v25 = v16;
    v29 = v9;
    v23 = &v17;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v7 + 1);
    EventDescriptor.Keyword = v9;
    v27 = a2;
    v26 = 4LL;
    v24 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v20 = &unk_1807F0CF2;
    UserData.Reserved = v9 + 2;
    v21 = 90;
    v22 = 1;
    v16[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v7 + 4), &EventDescriptor, v10, v12, 6u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
