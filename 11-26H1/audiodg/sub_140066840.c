/*
 * XREFs of sub_140066840 @ 0x140066840
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140066840(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // edx
  __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v8[0] = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 || (int)sub_1400B6010(v2) < 0 )
  {
    v10 = 0LL;
    v5 = sub_1400B6010(*(_QWORD *)(a1 + 56));
    v4 = v5;
    if ( v5 >= 0 )
    {
      v5 = sub_1400B6010(v10);
      v4 = v5;
      if ( v5 >= 0 )
      {
        sub_140056130(&v10);
        goto LABEL_11;
      }
      v6 = 419;
    }
    else
    {
      v6 = 418;
    }
    sub_14000C2A8((int)retaddr, v6, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v5);
    sub_140056130(&v10);
    goto LABEL_12;
  }
  v3 = sub_1400B6010(v8[0]);
  v4 = v3;
  if ( v3 >= 0 )
  {
LABEL_11:
    v4 = 0;
    goto LABEL_12;
  }
  sub_14000C2A8((int)retaddr, 412, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v3);
LABEL_12:
  sub_140056130(v8);
  return v4;
}
