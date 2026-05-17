/*
 * XREFs of RtlPrefixString @ 0x1800CA1A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180082DC0 (RtlUpperChar.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

bool __fastcall RtlPrefixString(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // r14
  size_t v8; // r8
  unsigned __int8 v9; // bp
  __int64 v10; // rcx
  char v12; // di
  __int64 v13; // rdx
  __int64 v14; // r8

  v3 = *a1;
  v5 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v6 = *(unsigned __int8 **)(a2 + 8);
  if ( *(_WORD *)a2 < (unsigned __int16)v3 )
    return 0;
  v7 = &v5[v3];
  v8 = *a1;
  if ( !a3 )
    return memcmp(*((const void **)a1 + 1), *(const void **)(a2 + 8), v8) == 0;
  while ( v5 < v7 )
  {
    v9 = *v5;
    v10 = *v6;
    if ( *v5 != (_BYTE)v10 )
    {
      v12 = RtlUpperChar(v10, a2, v8);
      if ( RtlUpperChar(v9, v13, v14) != v12 )
        return 0;
    }
    ++v5;
    ++v6;
  }
  return 1;
}
