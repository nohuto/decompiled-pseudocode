/*
 * XREFs of MiAllocateKernelStackPages @ 0x1403D4748
 * Callers:
 *     MmGrowKernelStackEx @ 0x1403D4420 (MmGrowKernelStackEx.c)
 *     MiCreateKernelStackSlow @ 0x1403D4610 (MiCreateKernelStackSlow.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiDeleteKernelStackPages @ 0x14028DF2C (MiDeleteKernelStackPages.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiInitializePfn @ 0x1402B9440 (MiInitializePfn.c)
 *     MiFinalizePageAttribute @ 0x1402BA3A0 (MiFinalizePageAttribute.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x1402EB3D0 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiInitializeMdlSinglePage @ 0x14033DBB8 (MiInitializeMdlSinglePage.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiMarkKernelStack @ 0x1403D4CC4 (MiMarkKernelStack.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     VslAllocateKernelShadowStack @ 0x140AD19B0 (VslAllocateKernelShadowStack.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(__int64 a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v2; // rdi
  ULONG *v4; // r13
  unsigned int v5; // r12d
  _QWORD *v6; // r15
  int v7; // r8d
  unsigned int v8; // ebx
  __int64 *v9; // r14
  __int64 v10; // r9
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  signed __int32 v13; // eax
  unsigned int v14; // ebx
  __int64 Page; // r9
  unsigned __int64 DemandZeroPte; // rdi
  unsigned __int64 v17; // rbx
  unsigned int v18; // r13d
  unsigned __int64 v19; // r12
  void *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 *v23; // r10
  __int64 v24; // rsi
  ULONG_PTR v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  int v34; // ecx
  __int64 v35; // rdx
  unsigned int v36; // r9d
  __int64 SlabPage; // rax
  _KPROCESS *v38; // rax
  __int64 v39; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v41; // rax
  ULONG_PTR v42; // rbx
  int KernelShadowStack; // eax
  int v44; // edx
  unsigned __int64 *v45; // [rsp+30h] [rbp-39h]
  __int64 v46; // [rsp+38h] [rbp-31h]
  unsigned __int64 ValidPte; // [rsp+40h] [rbp-29h] BYREF
  __int64 v48; // [rsp+48h] [rbp-21h]
  __int64 v49; // [rsp+50h] [rbp-19h]
  __int64 v50; // [rsp+58h] [rbp-11h]
  unsigned __int64 v51; // [rsp+60h] [rbp-9h]
  unsigned __int64 *v52; // [rsp+68h] [rbp-1h]
  __int128 v53; // [rsp+70h] [rbp+7h] BYREF
  char v55; // [rsp+D8h] [rbp+6Fh]
  char v56; // [rsp+D8h] [rbp+6Fh]
  int v57; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v58; // [rsp+E8h] [rbp+7Fh]

  v1 = *(unsigned __int64 **)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(ULONG **)a1;
  v5 = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  v6 = 0LL;
  v7 = *(_DWORD *)(a1 + 48);
  v49 = *(_QWORD *)(a1 + 72);
  v51 = *(_QWORD *)(a1 + 40);
  v45 = v1;
  v55 = *(_BYTE *)(a1 + 36);
  v53 = 0LL;
  v46 = (__int64)v4;
  v52 = &v1[v2];
  MiInitializePageColorBase(0LL, 3, v7 + 1, (__int64)&v53);
  v57 = 0;
  v8 = DWORD2(v53) & 0xFFF3FFFF | 0x40000;
  v9 = 0LL;
  LODWORD(v58) = v8;
  if ( v49 && (v4[1] & 8) != 0 )
  {
    v34 = *(_DWORD *)(a1 + 32) & 2;
    v57 = 1;
    v9 = (__int64 *)((v34 != 0) - 1LL);
    v5 = v34 == 0 ? 0x20000 : 0;
  }
  v10 = *(_DWORD *)(a1 + 32) & 2;
  LODWORD(v48) = v55 == 2;
  if ( (int)MiAcquireNonPagedResources(v4, v2, 0LL, v10) < 0 )
    return 0LL;
  v11 = 0LL;
  v12 = 0LL;
LABEL_4:
  v50 = v12;
  if ( v12 < v2 )
  {
    v13 = v8 ^ _InterlockedExchangeAdd((volatile signed __int32 *)v53, 1u);
    v14 = v58 ^ (unsigned __int8)v13;
    while ( 1 )
    {
      if ( v57 )
      {
        v36 = 16;
        if ( v55 != 2 )
          v36 = 0;
        SlabPage = MiGetSlabPage(v46, 3, v14, v36, v9, v5);
        if ( SlabPage != -1 )
        {
          if ( (unsigned int)MiIsPfnFromChargedSlabAllocation(48 * SlabPage - 0x220000000000LL) )
            ++v11;
LABEL_8:
          v8 = v58;
          v12 = v50 + 1;
          *(_QWORD *)(48 * Page - 0x220000000000LL) = v6;
          v6 = (_QWORD *)(48 * Page - 0x220000000000LL);
          goto LABEL_4;
        }
      }
      Page = MiGetPage(v46, v14, v48);
      if ( Page != -1 )
        goto LABEL_8;
      if ( (*(_DWORD *)(a1 + 32) & 2) != 0 )
        break;
      MiWaitForFreePage(v46, 0LL);
    }
    MiReleaseNonPagedResources(v46, v2);
    while ( 1 )
    {
      v33 = (__int64)v6;
      if ( !v6 )
        break;
      v6 = (_QWORD *)*v6;
      MiReleaseFreshPage(v33, v31, v32);
    }
    return 0LL;
  }
  if ( v11 )
    MiReleaseNonPagedResources(v46, v11);
  _InterlockedAdd64((volatile signed __int64 *)(v46 + 528), v2 - v11);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  ValidPte = MiMakeValidPte((unsigned __int64)v45, 0LL, v49 != 0 ? 536870913 : -1610612732);
  v17 = ValidPte;
  if ( v49 )
  {
    v35 = ValidPte;
    if ( (unsigned __int64)&ValidPte >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&ValidPte <= 0xFFFFF6FB7DBED7F8uLL
      && (ValidPte & 1) != 0
      && ((ValidPte & 0x20) == 0 || (ValidPte & 0x42) == 0) )
    {
      v38 = MiPteHasShadow();
      if ( v38 )
      {
        KernelWaitTime = v38[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v41 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&ValidPte >> 3) & 0x1FF));
          if ( (v41 & 0x20) != 0 )
            v39 |= 0x20uLL;
          v35 = v39 | 0x42;
          if ( (v41 & 0x42) == 0 )
            v35 = v39;
        }
      }
    }
    MiWriteValidPteNewProtection((__int64 *)&ValidPte, v35 | 0x40);
    v17 = ValidPte;
  }
  v48 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v20 = MiVaToFlushVm((unsigned __int64)v45);
  v58 = (__int64)v20;
  *(_DWORD *)(a1 + 52) = MiPageToNode((__int64)(v6 + 0x44000000000LL) / 48);
  if ( v55 == 2 )
  {
    v56 = 17;
    MiLockWorkingSetSharedAtDpc((__int64)v20);
  }
  else
  {
    v56 = MiLockWorkingSetShared((__int64)v20, v21, v22);
  }
  v23 = v45;
  v24 = (__int64)v20;
  do
  {
    v25 = (ULONG_PTR)v6;
    if ( v6 )
      v6 = (_QWORD *)*v6;
    v50 = (__int64)(v25 + 0x220000000000LL) / 48;
    v17 = v17 & 0xFFF0000000000FFFuLL | ((v50 & 0xFFFFFFFFFFLL) << 12);
    if ( !v19 )
      goto LABEL_41;
    if ( ((unsigned __int16)v23 & 0xFFF) == 0 )
    {
      if ( v18 )
      {
        MiIncreaseUsedPtes((v50 & 0xFFFFFFFFFFLL) << 12, v19, v18, 2);
        v18 = 0;
      }
      MiUnlockPageTableInternal(v24, v19);
      v23 = v45;
LABEL_41:
      v19 = (((unsigned __int64)v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v24, v19, 0);
    }
    v57 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v57);
      while ( *(__int64 *)(v25 + 24) < 0 );
    }
    if ( v49 )
    {
      MiFinalizePageAttribute(v25, 1LL, 1LL);
      MiInitializeMdlSinglePage(v25, (unsigned __int64 *)v25, v51, *(unsigned __int64 *)&CLFS_LSN_NULL_EXT, 0);
      *(_QWORD *)(v25 + 8) = v45;
      MiSetPfnIdentity(v25, 3u);
      v27 = v49;
      v28 = v50;
      *(_QWORD *)(v49 + 8 * v48) = v50;
    }
    else
    {
      *v45 = DemandZeroPte;
      MiInitializePfn(v25, (ULONG_PTR)v45, 4, 5);
      MiMarkKernelStack(v26, v25, v51);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v18;
    v24 = v58;
    v29 = ++v48;
    *v45 = v17;
    v23 = v45 + 1;
    v45 = v23;
  }
  while ( v23 < v52 );
  if ( v19 )
  {
    if ( v18 )
      MiIncreaseUsedPtes(v28, v19, v18, 2);
    MiUnlockPageTableInternal(v58, v19);
  }
  LOBYTE(v27) = v56;
  MiUnlockWorkingSetShared(v58, v27);
  if ( !v49 )
    return 1LL;
  v42 = (*(_QWORD *)(a1 + 8) - 8LL) << 25 >> 16;
  if ( _bittest64(&MiFlags, 0x2Bu) )
  {
    KernelShadowStack = VslAllocateKernelShadowStack(
                          v42,
                          (unsigned int)(*(_DWORD *)(a1 + 16) << 12),
                          *(unsigned int *)(a1 + 56),
                          v49,
                          v29,
                          a1 + 80);
    if ( KernelShadowStack >= 0 )
      return 1LL;
    if ( (unsigned int)(KernelShadowStack + 1073741811) <= 0x15
      && (v44 = 2099201, _bittest(&v44, KernelShadowStack + 1073741811))
      || KernelShadowStack == -1073741757 )
    {
      KeBugCheckEx(0x1Au, 0x51540uLL, v42, *(int *)(a1 + 56), KernelShadowStack);
    }
  }
  MiDeleteKernelStackPages(v46, *(_QWORD *)(a1 + 8) - 8LL, v29, *(unsigned int *)(a1 + 56), 0LL);
  return 0LL;
}
