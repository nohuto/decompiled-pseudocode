/*
 * XREFs of ?StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x18002237C
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001F810 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002229C (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800232A0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Hide::StartActivity(
        SingleViewExperienceTelemetry::Hide *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        const unsigned __int16 *a5)
{
  const struct _tlgProvider_t *v9; // rax
  const struct _tlgProvider_t *v10; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  const GUID *v13; // r10
  const GUID *v14; // r9
  __int64 v15; // rax
  const WCHAR *v16; // rdx
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // eax
  const struct _tlgProvider_t *v20; // rax
  int v21; // r9d
  __int64 v22; // r8
  int v23; // [rsp+30h] [rbp-91h] BYREF
  _DWORD v24[3]; // [rsp+34h] [rbp-8Dh] BYREF
  const unsigned __int16 *v25; // [rsp+40h] [rbp-81h] BYREF
  __int64 v26; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-61h] BYREF
  void *v29; // [rsp+70h] [rbp-51h]
  int v30; // [rsp+78h] [rbp-49h]
  int v31; // [rsp+7Ch] [rbp-45h]
  __int64 *v32; // [rsp+80h] [rbp-41h]
  __int64 v33; // [rsp+88h] [rbp-39h]
  _DWORD *v34; // [rsp+90h] [rbp-31h]
  __int64 v35; // [rsp+98h] [rbp-29h]
  const unsigned __int16 *v36; // [rsp+A0h] [rbp-21h]
  int v37; // [rsp+A8h] [rbp-19h]
  int v38; // [rsp+ACh] [rbp-15h]
  const WCHAR *v39; // [rsp+B0h] [rbp-11h]
  int v40; // [rsp+B8h] [rbp-9h]
  int v41; // [rsp+BCh] [rbp-5h]
  int *v42; // [rsp+C0h] [rbp-1h]
  __int64 v43; // [rsp+C8h] [rbp+7h]
  const unsigned __int16 **v44; // [rsp+D0h] [rbp+Fh]
  __int64 v45; // [rsp+D8h] [rbp+17h]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = SingleViewExperienceLogging::Provider();
  v10 = v9;
  if ( *(_DWORD *)v9 > 5u
    && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v9 + 3) & 0x200000000000LL) == *((_QWORD *)v9 + 3) )
  {
    v25 = a5;
    v23 = a4;
    CurrentThreadId = GetCurrentThreadId();
    v12 = *((_QWORD *)this + 34);
    v13 = 0LL;
    v24[0] = CurrentThreadId;
    v26 = 0x1000000LL;
    if ( !*(_BYTE *)(v12 + 4) || _tlgGuidIsZero((const struct _GUID *)(v12 + 24)) )
      v14 = v13;
    v45 = 8LL;
    v44 = &v25;
    v43 = 4LL;
    v42 = &v23;
    v15 = -1LL;
    if ( a3 )
    {
      v16 = a3;
      v17 = -1LL;
      do
        ++v17;
      while ( a3[v17] != (_WORD)v13 );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v16 = &pvData;
      v18 = 2;
    }
    v39 = v16;
    v40 = v18;
    v41 = (int)v13;
    if ( a2 )
    {
      do
        ++v15;
      while ( a2[v15] != (_WORD)v13 );
      v19 = 2 * v15 + 2;
    }
    else
    {
      a2 = &pvData;
      v19 = 2;
    }
    v37 = v19;
    v36 = a2;
    v34 = v24;
    v38 = (int)v13;
    v32 = &v26;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v10 + 1);
    v35 = 4LL;
    v33 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x200000000000LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v29 = &unk_18083171B;
    UserData.Reserved = 2;
    v30 = 92;
    v31 = 1;
    v24[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v10 + 4), &EventDescriptor, (LPCGUID)(v12 + 8), v14, 8u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
  if ( a4 != 1 )
  {
    v20 = SingleViewExperienceLogging::Provider();
    if ( *(_DWORD *)v20 > 5u
      && (*((_QWORD *)v20 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v20 + 3) & 0x400000000000LL) == *((_QWORD *)v20 + 3) )
    {
      v22 = *((_QWORD *)this + 34);
      v26 = 0x1000000LL;
      v25 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        (_DWORD)v20,
        (unsigned int)&unk_1808316D6,
        v22 + 8,
        v21,
        (__int64)&v25,
        (__int64)&v26);
    }
  }
}
