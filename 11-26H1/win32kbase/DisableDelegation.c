/*
 * XREFs of DisableDelegation @ 0x14021B3F0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     SetInputDelegationModeImpl @ 0x14021C0D0 (SetInputDelegationModeImpl.c)
 * Callees:
 *     Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x1401B4A74 (Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline.c)
 *     ?EnsureValidCursorPosition@CCursorClip@@QEAAXXZ @ 0x1401B78FC (-EnsureValidCursorPosition@CCursorClip@@QEAAXXZ.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x140217F8C (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

__int64 __fastcall DisableDelegation(int a1, int a2, int a3)
{
  int v3; // edx
  __int64 v4; // rcx
  int v5; // r8d
  __int64 UserSessionState; // rax
  int v7; // edx
  CCursorClip *v8; // rcx
  int v9; // r8d
  __int64 result; // rax
  __int64 v11; // rcx

  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19632);
  if ( (*(_DWORD *)(v4 + 8) & 2) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    CCursorClip::OverrideClip(*(CCursorClip **)(UserSessionState + 36272), 0);
    if ( (unsigned int)Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline() )
    {
      W32GetUserSessionState(v4, v3, v5);
      CCursorClip::EnsureValidCursorPosition(v8, v7, v9);
    }
  }
  result = W32GetUserSessionState(v4, v3, v5);
  v11 = *(_QWORD *)(result + 19632);
  *(_OWORD *)v11 = 0LL;
  *(_DWORD *)(v11 + 16) = 0;
  return result;
}
