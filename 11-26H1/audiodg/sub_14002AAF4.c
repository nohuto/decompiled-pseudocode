/*
 * XREFs of sub_14002AAF4 @ 0x14002AAF4
 * Callers:
 *     sub_14002A930 @ 0x14002A930 (sub_14002A930.c)
 *     sub_14002AA50 @ 0x14002AA50 (sub_14002AA50.c)
 *     sub_14002AA60 @ 0x14002AA60 (sub_14002AA60.c)
 * Callees:
 *     sub_14002ABEC @ 0x14002ABEC (sub_14002ABEC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002AAF4(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx

  *a3 = 0LL;
  if ( *a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
  {
    v5 = sub_14002ABEC();
    if ( v5 < 0 )
    {
      v7 = v4 + 8;
      if ( *v3 == 1770979591 && v3[1] == 1191712581 && v3[2] == 1155048853 && v3[3] == 1697293944 )
      {
        *v6 = v7;
        v5 = 0;
      }
      else
      {
        v8 = v7 + 8;
        if ( *v3 == -1395237329 && v3[1] == 1264031067 && v3[2] == 699187129 && v3[3] == -917325957 )
        {
          *v6 = v8;
          v5 = 0;
        }
        else
        {
          v5 = -2147467262;
        }
        if ( v5 < 0 )
          return (unsigned int)v5;
      }
    }
    sub_1400B6010(*v6);
    return (unsigned int)v5;
  }
  *a3 = a1;
  sub_1400B6010(a1);
  return 0LL;
}
