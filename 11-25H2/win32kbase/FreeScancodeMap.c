/*
 * XREFs of FreeScancodeMap @ 0x1401530A0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

__int64 __fastcall FreeScancodeMap(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 12896) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    GreDeleteFastMutex(*(char **)(UserSessionState + 12896));
    *(_QWORD *)(W32GetUserSessionState(v9, v8) + 12896) = 0LL;
  }
  result = W32GetUserSessionState(v3, v2);
  if ( *(_QWORD *)(result + 12904) )
  {
    v10 = W32GetUserSessionState(v6, v5);
    GreDeleteFastMutex(*(char **)(v10 + 12904));
    *(_QWORD *)(W32GetUserSessionState(v12, v11) + 12904) = 0LL;
    result = W32GetUserSessionState(v14, v13);
    *(_DWORD *)(result + 12912) = 0;
  }
  return result;
}
