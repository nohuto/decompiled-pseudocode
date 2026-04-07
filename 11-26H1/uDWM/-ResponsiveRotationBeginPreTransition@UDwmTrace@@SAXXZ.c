/*
 * XREFs of ?ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ @ 0x1800D35F8
 * Callers:
 *     ?PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800D3404 (-PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4Sh.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004020C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180041484 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 */

void __fastcall UDwmTrace::ResponsiveRotationBeginPreTransition(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rcx
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_DWORD *)wil::details::static_lazy<UDwmTrace>::get(a1, a2)[1];
  if ( *v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
    {
      v6 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v3,
        (int)&unk_180101538,
        v4,
        v5,
        (__int64)&v6);
    }
  }
}
