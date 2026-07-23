/*
 * XREFs of MiDeletePagefile @ 0x140871A84
 * Callers:
 *     MiCreatePagefile @ 0x1408714A0 (MiCreatePagefile.c)
 *     MiCreatePagingFile @ 0x140871844 (MiCreatePagingFile.c)
 *     MiDeletePagingFiles @ 0x140871C3C (MiDeletePagingFiles.c)
 *     MmStoreRegister @ 0x140883A7C (MmStoreRegister.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x14088488C (MiCreateSpecialPurposeMemoryPageFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiFreeModWriterEntry @ 0x1402AE950 (MiFreeModWriterEntry.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     MiFreePageFileHashPfns @ 0x1404AC10C (MiFreePageFileHashPfns.c)
 *     MiUpdatePageFileList @ 0x1406FDC54 (MiUpdatePageFileList.c)
 *     MiReleasePageHash @ 0x140714BDC (MiReleasePageHash.c)
 *     PiPagePathSetState @ 0x1407A6950 (PiPagePathSetState.c)
 *     MiDeletePageFileMemoryExtents @ 0x140884944 (MiDeletePageFileMemoryExtents.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePagefile(char *P, int a2)
{
  __int64 i; // rsi
  void *v5; // rcx
  struct _PRIVILEGE_SET *v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  int v10; // ebp
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rdi
  char v14; // al
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 10); i = (unsigned int)(i + 1) )
    MiFreeModWriterEntry(*(_QWORD **)(*((_QWORD *)P + 4) + 8 * i), 0);
  v5 = (void *)*((_QWORD *)P + 4);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 10);
  if ( v6 )
    CmSiFreeMemory(v6);
  v7 = *((_QWORD *)P + 23);
  if ( v7 )
    MiReleasePageHash(v7, *((_DWORD *)P + 1));
  MiFreePageFileHashPfns((_SLIST_HEADER *)P);
  if ( _bittest16((const signed __int16 *)P + 86, 8u) )
    MiUpdatePageFileList((__int64)P, 0);
  if ( _bittest16((const signed __int16 *)P + 86, 0xBu) )
  {
    v8 = (unsigned __int64)(P + 232);
    v9 = *((_QWORD *)P + 29);
    if ( (P[240] & 1) != 0 && v9 )
      v9 ^= v8;
    v10 = P[240] & 1;
    if ( v9 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)v9;
          v12 = (_QWORD *)v9;
          if ( !*(_QWORD *)v9 )
          {
            v12 = (_QWORD *)(v9 + 8);
            v11 = *(_QWORD *)(v9 + 8);
            if ( !v11 )
              break;
          }
          if ( v10 )
            v9 ^= v11;
          else
            v9 = v11;
          *v12 = 0LL;
        }
        v13 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v10 && v13 )
          v13 ^= v9;
        MiDeletePageFileMemoryExtents((PVOID)v9);
        if ( !v13 )
          break;
        v9 = v13;
      }
    }
    v14 = P[240];
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)P + 30) = 0LL;
    if ( (v14 & 1) != 0 )
      P[240] = 1;
  }
  if ( _bittest16((const signed __int16 *)P + 86, 9u) )
    PiPagePathSetState(*((struct _FILE_OBJECT **)P + 3), 0);
  v15 = (void *)*((_QWORD *)P + 24);
  if ( v15 )
    ObCloseHandle(v15, 0);
  v16 = (void *)*((_QWORD *)P + 3);
  if ( v16 )
    ObfDereferenceObjectWithTag(v16, 0x66506D4Du);
  v17 = (void *)*((_QWORD *)P + 9);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  v18 = (void *)*((_QWORD *)P + 20);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( a2 )
    ExFreePoolWithTag(P, 0);
}
