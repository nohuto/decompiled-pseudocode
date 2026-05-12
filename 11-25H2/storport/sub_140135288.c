/*
 * XREFs of sub_140135288 @ 0x140135288
 * Callers:
 *     sub_14008AB58 @ 0x14008AB58 (sub_14008AB58.c)
 *     sub_14008AE74 @ 0x14008AE74 (sub_14008AE74.c)
 *     sub_14008B1CC @ 0x14008B1CC (sub_14008B1CC.c)
 *     sub_14008BC18 @ 0x14008BC18 (sub_14008BC18.c)
 *     sub_14008C144 @ 0x14008C144 (sub_14008C144.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_14008CC90 @ 0x14008CC90 (sub_14008CC90.c)
 *     sub_14008CE14 @ 0x14008CE14 (sub_14008CE14.c)
 *     sub_14008D024 @ 0x14008D024 (sub_14008D024.c)
 *     sub_14008E060 @ 0x14008E060 (sub_14008E060.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x14008E3B0 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 *     sub_14008E63C @ 0x14008E63C (sub_14008E63C.c)
 *     sub_14008E83C @ 0x14008E83C (sub_14008E83C.c)
 *     sub_14008EAAC @ 0x14008EAAC (sub_14008EAAC.c)
 * Callees:
 *     sub_14013A898 @ 0x14013A898 (sub_14013A898.c)
 */

__int64 __fastcall sub_140135288(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), 1, 0) == 1 )
    return 2147483665LL;
  result = sub_14013A898(a1, a3, (a2 != 1) + 0x20500000001LL);
  if ( (int)result < 0 )
    _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
  return result;
}
