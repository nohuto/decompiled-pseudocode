/*
 * XREFs of sub_140067100 @ 0x140067100
 * Callers:
 *     sub_140065D80 @ 0x140065D80 (sub_140065D80.c)
 *     sub_140065D90 @ 0x140065D90 (sub_140065D90.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140067100(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v2 = sub_1400B6010(*(_QWORD *)(a1 + 56));
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 350;
LABEL_5:
    sub_14000C2A8((int)retaddr, v4, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v2);
    goto LABEL_9;
  }
  v2 = sub_1400B6010(v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 351;
    goto LABEL_5;
  }
  v8 = 0LL;
  sub_1400B6010(*(_QWORD *)(a1 + 64));
  v5 = sub_1400B6010(v8);
  v3 = v5;
  if ( v5 >= 0 )
  {
    sub_140056130(&v8);
    v3 = 0;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 355, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v5);
    sub_140056130(&v8);
  }
LABEL_9:
  sub_140056130(&v9);
  return v3;
}
