/*
 * XREFs of ?HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z @ 0x14028A838
 * Callers:
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 * Callees:
 *     ?ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z @ 0x14028A92C (-ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z @ 0x14028AAD4 (-UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z.c)
 *     Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline @ 0x14028B920 (Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall HotKey_InputDesktopSwitching(struct tagDESKTOP *a1, struct tagDESKTOP *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rdi

  if ( (unsigned int)Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline(a1) )
  {
    ResetWindowKeyProcessing(a2);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    if ( *(_DWORD *)(UserSessionState + 14048) == 1 )
      UpdateWindowKeyWindowCloak(a2, 0LL);
    *(_DWORD *)(UserSessionState + 14048) = 0;
  }
}
