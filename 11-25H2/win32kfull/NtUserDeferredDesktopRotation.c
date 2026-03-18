/*
 * XREFs of NtUserDeferredDesktopRotation @ 0x140295460
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x14022E674 (-xxxDeferredDesktopRotation@@YA_KXZ.c)
 */

unsigned __int64 NtUserDeferredDesktopRotation()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = xxxDeferredDesktopRotation(v1, v0);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
