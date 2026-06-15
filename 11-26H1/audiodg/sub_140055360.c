/*
 * XREFs of sub_140055360 @ 0x140055360
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140036470 @ 0x140036470 (sub_140036470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140055360(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // edx
  unsigned __int16 *v7; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  sub_140036470(&v11, *(_QWORD *)(a1 + 96));
  if ( v11 )
  {
    v10 = 0LL;
    v5 = sub_1400B6010(v11);
    v4 = v5;
    if ( v5 >= 0 )
    {
      if ( !v10 || (v7 = (unsigned __int16 *)sub_1400B6010(v10), v5 = sub_140006BCC(v7, a3), v4 = v5, v5 >= 0) )
      {
        sub_140003238(&v10);
        v4 = 0;
        goto LABEL_10;
      }
      v6 = 632;
    }
    else
    {
      v6 = 626;
    }
    sub_14000C2A8((int)retaddr, v6, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v5);
    sub_140003238(&v10);
  }
  else
  {
    v4 = -2147467262;
    sub_14000C2A8((int)retaddr, 623, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", -2147467262);
  }
LABEL_10:
  sub_140003238(&v11);
  return v4;
}
