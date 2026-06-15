/*
 * XREFs of sub_140038B40 @ 0x140038B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140038B40(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 184) )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 136);
  if ( !v3 )
    return 0LL;
  if ( v3 == -1 )
    return 0LL;
  v5 = sub_1400B6010(a2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 258, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v5);
  return v6;
}
