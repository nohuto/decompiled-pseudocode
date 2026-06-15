/*
 * XREFs of sub_14007E350 @ 0x14007E350
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140075FD4 @ 0x140075FD4 (sub_140075FD4.c)
 *     sub_140077198 @ 0x140077198 (sub_140077198.c)
 *     sub_140077F60 @ 0x140077F60 (sub_140077F60.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14007E350(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // r9d
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v14; // [rsp+48h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF

  v14 = a2;
  v11 = 0LL;
  v15 = 0LL;
  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 445;
LABEL_5:
    v6 = v4;
    goto LABEL_6;
  }
  if ( !a3 )
  {
    v4 = -2147467261;
    v5 = 446;
    goto LABEL_5;
  }
  *a3 = 0LL;
  v12 = a1;
  v7 = sub_140077198(&v11, &v12, &v14);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v8 = sub_140075FD4(v11, &xmmword_1400CBB40, &v15);
    v4 = v8;
    if ( v8 >= 0 )
    {
      v9 = v15;
      v15 = 0LL;
      *a3 = v9;
      v4 = 0;
      goto LABEL_12;
    }
    v6 = v8;
    v5 = 451;
  }
  else
  {
    v6 = v7;
    v5 = 450;
  }
LABEL_6:
  sub_14000C2A8((int)retaddr, v5, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v6);
LABEL_12:
  sub_140003238(&v15);
  sub_140077F60(&v11);
  return v4;
}
