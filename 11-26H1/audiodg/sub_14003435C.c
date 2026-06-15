/*
 * XREFs of sub_14003435C @ 0x14003435C
 * Callers:
 *     sub_140034350 @ 0x140034350 (sub_140034350.c)
 * Callees:
 *     sub_140078C98 @ 0x140078C98 (sub_140078C98.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003435C(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v3; // ebx
  int v5; // eax

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != -1350114592 )
    {
      if ( *a2 == 1789135949 && a2[1] == 1293719050 && a2[2] == 570431667 && a2[3] == -314096288 )
      {
        *a3 = a1;
        v3 = 0;
LABEL_10:
        sub_1400B6010(*a3);
        return (unsigned int)v3;
      }
LABEL_4:
      v3 = sub_140078C98(a1 + 8);
      if ( v3 < 0 )
        return (unsigned int)v3;
      goto LABEL_10;
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
