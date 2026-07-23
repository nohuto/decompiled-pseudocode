/*
 * XREFs of RtlpStackDbEntryIsEqual @ 0x18015B2BC
 * Callers:
 *     RtlStackDbStackAdd @ 0x18011FA2C (RtlStackDbStackAdd.c)
 * Callees:
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

__int64 __fastcall RtlpStackDbEntryIsEqual(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // ebx
  char *v4; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r14
  unsigned int v7; // edi

  v2 = *(unsigned __int8 *)(a1 + 23);
  if ( (_DWORD)v2 == *(_DWORD *)a2 )
  {
    v4 = *(char **)(a2 + 8);
    v5 = a1 + 24;
    v3 = 0;
    v6 = a1 + 8 * ((v2 >> 3) + 3);
    while ( v5 < v6 )
    {
      if ( memcmp((const void *)(*(_QWORD *)v5 + 24LL), v4, 0x40uLL) )
        return v3;
      v4 += 64;
      v5 += 8LL;
    }
    v7 = v2 & 7;
    if ( !v7 || !memcmp((const void *)(*(_QWORD *)v5 + 24LL), v4, 8LL * v7) )
      return 1;
  }
  else
  {
    return 0;
  }
  return v3;
}
