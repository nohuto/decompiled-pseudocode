/*
 * XREFs of ?GetRuntimeClassName@?$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@@winrt@@EEBA?AUhstring@2@XZ @ 0x18048FF70
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$runtime_class_name@UIMultitaskingViewVisibilityNotification@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1804913CC (-get@-$runtime_class_name@UIMultitaskingViewVisibilityNotification@@X@impl@winrt@@SA-AUhstring@3.c)
 */

__int64 __fastcall winrt::implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>::GetRuntimeClassName(
        __int64 a1,
        __int64 a2)
{
  winrt::impl::runtime_class_name<IMultitaskingViewVisibilityNotification,void>::get(a2);
  return a2;
}
