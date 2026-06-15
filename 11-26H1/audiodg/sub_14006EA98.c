/*
 * XREFs of sub_14006EA98 @ 0x14006EA98
 * Callers:
 *     sub_14006E1B0 @ 0x14006E1B0 (sub_14006E1B0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_140048290 @ 0x140048290 (sub_140048290.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14006EA98(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 *v3; // rbx
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v1 = sub_1400B6010(a1);
  v3 = (__int64 *)sub_140048290(v1, v2);
  if ( v3 )
  {
    v11 = 0LL;
    sub_140019444(&v11);
    v4 = *v3;
    v11 = v4;
    if ( v4 )
    {
      sub_1400B6010(v4);
      v10 = 0LL;
      v5 = sub_1400B6010(v4);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 757;
LABEL_7:
        sub_14000C2A8((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v5);
        sub_140003238(&v10);
        sub_140003238(&v11);
        return v6;
      }
      v5 = sub_1400B6010(v10);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 758;
        goto LABEL_7;
      }
      sub_140003238(&v10);
    }
    sub_140003238(&v11);
  }
  return 0LL;
}
