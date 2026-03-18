/*
 * XREFs of EnforceColorDependentSettings @ 0x140080470
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x14003C780 (GreGetDeviceCaps.c)
 */

__int64 __fastcall EnforceColorDependentSettings(int a1, int a2, int a3)
{
  int v3; // edx
  __int64 v4; // rcx
  int v5; // r8d
  __int64 UserSessionState; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 56968);
  if ( (*(_DWORD *)(v4 + 132) & 2) != 0
    || (UserSessionState = W32GetUserSessionState(v4, v3, v5),
        (unsigned int)GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 56LL), 24) != -1) )
  {
    result = W32GetUserSessionState(v4, v3, v5);
    *(_DWORD *)(result + 43264) = 1;
  }
  else
  {
    result = W32GetUserSessionState(v4, v3, v5);
    *(_DWORD *)(result + 43264) = 0;
  }
  return result;
}
