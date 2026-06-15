/*
 * XREFs of sub_140092E6C @ 0x140092E6C
 * Callers:
 *     sub_140092C78 @ 0x140092C78 (sub_140092C78.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_140092E6C(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r11
  __int64 v5; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  if ( *(_DWORD *)a2 == 1 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 16) = v5;
    if ( v3
       + (~(unsigned __int64)(unsigned int)(*(_DWORD *)(a2 + 24) - 1) & ((unsigned int)(*(_DWORD *)(a2 + 24) - 1) + v5)) <= v5 + (unsigned __int64)*(unsigned int *)(a2 + 4) )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
      return 0LL;
    }
    else
    {
      sub_14000C2A8(
        (int)retaddr,
        21,
        (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcpusharedmemory.cpp",
        -2147418113);
      return 2147549183LL;
    }
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      15,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcpusharedmemory.cpp",
      -2147024809);
    return 2147942487LL;
  }
}
