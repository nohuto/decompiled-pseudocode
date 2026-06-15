/*
 * XREFs of sub_14005B080 @ 0x14005B080
 * Callers:
 *     sub_14005ABA8 @ 0x14005ABA8 (sub_14005ABA8.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14005A4E4 @ 0x14005A4E4 (sub_14005A4E4.c)
 *     sub_14005B204 @ 0x14005B204 (sub_14005B204.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14005B080(__int64 a1, __int64 a2, IID *a3, bool *a4)
{
  int v6; // r14d
  int v7; // r15d
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  IID v12; // [rsp+30h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  LPVOID v15; // [rsp+88h] [rbp+48h] BYREF

  v6 = a2;
  v7 = a1;
  *a4 = 0;
  v15 = 0LL;
  v12 = *a3;
  v8 = sub_14005A4E4(a1, a2, &v12, &v15);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v14 = 0LL;
    v12 = *a3;
    v10 = sub_14005B204(v7, v6, (unsigned int)&v12, (_DWORD)v15, (__int64)&v14);
    v9 = v10;
    if ( v10 >= 0 )
    {
      *a4 = v14 != 0;
      sub_140003238(&v14);
      v9 = 0;
    }
    else
    {
      sub_14000C2A8((int)retaddr, 188, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", v10);
      sub_140003238(&v14);
    }
  }
  else
  {
    sub_14000C2A8((int)retaddr, 185, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", v8);
  }
  sub_140003238((__int64 *)&v15);
  return v9;
}
