/*
 * XREFs of ?Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x18001BFB0
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001BCBC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564@Z @ 0x180001D20 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017928 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001C8F4 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800310C4 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Hide::Stop(SingleViewExperienceTelemetry::Hide *this, int a2)
{
  int *v2; // rax
  int v5; // ecx
  const struct _tlgProvider_t *v6; // rax
  const struct _tlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v9; // rcx
  int *v10; // rdi
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
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
  int v36; // [rsp+158h] [rbp+28h]
  int v37; // [rsp+15Ch] [rbp+2Ch]
  int *v38; // [rsp+160h] [rbp+30h]
  int v39; // [rsp+168h] [rbp+38h]
  int v40; // [rsp+16Ch] [rbp+3Ch]
  DWORD *v41; // [rsp+170h] [rbp+40h]
  int v42; // [rsp+178h] [rbp+48h]
  int v43; // [rsp+17Ch] [rbp+4Ch]
  _DWORD *v44; // [rsp+180h] [rbp+50h]
  int v45; // [rsp+188h] [rbp+58h]
  int v46; // [rsp+18Ch] [rbp+5Ch]

  v2 = (int *)*((_QWORD *)this + 34);
  v5 = v2[18];
  if ( v5 >= 0 || v5 != v2[22] || (v10 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v6 = SingleViewExperienceLogging::Provider();
    v7 = v6;
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v18[0] = a2;
      CurrentThreadId = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 34);
      v46 = 0;
      v43 = 0;
      v40 = 0;
      v37 = 0;
      v17 = CurrentThreadId;
      v16 = *(_DWORD *)(v9 + 72);
      v21 = 0x1000000LL;
      v44 = v18;
      v41 = &v17;
      v38 = &v16;
      v35 = &v21;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v7 + 1);
      v45 = 4;
      v42 = 4;
      v39 = 4;
      v36 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x200000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v32 = &unk_1807F1F38;
      UserData.Reserved = 2;
      v33 = 74;
      v34 = 1;
      v15 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v7 + 4), &EventDescriptor, (LPCGUID)(v9 + 8), 0LL, 6u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v11 = SingleViewExperienceLogging::Provider();
    if ( *(_DWORD *)v11 > 5u && (unsigned __int8)tlgKeywordOn(v11, 0x200000000000LL) )
    {
      v13 = *((_QWORD *)v10 + 15);
      v14 = *((_QWORD *)this + 34);
      v24 = *((_QWORD *)v10 + 14);
      v19 = v10[26];
      v25 = *((_QWORD *)v10 + 12);
      v26 = *((_QWORD *)v10 + 11);
      v20 = v10[20];
      v27 = *((_QWORD *)v10 + 9);
      v15 = v10[8];
      v28 = *((_QWORD *)v10 + 3);
      v16 = *v10;
      v29 = *((_QWORD *)v10 + 16);
      v17 = v10[16];
      v30 = *((_QWORD *)v10 + 7);
      v18[0] = v10[2];
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v21 = 0x1000000LL;
      v23 = v13;
      v18[1] = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v12,
        (__int64)&unk_1807F1FBD,
        v14 + 8,
        v12,
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
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
