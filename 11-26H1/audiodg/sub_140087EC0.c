/*
 * XREFs of sub_140087EC0 @ 0x140087EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140087E30 @ 0x140087E30 (sub_140087E30.c)
 */

__int64 __fastcall sub_140087EC0(__int64 a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = sub_140087E30(*(_QWORD *)(a1 + 32), a2, *(_DWORD *)(a1 + 40), a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    194,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v3);
  return v4;
}
