/*
 * XREFs of RtlpMuiRegGetOrAddStringToPool @ 0x18004D9F0
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x18004D7B0 (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddStringToPool(__int64 a1, const wchar_t *a2, char a3, _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rbp
  const wchar_t *v10; // rcx
  __int64 v12; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // rax

  if ( a1 && a2 )
  {
    v8 = 0;
    v9 = 0LL;
    while ( v8 < *(unsigned __int16 *)(a1 + 6) )
    {
      v10 = (const wchar_t *)(*(_QWORD *)(a1 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(a1 + 16) + v9));
      if ( v10 == a2 || !wcsicmp(v10, a2) )
        goto LABEL_9;
      ++v8;
      v9 += 2LL;
    }
  }
  v8 = -1;
LABEL_9:
  if ( a4 )
    *a4 = 0;
  if ( v8 >= 0 )
    return (unsigned int)v8;
  if ( !a1 || !a2 )
    return 0xFFFFFFFFLL;
  v12 = -1LL;
  while ( a2[++v12] != 0 )
    ;
  v14 = *(unsigned __int16 *)(a1 + 10);
  v15 = v12 + 1;
  if ( v14 + v12 + 1 <= (unsigned __int64)*(unsigned __int16 *)(a1 + 8) )
  {
    if ( a3 )
    {
      v16 = *(unsigned __int16 *)(a1 + 6);
      if ( (unsigned __int16)v16 < *(_WORD *)(a1 + 4) && is_mul_ok(v15, 2uLL) )
      {
        *(_WORD *)(a1 + 6) = v16 + 1;
        v8 = v16;
        *(_WORD *)(a1 + 10) = v14 + 1;
        memmove((void *)(*(_QWORD *)(a1 + 24) + 2LL * (__int16)v14), a2, 2 * v15);
        v17 = *(_QWORD *)(a1 + 16);
        *(_WORD *)(a1 + 10) += v15;
        *(_WORD *)(v17 + 2 * v16) = v14;
        return (unsigned int)v8;
      }
    }
    return 0xFFFFFFFFLL;
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  *a4 = v15;
  return 0xFFFFFFFFLL;
}
