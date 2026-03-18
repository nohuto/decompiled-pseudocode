/*
 * XREFs of SpbCheck @ 0x14005856C
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1401558AC (zzzLockWindowUpdate2.c)
 *     CreateSpb @ 0x140155CBC (CreateSpb.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     SpbCheckDce @ 0x14005A370 (SpbCheckDce.c)
 */

__int64 __fastcall SpbCheck(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *i; // rbx
  __int64 v11; // rax

  result = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(result + 56968);
  if ( *(_QWORD *)(v4 + 40) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
    v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 56968);
    for ( i = *(__int64 **)(v9 + 24); ; i = (__int64 *)*i )
    {
      v9 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 56968) + 24LL;
      if ( i == (__int64 *)v9 )
        break;
      if ( (i[6] & 0x400800) == 0 )
        SpbCheckDce(i);
    }
    v11 = W32GetUserSessionState(v9, v8);
    return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v11 + 56968) + 48LL));
  }
  return result;
}
