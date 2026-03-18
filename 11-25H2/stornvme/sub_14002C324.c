/*
 * XREFs of sub_14002C324 @ 0x14002C324
 * Callers:
 *     sub_14002BC40 @ 0x14002BC40 (sub_14002BC40.c)
 * Callees:
 *     sub_14000D620 @ 0x14000D620 (sub_14000D620.c)
 *     sub_14002A340 @ 0x14002A340 (sub_14002A340.c)
 *     sub_14002A4A4 @ 0x14002A4A4 (sub_14002A4A4.c)
 *     sub_14002EB94 @ 0x14002EB94 (sub_14002EB94.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 */

void __fastcall sub_14002C324(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int i; // edi
  __int64 v9; // r9
  unsigned int j; // edi
  __int64 v11; // r9
  __int64 v12; // r9
  unsigned int k; // edi

  if ( a3 && (a3 != 1 || a4) )
  {
    sub_14002A340(a1);
    sub_14002A4A4(a1);
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 3u);
    if ( a3 == 1 && a4 && a4 <= a2 && sub_14000D620(*(_QWORD *)(a1 + 8LL * (a4 - 1) + 1672)) )
    {
      for ( i = 0; i < 0x14; ++i )
      {
        StorPortNotification(4101LL, a1, 1LL);
        StorPortExtendedFunction(81LL, a1, 100000LL, v9);
      }
    }
    else
    {
      for ( j = 0; j < 0x14; ++j )
      {
        StorPortNotification(4101LL, a1, 2LL);
        StorPortExtendedFunction(81LL, a1, 100000LL, v11);
      }
    }
    StorPortNotification(7LL, a1, 0LL);
    *(_DWORD *)(a1 + 24) &= ~0x100u;
    StorPortResume(a1);
    sub_14002EB94(a1);
    for ( k = 0; k < 0x44C; ++k )
    {
      StorPortExtendedFunction(81LL, a1, 10000LL, v12);
      if ( (*(_DWORD *)(a1 + 3748) & 8) == 0 )
        return;
    }
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 3u);
    if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
  }
}
