/*
 * XREFs of sub_14001A3A8 @ 0x14001A3A8
 * Callers:
 *     sub_14001B288 @ 0x14001B288 (sub_14001B288.c)
 *     sub_140047830 @ 0x140047830 (sub_140047830.c)
 * Callees:
 *     sub_140078C98 @ 0x140078C98 (sub_140078C98.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14001A3A8(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v3; // ebx
  int v5; // eax

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != -1350114592 )
    {
      if ( *a2 == 1462979341 && a2[1] == 1185762999 && a2[2] == 451190193 && a2[3] == 1949736450 )
      {
        *a3 = a1;
        v3 = 0;
        goto LABEL_18;
      }
LABEL_4:
      v3 = sub_140078C98(a1 + 8);
      if ( v3 < 0 )
        return (unsigned int)v3;
LABEL_18:
      sub_1400B6010(*a3);
      return (unsigned int)v3;
    }
    if ( a2[1] != 1282060589 || a2[2] != -1428727140 )
      goto LABEL_4;
    v5 = -1877077915;
  }
  else
  {
    if ( a2[1] || a2[2] != 192 )
      goto LABEL_4;
    v5 = 1174405120;
  }
  if ( a2[3] != v5 )
    goto LABEL_4;
  *a3 = a1;
  sub_1400B6010(a1);
  return 0LL;
}
