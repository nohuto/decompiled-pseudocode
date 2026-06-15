/*
 * XREFs of sub_140047F7C @ 0x140047F7C
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14005123C @ 0x14005123C (sub_14005123C.c)
 *     sub_14005334C @ 0x14005334C (sub_14005334C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140047F7C(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  if ( v4 )
  {
    v8 = 0LL;
    v5 = sub_14005334C(a1, v4, &v8);
    if ( v5 >= 0 )
    {
      sub_14005123C(v8, a3);
      v5 = 0;
    }
    sub_140003238(&v8);
  }
  else
  {
    v5 = -2147467261;
    sub_14000C2A8((int)retaddr, 250, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", -2147467261);
  }
  return (unsigned int)v5;
}
