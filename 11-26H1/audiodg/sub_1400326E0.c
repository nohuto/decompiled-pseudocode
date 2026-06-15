/*
 * XREFs of sub_1400326E0 @ 0x1400326E0
 * Callers:
 *     sub_14002BB98 @ 0x14002BB98 (sub_14002BB98.c)
 *     sub_140032480 @ 0x140032480 (sub_140032480.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_1400326E0(__int64 a1)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  CompareAddress = 0LL;
  if ( WaitOnAddress((volatile void *)(a1 + 288), &CompareAddress, 8uLL, 0xFFFFFFFF) )
    return 0LL;
  sub_14000C2A8((int)retaddr, 493, (int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h", -2005139405);
  return 2289827891LL;
}
