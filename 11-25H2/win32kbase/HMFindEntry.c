/*
 * XREFs of HMFindEntry @ 0x1401A57E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HMFindEntry(__int64 a1, unsigned int (__fastcall *a2)(__int64, __int64))
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rsi
  unsigned int i; // edi
  __int64 v8; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2);
  for ( i = 0; i <= *(_DWORD *)(W32GetUserSessionState(v5, v4) + 19816); ++i )
  {
    v8 = *(_QWORD *)(UserSessionState + 19888) + 32LL * i;
    if ( *(_BYTE *)(v8 + 24) && a2(a1, *(_QWORD *)(UserSessionState + 19888) + 32LL * i) )
      return v8;
  }
  return 0LL;
}
