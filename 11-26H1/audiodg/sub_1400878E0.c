/*
 * XREFs of sub_1400878E0 @ 0x1400878E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140089A7C @ 0x140089A7C (sub_140089A7C.c)
 */

__int64 __fastcall sub_1400878E0(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v5 = sub_140089A7C(
         a5,
         *(_QWORD *)(*(_QWORD *)(a1 + 64) + 88LL),
         *(_QWORD *)(*(_QWORD *)(a1 + 64) + 120LL),
         *(_QWORD *)(*(_QWORD *)(a1 + 64) + 104LL),
         *(_DWORD *)(a1 + 72),
         a2,
         a3,
         a4);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    268,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v5);
  sub_14000C2A8(
    (int)retaddr,
    141,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v6);
  return v6;
}
