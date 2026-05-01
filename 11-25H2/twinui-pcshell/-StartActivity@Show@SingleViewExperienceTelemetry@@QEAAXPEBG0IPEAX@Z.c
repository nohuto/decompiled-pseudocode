/*
 * XREFs of ?StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x180019A68
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001BAEC (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180016A80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180016E10 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180019990 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800310C4 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@543@Z @ 0x1801C2F0C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U1@@-$_tlgWrit.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
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
  __int64 v15; // rax
  DWORD CurrentThreadId; // [rsp+58h] [rbp-51h] BYREF
  int v17; // [rsp+5Ch] [rbp-4Dh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-49h] BYREF
  void *v19; // [rsp+70h] [rbp-39h] BYREF
  const unsigned __int16 *v20; // [rsp+78h] [rbp-31h] BYREF
  const unsigned __int16 *v21; // [rsp+80h] [rbp-29h] BYREF
  __int64 v22; // [rsp+88h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-11h] BYREF
  void *v24; // [rsp+A8h] [rbp-1h]
  int v25; // [rsp+B0h] [rbp+7h]
  int v26; // [rsp+B4h] [rbp+Bh]
  const unsigned __int16 *v27; // [rsp+B8h] [rbp+Fh]
  int v28; // [rsp+C0h] [rbp+17h]
  int v29; // [rsp+C4h] [rbp+1Bh]
  __int64 *v30; // [rsp+C8h] [rbp+1Fh]
  __int64 v31; // [rsp+D0h] [rbp+27h]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v9 > 5u
    && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v9 + 3) & 0x200000000000LL) == *((_QWORD *)v9 + 3) )
  {
    v19 = a5;
    v17 = a4;
    v20 = a3;
    v21 = a2;
    *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
    CurrentThreadId = GetCurrentThreadId();
    v15 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    ((void (__fastcall *)(const struct _tlgProvider_t *, void *, __int64, __int64, EVENT_DESCRIPTOR *, DWORD *, const unsigned __int16 **, const unsigned __int16 **, int *, void **))_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>)(
      v9,
      &unk_1807F255C,
      *((_QWORD *)this + 34) + 8LL,
      v15,
      &EventDescriptor,
      &CurrentThreadId,
      &v21,
      &v20,
      &v17,
      &v19);
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
      v22 = 0x1000000LL;
      v30 = &v22;
      v31 = 8LL;
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
        a3 = &LocaleName;
        v14 = 2;
      }
      v28 = v14;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *((_QWORD *)v11 + 1);
      v29 = 0;
      EventDescriptor.Keyword = 0x400000000000LL;
      v27 = a3;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v24 = &unk_1807F28E7;
      UserData.Reserved = 2;
      v25 = 46;
      v26 = 1;
      CurrentThreadId = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v11 + 4), &EventDescriptor, v12, 0LL, 4u, &UserData);
    }
  }
}
