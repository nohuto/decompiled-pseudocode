/*
 * XREFs of NtUserDisableProcessWindowsGhosting @ 0x14021B7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_DisableProcessWindowsGhosting@@YAHXZ @ 0x14021B7EC (-_DisableProcessWindowsGhosting@@YAHXZ.c)
 */

__int64 NtUserDisableProcessWindowsGhosting()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)_DisableProcessWindowsGhosting();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
