/*
 * XREFs of sub_1400314C0 @ 0x1400314C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400314C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = *(_QWORD *)(a1 + 304);
  if ( !v2 )
    return 2147500034LL;
  v3 = sub_1400B6010(v2);
  v4 = v3;
  if ( v3 < 0 )
    sub_14000C2A8((int)retaddr, 733, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v3);
  else
    return (unsigned int)sub_1400B6010(0LL);
  return v4;
}
