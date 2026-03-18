/*
 * XREFs of sub_140006100 @ 0x140006100
 * Callers:
 *     sub_140005F10 @ 0x140005F10 (sub_140005F10.c)
 *     sub_140007A70 @ 0x140007A70 (sub_140007A70.c)
 *     sub_140008150 @ 0x140008150 (sub_140008150.c)
 *     sub_14000B280 @ 0x14000B280 (sub_14000B280.c)
 *     sub_14000D0D0 @ 0x14000D0D0 (sub_14000D0D0.c)
 *     sub_14000D250 @ 0x14000D250 (sub_14000D250.c)
 *     sub_14000D7A0 @ 0x14000D7A0 (sub_14000D7A0.c)
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 *     sub_140011670 @ 0x140011670 (sub_140011670.c)
 *     sub_140012550 @ 0x140012550 (sub_140012550.c)
 *     sub_14001BE44 @ 0x14001BE44 (sub_14001BE44.c)
 *     sub_14001CE10 @ 0x14001CE10 (sub_14001CE10.c)
 *     sub_14001F138 @ 0x14001F138 (sub_14001F138.c)
 *     sub_14002256C @ 0x14002256C (sub_14002256C.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140023450 @ 0x140023450 (sub_140023450.c)
 *     sub_1400235E4 @ 0x1400235E4 (sub_1400235E4.c)
 *     sub_1400237A8 @ 0x1400237A8 (sub_1400237A8.c)
 *     sub_140023B24 @ 0x140023B24 (sub_140023B24.c)
 *     sub_1400240D8 @ 0x1400240D8 (sub_1400240D8.c)
 *     sub_14002438C @ 0x14002438C (sub_14002438C.c)
 *     sub_140024E80 @ 0x140024E80 (sub_140024E80.c)
 *     sub_14002517C @ 0x14002517C (sub_14002517C.c)
 *     sub_14002532C @ 0x14002532C (sub_14002532C.c)
 *     sub_1400254C8 @ 0x1400254C8 (sub_1400254C8.c)
 *     sub_1400256A0 @ 0x1400256A0 (sub_1400256A0.c)
 *     sub_140025944 @ 0x140025944 (sub_140025944.c)
 *     sub_140026C60 @ 0x140026C60 (sub_140026C60.c)
 *     sub_140026F14 @ 0x140026F14 (sub_140026F14.c)
 *     sub_140027360 @ 0x140027360 (sub_140027360.c)
 *     sub_140027EFC @ 0x140027EFC (sub_140027EFC.c)
 *     sub_140028EEC @ 0x140028EEC (sub_140028EEC.c)
 *     sub_14002910C @ 0x14002910C (sub_14002910C.c)
 *     sub_140029394 @ 0x140029394 (sub_140029394.c)
 *     sub_140029690 @ 0x140029690 (sub_140029690.c)
 *     sub_140029900 @ 0x140029900 (sub_140029900.c)
 *     sub_140029BE8 @ 0x140029BE8 (sub_140029BE8.c)
 *     sub_14002AED8 @ 0x14002AED8 (sub_14002AED8.c)
 *     sub_14002BC40 @ 0x14002BC40 (sub_14002BC40.c)
 *     sub_14002C7E8 @ 0x14002C7E8 (sub_14002C7E8.c)
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 *     sub_14002D24C @ 0x14002D24C (sub_14002D24C.c)
 *     sub_14002DDDC @ 0x14002DDDC (sub_14002DDDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140006100(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebp
  __int64 v4; // r12
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 56) & 2) != 0 )
    v3 = 0x80000000;
  else
    v3 = *(_DWORD *)(a1 + 244);
  v4 = a2;
  result = StorPortExtendedFunction(82LL, a1, a2, 0LL);
  if ( (_DWORD)result )
  {
    if ( v3 != 0x80000000 )
      return StorPortExtendedFunction(82LL, a1, v4, 0LL);
  }
  return result;
}
