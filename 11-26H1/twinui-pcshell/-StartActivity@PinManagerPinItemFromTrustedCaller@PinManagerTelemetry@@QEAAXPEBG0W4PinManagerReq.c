/*
 * XREFs of ?StartActivity@PinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@QEAAXPEBG0W4PinManagerRequestPinItemResult@2@@Z @ 0x1805E9580
 * Callers:
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1805E7DD0 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@54@Z @ 0x180024000 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@@-$_tlgWriteTe.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180283940 (-Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180284CE0 (-zInternalStart@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect.c)
 */

void __fastcall PinManagerTelemetry::PinManagerPinItemFromTrustedCaller::StartActivity(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        int a4)
{
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  const GUID *v13; // rcx
  DWORD v14; // [rsp+50h] [rbp-38h] BYREF
  const WCHAR *v15; // [rsp+58h] [rbp-30h] BYREF
  const WCHAR *v16; // [rsp+60h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp-20h] BYREF
  int v18; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v9 = PinManagerTelemetry::Provider(v8);
  v10 = (__int64)v9;
  if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
  {
    v18 = a4;
    v15 = a3;
    v16 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v12 = *(_QWORD *)(a1 + 272);
    v14 = CurrentThreadId;
    v17 = 0x2000000LL;
    if ( !*(_BYTE *)(v12 + 4) || _tlgGuidIsZero((const struct _GUID *)(v12 + 24)) )
      v13 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v10,
      byte_1808265D2,
      (const GUID *)(v12 + 8),
      v13,
      (__int64)&v17,
      (__int64)&v14,
      &v16,
      &v15,
      (__int64)&v18);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(a1);
}
