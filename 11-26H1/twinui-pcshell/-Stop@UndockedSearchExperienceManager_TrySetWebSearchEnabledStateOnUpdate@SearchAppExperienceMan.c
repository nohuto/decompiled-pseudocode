/*
 * XREFs of ?Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAX_N000@Z @ 0x1803B9574
 * Callers:
 *     _lambda_db605a5d8bd7eecf6dbd275f52e09d94_::operator() @ 0x1803AF53C (_lambda_db605a5d8bd7eecf6dbd275f52e09d94_--operator().c)
 *     ?TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803BA110 (-TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByVal@$00@@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByVal@$00@@777@Z @ 0x180004330 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180004330.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BCA70 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180333714 (-zInternalStop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAA.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::Stop(
        SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *this,
        bool a2,
        char a3,
        char a4,
        bool a5)
{
  __int64 v5; // rdi
  int v10; // eax
  int *v11; // rdi
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  const struct _tlgProvider_t *v17; // rax
  __int64 v18; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  bool v21; // [rsp+C8h] [rbp-80h] BYREF
  char v22; // [rsp+C9h] [rbp-7Fh] BYREF
  char v23; // [rsp+CAh] [rbp-7Eh] BYREF
  bool v24; // [rsp+CBh] [rbp-7Dh] BYREF
  int v25; // [rsp+CCh] [rbp-7Ch] BYREF
  DWORD v26; // [rsp+D0h] [rbp-78h] BYREF
  int v27; // [rsp+D4h] [rbp-74h] BYREF
  int v28; // [rsp+D8h] [rbp-70h] BYREF
  int v29; // [rsp+DCh] [rbp-6Ch] BYREF
  int v30; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v34; // [rsp+100h] [rbp-48h] BYREF
  __int64 v35; // [rsp+108h] [rbp-40h] BYREF
  __int64 v36; // [rsp+110h] [rbp-38h] BYREF
  __int64 v37; // [rsp+118h] [rbp-30h] BYREF
  __int64 v38; // [rsp+120h] [rbp-28h] BYREF
  __int64 v39; // [rsp+128h] [rbp-20h] BYREF
  __int64 v40; // [rsp+130h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+138h] [rbp-10h] BYREF
  __int64 *v42; // [rsp+158h] [rbp+10h]
  __int64 v43; // [rsp+160h] [rbp+18h]
  int *v44; // [rsp+168h] [rbp+20h]
  __int64 v45; // [rsp+170h] [rbp+28h]
  DWORD *v46; // [rsp+178h] [rbp+30h]
  __int64 v47; // [rsp+180h] [rbp+38h]
  bool *v48; // [rsp+188h] [rbp+40h]
  __int64 v49; // [rsp+190h] [rbp+48h]
  char *v50; // [rsp+198h] [rbp+50h]
  __int64 v51; // [rsp+1A0h] [rbp+58h]
  char *v52; // [rsp+1A8h] [rbp+60h]
  __int64 v53; // [rsp+1B0h] [rbp+68h]
  bool *v54; // [rsp+1B8h] [rbp+70h]
  __int64 v55; // [rsp+1C0h] [rbp+78h]

  v5 = *((_QWORD *)this + 34);
  v10 = *(_DWORD *)(v5 + 72);
  if ( v10 < 0 && (v11 = (int *)(v5 + 80), v10 == v11[2]) && v11 )
  {
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = SearchAppLauncherLogging::Provider(v12);
    if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v32 = *((_QWORD *)v11 + 15);
      v33 = *((_QWORD *)v11 + 14);
      v27 = v11[26];
      v34 = *((_QWORD *)v11 + 12);
      v15 = *((_QWORD *)this + 34);
      v35 = *((_QWORD *)v11 + 11);
      v28 = v11[20];
      v36 = *((_QWORD *)v11 + 9);
      v29 = v11[8];
      v37 = *((_QWORD *)v11 + 3);
      v30 = *v11;
      v38 = *((_QWORD *)v11 + 16);
      v25 = v11[16];
      v39 = *((_QWORD *)v11 + 7);
      v26 = v11[2];
      v40 = 0x1000000LL;
      v31 = 0x1000000LL;
      v21 = a5;
      v22 = a4;
      v23 = a3;
      v24 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v14,
        (__int64)&unk_1807FADCE,
        v15 + 8,
        v14,
        (__int64)&v31,
        (__int64)&v40,
        (__int64)&v26,
        &v39,
        (__int64)&v25,
        &v38,
        (__int64)&v30,
        &v37,
        (__int64)&v29,
        &v36,
        (__int64)&v28,
        &v35,
        &v34,
        (__int64)&v27,
        &v33,
        &v32);
    }
  }
  else
  {
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v17 = SearchAppLauncherLogging::Provider(v16);
    v18 = (__int64)v17;
    if ( *(_DWORD *)v17 > 5u && tlgKeywordOn((__int64)v17, 0x400000000000LL) )
    {
      v24 = a5;
      v23 = a4;
      v22 = a3;
      v21 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v20 = *((_QWORD *)this + 34);
      v26 = CurrentThreadId;
      v55 = 1LL;
      v53 = 1LL;
      v25 = *(_DWORD *)(v20 + 72);
      v31 = 0x1000000LL;
      v54 = &v24;
      v52 = &v23;
      v50 = &v22;
      v48 = &v21;
      v46 = &v26;
      v44 = &v25;
      v42 = &v31;
      v51 = 1LL;
      v49 = 1LL;
      v47 = 4LL;
      v45 = 4LL;
      v43 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v18, byte_1807FAFE8, (const GUID *)(v20 + 8), 0LL, 9u, &v41);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
