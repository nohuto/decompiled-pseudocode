/*
 * XREFs of sub_140021570 @ 0x140021570
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140021754 @ 0x140021754 (sub_140021754.c)
 *     sub_140021C40 @ 0x140021C40 (sub_140021C40.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140021570(__int64 a1, unsigned int a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  if ( !*a3 )
  {
    v8 = -2147467261;
    sub_14000C2A8((int)retaddr, 190, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", -2147467261);
    return v8;
  }
  v6 = *a3;
  v12 = 0LL;
  v7 = sub_140021754(a1, v6, &v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_14000C2A8((int)retaddr, 193, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v7);
    if ( v12 )
      sub_1400B6010(v12);
    return v8;
  }
  v9 = v12;
  sub_140021C40(v12, a2, a4);
  if ( v9 )
    sub_1400B6010(v9);
  return 0LL;
}
