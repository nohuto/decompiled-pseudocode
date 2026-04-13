/*
 * XREFs of ?Stop@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBD@Z @ 0x18007F94C
 * Callers:
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::operator() @ 0x18007C934 (_lambda_0f325790d88d3e0e1d8faff7704602cc_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@4545645644545@Z @ 0x18000309C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000309C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@D@@@Z @ 0x18000374C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044AC0 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 *     ?zInternalStop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18005F6C0 (-zInternalStop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this,
        int a2,
        const wchar_t *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  int *v8; // rdi
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // r9
  const wchar_t *v11; // rcx
  __int64 v12; // r8
  const wchar_t *v13; // rcx
  __int64 v14; // rcx
  const struct _tlgProvider_t *v15; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+D0h] [rbp-80h] BYREF
  int v20; // [rsp+D4h] [rbp-7Ch] BYREF
  int v21; // [rsp+D8h] [rbp-78h] BYREF
  int v22; // [rsp+DCh] [rbp-74h] BYREF
  int v23; // [rsp+E0h] [rbp-70h] BYREF
  int v24; // [rsp+E4h] [rbp-6Ch] BYREF
  int v25; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-60h] BYREF
  const wchar_t *v27; // [rsp+F8h] [rbp-58h] BYREF
  const wchar_t *v28; // [rsp+100h] [rbp-50h] BYREF
  const wchar_t *v29; // [rsp+108h] [rbp-48h] BYREF
  const wchar_t *v30; // [rsp+110h] [rbp-40h] BYREF
  const wchar_t *v31; // [rsp+118h] [rbp-38h] BYREF
  const wchar_t *v32; // [rsp+120h] [rbp-30h] BYREF
  const wchar_t *v33; // [rsp+128h] [rbp-28h] BYREF
  const wchar_t *v34; // [rsp+130h] [rbp-20h] BYREF
  const wchar_t *v35; // [rsp+138h] [rbp-18h] BYREF
  const wchar_t *v36; // [rsp+140h] [rbp-10h] BYREF
  const wchar_t *v37; // [rsp+148h] [rbp-8h] BYREF
  int v38; // [rsp+170h] [rbp+20h] BYREF
  DWORD v39; // [rsp+188h] [rbp+38h] BYREF

  v3 = *((_QWORD *)this + 34);
  v7 = *(_DWORD *)(v3 + 72);
  if ( v7 < 0 && (v8 = (int *)(v3 + 80), v7 == v8[2]) && v8 )
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v9);
    if ( *(_DWORD *)v10 > 5u )
    {
      v31 = (const wchar_t *)*((_QWORD *)v8 + 14);
      v11 = (const wchar_t *)*((_QWORD *)v8 + 6);
      v21 = v8[26];
      v32 = (const wchar_t *)*((_QWORD *)v8 + 12);
      v12 = *((_QWORD *)this + 34);
      v33 = (const wchar_t *)*((_QWORD *)v8 + 11);
      v22 = v8[20];
      v34 = (const wchar_t *)*((_QWORD *)v8 + 9);
      v23 = v8[8];
      v35 = (const wchar_t *)*((_QWORD *)v8 + 3);
      v24 = *v8;
      v36 = (const wchar_t *)*((_QWORD *)v8 + 16);
      v25 = v8[16];
      v37 = (const wchar_t *)*((_QWORD *)v8 + 7);
      v19 = v8[2];
      v29 = v11;
      v39 = v8[17];
      v20 = v8[4];
      v13 = (const wchar_t *)*((_QWORD *)v8 + 15);
      v28 = a3;
      v38 = a2;
      v30 = v13;
      v26 = 0x1000000LL;
      v27 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v10,
        byte_180166CDB,
        (const GUID *)(v12 + 8),
        (__int64)v10,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v19,
        &v37,
        (__int64)&v25,
        &v36,
        (__int64)&v24,
        &v35,
        (__int64)&v23,
        &v34,
        (__int64)&v22,
        &v33,
        &v32,
        (__int64)&v21,
        &v31,
        &v30,
        (__int64)&v20,
        (__int64)&v39,
        &v29,
        (__int64)&v38,
        &v28);
    }
  }
  else
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v15 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v14);
    if ( *(_DWORD *)v15 > 5u )
    {
      v27 = a3;
      v38 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v17 = *((_QWORD *)this + 34);
      v39 = CurrentThreadId;
      v19 = *(_DWORD *)(v17 + 72);
      v26 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v15,
        byte_1801674E1,
        (const GUID *)(v17 + 8),
        v18,
        (__int64)&v26,
        (__int64)&v19,
        (__int64)&v39,
        (__int64)&v38,
        &v27);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
