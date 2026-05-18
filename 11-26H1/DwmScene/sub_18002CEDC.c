/*
 * XREFs of sub_18002CEDC @ 0x18002CEDC
 * Callers:
 *     sub_18003412C @ 0x18003412C (sub_18003412C.c)
 * Callees:
 *     sub_18002D874 @ 0x18002D874 (sub_18002D874.c)
 */

__int64 __fastcall sub_18002CEDC(__int64 a1, __int64 a2, __int64 a3)
{
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a2 == a3 )
  {
    *(_QWORD *)(a1 + 24) = 15LL;
    *(_BYTE *)a1 = 0;
  }
  else
  {
    sub_18002D874(a1, a2, (a3 - a2) >> 1, (a3 - a2) >> 1);
  }
  return a1;
}
