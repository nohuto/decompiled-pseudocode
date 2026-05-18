/*
 * XREFs of sub_180080018 @ 0x180080018
 * Callers:
 *     sub_18007F9A0 @ 0x18007F9A0 (sub_18007F9A0.c)
 *     sub_1800DD796 @ 0x1800DD796 (sub_1800DD796.c)
 * Callees:
 *     sub_180078020 @ 0x180078020 (sub_180078020.c)
 */

__int64 __fastcall sub_180080018(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180078020(v1);
  return result;
}
