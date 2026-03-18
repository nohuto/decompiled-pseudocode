/*
 * XREFs of ?GetFenceStorageAllocInfo@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1400A51E4
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x1400369B8 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORE.c)
 *     ?OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400A5A70 (-OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x14004CE54 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall GetFenceStorageAllocInfo(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        struct _DXGK_ALLOCATIONINFO *a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned __int64 v8; // r9
  char v9; // r12
  unsigned int v10; // ecx
  unsigned int v11; // r10d
  __int64 *v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  _QWORD v21[14]; // [rsp+28h] [rbp-59h] BYREF
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v22; // [rsp+98h] [rbp+17h] BYREF

  memset(&v22, 0, sizeof(v22));
  memset(v21, 0, sizeof(v21));
  v6 = *((_QWORD *)a1 + 5040);
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = *(_DWORD *)(*(_QWORD *)v6 + 136LL);
  if ( v11 )
  {
    v12 = *(__int64 **)(*(_QWORD *)v6 + 1752LL);
    do
    {
      v13 = *v12;
      if ( (*(_DWORD *)(*v12 + 64) & 1) != 0 && *(_DWORD *)(v13 + 104) != 2 && *(_QWORD *)(v13 + 40) > v8 )
      {
        v8 = *(_QWORD *)(v13 + 40);
        v9 = v10;
      }
      ++v10;
      ++v12;
    }
    while ( v10 < v11 );
  }
  v22.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE|D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE;
  v22.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v21;
  LODWORD(v21[1]) = *((_DWORD *)a2 + 12);
  v14 = *((_DWORD *)a2 + 11);
  if ( v14 == 1 || (HIDWORD(v21[0]) = 1, v14 != 2) )
    HIDWORD(v21[0]) = 0;
  if ( ((int)ADAPTER_RENDER::DdiGetStandardAllocationDriverData(*((ADAPTER_RENDER **)a1 + 2), &v22) < 0
     || !LODWORD(v21[9])
     || !HIDWORD(v21[8]))
    && *((_BYTE *)DXGGLOBAL::GetGlobal() + 305952) )
  {
    v15 = *(_QWORD *)(*((_QWORD *)a1 + 5040) + 8LL * *((unsigned int *)a2 + 14));
    while ( v7 < *(_DWORD *)(v15 + 136) )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v15 + 1752) + 8LL * v7);
      if ( *(_DWORD *)(v16 + 108) == 1 && (*(_DWORD *)(v16 + 64) & 0x2004) != 0 )
      {
        if ( v7 != -1 )
        {
          LODWORD(v21[9]) = 1 << v9;
          HIDWORD(v21[8]) = (1 << v9) | (1 << v7);
          HIDWORD(v21[7]) = HIDWORD(v21[7]) & 0xFFFFFFE0 | ((_BYTE)v7 + 1) & 0x1F;
        }
        break;
      }
      ++v7;
    }
  }
  v17 = *(_OWORD *)&v21[5];
  *(_OWORD *)&a3->pPrivateDriverData = *(_OWORD *)&v21[3];
  v18 = *(_OWORD *)&v21[7];
  *(_OWORD *)&a3->Size = v17;
  v19 = *(_OWORD *)&v21[9];
  *(_OWORD *)&a3->HintedBank.0 = v18;
  v20 = *(_OWORD *)&v21[11];
  *(_OWORD *)&a3->EvictionSegmentSet = v19;
  *(_QWORD *)&v19 = v21[13];
  *(_OWORD *)&a3->Flags.0 = v20;
  *(_QWORD *)&a3->AllocationPriority = v19;
  a3->Flags.Value = a3->Flags.Value & 0xDFFFFFFA | 4;
}
