/*
 * XREFs of IsImmersiveBandOrShellManaged @ 0x140025D98
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x140277D84 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     NtUserDisableImmersiveOwner @ 0x140295530 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     IsImmersiveBand @ 0x140025E6C (IsImmersiveBand.c)
 */

__int64 __fastcall IsImmersiveBandOrShellManaged(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r8
  unsigned int v3; // edx

  v1 = IsImmersiveBand(a1);
  v3 = 0;
  if ( v1 || (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 232LL) & 0x40) != 0 )
    return 1;
  return v3;
}
