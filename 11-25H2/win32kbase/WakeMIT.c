/*
 * XREFs of WakeMIT @ 0x1400DCF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall WakeMIT(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // bl
  __int64 UserSessionState; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rcx
  signed __int32 v9; // ett
  __int64 v10; // rax

  v2 = a1;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 18744) )
    return 0;
  v5 = 1;
  UserSessionState = W32GetUserSessionState(v4, v3);
  _m_prefetchw((const void *)(UserSessionState + 18732));
  v7 = *(_DWORD *)(UserSessionState + 18732);
  do
  {
    v8 = v2 | (unsigned int)v7;
    v9 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(UserSessionState + 18732), v8, v7);
  }
  while ( v9 != v7 );
  if ( !v7 )
  {
    v10 = W32GetUserSessionState(v8, UserSessionState);
    ZwSetEvent(*(HANDLE *)(v10 + 18736), 0LL);
  }
  return v5;
}
