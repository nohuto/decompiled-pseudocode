/*
 * XREFs of ?StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x180067184
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002050C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002229C (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@543@Z @ 0x1801B98AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U1@@-$_tlgWrit.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Show::StartActivity(
        SingleViewExperienceTelemetry::Show *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        void *a5)
{
  const struct _tlgProvider_t *v9; // rsi
  const struct _tlgProvider_t *v10; // rax
  const struct _tlgProvider_t *v11; // r10
  const GUID *v12; // r8
  __int64 v13; // rax
  int v14; // eax
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // [rsp+50h] [rbp-51h] BYREF
  int v19; // [rsp+54h] [rbp-4Dh] BYREF
  __int64 v20; // [rsp+58h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-41h] BYREF
  void *v22; // [rsp+70h] [rbp-31h] BYREF
  const unsigned __int16 *v23; // [rsp+78h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-21h] BYREF
  void *v25; // [rsp+90h] [rbp-11h]
  int v26; // [rsp+98h] [rbp-9h]
  int v27; // [rsp+9Ch] [rbp-5h]
  const unsigned __int16 *v28; // [rsp+A0h] [rbp-1h]
  int v29; // [rsp+A8h] [rbp+7h]
  int v30; // [rsp+ACh] [rbp+Bh]
  __int64 *v31; // [rsp+B0h] [rbp+Fh]
  __int64 v32; // [rsp+B8h] [rbp+17h]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v9 > 5u
    && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v9 + 3) & 0x200000000000LL) == *((_QWORD *)v9 + 3) )
  {
    v22 = a5;
    v19 = a4;
    v23 = a3;
    *(_QWORD *)&EventDescriptor.Id = a2;
    CurrentThreadId = GetCurrentThreadId();
    v16 = *((_QWORD *)this + 34);
    v18 = CurrentThreadId;
    v20 = 0x1000000LL;
    if ( !*(_BYTE *)(v16 + 4) || _tlgGuidIsZero((const struct _GUID *)(v16 + 24)) )
      v17 = 0LL;
    ((void (__fastcall *)(const struct _tlgProvider_t *, void *, __int64, __int64, __int64 *, unsigned int *, EVENT_DESCRIPTOR *, const unsigned __int16 **, int *, void **))_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>)(
      v9,
      &unk_180831AEF,
      v16 + 8,
      v17,
      &v20,
      &v18,
      &EventDescriptor,
      &v23,
      &v19,
      &v22);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
  if ( a4 != 2 )
  {
    v10 = SingleViewExperienceLogging::Provider();
    v11 = v10;
    if ( *(_DWORD *)v10 > 5u
      && (*((_QWORD *)v10 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v10 + 3) & 0x400000000000LL) == *((_QWORD *)v10 + 3) )
    {
      v12 = (const GUID *)(*((_QWORD *)this + 34) + 8LL);
      v20 = 0x1000000LL;
      v31 = &v20;
      v32 = 8LL;
      if ( a3 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( a3[v13] );
        v14 = 2 * v13 + 2;
      }
      else
      {
        a3 = &pvData;
        v14 = 2;
      }
      v29 = v14;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *((_QWORD *)v11 + 1);
      EventDescriptor.Keyword = 0x400000000000LL;
      v28 = a3;
      v30 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v25 = &unk_180831AC0;
      UserData.Reserved = 2;
      v26 = 46;
      v27 = 1;
      v18 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v11 + 4), &EventDescriptor, v12, 0LL, 4u, &UserData);
    }
  }
}
