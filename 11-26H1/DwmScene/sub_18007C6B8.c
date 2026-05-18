/*
 * XREFs of sub_18007C6B8 @ 0x18007C6B8
 * Callers:
 *     sub_1800431E4 @ 0x1800431E4 (sub_1800431E4.c)
 *     sub_180043738 @ 0x180043738 (sub_180043738.c)
 *     sub_1800451CC @ 0x1800451CC (sub_1800451CC.c)
 *     sub_180045760 @ 0x180045760 (sub_180045760.c)
 *     sub_180079644 @ 0x180079644 (sub_180079644.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18007C6F4 @ 0x18007C6F4 (sub_18007C6F4.c)
 *     sub_18007EFAC @ 0x18007EFAC (sub_18007EFAC.c)
 *     sub_1800948B0 @ 0x1800948B0 (sub_1800948B0.c)
 * Callees:
 *     sub_18004E128 @ 0x18004E128 (sub_18004E128.c)
 */

__int64 __fastcall sub_18007C6B8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_18004E128(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)result + 128) == 0xFFFF )
    return 511LL;
  return result;
}
