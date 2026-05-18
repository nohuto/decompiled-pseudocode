/*
 * XREFs of sub_1800277A0 @ 0x1800277A0
 * Callers:
 *     sub_1800276EC @ 0x1800276EC (sub_1800276EC.c)
 *     sub_1800286EC @ 0x1800286EC (sub_1800286EC.c)
 *     sub_180052774 @ 0x180052774 (sub_180052774.c)
 *     sub_1800CE920 @ 0x1800CE920 (sub_1800CE920.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_1800277A0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = a2[6];
  if ( v2 )
    sub_180010EC8(v2);
  return sub_18000E26C(a2, 0x38uLL);
}
