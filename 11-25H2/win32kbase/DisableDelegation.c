/*
 * XREFs of DisableDelegation @ 0x14018C880
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     SetInputDelegationModeImpl @ 0x14018CB3C (SetInputDelegationModeImpl.c)
 * Callees:
 *     ?EnsureValidCursorPosition@CCursorClip@@QEAAXXZ @ 0x14020E4A4 (-EnsureValidCursorPosition@CCursorClip@@QEAAXXZ.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x14020E5DC (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x140216004 (Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DisableDelegation(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  CCursorClip *v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19600);
  if ( (*(_DWORD *)(v3 + 8) & 2) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    CCursorClip::OverrideClip(*(CCursorClip **)(UserSessionState + 36240), 0);
    if ( (unsigned int)Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline() )
    {
      W32GetUserSessionState(v3, v2);
      CCursorClip::EnsureValidCursorPosition(v5);
    }
  }
  result = W32GetUserSessionState(v3, v2);
  v7 = *(_QWORD *)(result + 19600);
  *(_OWORD *)v7 = 0LL;
  *(_DWORD *)(v7 + 16) = 0;
  return result;
}
