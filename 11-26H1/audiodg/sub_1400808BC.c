/*
 * XREFs of sub_1400808BC @ 0x1400808BC
 * Callers:
 *     sub_140083F60 @ 0x140083F60 (sub_140083F60.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14005B65C @ 0x14005B65C (sub_14005B65C.c)
 *     sub_14005B67C @ 0x14005B67C (sub_14005B67C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400808BC(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // edx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v8; // [rsp+40h] [rbp+20h] BYREF
  __int64 v9; // [rsp+48h] [rbp+28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+30h] BYREF
  __int64 v11; // [rsp+58h] [rbp+38h] BYREF

  v8 = a1;
  *a2 = 0LL;
  v11 = 0LL;
  v2 = sub_14005B67C(&v8);
  v3 = v2;
  if ( v2 >= 0 )
  {
    sub_1400B6010(v11);
    if ( v9 )
    {
      v10 = 0LL;
      v4 = sub_14005B65C(&v9);
      v3 = v4;
      if ( v4 >= 0 )
      {
        v4 = sub_1400B6010(v10);
        v3 = v4;
        if ( v4 >= 0 )
        {
          sub_140056130(&v10);
          sub_140003238(&v9);
          v3 = 0;
          goto LABEL_12;
        }
        v5 = 157;
      }
      else
      {
        v5 = 155;
      }
      sub_14000C2A8((int)retaddr, v5, (int)"avcore\\audiocore\\Server\\AudioDG\\inc\\AudioPumpDspInterfacesP.h", v4);
      sub_140056130(&v10);
    }
    else
    {
      v3 = -2147024809;
      sub_14000C2A8(
        (int)retaddr,
        152,
        (int)"avcore\\audiocore\\Server\\AudioDG\\inc\\AudioPumpDspInterfacesP.h",
        -2147024809);
    }
    sub_140003238(&v9);
  }
  else
  {
    sub_14000C2A8((int)retaddr, 149, (int)"avcore\\audiocore\\Server\\AudioDG\\inc\\AudioPumpDspInterfacesP.h", v2);
  }
LABEL_12:
  sub_140056130(&v11);
  return v3;
}
