/*
 * XREFs of sub_180099F44 @ 0x180099F44
 * Callers:
 *     sub_180099A9C @ 0x180099A9C (sub_180099A9C.c)
 *     sub_1800DE7AF @ 0x1800DE7AF (sub_1800DE7AF.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

__int64 __fastcall sub_180099F44(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800129D0(v2 + 32);
  return sub_18002B2F8(a1);
}
