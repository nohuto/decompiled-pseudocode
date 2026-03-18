/*
 * XREFs of WakeMIT @ 0x140125BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall WakeMIT(int a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  char v7; // bl
  __int64 UserSessionState; // rdx
  int v9; // r8d
  signed __int32 v10; // eax
  int v11; // ecx
  signed __int32 v12; // ett
  __int64 v13; // rax

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 18792) )
    return 0;
  v7 = 1;
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  _m_prefetchw((const void *)(UserSessionState + 18780));
  v10 = *(_DWORD *)(UserSessionState + 18780);
  do
  {
    v11 = a1 | v10;
    v12 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(UserSessionState + 18780), a1 | v10, v10);
  }
  while ( v12 != v10 );
  if ( !v10 )
  {
    v13 = W32GetUserSessionState(v11, UserSessionState, v9);
    ZwSetEvent(*(HANDLE *)(v13 + 18784), 0LL);
  }
  return v7;
}
