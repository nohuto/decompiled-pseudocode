/*
 * XREFs of sub_140027C70 @ 0x140027C70
 * Callers:
 *     sub_140027BB4 @ 0x140027BB4 (sub_140027BB4.c)
 *     sub_1400474D4 @ 0x1400474D4 (sub_1400474D4.c)
 *     sub_14006EE30 @ 0x14006EE30 (sub_14006EE30.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_140027C70(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( (int)a2 < 0 || (int)a2 > *(_DWORD *)(*a1 - 12) )
    sub_14004639C(2147942487LL, a2);
  *(_DWORD *)(*a1 - 16) = a2;
  result = *a1;
  *(_WORD *)(*a1 + 2LL * (int)a2) = 0;
  return result;
}
