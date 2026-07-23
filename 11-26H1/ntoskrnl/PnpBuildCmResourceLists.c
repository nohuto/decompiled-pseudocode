/*
 * XREFs of PnpBuildCmResourceLists @ 0x1407B6158
 * Callers:
 *     PnpReallocateResources @ 0x1407B6408 (PnpReallocateResources.c)
 *     PnpRebalance @ 0x1407B6FF8 (PnpRebalance.c)
 *     PnpAllocateResources @ 0x140AA0454 (PnpAllocateResources.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1409B01B0 (PipClearDevNodeFlags.c)
 *     PnpDetermineResourceListSize @ 0x140AA0E1C (PnpDetermineResourceListSize.c)
 *     PnpBuildCmResourceList @ 0x140AFB1F0 (PnpBuildCmResourceList.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140B36034 (IopWriteAllocatedResourcesToRegistry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpBuildCmResourceLists(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 i; // rdi
  __int64 v7; // rbx
  void *v8; // rcx
  void *v9; // rcx
  unsigned int v10; // esi
  unsigned int v11; // r12d
  _DWORD *v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int v20; // eax

  if ( a3 )
  {
    for ( i = a1; i < a2; i += 64LL )
    {
      if ( *(_QWORD *)i )
        v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)i + 312LL) + 40LL);
      else
        v7 = 0LL;
      ExAcquireFastMutex(&PiResourceListLock);
      v8 = *(void **)(v7 + 416);
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0);
        *(_QWORD *)(v7 + 416) = 0LL;
      }
      v9 = *(void **)(v7 + 424);
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0);
        *(_QWORD *)(v7 + 424) = 0LL;
      }
      KeReleaseGuardedMutex(&PiResourceListLock);
    }
  }
  v10 = -1;
  do
  {
    v11 = v10;
    v10 = 0;
    if ( a1 >= a2 )
      break;
    v12 = (_DWORD *)(a1 + 56);
    do
    {
      v13 = *(v12 - 12);
      *((_QWORD *)v12 - 2) = 0LL;
      if ( (v13 & 0x28) == 0 )
      {
        if ( (v13 & 0x10) != 0 )
        {
          *v12 = -1073741823;
        }
        else if ( v11 == -1 || *v12 == -1073741267 )
        {
          *v12 = 0;
          PnpBuildCmResourceList(v12 - 14, 1LL);
          if ( *v12 == -1073741267 )
          {
            ++v10;
          }
          else
          {
            if ( a3 )
            {
              v14 = *((_QWORD *)v12 - 7);
              if ( v14 )
                v15 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL);
              else
                v15 = 0LL;
              if ( (*(v12 - 12) & 0x400) != 0 )
                PipClearDevNodeFlags(v15, 3072LL);
              ExAcquireFastMutex(&PiResourceListLock);
              v16 = *((_QWORD *)v12 - 2);
              *(_QWORD *)(v15 + 416) = v16;
              if ( !v16 )
                PipSetDevNodeFlags(v15, 256LL);
              *(_QWORD *)(v15 + 424) = *((_QWORD *)v12 - 1);
              KeReleaseGuardedMutex(&PiResourceListLock);
            }
            v17 = *((_QWORD *)v12 - 2);
            if ( v17 )
            {
              v18 = *((_QWORD *)v12 - 7);
              if ( v18 )
                v19 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
              else
                v19 = 0LL;
              v20 = PnpDetermineResourceListSize(*((_QWORD *)v12 - 2));
              IopWriteAllocatedResourcesToRegistry(v19, v17, v20);
            }
          }
        }
      }
      v12 += 16;
    }
    while ( (unsigned __int64)(v12 - 14) < a2 );
  }
  while ( v10 && v10 < v11 );
}
