/*
 * XREFs of ?StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z @ 0x180019798
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800156EC (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180016A80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180016E10 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180019990 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800310C4 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Launch::StartActivity(
        SingleViewExperienceTelemetry::Launch *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        void *a4)
{
  const struct _tlgProvider_t *v8; // rax
  const struct _tlgProvider_t *v9; // rdi
  __int64 v10; // rax
  const GUID *v11; // r8
  const GUID *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // ecx
  _DWORD v17[2]; // [rsp+30h] [rbp-79h] BYREF
  void *v18; // [rsp+38h] [rbp-71h] BYREF
  __int64 v19; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-49h] BYREF
  void *v22; // [rsp+70h] [rbp-39h]
  int v23; // [rsp+78h] [rbp-31h]
  int v24; // [rsp+7Ch] [rbp-2Dh]
  __int64 *v25; // [rsp+80h] [rbp-29h]
  __int64 v26; // [rsp+88h] [rbp-21h]
  _DWORD *v27; // [rsp+90h] [rbp-19h]
  __int64 v28; // [rsp+98h] [rbp-11h]
  const unsigned __int16 *v29; // [rsp+A0h] [rbp-9h]
  int v30; // [rsp+A8h] [rbp-1h]
  int v31; // [rsp+ACh] [rbp+3h]
  const unsigned __int16 *v32; // [rsp+B0h] [rbp+7h]
  int v33; // [rsp+B8h] [rbp+Fh]
  int v34; // [rsp+BCh] [rbp+13h]
  void **v35; // [rsp+C0h] [rbp+17h]
  __int64 v36; // [rsp+C8h] [rbp+1Fh]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = SingleViewExperienceLogging::Provider();
  v9 = v8;
  if ( *(_DWORD *)v8 > 5u
    && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
  {
    v18 = a4;
    v19 = 0x1000000LL;
    v17[0] = GetCurrentThreadId();
    v10 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v11 = (const GUID *)(*((_QWORD *)this + 34) + 8LL);
    v36 = 8LL;
    v12 = (const GUID *)v10;
    v13 = -1LL;
    v35 = &v18;
    if ( a3 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a3[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      a3 = &LocaleName;
      v15 = 2;
    }
    v32 = a3;
    v33 = v15;
    v34 = 0;
    if ( a2 )
    {
      do
        ++v13;
      while ( a2[v13] );
      v16 = 2 * v13 + 2;
    }
    else
    {
      a2 = &LocaleName;
      v16 = 2;
    }
    v30 = v16;
    v27 = v17;
    v31 = 0;
    v25 = &v19;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v9 + 1);
    v29 = a2;
    v28 = 4LL;
    v26 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x200000000000LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v22 = &unk_1807F215D;
    UserData.Reserved = 2;
    v23 = 75;
    v24 = 1;
    v17[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v9 + 4), &EventDescriptor, v11, v12, 7u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
