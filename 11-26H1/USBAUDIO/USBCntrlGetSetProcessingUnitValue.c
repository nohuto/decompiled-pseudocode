/*
 * XREFs of USBCntrlGetSetProcessingUnitValue @ 0x140039530
 * Callers:
 *     USBCntrlGetSetProcessingUnitEnable @ 0x140039500 (USBCntrlGetSetProcessingUnitEnable.c)
 * Callees:
 *     USBHwGetSetProperty @ 0x14003B5E0 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitValue(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        int a4,
        __int64 a5,
        int a6)
{
  __int16 v7; // [rsp+20h] [rbp-38h]

  v7 = a4;
  LOBYTE(a4) = a3;
  return USBHwGetSetProperty(
           a1,
           27,
           a3 >> 7,
           a4,
           v7,
           0,
           *(_WORD *)(a2 + 80),
           *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 48LL) + 2LL),
           a5,
           a6);
}
