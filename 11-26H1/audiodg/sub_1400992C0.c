/*
 * XREFs of sub_1400992C0 @ 0x1400992C0
 * Callers:
 *     sub_140099330 @ 0x140099330 (sub_140099330.c)
 *     sub_140099340 @ 0x140099340 (sub_140099340.c)
 *     sub_140099360 @ 0x140099360 (sub_140099360.c)
 *     sub_140099380 @ 0x140099380 (sub_140099380.c)
 *     sub_1400993A0 @ 0x1400993A0 (sub_1400993A0.c)
 *     sub_1400993C0 @ 0x1400993C0 (sub_1400993C0.c)
 *     sub_140099570 @ 0x140099570 (sub_140099570.c)
 *     sub_1400995B0 @ 0x1400995B0 (sub_1400995B0.c)
 *     sub_1400995D0 @ 0x1400995D0 (sub_1400995D0.c)
 *     sub_1400995F0 @ 0x1400995F0 (sub_1400995F0.c)
 * Callees:
 *     sub_140034318 @ 0x140034318 (sub_140034318.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400992C0(__int64 a1)
{
  unsigned int v2; // edi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = sub_1400444D0((volatile signed __int32 *)(a1 + 512));
  if ( !v2 )
  {
    sub_140034318((__int64)&v4);
    if ( a1 )
      sub_1400B6010(a1);
    sub_1400B6010(qword_1400E8490);
  }
  return v2;
}
