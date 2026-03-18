/*
 * XREFs of PnpGetResourceRequirementsForAssignTable @ 0x140AA534C
 * Callers:
 *     PnpReallocateResources @ 0x1407B33A8 (PnpReallocateResources.c)
 *     PnpQueryRebalanceWorker @ 0x1407B3D7C (PnpQueryRebalanceWorker.c)
 *     PnpAllocateResources @ 0x140AA525C (PnpAllocateResources.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1407B3338 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PipClearDevNodeFlags @ 0x14090E080 (PipClearDevNodeFlags.c)
 *     PnpFilterResourceRequirementsList @ 0x140AA43F4 (PnpFilterResourceRequirementsList.c)
 *     IopQueryDeviceResources @ 0x140AA5668 (IopQueryDeviceResources.c)
 *     IopResourceRequirementsListToReqList @ 0x140B07110 (IopResourceRequirementsListToReqList.c)
 *     IopRearrangeReqList @ 0x140B4BD04 (IopRearrangeReqList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2, _DWORD *a3)
{
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  void *v12; // rcx
  void *v13; // rcx
  int v14; // esi
  __int64 v15; // rdi
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+58h] [rbp+10h] BYREF
  int *v20; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0;
  v19 = 0;
  v20 = 0LL;
  *a3 = 0;
  if ( a1 < a2 )
  {
    v5 = a1 + 24;
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 - 16);
      *(_QWORD *)(v5 + 8) = 0LL;
      if ( (v6 & 0x20) == 0 )
        break;
LABEL_12:
      v5 += 64LL;
      if ( v5 - 24 >= a2 )
        return *a3 == 0 ? 0xC0000001 : 0;
    }
    v7 = *(_QWORD *)(v5 - 24);
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    if ( v7 )
      v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
    else
      v8 = 0LL;
    ExAcquireFastMutex(&PiResourceListLock);
    if ( (*(_DWORD *)(v8 + 396) & 0x400) != 0 )
    {
      v13 = *(void **)(v8 + 440);
      if ( v13 )
      {
        ExFreePoolWithTag(v13, 0);
        *(_QWORD *)(v8 + 440) = 0LL;
        PipClearDevNodeFlags(v8, 512);
        *(_DWORD *)(v5 - 16) |= 0x400u;
      }
    }
    KeReleaseGuardedMutex(&PiResourceListLock);
    if ( !*(_QWORD *)v5 )
    {
      v9 = *(_QWORD *)(v8 + 440);
      if ( !v9 || (*(_DWORD *)(v8 + 396) & 0x200) != 0 )
      {
        v10 = IopQueryDeviceResources(*(_QWORD *)(v5 - 24), 1LL, v5, &v18);
        if ( v10 < 0 || !*(_QWORD *)v5 )
        {
          *(_DWORD *)(v5 + 32) = v10;
LABEL_11:
          *(_DWORD *)(v5 - 16) |= 0x20u;
          goto LABEL_12;
        }
        ExAcquireFastMutex(&PiResourceListLock);
        v12 = *(void **)(v8 + 440);
        if ( v12 )
        {
          ExFreePoolWithTag(v12, 0);
          PipClearDevNodeFlags(v8, 512);
        }
        *(_QWORD *)(v8 + 440) = *(_QWORD *)v5;
        KeReleaseGuardedMutex(&PiResourceListLock);
      }
      else
      {
        *(_QWORD *)v5 = v9;
        *(_DWORD *)(v5 - 12) = 4;
      }
    }
    if ( (*(_DWORD *)(v5 - 16) & 0x200) != 0 )
    {
      if ( (int)PnpFilterResourceRequirementsList(*(_DWORD **)v5, *(unsigned int **)(v8 + 416), &v20, &v19) >= 0 && v20 )
        *(_QWORD *)v5 = v20;
      else
        *(_DWORD *)(v5 - 16) &= ~0x200u;
    }
    v14 = IopResourceRequirementsListToReqList(v5 - 24, v5 + 8);
    if ( v14 >= 0 )
    {
      v15 = *(_QWORD *)(v5 + 8);
      if ( v15 )
      {
        IopRearrangeReqList(*(_QWORD *)(v5 + 8));
        if ( *(_QWORD *)(v15 + 24) )
        {
          v16 = *(_DWORD *)(v15 + 32);
          v17 = 0;
          *(_DWORD *)(v5 + 32) = v14;
          if ( v16 >= 3 )
            v17 = v16;
          ++*a3;
          *(_DWORD *)(v5 - 8) = v17;
          goto LABEL_12;
        }
        PnpFreeResourceRequirementsForAssignTable(v5 - 24, v5 + 40);
        v14 = -1073741438;
      }
    }
    *(_DWORD *)(v5 + 32) = v14;
    goto LABEL_11;
  }
  return *a3 == 0 ? 0xC0000001 : 0;
}
