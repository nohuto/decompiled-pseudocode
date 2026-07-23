/*
 * XREFs of RtlpInternEntryMatch @ 0x1409CAA28
 * Callers:
 *     RtlpInternEntryFind @ 0x1409CA648 (RtlpInternEntryFind.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

char __fastcall RtlpInternEntryMatch(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  size_t v5; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r9
  size_t v11; // r8
  size_t v12; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v5 = (unsigned __int16)v3;
  if ( *a2 != (unsigned __int16)v3 || a3 != (unsigned __int16)v3 + ((v3 >> 16) & 0x3FFFFFFF) )
    return 0;
  v7 = a2[2];
  v8 = 0LL;
  v9 = 0LL;
  while ( v8 < v7 )
  {
    v10 = a2[1];
    v11 = *(_QWORD *)(v10 + v9 + 16);
    v12 = v5
        + *(_QWORD *)(v10 + v9 + 24)
        - ((*(_QWORD *)(v10 + v9 + 24) - 1LL) & (v5 + *(_QWORD *)(v10 + v9 + 24) - 1LL))
        - 1;
    v5 = v11 + v12;
    if ( memcmp((const void *)(v12 + a1), *(const void **)(v10 + v9), v11) )
      return 0;
    ++v8;
    v9 += 32LL;
  }
  return 1;
}
