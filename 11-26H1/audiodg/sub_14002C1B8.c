/*
 * XREFs of sub_14002C1B8 @ 0x14002C1B8
 * Callers:
 *     sub_14002C0D0 @ 0x14002C0D0 (sub_14002C0D0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14002C234 @ 0x14002C234 (sub_14002C234.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14002C1B8(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (__int64 *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 16) || (*v3 = 0LL, v4 = sub_14002C234(a1 + 16), v5 = v4, v4 >= 0) )
  {
    v6 = *v3;
    *a2 = *v3;
    sub_1400B6010(v6);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 72, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp", v4);
    return v5;
  }
}
