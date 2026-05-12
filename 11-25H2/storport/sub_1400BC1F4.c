/*
 * XREFs of sub_1400BC1F4 @ 0x1400BC1F4
 * Callers:
 *     sub_14007842C @ 0x14007842C (sub_14007842C.c)
 *     sub_14012F368 @ 0x14012F368 (sub_14012F368.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1400BC1F4(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  bool v4; // zf

  result = *a1;
  if ( (_DWORD)result == 1094997074 )
  {
    result = *(unsigned int *)(a2 + 12);
    if ( (result & 2) == 0 )
    {
      if ( *((char *)a1 + 107) >= 0 )
        return result;
      v4 = a1[1244] == -1;
LABEL_10:
      if ( !v4 )
        return result;
    }
LABEL_11:
    result = 0xFFEE000000000000uLL;
    *(_QWORD *)(a3 + 8) |= 0xFFEE000000000000uLL;
    return result;
  }
  if ( (_DWORD)result != 1314275652 )
    return result;
  if ( (*(_DWORD *)(a2 + 12) & 2) != 0 )
    goto LABEL_11;
  result = *((_QWORD *)a1 + 20);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    if ( result )
    {
      v4 = *(_DWORD *)(result + 128) == -1;
      goto LABEL_10;
    }
  }
  return result;
}
