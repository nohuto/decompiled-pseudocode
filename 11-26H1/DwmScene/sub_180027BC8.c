/*
 * XREFs of sub_180027BC8 @ 0x180027BC8
 * Callers:
 *     sub_180027B84 @ 0x180027B84 (sub_180027B84.c)
 *     sub_180028F20 @ 0x180028F20 (sub_180028F20.c)
 *     sub_180038A68 @ 0x180038A68 (sub_180038A68.c)
 *     sub_180052060 @ 0x180052060 (sub_180052060.c)
 *     sub_180053214 @ 0x180053214 (sub_180053214.c)
 *     sub_18006ACC0 @ 0x18006ACC0 (sub_18006ACC0.c)
 *     sub_1800838C4 @ 0x1800838C4 (sub_1800838C4.c)
 *     sub_180083A00 @ 0x180083A00 (sub_180083A00.c)
 *     sub_1800840DC @ 0x1800840DC (sub_1800840DC.c)
 *     sub_1800841FC @ 0x1800841FC (sub_1800841FC.c)
 *     sub_18008497C @ 0x18008497C (sub_18008497C.c)
 *     sub_180093840 @ 0x180093840 (sub_180093840.c)
 *     sub_1800BAD6C @ 0x1800BAD6C (sub_1800BAD6C.c)
 *     sub_1800C8E24 @ 0x1800C8E24 (sub_1800C8E24.c)
 *     sub_1800CA82C @ 0x1800CA82C (sub_1800CA82C.c)
 *     sub_1800CC570 @ 0x1800CC570 (sub_1800CC570.c)
 *     sub_1800CC7D0 @ 0x1800CC7D0 (sub_1800CC7D0.c)
 *     sub_1800CCA34 @ 0x1800CCA34 (sub_1800CCA34.c)
 *     sub_1800D7B90 @ 0x1800D7B90 (sub_1800D7B90.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_180027BC8(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 80);
  if ( v2 )
    sub_180010F00(v2);
  return sub_180028E98(a1);
}
