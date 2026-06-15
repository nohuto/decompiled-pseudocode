/*
 * XREFs of sub_14006DE1C @ 0x14006DE1C
 * Callers:
 *     sub_14006CF50 @ 0x14006CF50 (sub_14006CF50.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140003CFC @ 0x140003CFC (sub_140003CFC.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14006DE1C(__int64 *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // edx
  __int64 v5; // rax
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v8; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = 0LL;
  v2 = sub_140003CFC((__int64)a1, (__int64)&unk_1400C50B8, &v8);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = sub_1400B6010(v8);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v5 = v8;
      v8 = 0LL;
      *a1 = v5;
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 102;
  }
  else
  {
    v4 = 100;
  }
  sub_14000C2A8((int)retaddr, v4, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v2);
LABEL_7:
  sub_140003238(&v8);
  return v3;
}
