/*
 * XREFs of sub_140062D1C @ 0x140062D1C
 * Callers:
 *     sub_140062DC0 @ 0x140062DC0 (sub_140062DC0.c)
 * Callees:
 *     sub_1400176D0 @ 0x1400176D0 (sub_1400176D0.c)
 */

__int64 __fastcall sub_140062D1C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1400176D0(v1);
  return result;
}
