/*
 * XREFs of sub_1800317FC @ 0x1800317FC
 * Callers:
 *     sub_18002EC70 @ 0x18002EC70 (sub_18002EC70.c)
 *     sub_1800315DC @ 0x1800315DC (sub_1800315DC.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180038048 @ 0x180038048 (sub_180038048.c)
 */

__int64 __fastcall sub_1800317FC(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx

  result = sub_180038048(a1 + 16);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
    return sub_180010F00(v3);
  return result;
}
