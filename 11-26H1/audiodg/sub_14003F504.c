/*
 * XREFs of sub_14003F504 @ 0x14003F504
 * Callers:
 *     sub_1400524B8 @ 0x1400524B8 (sub_1400524B8.c)
 *     sub_1400B1754 @ 0x1400B1754 (sub_1400B1754.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_14003F504(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return sub_1400453E4(v1, 16LL);
  return result;
}
