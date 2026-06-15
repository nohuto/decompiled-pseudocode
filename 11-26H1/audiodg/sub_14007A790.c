/*
 * XREFs of sub_14007A790 @ 0x14007A790
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_140039414 @ 0x140039414 (sub_140039414.c)
 *     sub_140078F50 @ 0x140078F50 (sub_140078F50.c)
 */

__int64 __fastcall sub_14007A790(__int64 a1, _QWORD *a2)
{
  int v4; // esi
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  *a2 = 0LL;
  v4 = sub_140078F50(a1);
  if ( v4 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 32);
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v5 + 1, v5);
      if ( v6 == v5 )
      {
        sub_140039414((__int64 *)(a1 + 24));
        *a2 = *(_QWORD *)(a1 + 24);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) == 1 )
          sub_1400125D4((__int64 *)(a1 + 24));
        return (unsigned int)v4;
      }
    }
  }
  return (unsigned int)v4;
}
