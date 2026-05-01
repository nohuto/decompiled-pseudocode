/*
 * XREFs of ?StopActivity@EnumSnappedWindows@CSnapComponentTelemetry@@MEAAXXZ @ 0x1801DEC10
 * Callers:
 *     <none>
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180040A58 (-IgnoreCurrentThread@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180058400 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1800908D8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800908D8.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall CSnapComponentTelemetry::EnumSnappedWindows::StopActivity(
        CSnapComponentTelemetry::EnumSnappedWindows *this)
{
  __int64 v1; // rax
  int v3; // ecx
  __int64 v4; // rdi
  const struct _tlgProvider_t *v5; // r9
  const wchar_t *v6; // rcx
  __int64 v7; // r8
  const WCHAR *v8; // rax
  const struct _tlgProvider_t *v9; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v11; // rdx
  int v12; // ecx
  unsigned int v13; // [rsp+C0h] [rbp-80h] BYREF
  int v14; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD v15; // [rsp+C8h] [rbp-78h] BYREF
  int v16; // [rsp+CCh] [rbp-74h] BYREF
  int v17; // [rsp+D0h] [rbp-70h] BYREF
  int v18; // [rsp+D4h] [rbp-6Ch] BYREF
  int v19; // [rsp+D8h] [rbp-68h] BYREF
  int v20; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E8h] [rbp-58h] BYREF
  const wchar_t *v23; // [rsp+F8h] [rbp-48h] BYREF
  const WCHAR *v24; // [rsp+100h] [rbp-40h] BYREF
  const wchar_t *v25; // [rsp+108h] [rbp-38h] BYREF
  const WCHAR *v26; // [rsp+110h] [rbp-30h] BYREF
  const wchar_t *v27; // [rsp+118h] [rbp-28h] BYREF
  const wchar_t *v28; // [rsp+120h] [rbp-20h] BYREF
  const WCHAR *v29; // [rsp+128h] [rbp-18h] BYREF
  const wchar_t *v30; // [rsp+130h] [rbp-10h] BYREF
  const wchar_t *v31; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+0h] BYREF
  void *v33; // [rsp+150h] [rbp+10h]
  int v34; // [rsp+158h] [rbp+18h]
  int v35; // [rsp+15Ch] [rbp+1Ch]
  __int64 *v36; // [rsp+160h] [rbp+20h]
  int v37; // [rsp+168h] [rbp+28h]
  int v38; // [rsp+16Ch] [rbp+2Ch]
  int *v39; // [rsp+170h] [rbp+30h]
  int v40; // [rsp+178h] [rbp+38h]
  int v41; // [rsp+17Ch] [rbp+3Ch]
  DWORD *v42; // [rsp+180h] [rbp+40h]
  int v43; // [rsp+188h] [rbp+48h]
  int v44; // [rsp+18Ch] [rbp+4Ch]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 >= 0 || v3 != *(_DWORD *)(v1 + 88) || (v4 = v1 + 80, v1 == -80) )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v9 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v9 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v11 = *((_QWORD *)this + 34);
      v44 = 0;
      v41 = 0;
      v38 = 0;
      EventDescriptor.Keyword = 0LL;
      v15 = CurrentThreadId;
      v12 = *(_DWORD *)(v11 + 72);
      v21 = 0LL;
      v42 = &v15;
      v39 = &v14;
      v36 = &v21;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v9 + 1);
      v14 = v12;
      v43 = 4;
      v40 = 4;
      v37 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v33 = &unk_1807E79F1;
      UserData.Reserved = 2;
      v34 = 71;
      v35 = 1;
      v13 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v9 + 4), &EventDescriptor, (LPCGUID)(v11 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v5 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v5 > 5u )
    {
      v6 = *(const wchar_t **)(v4 + 48);
      v7 = *((_QWORD *)this + 34);
      v18 = *(_DWORD *)(v4 + 104);
      v8 = *(const WCHAR **)(v4 + 96);
      v21 = 0LL;
      v26 = v8;
      v27 = *(const wchar_t **)(v4 + 88);
      v19 = *(_DWORD *)(v4 + 80);
      v28 = *(const wchar_t **)(v4 + 72);
      v20 = *(_DWORD *)(v4 + 32);
      v29 = *(const WCHAR **)(v4 + 24);
      v13 = *(_DWORD *)v4;
      v30 = *(const wchar_t **)(v4 + 128);
      v14 = *(_DWORD *)(v4 + 64);
      v31 = *(const wchar_t **)(v4 + 56);
      v15 = *(_DWORD *)(v4 + 8);
      v23 = v6;
      v16 = *(_DWORD *)(v4 + 68);
      v17 = *(_DWORD *)(v4 + 16);
      v24 = *(const WCHAR **)(v4 + 120);
      v25 = *(const wchar_t **)(v4 + 112);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v5,
        byte_1807E7899,
        (const GUID *)(v7 + 8),
        (__int64)v5,
        (__int64)&v21,
        (__int64)&EventDescriptor,
        (__int64)&v15,
        &v31,
        (__int64)&v14,
        &v30,
        (__int64)&v13,
        &v29,
        (__int64)&v20,
        &v28,
        (__int64)&v19,
        &v27,
        &v26,
        (__int64)&v18,
        &v25,
        &v24,
        (__int64)&v17,
        (__int64)&v16,
        &v23);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
