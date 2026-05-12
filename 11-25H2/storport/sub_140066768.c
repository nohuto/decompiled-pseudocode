/*
 * XREFs of sub_140066768 @ 0x140066768
 * Callers:
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     sub_140059EAC @ 0x140059EAC (sub_140059EAC.c)
 *     sub_14005E1B0 @ 0x14005E1B0 (sub_14005E1B0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 *     sub_1400A10B8 @ 0x1400A10B8 (sub_1400A10B8.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 * Callees:
 *     sub_14000C6B0 @ 0x14000C6B0 (sub_14000C6B0.c)
 *     sub_14000D600 @ 0x14000D600 (sub_14000D600.c)
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 */

__int64 __fastcall sub_140066768(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = sub_14000D600(a1, 0, 0);
  v3 = v2;
  if ( (qword_140168458 & 0x200) != 0 )
    sub_14000FB90(a1, 7, retaddr, v2, a1, *(unsigned int *)(a1 + 56), 0LL);
  if ( !v3 )
    sub_14000C6B0(a1, 0);
  return v3;
}
