/*
 * XREFs of ??$ScreenClippingInvoked@H@ScreenClippingCommonTelemetry@@SAX$$QEAH@Z @ 0x180392CA0
 * Callers:
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803943C8 (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800FCC90 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?get@?$static_lazy@VShellScreenClippingLogging@@@details@wil@@QEAAPEAVShellScreenClippingLogging@@P6AXXZ@Z @ 0x180394604 (-get@-$static_lazy@VShellScreenClippingLogging@@@details@wil@@QEAAPEAVShellScreenClippingLogging.c)
 */

char __fastcall ScreenClippingCommonTelemetry::ScreenClippingInvoked<int>(int *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = wil::details::static_lazy<ShellScreenClippingLogging>::get(
         a1,
         _lambda_d71f6d60408a6de3c75f9a9c93a2d5fc_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(v2 + 8);
  if ( *v3 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v3, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v7 = *a1;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                     v4,
                     byte_1807C5160,
                     0LL,
                     v5,
                     (__int64)&v7);
    }
  }
  return v2;
}
