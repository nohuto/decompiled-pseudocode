/*
 * XREFs of sub_140031D84 @ 0x140031D84
 * Callers:
 *     sub_14004F4AC @ 0x14004F4AC (sub_14004F4AC.c)
 * Callees:
 *     sub_14004A6F4 @ 0x14004A6F4 (sub_14004A6F4.c)
 */

__int64 __fastcall sub_140031D84(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rdi
  unsigned int v7; // ebx
  int v8; // eax

  v5 = a2 - 1;
  v7 = 0;
  v8 = sub_14004A6F4(a1, a2 - 1, a4, a5);
  if ( v8 < 0 || v8 > v5 )
  {
    *(_WORD *)(a1 + 2 * v5) = 0;
    return (unsigned int)-2147024774;
  }
  else if ( v8 == v5 )
  {
    *(_WORD *)(a1 + 2 * v5) = 0;
  }
  return v7;
}
