/*
 * XREFs of RtlpMUIEnumerateFolder @ 0x18010288C
 * Callers:
 *     RtlGetFileMUIPath @ 0x180035550 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlReAllocateHeap_0 @ 0x180038020 (RtlReAllocateHeap_0.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlInitUnicodeStringEx @ 0x1800A4880 (RtlInitUnicodeStringEx.c)
 *     RtlReleaseRelativeName @ 0x1800A6DC0 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenFile @ 0x18015F5A0 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x18015F5E0 (NtQueryDirectoryFile.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpMUIEnumerateFolder(const wchar_t *a1, _QWORD *a2, __int64 *a3)
{
  char v4; // r12
  unsigned int v5; // r13d
  unsigned int *Heap_0; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  void *v9; // rax
  NTSTATUS v10; // esi
  char v11; // al
  __int64 v12; // r15
  int v13; // eax
  unsigned int *i; // rsi
  bool v15; // zf
  __int64 v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+40h] [rbp-99h]
  int v23; // [rsp+50h] [rbp-89h]
  HANDLE FileHandle; // [rsp+60h] [rbp-79h] BYREF
  int v25; // [rsp+68h] [rbp-71h] BYREF
  __int128 v26; // [rsp+70h] [rbp-69h] BYREF
  __int128 v27; // [rsp+80h] [rbp-59h] BYREF
  __int128 v28; // [rsp+90h] [rbp-49h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-39h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-29h] BYREF
  __m128i v31; // [rsp+E0h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp+17h] BYREF
  unsigned int v34; // [rsp+158h] [rbp+7Fh]

  v25 = 0;
  v34 = 0;
  FileHandle = 0LL;
  v4 = 0;
  v5 = 0;
  Heap_0 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v28 = 0LL;
  v29 = 0LL;
  if ( !a1 )
    goto LABEL_49;
  if ( !a3 )
    return v4;
  if ( !a2 )
    goto LABEL_50;
  v7 = -1LL;
  do
    ++v7;
  while ( a1[v7] );
  if ( v7 >= 0x104 )
    goto LABEL_50;
  *a3 = 0LL;
  v31 = 0LL;
  if ( (int)RtlInitUnicodeStringEx((__int64)&v31, a1) >= 0
    && (int)RtlpDosPathNameToRelativeNtPathName(2, &v31, 0LL, (unsigned __int16 *)&v26, 0LL, 0LL, (__int64)&v28) >= 0 )
  {
    v8 = *((_QWORD *)&v26 + 1);
    if ( (_WORD)v28 )
    {
      v9 = (void *)v29;
      v26 = v28;
    }
    else
    {
      v9 = 0LL;
      *(_QWORD *)&v29 = 0LL;
    }
    ObjectAttributes.RootDirectory = v9;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v26;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
    RtlReleaseRelativeName((__int64)&v28);
    if ( v8 )
      RtlFreeHeap_0();
    if ( v10 >= 0 )
    {
      if ( FileHandle )
      {
        Heap_0 = (unsigned int *)RtlAllocateHeap_0();
        if ( !Heap_0 )
          goto LABEL_31;
        v11 = 1;
        v12 = 0LL;
LABEL_17:
        LOBYTE(v23) = v11;
        LOBYTE(v22) = 0;
        v13 = NtQueryDirectoryFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Heap_0, 4096, 1, v22, 0LL, v23);
        if ( v13 < 0 )
        {
          if ( v13 != -2147483642 )
            goto LABEL_31;
        }
        else if ( Heap_0[15] || *Heap_0 )
        {
          for ( i = Heap_0; ; i = (unsigned int *)((char *)i + *i) )
          {
            v15 = (i[14] & 0x10) == 0;
            WORD1(v27) = *((_WORD *)i + 30);
            LOWORD(v27) = WORD1(v27);
            *((_QWORD *)&v27 + 1) = i + 16;
            if ( !v15 && RtlCultureNameToLCID((unsigned __int16 *)&v27, &v25) )
            {
              v16 = *a3;
              ++v12;
              if ( *a3 )
              {
                v17 = v34;
              }
              else
              {
                v20 = RtlAllocateHeap_0();
                *a3 = v20;
                v16 = v20;
                if ( !v20 )
                  goto LABEL_31;
                v17 = 0;
                v5 = 520;
                v34 = 0;
              }
              v18 = i[15];
              if ( (unsigned __int64)(v18 + v17) + 2 > v5 )
              {
                if ( v18 > 0x208 )
                  v5 += v18 + 2;
                else
                  v5 += 520;
                v21 = RtlReAllocateHeap_0();
                *a3 = v21;
                if ( !v21 )
                {
                  *a3 = v16;
                  goto LABEL_31;
                }
                v16 = v21;
              }
              memmove((void *)(v16 + v34), i + 16, i[15]);
              v34 += i[15] + 2;
            }
            if ( !*i )
            {
              memset_thunk_772440563353939046(Heap_0, 0, 0x1000uLL);
              v11 = 0;
              goto LABEL_17;
            }
          }
        }
        v4 = 1;
        *a2 = v12;
        goto LABEL_31;
      }
LABEL_50:
      if ( *a3 )
      {
        RtlFreeHeap_0();
        *a3 = 0LL;
      }
      return v4;
    }
  }
LABEL_31:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap_0 )
    RtlFreeHeap_0();
  if ( !v4 )
  {
LABEL_49:
    if ( !a3 )
      return v4;
    goto LABEL_50;
  }
  return v4;
}
