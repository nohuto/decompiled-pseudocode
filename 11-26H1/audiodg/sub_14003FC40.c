/*
 * XREFs of sub_14003FC40 @ 0x14003FC40
 * Callers:
 *     sub_14004C84C @ 0x14004C84C (sub_14004C84C.c)
 *     sub_1400B13CC @ 0x1400B13CC (sub_1400B13CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003FC40(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return sub_1400453E4(v1, 16LL);
  return result;
}
