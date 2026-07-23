/*
 * XREFs of EtwpWriteBufferCompressed @ 0x140835324
 * Callers:
 *     EtwpSavePersistedLogger @ 0x140834B24 (EtwpSavePersistedLogger.c)
 * Callees:
 *     RtlCompressBuffer @ 0x140463C00 (RtlCompressBuffer.c)
 *     ZwWriteFile @ 0x1407280C0 (ZwWriteFile.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall EtwpWriteBufferCompressed(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  int v3; // esi
  ULONG v5; // r10d
  __int64 v6; // r9
  ULONG v7; // eax
  UCHAR *v9; // r9
  ULONG v10; // r8d
  NTSTATUS v11; // eax
  unsigned int v12; // r14d
  ULONG v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rax
  ULONG Length; // ecx
  NTSTATUS v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  __int64 v22; // r9
  int v23; // edx
  int v24; // eax
  unsigned int v25; // edx
  int v26; // ecx
  int v27; // eax
  char *v28; // rcx
  PLARGE_INTEGER ByteOffset; // [rsp+38h] [rbp-40h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  ULONG v32; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 52);
  v3 = 0;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_DWORD *)(a1 + 48) - v2 - 72;
  v32 = 0;
  if ( v7 < v5 )
    v5 = v7;
  ByteOffset = *(PLARGE_INTEGER *)(a1 + 32);
  v9 = (UCHAR *)(v2 + v6 + 72);
  v10 = *((_DWORD *)a2 + 12) - 72;
  IoStatusBlock = 0LL;
  v11 = RtlCompressBuffer(3u, (PUCHAR)a2 + 72, v10, v9, v5, 0, &v32, ByteOffset);
  v12 = v11;
  if ( v11 == -1073741789 )
  {
    v13 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 40) + *(unsigned int *)(a1 + 52)), a2, v13);
  }
  else
  {
    if ( v11 < 0 )
    {
      ++*(_DWORD *)(a1 + 24);
      return v12;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v14 = *(unsigned int *)(a1 + 52);
    v15 = *(_QWORD *)(a1 + 40);
    *(_OWORD *)(v14 + v15) = *a2;
    *(_OWORD *)(v14 + v15 + 16) = a2[1];
    *(_OWORD *)(v14 + v15 + 32) = a2[2];
    *(_OWORD *)(v14 + v15 + 48) = a2[3];
    *(_QWORD *)(v14 + v15 + 64) = *((_QWORD *)a2 + 8);
    v13 = v32 + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 52) + *(_QWORD *)(a1 + 40)) = v13;
  ++*(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 52) += v13;
  Length = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 52) >= Length )
  {
    v17 = ZwWriteFile(
            *(HANDLE *)a1,
            0LL,
            0LL,
            0LL,
            &IoStatusBlock,
            *(PVOID *)(a1 + 40),
            Length,
            (PLARGE_INTEGER)(a1 + 8),
            0LL);
    v18 = *(_DWORD *)(a1 + 56);
    v12 = v17;
    if ( v17 < 0 )
    {
      v19 = *(_DWORD *)(a1 + 24) + v18;
      v20 = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a1 + 52) = v20;
      LOBYTE(v3) = v20 != 0;
      v21 = v19 - 1;
      if ( !v20 )
        v21 = v19;
      *(_DWORD *)(a1 + 24) = v21;
      goto LABEL_16;
    }
    v22 = *(unsigned int *)(a1 + 16);
    v23 = *(_DWORD *)(a1 + 52);
    v24 = *(_DWORD *)(a1 + 20);
    *(_QWORD *)(a1 + 8) += v22;
    v25 = v23 - v22;
    *(_DWORD *)(a1 + 52) = v25;
    *(_DWORD *)(a1 + 60) = v25;
    v26 = v18 + v24;
    if ( !v25 )
    {
      *(_DWORD *)(a1 + 20) = v26;
LABEL_16:
      *(_DWORD *)(a1 + 56) = v3;
      return v12;
    }
    v27 = v26 - 1;
    v28 = *(char **)(a1 + 40);
    *(_DWORD *)(a1 + 20) = v27;
    *(_DWORD *)(a1 + 56) = 1;
    memmove(v28, &v28[v22], v25);
  }
  return v12;
}
