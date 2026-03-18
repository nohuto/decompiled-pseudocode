/*
 * XREFs of _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x14014BB20
 * Callers:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x14014BAA4 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1402C1C5C (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1402C2A9C (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 * Callees:
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140037CD8 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x14014BB94 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x14014BCD0 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402C246C (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

char __fastcall anonymous_namespace_::NotifyIAMWindowManagementEvent(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  struct tagWND *v5; // rdi

  v4 = anonymous_namespace_::ResolveWindowManagementTargetWindow(a2);
  v5 = (struct tagWND *)v4;
  if ( v4 )
  {
    if ( !IsThreadHung(*(const struct tagTHREADINFO **)(v4 + 16)) )
      return SendNotifyMessageAlways(v5, 0x342u, 0LL, a1, 3u);
    if ( !a2 )
      anonymous_namespace_::SeverWindowManagementConnectionToShell();
  }
  return 0;
}
