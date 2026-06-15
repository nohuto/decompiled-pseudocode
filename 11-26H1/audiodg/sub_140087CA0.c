/*
 * XREFs of sub_140087CA0 @ 0x140087CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140087BF0 @ 0x140087BF0 (sub_140087BF0.c)
 */

__int64 __fastcall sub_140087CA0(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = sub_140087BF0(*(_QWORD **)(a1 + 56), a4, *(_DWORD *)(a1 + 64), a2, a3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    154,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v4);
  return v5;
}
