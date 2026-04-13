/*
 * XREFs of ?StartActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180070D9C
 * Callers:
 *     _lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_::operator() @ 0x18006E9DC (_lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x180001C90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@55@Z @ 0x180002BA0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U3@@-$_tlgWriteTe.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044AC0 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x18005C914 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?zInternalStart@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180065D6C (-zInternalStart@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  const GUID *v13; // rcx
  const wchar_t *v14; // [rsp+50h] [rbp-38h] BYREF
  const wchar_t *v15; // [rsp+58h] [rbp-30h] BYREF
  const wchar_t *v16; // [rsp+60h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp-20h] BYREF
  DWORD v18; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v8);
  v10 = (__int64)v9;
  if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 0x200000000000LL) )
  {
    v14 = a4;
    v15 = a3;
    v16 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v12 = *((_QWORD *)this + 34);
    v18 = CurrentThreadId;
    v17 = 0x1000000LL;
    if ( !*(_BYTE *)(v12 + 4) || _tlgGuidIsZero((const struct _GUID *)(v12 + 24)) )
      v13 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v10,
      byte_180166061,
      (const GUID *)(v12 + 8),
      v13,
      (__int64)&v17,
      (__int64)&v18,
      &v16,
      &v15,
      &v14);
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
