/*
 * XREFs of sub_140017850 @ 0x140017850
 * Callers:
 *     sub_140016F3C @ 0x140016F3C (sub_140016F3C.c)
 *     sub_14001727C @ 0x14001727C (sub_14001727C.c)
 *     sub_140017458 @ 0x140017458 (sub_140017458.c)
 *     sub_14001A7C0 @ 0x14001A7C0 (sub_14001A7C0.c)
 *     sub_14003E360 @ 0x14003E360 (sub_14003E360.c)
 *     sub_140040EE0 @ 0x140040EE0 (sub_140040EE0.c)
 *     sub_140076CA0 @ 0x140076CA0 (sub_140076CA0.c)
 *     sub_140076D48 @ 0x140076D48 (sub_140076D48.c)
 *     sub_140078220 @ 0x140078220 (sub_140078220.c)
 *     sub_140078260 @ 0x140078260 (sub_140078260.c)
 *     sub_14007D9A8 @ 0x14007D9A8 (sub_14007D9A8.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140017850(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_1400178AC(a1 + 12);
  if ( !v1 )
  {
    if ( v2 )
      sub_1400B6010(v2);
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
  }
  return v1;
}
