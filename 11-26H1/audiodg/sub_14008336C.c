/*
 * XREFs of sub_14008336C @ 0x14008336C
 * Callers:
 *     sub_1400842D8 @ 0x1400842D8 (sub_1400842D8.c)
 *     sub_140085590 @ 0x140085590 (sub_140085590.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_14008336C(__int64 a1)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  CompareAddress = 0LL;
  if ( WaitOnAddress((volatile void *)(a1 + 128), &CompareAddress, 8uLL, 0xFFFFFFFF) )
    return 0LL;
  sub_14000C2A8((int)retaddr, 493, (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h", -2005139405);
  return 2289827891LL;
}
