/*
 * XREFs of sub_14006DF30 @ 0x14006DF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140008528 @ 0x140008528 (sub_140008528.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_14006DF30(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_140008528(*(_QWORD *)(a1 + 80), a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 164, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v2);
  return v3;
}
