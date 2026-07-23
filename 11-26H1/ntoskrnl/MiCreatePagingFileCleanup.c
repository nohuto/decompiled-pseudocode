/*
 * XREFs of MiCreatePagingFileCleanup @ 0x14086EC18
 * Callers:
 *     MiCreatePagingFileMap @ 0x14098989C (MiCreatePagingFileMap.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x1402A4B50 (MiFreeLargeZeroPages.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiFreeProtoPool @ 0x140450078 (MiFreeProtoPool.c)
 *     MiDeleteSectionAwe @ 0x140706188 (MiDeleteSectionAwe.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiCreatePagingFileCleanup(__int64 *a1)
{
  unsigned int *v1; // rdi
  __int64 v3; // r13
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r14
  void *v6; // rbp
  unsigned int *v7; // rsi
  void *v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi

  v1 = (unsigned int *)a1[18];
  v3 = *a1;
  if ( v1 )
  {
    v4 = v1[24];
    v5 = 0LL;
    v6 = *(void **)v1;
    if ( v1[24] )
    {
      v7 = v1 + 43;
      do
      {
        v8 = *(void **)(v7 - 9);
        if ( !v8 )
          break;
        MiFreeProtoPool(v8, 8LL * *v7);
        v7 += 22;
        ++v5;
      }
      while ( v5 < v4 );
    }
    if ( a1[17] )
      MiDeleteSectionAwe((__int64)v1);
    ExFreePoolWithTag(v1, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  if ( (*(_DWORD *)(v3 + 16) & 0x8000000) != 0 )
  {
    v9 = a1[2];
    v10 = a1[1];
    MiFreeLargeZeroPages(v9, (__int64)(a1 + 3), 0);
    if ( *((_BYTE *)a1 + 153) )
      MiReturnResident(v9, v10);
    if ( *((_BYTE *)a1 + 152) )
      MiReturnCommit(v9, v10, 0);
  }
}
