/*
 * XREFs of sub_14003AB50 @ 0x14003AB50
 * Callers:
 *     sub_140048550 @ 0x140048550 (sub_140048550.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400481BC @ 0x1400481BC (sub_1400481BC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003AB50(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  int v6; // ebx

  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
      goto LABEL_3;
    goto LABEL_8;
  }
  if ( *a2 != -1350114592 || a2[1] != 1282060589 )
    goto LABEL_3;
  if ( a2[2] == -1428727140 && a2[3] == -1877077915 )
  {
LABEL_8:
    *a3 = a1;
    sub_1400B6010(a1);
    return 0LL;
  }
  if ( a2[1] == 1282060589 && a2[2] == -1428727140 && a2[3] == -1877077915 )
  {
    *a3 = a1;
    goto LABEL_16;
  }
LABEL_3:
  if ( !sub_14001FC10(a2, &xmmword_1400C67D8) )
  {
    v6 = sub_1400481BC(v4 + 8, v3);
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_17;
  }
  *a3 = v4;
LABEL_16:
  v6 = 0;
LABEL_17:
  sub_1400B6010(*a3);
  return (unsigned int)v6;
}
