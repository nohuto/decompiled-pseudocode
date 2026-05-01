/*
 * XREFs of ?StopActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1801DA3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001773C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800310C4 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180042A88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1800908D8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800908D8.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnViewPropertiesChangedBase::StopActivity(
        SingleViewExperienceTelemetry::OnViewPropertiesChangedBase *this)
{
  int *v1; // rax
  int v3; // ecx
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  int v8; // ecx
  int *v9; // rdi
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // r9
  const wchar_t *v12; // rcx
  __int64 v13; // r8
  const WCHAR *v14; // rax
  int v15; // [rsp+C0h] [rbp-80h] BYREF
  int v16; // [rsp+C4h] [rbp-7Ch] BYREF
  int v17; // [rsp+C8h] [rbp-78h] BYREF
  int v18; // [rsp+CCh] [rbp-74h] BYREF
  const wchar_t *v19; // [rsp+D0h] [rbp-70h] BYREF
  const WCHAR *v20; // [rsp+D8h] [rbp-68h] BYREF
  const wchar_t *v21; // [rsp+E0h] [rbp-60h] BYREF
  const WCHAR *v22; // [rsp+E8h] [rbp-58h] BYREF
  const wchar_t *v23; // [rsp+F0h] [rbp-50h] BYREF
  const wchar_t *v24; // [rsp+F8h] [rbp-48h] BYREF
  const WCHAR *v25; // [rsp+100h] [rbp-40h] BYREF
  const wchar_t *v26; // [rsp+108h] [rbp-38h] BYREF
  const wchar_t *v27; // [rsp+110h] [rbp-30h] BYREF
  __int64 v28; // [rsp+118h] [rbp-28h] BYREF
  _QWORD v29[4]; // [rsp+120h] [rbp-20h] BYREF
  DWORD v30; // [rsp+150h] [rbp+10h] BYREF
  int v31; // [rsp+158h] [rbp+18h] BYREF
  __int64 v32; // [rsp+160h] [rbp+20h] BYREF
  int v33; // [rsp+168h] [rbp+28h] BYREF

  v1 = (int *)*((_QWORD *)this + 34);
  v3 = v1[18];
  if ( v3 >= 0 || v3 != v1[22] || (v9 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v5 = SingleViewExperienceLogging::Provider(v4);
    if ( *(_DWORD *)v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 34);
      v30 = CurrentThreadId;
      v8 = *(_DWORD *)(v7 + 72);
      v32 = 0LL;
      v31 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v5,
        byte_1807F0D4D,
        (const GUID *)(v7 + 8),
        0LL,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = SingleViewExperienceLogging::Provider(v10);
    if ( *(_DWORD *)v11 > 5u )
    {
      v12 = (const wchar_t *)*((_QWORD *)v9 + 6);
      v13 = *((_QWORD *)this + 34);
      LODWORD(v32) = v9[26];
      v14 = (const WCHAR *)*((_QWORD *)v9 + 12);
      v29[0] = 0LL;
      v22 = v14;
      v23 = (const wchar_t *)*((_QWORD *)v9 + 11);
      v33 = v9[20];
      v24 = (const wchar_t *)*((_QWORD *)v9 + 9);
      v15 = v9[8];
      v25 = (const WCHAR *)*((_QWORD *)v9 + 3);
      v16 = *v9;
      v26 = (const wchar_t *)*((_QWORD *)v9 + 16);
      v17 = v9[16];
      v27 = (const wchar_t *)*((_QWORD *)v9 + 7);
      v18 = v9[2];
      v19 = v12;
      v30 = v9[17];
      v31 = v9[4];
      v20 = (const WCHAR *)*((_QWORD *)v9 + 15);
      v21 = (const wchar_t *)*((_QWORD *)v9 + 14);
      v28 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v11,
        byte_1807F081E,
        (const GUID *)(v13 + 8),
        (__int64)v11,
        (__int64)v29,
        (__int64)&v28,
        (__int64)&v18,
        &v27,
        (__int64)&v17,
        &v26,
        (__int64)&v16,
        &v25,
        (__int64)&v15,
        &v24,
        (__int64)&v33,
        &v23,
        &v22,
        (__int64)&v32,
        &v21,
        &v20,
        (__int64)&v31,
        (__int64)&v30,
        &v19);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
