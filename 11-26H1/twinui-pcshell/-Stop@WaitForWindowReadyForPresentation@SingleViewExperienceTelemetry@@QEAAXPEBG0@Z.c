/*
 * XREFs of ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18001F164
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18002098C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _lambda_46d3d49e2bbb772acd3c21ebc08e3e79_::operator() @ 0x180681984 (_lambda_46d3d49e2bbb772acd3c21ebc08e3e79_--operator().c)
 *     _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x180681A18 (_lambda_6914baa2bbb41478f35591fe55a15932_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645666@Z @ 0x1800118FC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800118FC.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016AD8 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  const struct _tlgProvider_t *v8; // rax
  const struct _tlgProvider_t *v9; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax
  const struct _tlgProvider_t *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rdi
  unsigned int v21; // [rsp+B0h] [rbp-80h] BYREF
  int v22; // [rsp+B4h] [rbp-7Ch] BYREF
  DWORD v23; // [rsp+B8h] [rbp-78h] BYREF
  int v24; // [rsp+BCh] [rbp-74h] BYREF
  int v25; // [rsp+C0h] [rbp-70h] BYREF
  int v26; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v27; // [rsp+C8h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D0h] [rbp-60h] BYREF
  const unsigned __int16 *v29; // [rsp+E0h] [rbp-50h] BYREF
  const unsigned __int16 *v30; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v33; // [rsp+100h] [rbp-30h] BYREF
  __int64 v34; // [rsp+108h] [rbp-28h] BYREF
  __int64 v35; // [rsp+110h] [rbp-20h] BYREF
  __int64 v36; // [rsp+118h] [rbp-18h] BYREF
  __int64 v37; // [rsp+120h] [rbp-10h] BYREF
  __int64 v38; // [rsp+128h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+0h] BYREF
  void *v40; // [rsp+140h] [rbp+10h]
  int v41; // [rsp+148h] [rbp+18h]
  int v42; // [rsp+14Ch] [rbp+1Ch]
  __int64 *v43; // [rsp+150h] [rbp+20h]
  __int64 v44; // [rsp+158h] [rbp+28h]
  int *v45; // [rsp+160h] [rbp+30h]
  __int64 v46; // [rsp+168h] [rbp+38h]
  DWORD *v47; // [rsp+170h] [rbp+40h]
  __int64 v48; // [rsp+178h] [rbp+48h]
  const unsigned __int16 *v49; // [rsp+180h] [rbp+50h]
  int v50; // [rsp+188h] [rbp+58h]
  int v51; // [rsp+18Ch] [rbp+5Ch]
  const unsigned __int16 *v52; // [rsp+190h] [rbp+60h]
  int v53; // [rsp+198h] [rbp+68h]
  int v54; // [rsp+19Ch] [rbp+6Ch]

  v3 = *((_QWORD *)this + 34);
  v7 = *(_DWORD *)(v3 + 72);
  if ( v7 < 0 && (v20 = v3 + 80, v7 == *(_DWORD *)(v20 + 8)) && v20 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v16 = SingleViewExperienceLogging::Provider();
    if ( *(_DWORD *)v16 > 5u && (unsigned __int8)tlgKeywordOn(v16, 0x200000000000LL) )
    {
      v31 = *(_QWORD *)(v20 + 120);
      v32 = *(_QWORD *)(v20 + 112);
      v19 = *((_QWORD *)this + 34);
      v24 = *(_DWORD *)(v20 + 104);
      v33 = *(_QWORD *)(v20 + 96);
      v34 = *(_QWORD *)(v20 + 88);
      v25 = *(_DWORD *)(v20 + 80);
      v35 = *(_QWORD *)(v20 + 72);
      v26 = *(_DWORD *)(v20 + 32);
      v36 = *(_QWORD *)(v20 + 24);
      v21 = *(_DWORD *)v20;
      v37 = *(_QWORD *)(v20 + 128);
      v22 = *(_DWORD *)(v20 + 64);
      v38 = *(_QWORD *)(v20 + 56);
      v23 = *(_DWORD *)(v20 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v27 = 0x1000000LL;
      v29 = a3;
      v30 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v17,
        (__int64)&unk_18083095A,
        v19 + 8,
        v18,
        (__int64)&v27,
        (__int64)&EventDescriptor,
        (__int64)&v23,
        &v38,
        (__int64)&v22,
        &v37,
        (__int64)&v21,
        &v36,
        (__int64)&v26,
        &v35,
        (__int64)&v25,
        &v34,
        &v33,
        (__int64)&v24,
        &v32,
        &v31,
        &v30,
        &v29);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = SingleViewExperienceLogging::Provider();
    v9 = v8;
    if ( *(_DWORD *)v8 > 5u
      && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v11 = *((_QWORD *)this + 34);
      v23 = CurrentThreadId;
      v22 = *(_DWORD *)(v11 + 72);
      v27 = 0x1000000LL;
      v12 = -1LL;
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
      v52 = a3;
      v53 = v14;
      v54 = 0;
      if ( a2 )
      {
        do
          ++v12;
        while ( a2[v12] );
        v15 = 2 * v12 + 2;
      }
      else
      {
        a2 = &pvData;
        v15 = 2;
      }
      v50 = v15;
      v49 = a2;
      v47 = &v23;
      v51 = 0;
      v45 = &v22;
      v48 = 4LL;
      v43 = &v27;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v9 + 1);
      v46 = 4LL;
      v44 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x200000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v40 = &unk_180830B73;
      UserData.Reserved = 2;
      v41 = 105;
      v42 = 1;
      v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v9 + 4), &EventDescriptor, (LPCGUID)(v11 + 8), 0LL, 7u, &UserData);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
