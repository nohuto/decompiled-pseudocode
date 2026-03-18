/*
 * XREFs of ?HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z @ 0x1402A7868
 * Callers:
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 * Callees:
 *     ?ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z @ 0x140269E94 (-ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z @ 0x1402A7964 (-UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z.c)
 *     Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline @ 0x1402A7C80 (Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall HotKey_InputDesktopSwitching(struct tagDESKTOP *a1, struct tagDESKTOP *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rdi

  if ( (unsigned int)Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline(a1) )
  {
    ResetWindowKeyProcessing(a2, v3);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    if ( *(_DWORD *)(UserSessionState + 14040) == 1 )
      UpdateWindowKeyWindowCloak(a2, 0LL);
    *(_DWORD *)(UserSessionState + 14040) = 0;
  }
}
