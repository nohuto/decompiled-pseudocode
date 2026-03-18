/*
 * XREFs of VidSchSetHwQueueProgressFenceObject @ 0x1400995B0
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?GetFenceKernelAddress@VIDMM_MONITORED_FENCE_STORAGE@@QEBAPEAXXZ @ 0x140046CB0 (-GetFenceKernelAddress@VIDMM_MONITORED_FENCE_STORAGE@@QEBAPEAXXZ.c)
 */

void __fastcall VidSchSetHwQueueProgressFenceObject(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  char v5; // r11
  __int64 v6; // r8
  unsigned int *FenceKernelAddress; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  _QWORD *v11; // rax
  __int64 v12; // r11

  v3 = a1;
  if ( a3 >= 2 )
  {
    *(_QWORD *)(a1 + 104) = a2;
    return;
  }
  _mm_lfence();
  v4 = a3;
  v5 = 0;
  v6 = 3LL * a3;
  *(_QWORD *)(a1 + 8 * v6 + 56) = a2;
  if ( *(_DWORD *)(a2 + 48) == 6 )
  {
    FenceKernelAddress = (unsigned int *)VIDMM_MONITORED_FENCE_STORAGE::GetFenceKernelAddress((VIDMM_MONITORED_FENCE_STORAGE *)(a2 + 64));
LABEL_4:
    v8 = *(_QWORD *)FenceKernelAddress;
    goto LABEL_7;
  }
  FenceKernelAddress = *(unsigned int **)(a2 + 72);
  if ( *(_BYTE *)(a2 + 30) )
    goto LABEL_4;
  v8 = *FenceKernelAddress;
LABEL_7:
  *(_QWORD *)(v3 + 8 * v6 + 64) = v8;
  *(_QWORD *)(v3 + 24 * v4 + 72) = v8;
  v9 = *(_QWORD *)(v3 + 8 * v6 + 56);
  v10 = (2 * *(_DWORD *)(v9 + 52)) >> 1;
  if ( v10 == 3 || v10 == 4 )
    *(_QWORD *)(v9 + 272) = v3;
  if ( *(_BYTE *)(v3 + 272) == v5 )
  {
    if ( *(_DWORD *)(v9 + 48) == 6 )
    {
      v11 = VIDMM_MONITORED_FENCE_STORAGE::GetFenceKernelAddress((VIDMM_MONITORED_FENCE_STORAGE *)(v9 + 128));
      *v11 = v12;
    }
  }
  else
  {
    *(_QWORD *)VIDMM_MONITORED_FENCE_STORAGE::GetFenceKernelAddress((VIDMM_MONITORED_FENCE_STORAGE *)(v9 + 128)) = -1LL;
  }
}
