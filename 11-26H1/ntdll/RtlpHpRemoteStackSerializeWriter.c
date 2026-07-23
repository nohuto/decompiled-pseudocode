/*
 * XREFs of RtlpHpRemoteStackSerializeWriter @ 0x180144F90
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __fastcall RtlpHpRemoteStackSerializeWriter(char *Src, size_t Size, __int64 a3)
{
  size_t v4; // rdi
  PVOID *v6; // r15
  ULONG_PTR *ViewSize; // r14
  __int64 v8; // rdx
  char *v9; // rcx
  size_t v10; // rsi
  ULONG_PTR v11; // rcx
  void *v12; // rcx
  NTSTATUS result; // eax
  SIZE_T CommitSize; // [rsp+20h] [rbp-48h]

  *(_QWORD *)(a3 + 32) += Size;
  v4 = Size;
  if ( *(_DWORD *)(a3 + 28) != -1073741789 && Size )
  {
    v6 = (PVOID *)(a3 + 48);
    ViewSize = (ULONG_PTR *)(a3 + 56);
    while ( 1 )
    {
      v8 = *(_QWORD *)(a3 + 72);
      v9 = (char *)*v6 + v8;
      if ( v8 + v4 <= *ViewSize )
        break;
      v10 = *ViewSize - v8;
      memmove(v9, Src, v10);
      v4 -= v10;
      Src += v10;
      *(_QWORD *)(a3 + 64) += *ViewSize;
      if ( *(_QWORD *)(a3 + 64) >= *(_QWORD *)(a3 + 8) )
      {
        *(_DWORD *)(a3 + 28) = -1073741789;
        return 0;
      }
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v6);
      v11 = *ViewSize;
      if ( *ViewSize >= *(_QWORD *)(a3 + 8) - *(_QWORD *)(a3 + 64) )
        v11 = *(_QWORD *)(a3 + 8) - *(_QWORD *)(a3 + 64);
      *ViewSize = v11;
      CommitSize = v11;
      v12 = *(void **)a3;
      *v6 = 0LL;
      result = ZwMapViewOfSection(
                 v12,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 v6,
                 0LL,
                 CommitSize,
                 (PLARGE_INTEGER)(a3 + 64),
                 ViewSize,
                 ViewUnmap,
                 0,
                 4u);
      if ( result < 0 )
        return result;
      *(_QWORD *)(a3 + 72) = 0LL;
    }
    memmove(v9, Src, v4);
    *(_QWORD *)(a3 + 72) += v4;
  }
  return 0;
}
