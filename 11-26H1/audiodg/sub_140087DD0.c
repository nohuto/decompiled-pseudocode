/*
 * XREFs of sub_140087DD0 @ 0x140087DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140087D00 @ 0x140087D00 (sub_140087D00.c)
 */

__int64 __fastcall sub_140087DD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v5 = sub_140087D00(*(_QWORD **)(a1 + 48), a5, *(_DWORD *)(a1 + 56), a2, a3, a4);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    161,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v5);
  return v6;
}
