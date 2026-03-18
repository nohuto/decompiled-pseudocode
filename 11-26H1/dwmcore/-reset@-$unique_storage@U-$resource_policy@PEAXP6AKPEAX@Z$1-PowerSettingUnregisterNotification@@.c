/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AKPEAX@Z$1?PowerSettingUnregisterNotification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18022BA1C
 * Callers:
 *     ?RegisterMonitorPowerNotification@CComposition@@IEAAJXZ @ 0x180161660 (-RegisterMonitorPowerNotification@CComposition@@IEAAJXZ.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AKPEAX@Z$1?PowerSettingUnregisterNotification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18021F5CC (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AKPEAX@Z$1-PowerSett.c)
 *     ?UpdatePowerNotifications@CComposition@@QEAAJXZ @ 0x18022B54C (-UpdatePowerNotifications@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D5518 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D741C (--1last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rdi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v5);
    PowerSettingUnregisterNotification(v2);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v5);
  }
  *a1 = a2;
}
