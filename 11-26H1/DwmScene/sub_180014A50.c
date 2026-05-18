/*
 * XREFs of sub_180014A50 @ 0x180014A50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800149D0 @ 0x1800149D0 (sub_1800149D0.c)
 *     sub_180046FD4 @ 0x180046FD4 (sub_180046FD4.c)
 *     sub_180047C00 @ 0x180047C00 (sub_180047C00.c)
 *     sub_180047D2C @ 0x180047D2C (sub_180047D2C.c)
 *     sub_180047D40 @ 0x180047D40 (sub_180047D40.c)
 *     sub_180047E18 @ 0x180047E18 (sub_180047E18.c)
 *     sub_180048114 @ 0x180048114 (sub_180048114.c)
 *     sub_18004824C @ 0x18004824C (sub_18004824C.c)
 *     sub_180048378 @ 0x180048378 (sub_180048378.c)
 *     sub_1800484B0 @ 0x1800484B0 (sub_1800484B0.c)
 *     sub_180048544 @ 0x180048544 (sub_180048544.c)
 *     sub_18004866C @ 0x18004866C (sub_18004866C.c)
 *     sub_180048794 @ 0x180048794 (sub_180048794.c)
 */

__int64 __fastcall sub_180014A50(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  sub_180048794(a1[2], *a2);
  sub_180047D2C(a1[2], a2[14]);
  try
  {
    if ( *a2 )
    {
      if ( *((_QWORD *)a2 + 1) )
        sub_18004824C(a1[2]);
      v4 = *((_QWORD *)a2 + 2);
      if ( v4 )
        sub_180048114(a1[2], v4, 0LL);
      v5 = *((_QWORD *)a2 + 3);
      if ( v5 )
        sub_180048378(a1[2], v5, 0LL);
      if ( *((_QWORD *)a2 + 4) )
        sub_180047C00(a1[2]);
      if ( *((_QWORD *)a2 + 5) )
        sub_180048544(a1[2]);
      if ( *((_QWORD *)a2 + 6) )
        sub_18004866C(a1[2]);
      if ( a2[14] )
      {
        if ( *((_QWORD *)a2 + 8) )
        {
          sub_180047D40(a1[2]);
        }
        else if ( *((_QWORD *)a2 + 9) )
        {
          sub_180047E18(a1[2]);
        }
      }
      switch ( a2[20] )
      {
        case 1u:
          sub_1800484B0(a1[2], 2LL);
          goto LABEL_31;
        case 2u:
          v6 = 1LL;
          break;
        case 3u:
          v6 = 4LL;
          break;
        case 4u:
          v6 = 0LL;
          break;
        case 5u:
          v6 = 3LL;
          break;
        default:
LABEL_31:
          sub_180046FD4(a1[2], 3LL);
          sub_1800149D0((__int64)(a1 + 4), *a2, *((unsigned __int64 **)a2 + 1));
          return 0LL;
      }
      sub_1800484B0(a1[2], v6);
      goto LABEL_31;
    }
    a1[4] = 0LL;
    a1[5] = 0LL;
    a1[6] = 0LL;
  }
  catch ( ... )
  {
    sub_1800102C4(
      retaddr,
      115LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremesh.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return 0LL;
}
