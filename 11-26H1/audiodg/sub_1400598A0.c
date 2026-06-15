/*
 * XREFs of sub_1400598A0 @ 0x1400598A0
 * Callers:
 *     sub_1400456C4 @ 0x1400456C4 (sub_1400456C4.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140059FCC @ 0x140059FCC (sub_140059FCC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400598A0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 result; // rax

  if ( !a1 )
  {
    sub_140059FCC(3221225477LL);
    __debugbreak();
  }
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    do
    {
      sub_1400B6010(*(_QWORD *)(v2 + 8));
      v3 = *(_QWORD *)(v2 + 16);
      result = j_j__o_free(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
