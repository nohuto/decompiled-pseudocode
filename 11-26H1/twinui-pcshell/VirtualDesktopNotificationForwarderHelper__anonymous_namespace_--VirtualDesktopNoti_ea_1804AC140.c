/*
 * XREFs of VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopSwitched @ 0x1804AC140
 * Callers:
 *     <none>
 * Callees:
 *     ??_9IPropertyValue@Foundation@Windows@@$BGA@AA @ 0x1802F0A60 (--_9IPropertyValue@Foundation@Windows@@$BGA@AA.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopSwitched(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
     Windows::Foundation::IPropertyValue::`vcall'{96,{flat}}(v1);
  return 0LL;
}
