/*
 * XREFs of RtlpInternEntryCreate @ 0x1409CB490
 * Callers:
 *     RtlInternTableIntern @ 0x1409CA278 (RtlInternTableIntern.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_WORD *__fastcall RtlpInternEntryCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  _WORD *v7; // rax
  unsigned __int64 v8; // rdi
  _WORD *v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // r9
  __int64 v16; // rsi
  char *v17; // rbx

  v4 = a4 - *(_QWORD *)a2;
  if ( (unsigned __int64)(*(_QWORD *)a2 - 32LL) > 0xFFE0 || v4 > 0x40000000 )
    return 0LL;
  v7 = (_WORD *)guard_dispatch_icall_no_overrides(a1, a4);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, *(_QWORD *)a2);
    v9[12] = *(_WORD *)a2;
    v10 = v4 << 16;
    *((_QWORD *)v9 + 1) = a3;
    v11 = (*((_QWORD *)v9 + 3) ^ v10) & 0xFFFFC0000000FFFFuLL;
    *((_QWORD *)v9 + 2) = 1LL;
    *((_QWORD *)v9 + 3) = v10 ^ v11;
    *(_DWORD *)(a2 + 24) |= 1u;
    v12 = (unsigned __int16)*((_DWORD *)v9 + 6);
    if ( *(_QWORD *)(a2 + 16) )
    {
      v13 = 0LL;
      do
      {
        v14 = *(_QWORD *)(a2 + 8);
        v15 = v12;
        v16 = *(_QWORD *)(v13 + v14 + 24)
            - ((*(_QWORD *)(v13 + v14 + 24) - 1LL) & (*(_QWORD *)(v13 + v14 + 24) + v12 - 1))
            + v12
            - 1;
        if ( v16 != v15 )
          memset_0((char *)v9 + v15, 0, v16 - v15);
        v17 = (char *)v9 + v16;
        memmove((char *)v9 + v16, *(const void **)(v13 + v14), *(_QWORD *)(v13 + v14 + 16));
        v12 = *(_QWORD *)(v13 + v14 + 16) + v16;
        ++v8;
        *(_QWORD *)(v13 + v14 + 8) = v17;
        v13 += 32LL;
      }
      while ( v8 < *(_QWORD *)(a2 + 16) );
    }
    return v9;
  }
  return (_WORD *)v8;
}
