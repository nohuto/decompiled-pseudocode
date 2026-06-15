/*
 * XREFs of sub_140031BBC @ 0x140031BBC
 * Callers:
 *     sub_140031BB0 @ 0x140031BB0 (sub_140031BB0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140031BBC(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -1746084848 )
    {
      if ( a2[1] == 1308603317 && a2[2] == -676606835 && a2[3] == 859619866 )
        goto LABEL_13;
    }
    else if ( *a2 == -1146861636 && a2[1] == 1266289681 && a2[2] == 684012218 && a2[3] == 795432010 )
    {
      a1 += 8LL;
LABEL_13:
      *a3 = a1;
      sub_1400B6010(a1);
      return v3;
    }
    return (unsigned int)-2147467262;
  }
  if ( a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
    return (unsigned int)-2147467262;
  *a3 = a1;
  sub_1400B6010(a1);
  return 0LL;
}
