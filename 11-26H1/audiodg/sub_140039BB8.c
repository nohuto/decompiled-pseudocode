/*
 * XREFs of sub_140039BB8 @ 0x140039BB8
 * Callers:
 *     sub_14004505C @ 0x14004505C (sub_14004505C.c)
 *     sub_140096888 @ 0x140096888 (sub_140096888.c)
 *     sub_140096938 @ 0x140096938 (sub_140096938.c)
 *     sub_14009EE00 @ 0x14009EE00 (sub_14009EE00.c)
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 *     sub_1400A60D0 @ 0x1400A60D0 (sub_1400A60D0.c)
 *     sub_1400A61CC @ 0x1400A61CC (sub_1400A61CC.c)
 *     sub_1400A62C8 @ 0x1400A62C8 (sub_1400A62C8.c)
 *     sub_1400A63C0 @ 0x1400A63C0 (sub_1400A63C0.c)
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 */

__int64 __fastcall sub_140039BB8(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp-28h]

  v3 = a1;
  if ( a1 )
    result = RtlDestroyMemoryZone();
  else
    result = 0LL;
  if ( (byte_1400E8401 & 4) != 0 )
    return sub_14000EE40(a1, a2, a3, 4, v3, 0, 0, 0, v5, 0, result);
  return result;
}
