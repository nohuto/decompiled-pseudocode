/*
 * XREFs of HMFindEntry @ 0x1401DF440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HMFindEntry(__int64 a1, unsigned int (__fastcall *a2)(__int64, __int64), int a3)
{
  int v5; // edx
  int v6; // ecx
  __int64 UserSessionState; // rsi
  int v8; // r8d
  unsigned int i; // ebx
  __int64 v10; // rdi

  UserSessionState = W32GetUserSessionState(a1, (_DWORD)a2, a3);
  for ( i = 0; i <= *(_DWORD *)(W32GetUserSessionState(v6, v5, v8) + 19848); ++i )
  {
    v10 = *(_QWORD *)(UserSessionState + 19920) + 32LL * i;
    if ( *(_BYTE *)(v10 + 24) && a2(a1, *(_QWORD *)(UserSessionState + 19920) + 32LL * i) )
      return v10;
  }
  return 0LL;
}
