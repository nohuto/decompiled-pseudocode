/*
 * XREFs of sub_140067210 @ 0x140067210
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140067210(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = sub_1400B6010(*(_QWORD *)(a1 + 72));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = sub_1400B6010(v7);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v2 = sub_1400B6010(*(_QWORD *)(a1 + 80));
      v3 = v2;
      if ( v2 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v4 = 249;
    }
    else
    {
      v4 = 248;
    }
  }
  else
  {
    v4 = 247;
  }
  sub_14000C2A8((int)retaddr, v4, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v2);
LABEL_9:
  sub_140003238(&v7);
  return v3;
}
