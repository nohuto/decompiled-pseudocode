/*
 * XREFs of sub_140004C9C @ 0x140004C9C
 * Callers:
 *     sub_140003B8C @ 0x140003B8C (sub_140003B8C.c)
 *     sub_1400041F8 @ 0x1400041F8 (sub_1400041F8.c)
 *     sub_140004C44 @ 0x140004C44 (sub_140004C44.c)
 *     sub_140010BA4 @ 0x140010BA4 (sub_140010BA4.c)
 *     sub_1400114F0 @ 0x1400114F0 (sub_1400114F0.c)
 *     sub_140040B58 @ 0x140040B58 (sub_140040B58.c)
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     sub_140069748 @ 0x140069748 (sub_140069748.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 *     sub_140083F60 @ 0x140083F60 (sub_140083F60.c)
 *     sub_140086580 @ 0x140086580 (sub_140086580.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140004C9C(_QWORD *a1, __int64 a2)
{
  if ( *a1 == a2 )
    return *a1;
  if ( a2 )
    sub_1400B6010(a2);
  if ( *a1 )
    sub_1400B6010(*a1);
  *a1 = a2;
  return a2;
}
