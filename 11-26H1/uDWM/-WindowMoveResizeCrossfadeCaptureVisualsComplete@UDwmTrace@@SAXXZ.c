/*
 * XREFs of ?WindowMoveResizeCrossfadeCaptureVisualsComplete@UDwmTrace@@SAXXZ @ 0x180030A74
 * Callers:
 *     ?PreTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x180030A24 (-PreTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004020C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180041484 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 */

void UDwmTrace::WindowMoveResizeCrossfadeCaptureVisualsComplete(void)
{
  _DWORD *v0; // rcx
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = *(_DWORD **)(wil::details::static_lazy<UDwmTrace>::get() + 8);
  if ( *v0 > 5u )
  {
    if ( (unsigned __int8)tlgKeywordOn(v0, 0x200000000000LL) )
    {
      v4 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v1,
        (unsigned int)&unk_180101665,
        v2,
        v3,
        (__int64)&v4);
    }
  }
}
