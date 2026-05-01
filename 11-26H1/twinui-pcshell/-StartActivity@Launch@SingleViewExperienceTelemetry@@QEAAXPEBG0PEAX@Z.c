/*
 * XREFs of ?StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z @ 0x180022094
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18001C58C (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002229C (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Launch::StartActivity(
        SingleViewExperienceTelemetry::Launch *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        void *a4)
{
  const struct _tlgProvider_t *v8; // rax
  const struct _tlgProvider_t *v9; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  const GUID *v12; // rdx
  const GUID *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // eax
  _DWORD v18[2]; // [rsp+30h] [rbp-79h] BYREF
  void *v19; // [rsp+38h] [rbp-71h] BYREF
  __int64 v20; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-49h] BYREF
  void *v23; // [rsp+70h] [rbp-39h]
  int v24; // [rsp+78h] [rbp-31h]
  int v25; // [rsp+7Ch] [rbp-2Dh]
  __int64 *v26; // [rsp+80h] [rbp-29h]
  __int64 v27; // [rsp+88h] [rbp-21h]
  _DWORD *v28; // [rsp+90h] [rbp-19h]
  __int64 v29; // [rsp+98h] [rbp-11h]
  const unsigned __int16 *v30; // [rsp+A0h] [rbp-9h]
  int v31; // [rsp+A8h] [rbp-1h]
  int v32; // [rsp+ACh] [rbp+3h]
  const unsigned __int16 *v33; // [rsp+B0h] [rbp+7h]
  int v34; // [rsp+B8h] [rbp+Fh]
  int v35; // [rsp+BCh] [rbp+13h]
  void **v36; // [rsp+C0h] [rbp+17h]
  __int64 v37; // [rsp+C8h] [rbp+1Fh]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = SingleViewExperienceLogging::Provider();
  v9 = v8;
  if ( *(_DWORD *)v8 > 5u
    && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
  {
    v19 = a4;
    CurrentThreadId = GetCurrentThreadId();
    v11 = *((_QWORD *)this + 34);
    v12 = 0LL;
    v18[0] = CurrentThreadId;
    v20 = 0x1000000LL;
    if ( !*(_BYTE *)(v11 + 4) || _tlgGuidIsZero((const struct _GUID *)(v11 + 24)) )
      v13 = v12;
    v37 = 8LL;
    v36 = &v19;
    v14 = -1LL;
    if ( a3 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a3[v15] != (_WORD)v12 );
      v16 = 2 * v15 + 2;
    }
    else
    {
      a3 = &pvData;
      v16 = 2;
    }
    v33 = a3;
    v34 = v16;
    v35 = (int)v12;
    if ( a2 )
    {
      do
        ++v14;
      while ( a2[v14] != (_WORD)v12 );
      v17 = 2 * v14 + 2;
    }
    else
    {
      a2 = &pvData;
      v17 = 2;
    }
    v31 = v17;
    v32 = (int)v12;
    v28 = v18;
    v30 = a2;
    v26 = &v20;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v9 + 1);
    v29 = 4LL;
    v27 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x200000000000LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v23 = &unk_1808318B0;
    UserData.Reserved = 2;
    v24 = 75;
    v25 = 1;
    v18[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v9 + 4), &EventDescriptor, (LPCGUID)(v11 + 8), v13, 7u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
