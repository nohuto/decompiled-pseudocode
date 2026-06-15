/*
 * XREFs of sub_1400665A0 @ 0x1400665A0
 * Callers:
 *     sub_140065B00 @ 0x140065B00 (sub_140065B00.c)
 *     sub_140065B10 @ 0x140065B10 (sub_140065B10.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400665A0(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v3; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = sub_1400B6010(*(_QWORD *)(a1 + 56));
  v2 = v1;
  if ( v1 >= 0 )
  {
    v1 = sub_1400B6010(v6);
    v2 = v1;
    if ( v1 >= 0 )
    {
      v2 = 0;
      goto LABEL_7;
    }
    v3 = 432;
  }
  else
  {
    v3 = 431;
  }
  sub_14000C2A8((int)retaddr, v3, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v1);
LABEL_7:
  sub_140056130(&v6);
  return v2;
}
