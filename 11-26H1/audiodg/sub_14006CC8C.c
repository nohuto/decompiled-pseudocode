/*
 * XREFs of sub_14006CC8C @ 0x14006CC8C
 * Callers:
 *     sub_140045294 @ 0x140045294 (sub_140045294.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140047E70 @ 0x140047E70 (sub_140047E70.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14006CC8C(int **a1)
{
  int *v1; // rbx
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  v2 = qword_1400E8748;
  qword_1400E8748 = 0LL;
  if ( v2 )
    sub_1400B6010(v2);
  v3 = sub_140047E70(&qword_1400E8748, v1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 17, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v3);
  return v4;
}
