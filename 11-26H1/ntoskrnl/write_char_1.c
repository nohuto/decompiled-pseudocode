/*
 * XREFs of write_char_1 @ 0x140540790
 * Callers:
 *     _woutput_s @ 0x14053FE74 (_woutput_s.c)
 *     write_string_1 @ 0x1405407E0 (write_string_1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall write_char_1(__int16 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  bool v4; // sf
  __int64 result; // rax

  v3 = *(_DWORD *)(a2 + 24);
  if ( (v3 & 0x40) != 0 && !*(_QWORD *)(a2 + 16) )
    goto LABEL_5;
  v4 = *(_DWORD *)(a2 + 8) - 2 < 0;
  *(_DWORD *)(a2 + 8) -= 2;
  if ( v4 )
  {
    *(_DWORD *)(a2 + 24) = v3 | 0x20;
  }
  else
  {
    **(_WORD **)a2 = a1;
    result = 0xFFFFLL;
    *(_QWORD *)a2 += 2LL;
    if ( a1 != -1 )
    {
LABEL_5:
      ++*a3;
      return result;
    }
  }
  result = *(unsigned int *)(a2 + 24);
  if ( (result & 0x20) == 0 )
    goto LABEL_5;
  *a3 = -1;
  return result;
}
