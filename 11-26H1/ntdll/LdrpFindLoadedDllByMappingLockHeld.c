/*
 * XREFs of LdrpFindLoadedDllByMappingLockHeld @ 0x1800D7130
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByMapping @ 0x18007D91C (LdrpFindLoadedDllByMapping.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     ZwAreMappedFilesTheSame @ 0x180160030 (ZwAreMappedFilesTheSame.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingLockHeld(
        PVOID File2MappedAsFile,
        void *Buf1,
        unsigned int *a3,
        volatile signed __int32 **a4)
{
  unsigned int v4; // ebp
  unsigned __int64 Root; // rax
  _QWORD *j; // rbx
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  unsigned __int64 v13; // rcx
  volatile signed __int32 *v14; // rdi
  _QWORD **v15; // rcx
  _QWORD *v16; // rax
  _QWORD *i; // rcx
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v21; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  Root = (unsigned __int64)LdrpMappingInfoIndex.Root;
  OutHeaders = 0LL;
  if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 )
  {
    if ( !LdrpMappingInfoIndex.Root )
    {
      j = 0LL;
      goto LABEL_36;
    }
    Root = (unsigned __int64)&LdrpMappingInfoIndex ^ (unsigned __int64)LdrpMappingInfoIndex.Root;
  }
  j = 0LL;
  if ( Root )
  {
    v11 = *a3;
    while ( 1 )
    {
      if ( v11 < *(_DWORD *)(Root - 96) )
        goto LABEL_11;
      if ( v11 <= *(_DWORD *)(Root - 96) )
      {
        v12 = *(_DWORD *)(Root - 160);
        if ( a3[1] < v12 )
          goto LABEL_11;
        if ( a3[1] <= v12 )
          break;
      }
      v13 = *(_QWORD *)(Root + 8);
LABEL_12:
      if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 && v13 )
        Root ^= v13;
      else
        Root = v13;
      if ( !Root )
        goto LABEL_19;
    }
    j = (_QWORD *)Root;
LABEL_11:
    v13 = *(_QWORD *)Root;
    goto LABEL_12;
  }
LABEL_19:
  if ( j )
  {
    while ( 1 )
    {
      v14 = (volatile signed __int32 *)(j - 28);
      if ( RtlImageNtHeaderEx(3u, (PVOID)*(j - 22), 0LL, &OutHeaders) >= 0
        && !memcmp(Buf1, OutHeaders, 0x30uLL)
        && ZwAreMappedFilesTheSame(*((PVOID *)v14 + 6), File2MappedAsFile) >= 0 )
      {
        break;
      }
      v15 = (_QWORD **)j[1];
      v16 = j;
      if ( v15 )
      {
        j = (_QWORD *)j[1];
        for ( i = *v15; i; i = (_QWORD *)*i )
          j = i;
      }
      else
      {
        for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( (_QWORD *)*j == v16 )
            break;
          v16 = j;
        }
      }
      if ( !j )
        goto LABEL_36;
      v18 = *((_DWORD *)j - 24);
      if ( *a3 >= v18 && *a3 <= v18 )
      {
        v19 = *((_DWORD *)j - 40);
        if ( a3[1] >= v19 && a3[1] <= v19 )
          continue;
      }
      j = 0LL;
      goto LABEL_36;
    }
    v21 = *((_QWORD *)v14 + 19);
    if ( *(_DWORD *)(v21 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)v21 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement(v14 + 69);
    *a4 = v14;
  }
LABEL_36:
  if ( !j )
    return (unsigned int)-1073741515;
  return v4;
}
