/*
 * XREFs of IopLiveDumpFreeDumpBuffers @ 0x1404DDEB4
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x140345D88 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404DD93C (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x1405D3E34 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x1405D583C (IopLiveDumpWriteDumpFileWithExtraPages.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     VslAbortLiveDump @ 0x1405C5204 (VslAbortLiveDump.c)
 *     IopLiveDumpFreeIoSpaceRanges @ 0x1405D1D0C (IopLiveDumpFreeIoSpaceRanges.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpFreeDumpBuffers(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r8
  ULONG_PTR v4; // rcx
  struct _MDL *v5; // rsi
  struct _MDL *Next; // rbp
  __int64 v7; // rdx
  struct _MDL *v8; // rsi
  struct _MDL *v9; // rbp
  __int64 v10; // rdx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx

  v1 = a1 + 680;
  v2 = 0LL;
  if ( a1 != -680 )
  {
    if ( VslVsmEnabled )
      VslAbortLiveDump();
    if ( *(_QWORD *)(v1 + 64) )
    {
      do
      {
        v3 = *(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v2);
        if ( v3 )
        {
          v4 = *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8 * v2);
          if ( v4 )
          {
            MiFreePagesFromMdl(v4, 0, 0, 0);
            ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v1 + 80) + 8 * v2), 0x706D644Cu);
            *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8 * v2) = 0LL;
          }
          else
          {
            v5 = *(struct _MDL **)(v1 + 136);
            if ( v5 && *(_QWORD *)(v1 + 128) && v2 == *(_QWORD *)(v1 + 120) )
            {
              do
              {
                Next = v5->Next;
                if ( (v5->MdlFlags & 1) != 0 )
                  MmUnmapLockedPages(v5->MappedSystemVa, v5);
                ExFreePoolWithTag(v5, 0x706D644Cu);
                v5 = Next;
              }
              while ( Next );
              v7 = *(unsigned int *)(v1 + 152);
              *(_QWORD *)(v1 + 136) = 0LL;
              IopLiveDumpFreeIoSpaceRanges(v1 + 144, v7);
              while ( v2 < *(_QWORD *)(v1 + 64) && v2 < *(_QWORD *)(v1 + 120) + *(_QWORD *)(v1 + 128) )
                *(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v2++) = 0LL;
              *(_QWORD *)(v1 + 128) = 0LL;
              continue;
            }
            v8 = *(struct _MDL **)(v1 + 176);
            if ( v8 && *(_QWORD *)(v1 + 168) && v2 == *(_QWORD *)(v1 + 160) )
            {
              do
              {
                v9 = v8->Next;
                if ( (v8->MdlFlags & 1) != 0 )
                  MmUnmapLockedPages(v8->MappedSystemVa, v8);
                ExFreePoolWithTag(v8, 0x706D644Cu);
                v8 = v9;
              }
              while ( v9 );
              v10 = *(unsigned int *)(v1 + 192);
              *(_QWORD *)(v1 + 176) = 0LL;
              IopLiveDumpFreeIoSpaceRanges(v1 + 184, v10);
              while ( v2 < *(_QWORD *)(v1 + 64) && v2 < *(_QWORD *)(v1 + 160) + *(_QWORD *)(v1 + 168) )
                *(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v2++) = 0LL;
              *(_QWORD *)(v1 + 168) = 0LL;
              continue;
            }
            MmFreeIndependentPages(v3, BufferChunkSizeInBytes);
          }
          *(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v2) = 0LL;
        }
        ++v2;
      }
      while ( v2 < *(_QWORD *)(v1 + 64) );
    }
    v11 = *(void **)(v1 + 72);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0x706D644Cu);
      *(_QWORD *)(v1 + 72) = 0LL;
    }
    v12 = *(void **)(v1 + 200);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0x706D644Cu);
      *(_QWORD *)(v1 + 200) = 0LL;
    }
    v13 = *(void **)(v1 + 80);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0x706D644Cu);
      *(_QWORD *)(v1 + 80) = 0LL;
    }
    *(_QWORD *)(v1 + 64) = 0LL;
    *(_DWORD *)(v1 + 40) = 0;
    *(_QWORD *)v1 = 0LL;
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_QWORD *)(v1 + 16) = 0LL;
    *(_QWORD *)(v1 + 24) = 0LL;
  }
}
