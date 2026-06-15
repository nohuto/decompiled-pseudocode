/*
 * XREFs of sub_140022600 @ 0x140022600
 * Callers:
 *     sub_140021EE0 @ 0x140021EE0 (sub_140021EE0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140022600(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  if ( v2 )
  {
    v3 = sub_1400B6010(v2);
    v4 = v3;
    if ( v3 < 0 )
      sub_14000C2A8((int)retaddr, 1603, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h", v3);
    return v4;
  }
  else
  {
    *a2 = 0LL;
    return 0LL;
  }
}
