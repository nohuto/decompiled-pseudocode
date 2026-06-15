/*
 * XREFs of sub_14008C030 @ 0x14008C030
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008C030(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = *(_DWORD *)(a1 + 40);
  v2 = sub_1400B6010(a1 - 48);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 166, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp", v2);
  return v3;
}
