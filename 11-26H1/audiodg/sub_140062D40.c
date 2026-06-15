/*
 * XREFs of sub_140062D40 @ 0x140062D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140062DC0 @ 0x140062DC0 (sub_140062DC0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140062D40(int a1, __int64 a2, _QWORD *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v5 = sub_140062DC0(a1, 40, 1, 1, (__int64)a3);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_QWORD *)sub_1400B6010(*a3) = a2;
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 121, (int)"avcore\\audiocore\\server\\audiodg\\exe\\cpumemorymanager.cpp", v5);
    return v6;
  }
}
