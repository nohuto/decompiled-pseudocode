/*
 * XREFs of LdrpIsCurrentPatchLatest @ 0x18015BCEC
 * Callers:
 *     LdrHotPatchNotify @ 0x18015B900 (LdrHotPatchNotify.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     ZwAreMappedFilesTheSame @ 0x180160130 (ZwAreMappedFilesTheSame.c)
 *     ZwManageHotPatch @ 0x180161270 (ZwManageHotPatch.c)
 */

__int64 __fastcall LdrpIsCurrentPatchLatest(unsigned __int64 a1, bool *a2, __int64 a3, unsigned __int64 a4)
{
  int LoadedDllByHandle; // eax
  __int64 v7; // rdi
  int v8; // ebx
  bool v9; // si
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+50h] [rbp-9h] BYREF
  __int64 v14; // [rsp+58h] [rbp-1h] BYREF
  __int128 v15; // [rsp+60h] [rbp+7h] BYREF
  __int128 v16; // [rsp+70h] [rbp+17h]
  HANDLE Handle; // [rsp+80h] [rbp+27h]
  __int64 v18; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+7Fh] BYREF

  v13 = 0LL;
  Handle = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v19, 0LL, a4);
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
      v9 = *(_QWORD *)(v7 + 296) == 0LL;
LABEL_11:
      if ( v8 < 0 )
        goto LABEL_13;
      goto LABEL_12;
    }
    if ( *(_QWORD *)(v7 + 296) )
    {
      v8 = ZwMapViewOfSection(Handle, -1LL, &v18, 0LL, 0LL, 0LL, &v14, 2, 0, 16);
      if ( v8 < 0 )
        goto LABEL_13;
      v11 = ZwAreMappedFilesTheSame(*(_QWORD *)(v7 + 296), v18);
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
  if ( Handle )
    NtClose(Handle);
  if ( v18 )
    NtUnmapViewOfSection(-1LL, v18);
  if ( v7 )
    LdrpDereferenceModule(v7);
  return (unsigned int)v8;
}
