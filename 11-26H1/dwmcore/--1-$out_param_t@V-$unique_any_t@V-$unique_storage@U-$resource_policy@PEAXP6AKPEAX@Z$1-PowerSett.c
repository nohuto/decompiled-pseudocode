/*
 * XREFs of ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AKPEAX@Z$1?PowerSettingUnregisterNotification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18021F5CC
 * Callers:
 *     ?RegisterMonitorPowerNotification@CComposition@@IEAAJXZ @ 0x180161660 (-RegisterMonitorPowerNotification@CComposition@@IEAAJXZ.c)
 *     ?UpdatePowerNotifications@CComposition@@QEAAJXZ @ 0x18022B54C (-UpdatePowerNotifications@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AKPEAX@Z$1?PowerSettingUnregisterNotification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18022BA1C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AKPEAX@Z$1-PowerSettingUnregisterNotification@@.c)
 */

__int64 __fastcall wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 8));
  return result;
}
