/*
 * XREFs of LdrpIsCurrentPatchLatest @ 0x18015BBAC
 * Callers:
 *     LdrHotPatchNotify @ 0x18015B7C0 (LdrHotPatchNotify.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     ZwAreMappedFilesTheSame @ 0x180160030 (ZwAreMappedFilesTheSame.c)
 *     ZwManageHotPatch @ 0x180161170 (ZwManageHotPatch.c)
 */

__int64 __fastcall LdrpIsCurrentPatchLatest(void *a1, bool *a2, __int64 a3, char *a4)
{
  int LoadedDllByHandle; // eax
  PVOID v7; // rdi
  NTSTATUS v8; // ebx
  bool v9; // si
  int v10; // eax
  NTSTATUS v11; // eax
  __int64 v13; // [rsp+50h] [rbp-9h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-1h] BYREF
  __int128 v15; // [rsp+60h] [rbp+7h] BYREF
  __int128 v16; // [rsp+70h] [rbp+17h]
  HANDLE SectionHandle; // [rsp+80h] [rbp+27h]
  PVOID BaseAddress; // [rsp+D0h] [rbp+77h] BYREF
  PVOID v19; // [rsp+D8h] [rbp+7Fh] BYREF

  v13 = 0LL;
  SectionHandle = 0LL;
  v19 = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, (__int64 *)&v19, 0LL, a4);
  v7 = v19;
  v8 = LoadedDllByHandle;
  if ( LoadedDllByHandle >= 0 )
  {
    v9 = 1;
    *((_QWORD *)&v16 + 1) = a1;
    LODWORD(v15) = 1;
    *((_QWORD *)&v15 + 1) = 0x100000000DLL;
    LODWORD(v16) = 0x1000000;
    v10 = ZwManageHotPatch(10LL, &v15, 40LL, &v13);
    v8 = v10;
    if ( v10 < 0 )
    {
      if ( v10 != -1073740588 )
        goto LABEL_13;
      v8 = 0;
      v9 = *((_QWORD *)v7 + 37) == 0LL;
LABEL_11:
      if ( v8 < 0 )
        goto LABEL_13;
      goto LABEL_12;
    }
    if ( *((_QWORD *)v7 + 37) )
    {
      v8 = ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             0LL,
             0LL,
             0LL,
             &ViewSize,
             ViewUnmap,
             0,
             0x10u);
      if ( v8 < 0 )
        goto LABEL_13;
      v11 = ZwAreMappedFilesTheSame(*((PVOID *)v7 + 37), BaseAddress);
      v8 = 0;
      if ( v11 < 0 )
      {
        v9 = 0;
        if ( v11 != -1073741612 )
          v8 = v11;
        goto LABEL_11;
      }
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
LABEL_12:
    *a2 = v9;
  }
LABEL_13:
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( v7 )
    LdrpDereferenceModule((char *)v7);
  return (unsigned int)v8;
}
