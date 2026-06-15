/*
 * XREFs of sub_140058440 @ 0x140058440
 * Callers:
 *     sub_1400584B0 @ 0x1400584B0 (sub_1400584B0.c)
 *     sub_1400584C0 @ 0x1400584C0 (sub_1400584C0.c)
 *     sub_1400584D0 @ 0x1400584D0 (sub_1400584D0.c)
 * Callees:
 *     sub_140034318 @ 0x140034318 (sub_140034318.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140058440(__int64 a1)
{
  unsigned int v2; // edi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = sub_1400444D0((volatile signed __int32 *)(a1 + 32));
  if ( !v2 )
  {
    sub_140034318((__int64)&v4);
    if ( a1 )
      sub_1400B6010(a1);
    sub_1400B6010(qword_1400E8490);
  }
  return v2;
}
