/*
 * XREFs of RtlpStackDbEntryIsEqual @ 0x14043C208
 * Callers:
 *     RtlStackDbStackAdd @ 0x14043BB88 (RtlStackDbStackAdd.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

__int64 __fastcall RtlpStackDbEntryIsEqual(__int64 a1, __int64 a2)
{
  int v2; // edi
  char *v3; // rbp
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned __int64 v6; // r14
  unsigned int v7; // edi

  v2 = *(unsigned __int8 *)(a1 + 23);
  if ( v2 == *(_DWORD *)a2 )
  {
    v3 = *(char **)(a2 + 8);
    v4 = a1 + 24;
    v5 = 0;
    v6 = a1 + 8 * (((unsigned __int64)*(unsigned __int8 *)(a1 + 23) >> 3) + 3);
    while ( v4 < v6 )
    {
      if ( memcmp((const void *)(*(_QWORD *)v4 + 24LL), v3, 0x40uLL) )
        return v5;
      v3 += 64;
      v4 += 8LL;
    }
    v7 = v2 & 7;
    if ( !v7 || !memcmp((const void *)(*(_QWORD *)v4 + 24LL), v3, 8LL * v7) )
      return 1;
  }
  else
  {
    return 0;
  }
  return v5;
}
