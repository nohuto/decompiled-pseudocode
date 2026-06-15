/*
 * XREFs of sub_14002EFAC @ 0x14002EFAC
 * Callers:
 *     sub_14002EFA0 @ 0x14002EFA0 (sub_14002EFA0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002EFAC(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // rcx
  int v4; // ebx

  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
      goto LABEL_12;
LABEL_3:
    a1 += 8LL;
    if ( *a2 != 537173312 || a2[1] != 1074681557 || a2[2] != 1429794722 || a2[3] != 1240333977 )
    {
      v3 = a1 + 8;
      if ( *a2 == 56 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
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
      goto LABEL_7;
    }
LABEL_23:
    *a3 = a1;
    v4 = 0;
LABEL_7:
    sub_1400B6010(*a3);
    return (unsigned int)v4;
  }
  if ( *a2 != -1350114592 || a2[1] != 1282060589 )
    goto LABEL_3;
  if ( a2[2] != -1428727140 || a2[3] != -1877077915 )
  {
    if ( a2[1] == 1282060589 && a2[2] == -1428727140 && a2[3] == -1877077915 )
      goto LABEL_23;
    goto LABEL_3;
  }
LABEL_12:
  *a3 = a1;
  sub_1400B6010(a1);
  return 0LL;
}
