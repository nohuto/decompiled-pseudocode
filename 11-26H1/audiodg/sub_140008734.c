/*
 * XREFs of sub_140008734 @ 0x140008734
 * Callers:
 *     sub_1400085D0 @ 0x1400085D0 (sub_1400085D0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140008734(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 304);
  if ( !v1 )
    return 0LL;
  v2 = sub_1400B6010(v1);
  v3 = v2;
  if ( v2 < 0 )
  {
    sub_14000C2A8(retaddr, 885LL, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", (unsigned int)v2);
  }
  else
  {
    v4 = sub_1400B6010(0LL);
    v3 = v4;
    if ( v4 >= 0 )
      return 0LL;
    sub_14000C2A8(retaddr, 887LL, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", (unsigned int)v4);
  }
  return v3;
}
