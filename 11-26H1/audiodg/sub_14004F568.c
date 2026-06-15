/*
 * XREFs of sub_14004F568 @ 0x14004F568
 * Callers:
 *     sub_14001E21C @ 0x14001E21C (sub_14001E21C.c)
 *     sub_140078898 @ 0x140078898 (sub_140078898.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140046EA8 @ 0x140046EA8 (sub_140046EA8.c)
 */

__int64 __fastcall sub_14004F568(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v7 = 0LL;
  v3 = sub_140046EA8(a1, (__int64)a2, &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = 4 * v7;
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 100, (int)&unk_1400C71E8, v3);
    sub_14000C2A8((int)retaddr, 109, (int)&unk_1400C71E8, v4);
    return v4;
  }
}
