/*
 * XREFs of sub_140088240 @ 0x140088240
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400881B0 @ 0x1400881B0 (sub_1400881B0.c)
 */

__int64 __fastcall sub_140088240(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_1400881B0(*(_QWORD **)(a1 + 40), a2, *(_DWORD *)(a1 + 48));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    180,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v2);
  return v3;
}
