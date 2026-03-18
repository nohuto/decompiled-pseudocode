/*
 * XREFs of VidMmAllocateFenceStorageSlot @ 0x1400CAEF0
 * Callers:
 *     VidSchCreateSyncObject @ 0x1400CA670 (VidSchCreateSyncObject.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x14003683C (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MO.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x1400369B8 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORE.c)
 *     ?GetFenceKernelAddress@VIDMM_MONITORED_FENCE_STORAGE@@QEBAPEAXXZ @ 0x140046CB0 (-GetFenceKernelAddress@VIDMM_MONITORED_FENCE_STORAGE@@QEBAPEAXXZ.c)
 */

__int64 __fastcall VidMmAllocateFenceStorageSlot(
        struct VIDMM_MONITORED_FENCE_STORAGE *a1,
        int a2,
        char a3,
        char a4,
        char a5,
        __int64 a6,
        char a7,
        struct VIDMM_GLOBAL **a8)
{
  struct VIDMM_GLOBAL *v12; // r14
  _QWORD *v13; // rdi
  _QWORD *v14; // rbp
  char v15; // r14
  unsigned int v16; // r14d
  VIDMM_PROCESS_FENCE_STORAGE *v17; // rcx
  int FenceStorageSlot; // eax
  unsigned int v19; // r8d
  char v20; // r9
  __int64 v21; // rdx
  char v22; // cl
  __int64 *FenceKernelAddress; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx

  v12 = *a8;
  if ( !DXGPROCESS::GetCurrent() )
  {
    v14 = 0LL;
LABEL_5:
    v13 = 0LL;
    goto LABEL_6;
  }
  v13 = (_QWORD *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
  if ( v13 )
    v13 = (_QWORD *)v13[1];
  v14 = v13;
  if ( !v13 || (*(_DWORD *)(v13[9] + 408LL) & 0x100) == 0 )
    goto LABEL_5;
LABEL_6:
  if ( (*((_DWORD *)a1 + 13) & 8) == 0 )
  {
    v15 = *((_BYTE *)v12 + 41064);
    if ( PsGetProcessWow64Process(v14[2]) || (v15 & 0x20) != 0 )
      *((_DWORD *)a1 + 13) |= 2u;
  }
  v16 = (*((_DWORD *)a1 + 13) & 8) != 0 ? a2 : 0;
  if ( v13 && a3 )
    a4 = 1;
  if ( a5 || a3 || a4 || !v14 )
  {
    if ( v13 && a3 && !a4 )
    {
      v25 = v14[9];
      v26 = *(_DWORD *)(v25 + 408);
      if ( (v26 & 0x100) != 0 )
        v27 = *(_QWORD *)(v25 + 592);
      else
        v27 = v25 & -(__int64)((v26 & 0x80u) != 0);
      v28 = *(_QWORD *)(v27 + 64);
      if ( v28 )
        v28 = *(_QWORD *)(v28 + 8);
      v17 = *(VIDMM_PROCESS_FENCE_STORAGE **)(v28 + 80);
      *((_BYTE *)v17 + 128) = 1;
    }
    else
    {
      v17 = VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage;
    }
  }
  else
  {
    v17 = (VIDMM_PROCESS_FENCE_STORAGE *)v14[10];
  }
  if ( *((_BYTE *)v17 + 128) || a4 )
    *((_DWORD *)a1 + 13) |= 4u;
  if ( a3 )
  {
    if ( !a4 )
LABEL_34:
      v13 = 0LL;
  }
  else if ( !a4 )
  {
    if ( !*((_BYTE *)v17 + 128) )
    {
      FenceStorageSlot = VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot((KSPIN_LOCK *)v17, a8, a1, v16);
      goto LABEL_19;
    }
    goto LABEL_34;
  }
  FenceStorageSlot = VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot(
                       (KSPIN_LOCK *)v17,
                       (struct VIDMM_DEVICE *)a8,
                       a1,
                       (struct VIDMM_PROCESS *)v13);
LABEL_19:
  v19 = FenceStorageSlot;
  if ( FenceStorageSlot >= 0 )
  {
    v20 = a7;
    v21 = a6;
    v22 = (8 * a7) | *((_BYTE *)a1 + 40) & 0xF7;
    *((_DWORD *)a1 + 14) = v16;
    *((_QWORD *)a1 + 4) = a6;
    *((_BYTE *)a1 + 40) = v22;
    if ( (v22 & 1) != 0 )
      FenceKernelAddress = (__int64 *)VIDMM_MONITORED_FENCE_STORAGE::GetFenceKernelAddress(a1);
    else
      FenceKernelAddress = (__int64 *)*((_QWORD *)a1 + 1);
    if ( v20 )
      *FenceKernelAddress = v21;
    else
      *(_DWORD *)FenceKernelAddress = v21;
  }
  return v19;
}
