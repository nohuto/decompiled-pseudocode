/*
 * XREFs of sub_14002871C @ 0x14002871C
 * Callers:
 *     sub_140027FB4 @ 0x140027FB4 (sub_140027FB4.c)
 * Callees:
 *     sub_1400727B0 @ 0x1400727B0 (sub_1400727B0.c)
 */

__int64 __fastcall sub_14002871C(__int64 a1)
{
  unsigned int *v1; // r9
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v4; // r8d
  unsigned int v5; // r10d

  v1 = *(unsigned int **)(a1 + 24);
  result = *v1;
  if ( (_DWORD)result == 1314275652 )
  {
    result = (__int64)(v1 + 44);
  }
  else
  {
    if ( (_DWORD)result != 1094997074 )
      return result;
    result = (__int64)(v1 + 96);
  }
  if ( result )
  {
    v3 = *(_DWORD *)(result + 212);
    v4 = *(_DWORD *)(result + 208);
    v5 = *(_DWORD *)(a1 + 724);
    if ( v3 && v3 <= v4 )
    {
      *(_DWORD *)(a1 + 724) = v3;
    }
    else
    {
      result = v5;
      if ( v3 != v5 )
        return result;
    }
    *(_DWORD *)(a1 + 928) = v4;
    if ( (byte_1401694F0 & 0x10) != 0 )
      return sub_1400727B0(
               a1,
               v3,
               v4,
               *((_QWORD *)v1 + 6),
               v1[14],
               *(_BYTE *)(a1 + 104),
               *(_BYTE *)(a1 + 105),
               *(_BYTE *)(a1 + 106),
               v5,
               v3,
               v4,
               0);
  }
  return result;
}
