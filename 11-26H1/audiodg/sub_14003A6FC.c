/*
 * XREFs of sub_14003A6FC @ 0x14003A6FC
 * Callers:
 *     sub_14003A6F0 @ 0x14003A6F0 (sub_14003A6F0.c)
 * Callees:
 *     sub_140078CE0 @ 0x140078CE0 (sub_140078CE0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003A6FC(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    {
      *a3 = a1;
      sub_1400B6010(a1);
      return 0LL;
    }
LABEL_3:
    v3 = sub_140078CE0(a1 + 8);
    v4 = -2147467262;
    if ( v3 == -2147467262 )
      return v4;
    v4 = v3;
    if ( v3 < 0 )
      return v4;
    goto LABEL_14;
  }
  if ( *a2 != 1628200849 || a2[1] != 1387321893 || a2[2] != 976059822 || a2[3] != -269169339 )
    goto LABEL_3;
  *a3 = a1;
  v4 = 0;
LABEL_14:
  sub_1400B6010(*a3);
  return v4;
}
