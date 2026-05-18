/*
 * XREFs of sub_18005A88C @ 0x18005A88C
 * Callers:
 *     sub_180063E40 @ 0x180063E40 (sub_180063E40.c)
 *     sub_180065618 @ 0x180065618 (sub_180065618.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_180069C74 @ 0x180069C74 (sub_180069C74.c)
 * Callees:
 *     sub_18005A910 @ 0x18005A910 (sub_18005A910.c)
 */

__int64 __fastcall sub_18005A88C(__int64 a1, float a2)
{
  __int64 result; // rax

  if ( a2 != *(float *)(a1 + 328) )
  {
    *(float *)(a1 + 328) = a2;
    return sub_18005A910(a1, 2LL);
  }
  return result;
}
