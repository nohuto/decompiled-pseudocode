/*
 * XREFs of VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopMoved @ 0x18049AF30
 * Callers:
 *     <none>
 * Callees:
 *     ??_9TouchKeyboardExperienceManager@@$BDI@AA @ 0x180342540 (--_9TouchKeyboardExperienceManager@@$BDI@AA.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopMoved(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
     TouchKeyboardExperienceManager::`vcall'{56,{flat}}(v1);
  return 0LL;
}
