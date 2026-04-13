/*
 * XREFs of ?Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18008C154
 * Callers:
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18008BA70 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@454564564455@Z @ 0x180003400 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180003400.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x180003818 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044AC0 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 *     ?zInternalStop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18005F6C0 (-zInternalStop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *this,
        const wchar_t *a2)
{
  __int64 v2; // rdi
  int v5; // eax
  int *v6; // rdi
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // r9
  const wchar_t *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+C0h] [rbp-80h] BYREF
  int v17; // [rsp+C4h] [rbp-7Ch] BYREF
  int v18; // [rsp+C8h] [rbp-78h] BYREF
  int v19; // [rsp+CCh] [rbp-74h] BYREF
  int v20; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-68h] BYREF
  const wchar_t *v22; // [rsp+E0h] [rbp-60h] BYREF
  const wchar_t *v23; // [rsp+E8h] [rbp-58h] BYREF
  const wchar_t *v24; // [rsp+F0h] [rbp-50h] BYREF
  const wchar_t *v25; // [rsp+F8h] [rbp-48h] BYREF
  const wchar_t *v26; // [rsp+100h] [rbp-40h] BYREF
  const wchar_t *v27; // [rsp+108h] [rbp-38h] BYREF
  const wchar_t *v28; // [rsp+110h] [rbp-30h] BYREF
  const wchar_t *v29; // [rsp+118h] [rbp-28h] BYREF
  const wchar_t *v30; // [rsp+120h] [rbp-20h] BYREF
  const wchar_t *v31; // [rsp+128h] [rbp-18h] BYREF
  __int64 v32; // [rsp+130h] [rbp-10h] BYREF
  DWORD v33; // [rsp+160h] [rbp+20h] BYREF
  int v34; // [rsp+170h] [rbp+30h] BYREF
  const wchar_t *v35; // [rsp+178h] [rbp+38h] BYREF

  v2 = *((_QWORD *)this + 34);
  v5 = *(_DWORD *)(v2 + 72);
  if ( v5 < 0 && (v6 = (int *)(v2 + 80), v5 == v6[2]) && v6 )
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v7);
    if ( *(_DWORD *)v8 > 5u )
    {
      v9 = (const wchar_t *)*((_QWORD *)v6 + 6);
      v25 = (const wchar_t *)*((_QWORD *)v6 + 14);
      LODWORD(v35) = v6[26];
      v10 = *((_QWORD *)this + 34);
      v26 = (const wchar_t *)*((_QWORD *)v6 + 12);
      v27 = (const wchar_t *)*((_QWORD *)v6 + 11);
      v16 = v6[20];
      v28 = (const wchar_t *)*((_QWORD *)v6 + 9);
      v17 = v6[8];
      v29 = (const wchar_t *)*((_QWORD *)v6 + 3);
      v18 = *v6;
      v30 = (const wchar_t *)*((_QWORD *)v6 + 16);
      v19 = v6[16];
      v31 = (const wchar_t *)*((_QWORD *)v6 + 7);
      v20 = v6[2];
      v23 = v9;
      v33 = v6[17];
      v34 = v6[4];
      v24 = (const wchar_t *)*((_QWORD *)v6 + 15);
      v22 = a2;
      v32 = 0x1000000LL;
      v21 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        (__int64)v8,
        byte_180167CD6,
        (const GUID *)(v10 + 8),
        (__int64)v8,
        (__int64)&v21,
        (__int64)&v32,
        (__int64)&v20,
        &v31,
        (__int64)&v19,
        &v30,
        (__int64)&v18,
        &v29,
        (__int64)&v17,
        &v28,
        (__int64)&v16,
        &v27,
        &v26,
        (__int64)&v35,
        &v25,
        &v24,
        (__int64)&v34,
        (__int64)&v33,
        &v23,
        &v22);
    }
  }
  else
  {
    wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v11);
    if ( *(_DWORD *)v12 > 5u )
    {
      v35 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 34);
      v33 = CurrentThreadId;
      v34 = *(_DWORD *)(v14 + 72);
      v21 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v12,
        byte_180167B31,
        (const GUID *)(v14 + 8),
        v15,
        (__int64)&v21,
        (__int64)&v34,
        (__int64)&v33,
        &v35);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
