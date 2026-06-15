/*
 * XREFs of sub_14006946C @ 0x14006946C
 * Callers:
 *     sub_140003E20 @ 0x140003E20 (sub_140003E20.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14006946C(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( (int)sub_1400B6010(a3) < 0 || (v4 = sub_1400B6010(a3), v5 = v4, v4 >= 0) )
    v5 = 0;
  else
    sub_14000C2A8((int)retaddr, 262, (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.h", v4);
  sub_140003238(&v8);
  return v5;
}
