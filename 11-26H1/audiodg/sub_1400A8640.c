/*
 * XREFs of sub_1400A8640 @ 0x1400A8640
 * Callers:
 *     sub_1400A86B0 @ 0x1400A86B0 (sub_1400A86B0.c)
 *     sub_1400A86C0 @ 0x1400A86C0 (sub_1400A86C0.c)
 *     sub_1400A86D0 @ 0x1400A86D0 (sub_1400A86D0.c)
 *     sub_1400A86E0 @ 0x1400A86E0 (sub_1400A86E0.c)
 *     sub_1400A8700 @ 0x1400A8700 (sub_1400A8700.c)
 *     sub_1400A8720 @ 0x1400A8720 (sub_1400A8720.c)
 *     sub_1400A8740 @ 0x1400A8740 (sub_1400A8740.c)
 *     sub_1400A8760 @ 0x1400A8760 (sub_1400A8760.c)
 *     sub_1400A8780 @ 0x1400A8780 (sub_1400A8780.c)
 * Callees:
 *     sub_140034318 @ 0x140034318 (sub_140034318.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400A8640(__int64 a1)
{
  unsigned int v2; // edi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = sub_1400444D0((volatile signed __int32 *)(a1 + 1504));
  if ( !v2 )
  {
    sub_140034318((__int64)&v4);
    if ( a1 )
      sub_1400B6010(a1);
    sub_1400B6010(qword_1400E8490);
  }
  return v2;
}
