/*
 * XREFs of sub_14006191C @ 0x14006191C
 * Callers:
 *     sub_14000B0B0 @ 0x14000B0B0 (sub_14000B0B0.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_140059EAC @ 0x140059EAC (sub_140059EAC.c)
 *     sub_14005E1B0 @ 0x14005E1B0 (sub_14005E1B0.c)
 * Callees:
 *     sub_14000C6B0 @ 0x14000C6B0 (sub_14000C6B0.c)
 *     sub_14000D2F0 @ 0x14000D2F0 (sub_14000D2F0.c)
 */

BOOLEAN __fastcall sub_14006191C(__int64 a1, struct _KTIMER *a2, struct _KDPC *Dpc, unsigned int a4)
{
  BOOLEAN v5; // di

  v5 = KeSetCoalescableTimer(a2, (LARGE_INTEGER)(-10000000LL * a4), 0, 0, Dpc);
  if ( v5 && !(unsigned int)sub_14000D2F0(a1, 0, 0) )
    sub_14000C6B0(a1, 0);
  return v5;
}
