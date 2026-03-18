/*
 * XREFs of HMHandleFromIndex @ 0x14003BB40
 * Callers:
 *     HMCreateHandleForObject @ 0x14003B950 (HMCreateHandleForObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMHandleFromIndex(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = *(unsigned int *)(W32GetUserSessionState(v5, v4) + 19896);
  v7 = *(_QWORD *)(UserSessionState + 19888);
  v8 = a1 * v6;
  v9 = a1 | (*(unsigned __int16 *)(v8 + v7 + 26) << 16) | 0x80000000;
  if ( *(char *)(v8 + v7 + 25) >= 0 )
    return (int)(a1 | (*(unsigned __int16 *)(v8 + v7 + 26) << 16));
  return v9;
}
