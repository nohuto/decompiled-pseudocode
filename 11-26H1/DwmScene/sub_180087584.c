/*
 * XREFs of sub_180087584 @ 0x180087584
 * Callers:
 *     sub_1800627F8 @ 0x1800627F8 (sub_1800627F8.c)
 *     sub_180069C74 @ 0x180069C74 (sub_180069C74.c)
 * Callees:
 *     sub_18008720C @ 0x18008720C (sub_18008720C.c)
 */

__int64 __fastcall sub_180087584(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1944);
  *(_DWORD *)(a1 + 1944) = a2;
  if ( (_DWORD)result != a2 )
    return sub_18008720C(a1);
  return result;
}
