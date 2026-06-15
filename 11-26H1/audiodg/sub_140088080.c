/*
 * XREFs of sub_140088080 @ 0x140088080
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140087FF0 @ 0x140087FF0 (sub_140087FF0.c)
 */

__int64 __fastcall sub_140088080(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_140087FF0(*(_QWORD **)(a1 + 40), a2, *(_DWORD *)(a1 + 48));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    174,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v2);
  return v3;
}
