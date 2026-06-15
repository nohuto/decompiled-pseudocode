/*
 * XREFs of sub_140006B70 @ 0x140006B70
 * Callers:
 *     sub_140005C38 @ 0x140005C38 (sub_140005C38.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140006B70(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(a1 + 136) )
    return 0LL;
  v2 = sub_1400B6010(*(_QWORD *)(a1 + 88));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  sub_14000C2A8(retaddr, 141LL, "avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", (unsigned int)v2);
  return v3;
}
