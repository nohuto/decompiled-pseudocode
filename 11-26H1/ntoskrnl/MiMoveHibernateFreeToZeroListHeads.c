/*
 * XREFs of MiMoveHibernateFreeToZeroListHeads @ 0x1406F4BD0
 * Callers:
 *     <none>
 * Callees:
 *     MiWalkFreeZeroListHead @ 0x140359F50 (MiWalkFreeZeroListHead.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiMoveHibernateFreeToZeroListHeads(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a4;
  v5 = a3;
  if ( *(_DWORD *)(a3 + 28) == 1 && a4 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 16);
      v9[1] = 0LL;
      v9[0] = v7;
      if ( v7 )
        MiWalkFreeZeroListHead(a2, v5, (__int64)MiMoveHibernatePageFreeToZero, (__int64)v9);
      v5 += 88LL;
      --v4;
    }
    while ( v4 );
  }
  return 1LL;
}
