/*
 * XREFs of sub_140075000 @ 0x140075000
 * Callers:
 *     sub_140075070 @ 0x140075070 (sub_140075070.c)
 * Callees:
 *     sub_140034318 @ 0x140034318 (sub_140034318.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140075000(__int64 a1)
{
  unsigned int v2; // edi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = sub_1400444D0((volatile signed __int32 *)(a1 + 16));
  if ( !v2 )
  {
    sub_140034318((__int64)&v4);
    if ( a1 )
      sub_1400B6010(a1);
    sub_1400B6010(qword_1400E8490);
  }
  return v2;
}
