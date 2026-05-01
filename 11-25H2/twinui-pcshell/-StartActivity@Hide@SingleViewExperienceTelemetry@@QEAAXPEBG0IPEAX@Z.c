/*
 * XREFs of ?StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x1801AB8AC
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001BCBC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180016A80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180016E10 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180019990 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800310C4 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801ABB34 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Hide::StartActivity(
        SingleViewExperienceTelemetry::Hide *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        const unsigned __int16 *a5)
{
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rax
  const struct _tlgProvider_t *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r8
  const GUID *v14; // r9
  const GUID *v15; // r8
  __int64 v16; // rax
  const WCHAR *v17; // rdx
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  const struct _tlgProvider_t *v22; // rax
  int v23; // r9d
  __int64 v24; // r8
  int v25; // [rsp+30h] [rbp-91h] BYREF
  _DWORD v26[3]; // [rsp+34h] [rbp-8Dh] BYREF
  const unsigned __int16 *v27; // [rsp+40h] [rbp-81h] BYREF
  __int64 v28; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-61h] BYREF
  void *v31; // [rsp+70h] [rbp-51h]
  int v32; // [rsp+78h] [rbp-49h]
  int v33; // [rsp+7Ch] [rbp-45h]
  __int64 *v34; // [rsp+80h] [rbp-41h]
  __int64 v35; // [rsp+88h] [rbp-39h]
  _DWORD *v36; // [rsp+90h] [rbp-31h]
  __int64 v37; // [rsp+98h] [rbp-29h]
  const unsigned __int16 *v38; // [rsp+A0h] [rbp-21h]
  int v39; // [rsp+A8h] [rbp-19h]
  int v40; // [rsp+ACh] [rbp-15h]
  const WCHAR *v41; // [rsp+B0h] [rbp-11h]
  int v42; // [rsp+B8h] [rbp-9h]
  int v43; // [rsp+BCh] [rbp-5h]
  int *v44; // [rsp+C0h] [rbp-1h]
  __int64 v45; // [rsp+C8h] [rbp+7h]
  const unsigned __int16 **v46; // [rsp+D0h] [rbp+Fh]
  __int64 v47; // [rsp+D8h] [rbp+17h]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v10 = SingleViewExperienceLogging::Provider(v9);
  v11 = v10;
  if ( *(_DWORD *)v10 > 5u
    && (*((_QWORD *)v10 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v10 + 3) & 0x200000000000LL) == *((_QWORD *)v10 + 3) )
  {
    v27 = a5;
    v25 = a4;
    v28 = 0x1000000LL;
    v26[0] = GetCurrentThreadId();
    v12 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v13 = *((_QWORD *)this + 34);
    v14 = (const GUID *)v12;
    v47 = 8LL;
    v46 = &v27;
    v45 = 4LL;
    v44 = &v25;
    v15 = (const GUID *)(v13 + 8);
    v16 = -1LL;
    if ( a3 )
    {
      v17 = a3;
      v18 = -1LL;
      do
        ++v18;
      while ( a3[v18] );
      v19 = 2 * v18 + 2;
    }
    else
    {
      v17 = &LocaleName;
      v19 = 2;
    }
    v41 = v17;
    v42 = v19;
    v43 = 0;
    if ( a2 )
    {
      do
        ++v16;
      while ( a2[v16] );
      v20 = 2 * v16 + 2;
    }
    else
    {
      a2 = &LocaleName;
      v20 = 2;
    }
    v39 = v20;
    v38 = a2;
    v36 = v26;
    v40 = 0;
    v34 = &v28;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *((_QWORD *)v11 + 1);
    v37 = 4LL;
    v35 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x200000000000LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v31 = &unk_1807F20F5;
    UserData.Reserved = 2;
    v32 = 92;
    v33 = 1;
    v26[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v11 + 4), &EventDescriptor, v15, v14, 8u, &UserData);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
  if ( a4 != 1 )
  {
    v22 = SingleViewExperienceLogging::Provider(v21);
    if ( *(_DWORD *)v22 > 5u
      && (*((_QWORD *)v22 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v22 + 3) & 0x400000000000LL) == *((_QWORD *)v22 + 3) )
    {
      v24 = *((_QWORD *)this + 34);
      v28 = 0x1000000LL;
      v27 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        (_DWORD)v22,
        (unsigned int)&unk_1807F1F83,
        v24 + 8,
        v23,
        (__int64)&v27,
        (__int64)&v28);
    }
  }
}
