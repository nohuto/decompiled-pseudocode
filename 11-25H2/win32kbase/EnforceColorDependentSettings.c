/*
 * XREFs of EnforceColorDependentSettings @ 0x14014B5C0
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x140043070 (GreGetDeviceCaps.c)
 */

__int64 __fastcall EnforceColorDependentSettings(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 UserSessionState; // rax

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968);
  if ( (*(_DWORD *)(v3 + 140) & 2) != 0
    || (UserSessionState = W32GetUserSessionState(v3, v2),
        (unsigned int)GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 64LL), 24) != -1) )
  {
    result = W32GetUserSessionState(v3, v2);
    *(_DWORD *)(result + 43264) = 1;
  }
  else
  {
    result = W32GetUserSessionState(v3, v2);
    *(_DWORD *)(result + 43264) = 0;
  }
  return result;
}
