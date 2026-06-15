/*
 * XREFs of sub_140040274 @ 0x140040274
 * Callers:
 *     sub_14006E9C0 @ 0x14006E9C0 (sub_14006E9C0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140040274(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 304);
  if ( v1 )
  {
    v7 = 0LL;
    v2 = sub_1400B6010(v1);
    v3 = v2;
    if ( v2 < 0 )
    {
      sub_14000C2A8((int)retaddr, 924, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v2);
      if ( v7 )
        sub_1400B6010(v7);
      return v3;
    }
    v5 = sub_1400B6010(v7);
    v3 = v5;
    if ( v5 < 0 )
    {
      sub_14000C2A8((int)retaddr, 926, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v5);
      sub_140003238(&v7);
      return v3;
    }
    sub_140003238(&v7);
  }
  return 0LL;
}
