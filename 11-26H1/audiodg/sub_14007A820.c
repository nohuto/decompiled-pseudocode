/*
 * XREFs of sub_14007A820 @ 0x14007A820
 * Callers:
 *     sub_14007F450 @ 0x14007F450 (sub_14007F450.c)
 * Callees:
 *     sub_140078F50 @ 0x140078F50 (sub_140078F50.c)
 *     sub_14007911C @ 0x14007911C (sub_14007911C.c)
 *     sub_14007EF4C @ 0x14007EF4C (sub_14007EF4C.c)
 */

__int64 __fastcall sub_14007A820(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  int v5; // edi
  signed __int32 v6; // eax

  *a2 = 0LL;
  v5 = sub_140078F50(a1);
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 136);
      if ( v6 <= 0 )
        break;
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 136), v6 + 1, v6) )
      {
        v5 = sub_14007911C((__int64 *)(a1 + 120), v4, a2);
        sub_14007EF4C(a1);
        return (unsigned int)v5;
      }
    }
  }
  return (unsigned int)v5;
}
