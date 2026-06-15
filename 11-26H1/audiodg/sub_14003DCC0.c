/*
 * XREFs of sub_14003DCC0 @ 0x14003DCC0
 * Callers:
 *     sub_14003DCA0 @ 0x14003DCA0 (sub_14003DCA0.c)
 * Callees:
 *     sub_14003DDA4 @ 0x14003DDA4 (sub_14003DDA4.c)
 *     sub_14003DE30 @ 0x14003DE30 (sub_14003DE30.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004F650 @ 0x14004F650 (sub_14004F650.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *sub_14003DCC0()
{
  _BYTE v1[168]; // [rsp+20h] [rbp-A8h] BYREF

  sub_14003DE30();
  qword_1400E8610 = (__int64)off_1400BAD90;
  qword_1400E8678 = (__int64)off_1400BAD78;
  qword_1400E8688 = 0LL;
  hHandle = 0LL;
  qword_1400E8698 = 0LL;
  dword_1400E86A0 = 0;
  byte_1400E86A4 = 0;
  qword_1400E86A8 = 0LL;
  sub_14003DDA4();
  if ( qword_1400E8368 && (__int64 (__fastcall *)())qword_1400E8368 != sub_140040230 )
  {
    memset(v1, 0, 0x98uLL);
    sub_14004F650(v1);
  }
  qword_1400E8368 = (__int64)sub_140040230;
  SetUnhandledExceptionFilter(TopLevelExceptionFilter);
  return &qword_1400E8610;
}
