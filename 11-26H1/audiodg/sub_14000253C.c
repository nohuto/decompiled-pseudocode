/*
 * XREFs of sub_14000253C @ 0x14000253C
 * Callers:
 *     sub_140084E2C @ 0x140084E2C (sub_140084E2C.c)
 *     sub_14008764C @ 0x14008764C (sub_14008764C.c)
 *     sub_140088960 @ 0x140088960 (sub_140088960.c)
 *     sub_14008940C @ 0x14008940C (sub_14008940C.c)
 *     sub_14008957C @ 0x14008957C (sub_14008957C.c)
 *     sub_14008AAC8 @ 0x14008AAC8 (sub_14008AAC8.c)
 *     sub_14008AC38 @ 0x14008AC38 (sub_14008AC38.c)
 *     sub_14008ADAC @ 0x14008ADAC (sub_14008ADAC.c)
 *     sub_14008AF6C @ 0x14008AF6C (sub_14008AF6C.c)
 *     sub_14008B0DC @ 0x14008B0DC (sub_14008B0DC.c)
 *     sub_14008B24C @ 0x14008B24C (sub_14008B24C.c)
 *     sub_14008B3BC @ 0x14008B3BC (sub_14008B3BC.c)
 *     sub_14008F860 @ 0x14008F860 (sub_14008F860.c)
 *     sub_14008F9D0 @ 0x14008F9D0 (sub_14008F9D0.c)
 *     sub_14008FB40 @ 0x14008FB40 (sub_14008FB40.c)
 *     sub_14008FCB0 @ 0x14008FCB0 (sub_14008FCB0.c)
 *     sub_14008FE20 @ 0x14008FE20 (sub_14008FE20.c)
 *     sub_14008FF90 @ 0x14008FF90 (sub_14008FF90.c)
 *     sub_140090100 @ 0x140090100 (sub_140090100.c)
 *     sub_140090270 @ 0x140090270 (sub_140090270.c)
 *     sub_1400903E0 @ 0x1400903E0 (sub_1400903E0.c)
 *     sub_140090550 @ 0x140090550 (sub_140090550.c)
 *     sub_140091A48 @ 0x140091A48 (sub_140091A48.c)
 *     sub_140091BC0 @ 0x140091BC0 (sub_140091BC0.c)
 *     sub_140091D30 @ 0x140091D30 (sub_140091D30.c)
 *     sub_140091EA0 @ 0x140091EA0 (sub_140091EA0.c)
 *     sub_140092010 @ 0x140092010 (sub_140092010.c)
 *     sub_140092974 @ 0x140092974 (sub_140092974.c)
 * Callees:
 *     sub_1400285F0 @ 0x1400285F0 (sub_1400285F0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000253C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v6[6]; // [rsp+30h] [rbp-48h] BYREF

  v6[4] = a5;
  v6[5] = 4LL;
  return sub_1400285F0(a1, a2, 0LL, 0LL, 3, v6);
}
