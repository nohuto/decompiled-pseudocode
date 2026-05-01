/*
 * XREFs of VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::RemoteVirtualDesktopConnected @ 0x18049ADE0
 * Callers:
 *     <none>
 * Callees:
 *     ??_9IPropertyValue@Foundation@Windows@@$BGI@AA @ 0x18029B4E0 (--_9IPropertyValue@Foundation@Windows@@$BGI@AA.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::RemoteVirtualDesktopConnected(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
     Windows::Foundation::IPropertyValue::`vcall'{104,{flat}}(v1);
  return 0LL;
}
