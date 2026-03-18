/*
 * XREFs of ExInitializeLookasideListExInternal @ 0x140498FD0
 * Callers:
 *     ExInitializeLookasideListEx @ 0x140498F80 (ExInitializeLookasideListEx.c)
 *     KiAbCompleteInitialization @ 0x1405F74CC (KiAbCompleteInitialization.c)
 *     CcInitializeCacheManager @ 0x140C7F4E8 (CcInitializeCacheManager.c)
 *     VmInitSystem @ 0x140C80258 (VmInitSystem.c)
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403ACC60 (DifObjTrkIsKvEnabledForPlugin.c)
 *     InitializeSListHead @ 0x140499200 (InitializeSListHead.c)
 *     DifObjTrkInsertItem @ 0x14064AED0 (DifObjTrkInsertItem.c)
 */

__int64 __fastcall ExInitializeLookasideListExInternal(
        PSLIST_HEADER SListHead,
        PVOID (__fastcall *a2)(int a1, SIZE_T a2, ULONG a3),
        void (__stdcall *a3)(PPRIVILEGE_SET Privileges),
        int a4,
        int a5,
        unsigned __int64 a6,
        int a7,
        __int16 a8,
        int a9)
{
  __int16 v10; // cx
  __int16 v12; // r14
  int v13; // r15d
  int v14; // esi
  _QWORD *p_KernelShadowStackBase; // rdi
  $7593FFE5FD7F8AD12EB10858261A32F1 *p_KernelShadowStack; // r12
  int v17; // esi
  PVOID (__fastcall *v18)(int, SIZE_T, ULONG); // rax
  void (__stdcall *v19)(PPRIVILEGE_SET); // rax
  KIRQL v20; // r8
  PSLIST_HEADER *v21; // rdx
  PSLIST_HEADER v22; // rax
  unsigned int v24; // r10d

  v10 = a8;
  if ( a8 )
  {
    if ( (unsigned __int16)(a8 - 256) > 0x300u )
      return 3221225718LL;
  }
  else
  {
    v10 = 256;
  }
  v12 = 0;
  if ( !a9 )
    v12 = v10;
  v13 = 8;
  if ( a6 > 8 )
    v13 = a6;
  if ( ((a5 - 1) & a5) != 0 || (a5 & 0xFFFFFFFC) != 0 )
    return 3221225715LL;
  if ( (a5 & 1) != 0 )
  {
    v14 = 16;
  }
  else
  {
    v14 = 0;
    if ( a5 )
      v14 = 8;
  }
  if ( (a4 & 0xFFFFFC18) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  p_KernelShadowStackBase = &ExSaPageGroupDescriptorArrayLock.KernelShadowStackBase;
  if ( (a4 & 1) != 0 )
    p_KernelShadowStackBase = &ExSaPageGroupDescriptorArrayLock.InGlobalUpdateVpThreadPriorityList;
  p_KernelShadowStack = ($7593FFE5FD7F8AD12EB10858261A32F1 *)&ExSaPageGroupDescriptorArrayLock.KernelShadowStack;
  if ( (a4 & 1) != 0 )
    p_KernelShadowStack = &ExSaPageGroupDescriptorArrayLock.1008;
  InitializeSListHead(SListHead);
  v17 = a4 | v14;
  LOWORD(SListHead[1].Alignment) = ExMinimumLookasideDepth;
  *((_DWORD *)&SListHead[2].HeaderX64 + 2) = a7;
  v18 = ExAllocatePoolZero;
  if ( a2 )
    v18 = a2;
  *((_WORD *)&SListHead[1].HeaderX64 + 1) = v12;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 4) = 0LL;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 12) = 0LL;
  *((_DWORD *)&SListHead[2].HeaderX64 + 1) = v17;
  *((_DWORD *)&SListHead[2].HeaderX64 + 3) = v13;
  SListHead[3].Alignment = (unsigned __int64)v18;
  v19 = CmSiFreeMemory;
  if ( a3 )
    v19 = a3;
  SListHead[3].Region = (unsigned __int64)v19;
  SListHead[5].Alignment = 0LL;
  v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_KernelShadowStack);
  if ( a9 )
  {
    *((_WORD *)&SListHead[1].HeaderX64 + 1) = -1;
    LOWORD(SListHead[1].Alignment) = v12;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    LODWORD(SListHead[1].Alignment) = -65536;
  }
  v21 = (PSLIST_HEADER *)p_KernelShadowStackBase[1];
  v22 = SListHead + 4;
  if ( *v21 != (PSLIST_HEADER)p_KernelShadowStackBase )
    __fastfail(3u);
  SListHead[4].Region = (unsigned __int64)v21;
  v22->Alignment = (unsigned __int64)p_KernelShadowStackBase;
  *v21 = v22;
  p_KernelShadowStackBase[1] = v22;
  KeReleaseSpinLock((PKSPIN_LOCK)p_KernelShadowStack, v20);
  if ( DifObjTrkIsKvEnabledForPlugin(48LL) )
    DifObjTrkInsertItem(v24, SListHead, 96LL, 0LL);
  return 0LL;
}
