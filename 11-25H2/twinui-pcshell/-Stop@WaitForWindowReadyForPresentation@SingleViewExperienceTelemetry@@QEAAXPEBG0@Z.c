/*
 * XREFs of ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18001CCB0
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001A3B4 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _lambda_46d3d49e2bbb772acd3c21ebc08e3e79_::operator() @ 0x18065B7C0 (_lambda_46d3d49e2bbb772acd3c21ebc08e3e79_--operator().c)
 *     _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x18065B854 (_lambda_6914baa2bbb41478f35591fe55a15932_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645666@Z @ 0x18001020C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18001020C.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017928 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001C8F4 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800310C4 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v3; // rax
  int v7; // ecx
  const struct _tlgProvider_t *v8; // rax
  const struct _tlgProvider_t *v9; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rdi
  const struct _tlgProvider_t *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  unsigned int v22; // [rsp+B0h] [rbp-80h] BYREF
  int v23; // [rsp+B4h] [rbp-7Ch] BYREF
  DWORD v24; // [rsp+B8h] [rbp-78h] BYREF
  int v25; // [rsp+BCh] [rbp-74h] BYREF
  int v26; // [rsp+C0h] [rbp-70h] BYREF
  int v27; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v28; // [rsp+C8h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D0h] [rbp-60h] BYREF
  const unsigned __int16 *v30; // [rsp+E0h] [rbp-50h] BYREF
  const unsigned __int16 *v31; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v34; // [rsp+100h] [rbp-30h] BYREF
  __int64 v35; // [rsp+108h] [rbp-28h] BYREF
  __int64 v36; // [rsp+110h] [rbp-20h] BYREF
  __int64 v37; // [rsp+118h] [rbp-18h] BYREF
  __int64 v38; // [rsp+120h] [rbp-10h] BYREF
  __int64 v39; // [rsp+128h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+0h] BYREF
  void *v41; // [rsp+140h] [rbp+10h]
  int v42; // [rsp+148h] [rbp+18h]
  int v43; // [rsp+14Ch] [rbp+1Ch]
  __int64 *v44; // [rsp+150h] [rbp+20h]
  __int64 v45; // [rsp+158h] [rbp+28h]
  int *v46; // [rsp+160h] [rbp+30h]
  __int64 v47; // [rsp+168h] [rbp+38h]
  DWORD *v48; // [rsp+170h] [rbp+40h]
  __int64 v49; // [rsp+178h] [rbp+48h]
  const unsigned __int16 *v50; // [rsp+180h] [rbp+50h]
  int v51; // [rsp+188h] [rbp+58h]
  int v52; // [rsp+18Ch] [rbp+5Ch]
  const unsigned __int16 *v53; // [rsp+190h] [rbp+60h]
  int v54; // [rsp+198h] [rbp+68h]
  int v55; // [rsp+19Ch] [rbp+6Ch]

  v3 = *((_QWORD *)this + 34);
  v7 = *(_DWORD *)(v3 + 72);
  if ( v7 >= 0 || v7 != *(_DWORD *)(v3 + 88) || (v17 = v3 + 80, v3 == -80) )
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
      v24 = CurrentThreadId;
      v12 = (const GUID *)(v11 + 8);
      v23 = *(_DWORD *)(v11 + 72);
      v28 = 0x1000000LL;
      v13 = -1LL;
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
      v53 = a3;
      v54 = v15;
      v55 = 0;
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
      v51 = v16;
      v50 = a2;
      v48 = &v24;
      v52 = 0;
      v46 = &v23;
      v44 = &v28;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v9 + 1);
      v49 = 4LL;
      v47 = 4LL;
      v45 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x200000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v41 = &unk_1807F16BF;
      UserData.Reserved = 2;
      v42 = 105;
      v43 = 1;
      v22 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v9 + 4), &EventDescriptor, v12, 0LL, 7u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v18 = SingleViewExperienceLogging::Provider();
    if ( *(_DWORD *)v18 > 5u && (unsigned __int8)tlgKeywordOn(v18, 0x200000000000LL) )
    {
      v32 = *(_QWORD *)(v17 + 120);
      v33 = *(_QWORD *)(v17 + 112);
      v21 = *((_QWORD *)this + 34);
      v25 = *(_DWORD *)(v17 + 104);
      v34 = *(_QWORD *)(v17 + 96);
      v35 = *(_QWORD *)(v17 + 88);
      v26 = *(_DWORD *)(v17 + 80);
      v36 = *(_QWORD *)(v17 + 72);
      v27 = *(_DWORD *)(v17 + 32);
      v37 = *(_QWORD *)(v17 + 24);
      v22 = *(_DWORD *)v17;
      v38 = *(_QWORD *)(v17 + 128);
      v23 = *(_DWORD *)(v17 + 64);
      v39 = *(_QWORD *)(v17 + 56);
      v24 = *(_DWORD *)(v17 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v28 = 0x1000000LL;
      v30 = a3;
      v31 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v19,
        (__int64)&unk_1807F1222,
        v21 + 8,
        v20,
        (__int64)&v28,
        (__int64)&EventDescriptor,
        (__int64)&v24,
        &v39,
        (__int64)&v23,
        &v38,
        (__int64)&v22,
        &v37,
        (__int64)&v27,
        &v36,
        (__int64)&v26,
        &v35,
        &v34,
        (__int64)&v25,
        &v33,
        &v32,
        &v31,
        &v30);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
