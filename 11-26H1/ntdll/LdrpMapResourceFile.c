/*
 * XREFs of LdrpMapResourceFile @ 0x1800A5BB0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlReleaseRelativeName @ 0x1800A6DC0 (RtlReleaseRelativeName.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x18015F5A0 (NtOpenFile.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, __int128 *a2, char a3, HANDLE *a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v9; // rsi
  int v10; // edi
  const wchar_t *v11; // rcx
  size_t v12; // rax
  int v13; // ebx
  __int64 v14; // r14
  void *v15; // rax
  _QWORD *v16; // rcx
  __int128 v18; // xmm0
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-51h] BYREF
  __int64 v22; // [rsp+70h] [rbp-49h] BYREF
  __int128 v23; // [rsp+78h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-31h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v26; // [rsp+C0h] [rbp+7h] BYREF
  __int128 v27; // [rsp+D0h] [rbp+17h]
  HANDLE FileHandle; // [rsp+110h] [rbp+57h] BYREF

  v25 = 0LL;
  FileHandle = 0LL;
  Handle = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v23 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = a5;
      if ( a5 )
      {
        IoStatusBlock.Pointer = 0LL;
        RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &IoStatusBlock);
        if ( !IoStatusBlock.Pointer )
        {
LABEL_28:
          v13 = -1073741701;
          goto LABEL_29;
        }
        v10 = 2;
        if ( *((_WORD *)IoStatusBlock.Pointer + 36) < 6u )
          v10 = 8;
        if ( a3 )
        {
          v18 = *a2;
          v14 = 0LL;
          ObjectAttributes.Length = 48;
          v23 = v18;
        }
        else
        {
          v11 = (const wchar_t *)*((_QWORD *)a2 + 1);
          IoStatusBlock.Pointer = 0LL;
          IoStatusBlock.Information = (unsigned __int64)v11;
          if ( v11 )
          {
            v12 = wcslen(v11);
            if ( v12 > 0x7FFE )
            {
              v13 = -1073741562;
              goto LABEL_29;
            }
            LOWORD(IoStatusBlock.Status) = 2 * v12;
            WORD1(IoStatusBlock.Pointer) = 2 * v12 + 2;
          }
          v13 = RtlpDosPathNameToRelativeNtPathName(
                  2,
                  (__m128i *)&IoStatusBlock,
                  0LL,
                  (unsigned __int16 *)&v23,
                  0LL,
                  0LL,
                  (__int64)&v26);
          if ( v13 < 0 )
          {
LABEL_29:
            if ( FileHandle )
            {
              NtClose(FileHandle);
              FileHandle = 0LL;
            }
            if ( v21 )
              NtUnmapViewOfSection(-1LL, v21);
            return (unsigned int)v13;
          }
          v14 = *((_QWORD *)&v23 + 1);
          if ( (_WORD)v26 )
          {
            v15 = (void *)v27;
            v23 = v26;
          }
          else
          {
            v15 = 0LL;
            *(_QWORD *)&v27 = 0LL;
          }
          ObjectAttributes.Length = 48;
          if ( v14 )
          {
            ObjectAttributes.RootDirectory = v15;
LABEL_16:
            ObjectAttributes.Attributes = 64;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v23;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            IoStatusBlock = 0LL;
            v13 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            if ( v14 )
            {
              RtlReleaseRelativeName(&v26);
              RtlFreeHeap_0();
            }
            if ( v13 < 0 )
              goto LABEL_29;
            v13 = NtCreateSection(&Handle, 983045LL, 0LL, 0LL, v10, 0x8000000, FileHandle);
            if ( v13 < 0 )
              goto LABEL_29;
            v13 = ZwMapViewOfSection(Handle, -1LL, &v21, 0LL, 0LL, &v25, &v22, 1, 0, v10);
            if ( Handle )
            {
              NtClose(Handle);
              Handle = 0LL;
            }
            if ( v13 < 0 )
              goto LABEL_29;
            IoStatusBlock.Pointer = 0LL;
            RtlImageNtHeaderEx(1, v21, 0LL, &IoStatusBlock);
            if ( IoStatusBlock.Pointer )
            {
              v16 = a6;
              *v9 = v21;
              if ( v16 )
                *v16 = v22;
              if ( a4 )
              {
                *a4 = FileHandle;
              }
              else if ( FileHandle )
              {
                NtClose(FileHandle);
              }
              return (unsigned int)v13;
            }
            goto LABEL_28;
          }
        }
        ObjectAttributes.RootDirectory = 0LL;
        goto LABEL_16;
      }
    }
  }
  return 3221225485LL;
}
