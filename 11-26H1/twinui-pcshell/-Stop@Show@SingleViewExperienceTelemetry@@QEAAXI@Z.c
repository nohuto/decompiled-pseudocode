/*
 * XREFs of ?Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x18001F4F4
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002050C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564@Z @ 0x180001DD8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016AD8 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Show::Stop(SingleViewExperienceTelemetry::Show *this, int a2)
{
  __int64 v2; // rdi
  int v5; // eax
  const struct _tlgProvider_t *v6; // rax
  const struct _tlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  int *v14; // rdi
  unsigned int v15; // [rsp+B0h] [rbp-80h] BYREF
  int v16; // [rsp+B4h] [rbp-7Ch] BYREF
  DWORD v17; // [rsp+B8h] [rbp-78h] BYREF
  _DWORD v18[2]; // [rsp+BCh] [rbp-74h] BYREF
  int v19; // [rsp+C4h] [rbp-6Ch] BYREF
  int v20; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v26; // [rsp+100h] [rbp-30h] BYREF
  __int64 v27; // [rsp+108h] [rbp-28h] BYREF
  __int64 v28; // [rsp+110h] [rbp-20h] BYREF
  __int64 v29; // [rsp+118h] [rbp-18h] BYREF
  __int64 v30; // [rsp+120h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+0h] BYREF
  void *v32; // [rsp+140h] [rbp+10h]
  int v33; // [rsp+148h] [rbp+18h]
  int v34; // [rsp+14Ch] [rbp+1Ch]
  __int64 *v35; // [rsp+150h] [rbp+20h]
  __int64 v36; // [rsp+158h] [rbp+28h]
  int *v37; // [rsp+160h] [rbp+30h]
  __int64 v38; // [rsp+168h] [rbp+38h]
  DWORD *v39; // [rsp+170h] [rbp+40h]
  __int64 v40; // [rsp+178h] [rbp+48h]
  _DWORD *v41; // [rsp+180h] [rbp+50h]
  __int64 v42; // [rsp+188h] [rbp+58h]

  v2 = *((_QWORD *)this + 34);
  v5 = *(_DWORD *)(v2 + 72);
  if ( v5 < 0 && (v14 = (int *)(v2 + 80), v5 == v14[2]) && v14 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = SingleViewExperienceLogging::Provider();
    if ( *(_DWORD *)v10 > 5u && (unsigned __int8)tlgKeywordOn(v10, 0x200000000000LL) )
    {
      v12 = *((_QWORD *)v14 + 15);
      v13 = *((_QWORD *)this + 34);
      v24 = *((_QWORD *)v14 + 14);
      v19 = v14[26];
      v25 = *((_QWORD *)v14 + 12);
      v26 = *((_QWORD *)v14 + 11);
      v20 = v14[20];
      v27 = *((_QWORD *)v14 + 9);
      v15 = v14[8];
      v28 = *((_QWORD *)v14 + 3);
      v16 = *v14;
      v29 = *((_QWORD *)v14 + 16);
      v17 = v14[16];
      v30 = *((_QWORD *)v14 + 7);
      v18[0] = v14[2];
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v21 = 0x1000000LL;
      v23 = v12;
      v18[1] = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v11,
        (__int64)&unk_18083127C,
        v13 + 8,
        v11,
        (__int64)&v21,
        (__int64)&EventDescriptor,
        (__int64)v18,
        &v30,
        (__int64)&v17,
        &v29,
        (__int64)&v16,
        &v28,
        (__int64)&v15,
        &v27,
        (__int64)&v20,
        &v26,
        &v25,
        (__int64)&v19,
        &v24,
        &v23);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v6 = SingleViewExperienceLogging::Provider();
    v7 = v6;
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v18[0] = a2;
      CurrentThreadId = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 34);
      v17 = CurrentThreadId;
      v42 = 4LL;
      v40 = 4LL;
      v16 = *(_DWORD *)(v9 + 72);
      v21 = 0x1000000LL;
      v41 = v18;
      v39 = &v17;
      v37 = &v16;
      v35 = &v21;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v7 + 1);
      v38 = 4LL;
      v36 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x200000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v32 = &unk_1808314D0;
      UserData.Reserved = 2;
      v33 = 74;
      v34 = 1;
      v15 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v7 + 4), &EventDescriptor, (LPCGUID)(v9 + 8), 0LL, 6u, &UserData);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
