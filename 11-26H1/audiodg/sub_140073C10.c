/*
 * XREFs of sub_140073C10 @ 0x140073C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140054D20 @ 0x140054D20 (sub_140054D20.c)
 *     sub_140054D3C @ 0x140054D3C (sub_140054D3C.c)
 *     sub_140054D48 @ 0x140054D48 (sub_140054D48.c)
 *     sub_140054D5C @ 0x140054D5C (sub_140054D5C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140073C10(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  int v4; // edx
  unsigned int v5; // ebx
  int v6; // eax
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
  {
    v4 = 868;
LABEL_3:
    v5 = -2147467261;
LABEL_4:
    sub_14000C2A8((int)retaddr, v4, (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp", v5);
    return v5;
  }
  if ( !a3 )
  {
    v4 = 869;
    goto LABEL_3;
  }
  *a2 = 0LL;
  *a3 = 0;
  if ( !*(_QWORD *)(a1 + 120) )
  {
    v5 = -2147467263;
    v4 = 874;
    goto LABEL_4;
  }
  sub_140054D20(v8);
  sub_140054D5C((__int64)v8);
  v6 = sub_1400B6010(a1 - 64);
  v5 = v6;
  if ( v6 >= 0 )
    v5 = 0;
  else
    sub_14000C2A8((int)retaddr, 878, (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp", v6);
  sub_140054D3C((__int64)v8);
  return v5;
}
