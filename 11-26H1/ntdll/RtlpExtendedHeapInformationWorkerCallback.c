/*
 * XREFs of RtlpExtendedHeapInformationWorkerCallback @ 0x180144C00
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpExtendedHeapInformationWorkerCallback(size_t *Src, __int64 a2)
{
  size_t *v2; // rsi
  unsigned __int64 v4; // rax
  __int64 result; // rax
  __int64 *v7; // r15
  _QWORD *v8; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // r15

  v2 = Src + 1;
  v4 = Src[1];
  if ( v4 > 0x10000 )
    return 3221225701LL;
  *(_QWORD *)(a2 + 32) += v4;
  if ( *(_DWORD *)(a2 + 28) == -1073741789 )
    return 0LL;
  v7 = (__int64 *)(a2 + 56);
  v8 = (_QWORD *)(a2 + 48);
  v9 = (*(_QWORD *)(a2 + 72) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a2 + 72) = v9;
  if ( v9 + *v2 <= *(_QWORD *)(a2 + 56) )
  {
    v12 = Src + 1;
LABEL_10:
    memmove((void *)(v9 + *v8), Src, *v2);
    ++*(_DWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 72) += *v12;
    return 0LL;
  }
  NtUnmapViewOfSection(-1LL, *v8);
  v10 = *v7;
  *(_QWORD *)(a2 + 64) += *v7;
  v9 = 0LL;
  v11 = *(_QWORD *)(a2 + 64);
  *v8 = 0LL;
  if ( v11 < *(_QWORD *)(a2 + 8) )
  {
    result = ZwMapViewOfSection(*(_QWORD *)a2, -1LL, v8, 0LL, v10, a2 + 64, v7, 2, 0, 4);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a2 + 72) = 0LL;
    v12 = Src + 1;
    goto LABEL_10;
  }
  *(_DWORD *)(a2 + 28) = -1073741789;
  return 0LL;
}
