/*
 * XREFs of sub_1400310E0 @ 0x1400310E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400311DC @ 0x1400311DC (sub_1400311DC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400310E0(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v4 = sub_1400B6010(a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_14000C2A8((int)retaddr, 178, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v4);
    return v5;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 80);
    v7 = sub_1400B6010(a2);
    sub_1400311DC(v6, v7);
    sub_1400B6010(a2);
    return 0LL;
  }
}
