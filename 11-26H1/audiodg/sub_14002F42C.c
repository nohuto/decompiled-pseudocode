/*
 * XREFs of sub_14002F42C @ 0x14002F42C
 * Callers:
 *     sub_14002F420 @ 0x14002F420 (sub_14002F420.c)
 *     sub_14006488C @ 0x14006488C (sub_14006488C.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002F42C(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // rcx
  int v4; // ebx

  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
      goto LABEL_13;
LABEL_3:
    a1 += 8LL;
    if ( *a2 != 2014788634 || a2[1] != 1151059254 || a2[2] != -873081970 || a2[3] != -788644782 )
    {
      v3 = a1 + 8;
      if ( *a2 == 56 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
        || (v3 += 8LL, *a2 == 1732897622) && a2[1] == 1257343839 && a2[2] == 1550916998 && a2[3] == 1242163588 )
      {
        *a3 = v3;
        v4 = 0;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
      goto LABEL_8;
    }
LABEL_24:
    *a3 = a1;
    v4 = 0;
LABEL_8:
    sub_1400B6010(*a3);
    return (unsigned int)v4;
  }
  if ( *a2 != -1350114592 || a2[1] != 1282060589 )
    goto LABEL_3;
  if ( a2[2] != -1428727140 || a2[3] != -1877077915 )
  {
    if ( a2[1] == 1282060589 && a2[2] == -1428727140 && a2[3] == -1877077915 )
      goto LABEL_24;
    goto LABEL_3;
  }
LABEL_13:
  *a3 = a1;
  sub_1400B6010(a1);
  return 0LL;
}
