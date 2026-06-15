/*
 * XREFs of sub_1400A84E0 @ 0x1400A84E0
 * Callers:
 *     sub_1400A8550 @ 0x1400A8550 (sub_1400A8550.c)
 *     sub_1400A8560 @ 0x1400A8560 (sub_1400A8560.c)
 *     sub_1400A8570 @ 0x1400A8570 (sub_1400A8570.c)
 *     sub_1400A8580 @ 0x1400A8580 (sub_1400A8580.c)
 *     sub_1400A85A0 @ 0x1400A85A0 (sub_1400A85A0.c)
 *     sub_1400A85C0 @ 0x1400A85C0 (sub_1400A85C0.c)
 *     sub_1400A85E0 @ 0x1400A85E0 (sub_1400A85E0.c)
 *     sub_1400A8600 @ 0x1400A8600 (sub_1400A8600.c)
 *     sub_1400A8620 @ 0x1400A8620 (sub_1400A8620.c)
 * Callees:
 *     sub_140034318 @ 0x140034318 (sub_140034318.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400A84E0(__int64 a1)
{
  unsigned int v2; // edi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = sub_1400444D0((volatile signed __int32 *)(a1 + 1472));
  if ( !v2 )
  {
    sub_140034318((__int64)&v4);
    if ( a1 )
      sub_1400B6010(a1);
    sub_1400B6010(qword_1400E8490);
  }
  return v2;
}
