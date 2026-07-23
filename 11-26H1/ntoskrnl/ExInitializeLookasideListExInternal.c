/*
 * XREFs of ExInitializeLookasideListExInternal @ 0x140492B20
 * Callers:
 *     ExInitializeLookasideListEx @ 0x140492AD0 (ExInitializeLookasideListEx.c)
 *     KiAbCompleteInitialization @ 0x1405F9E8C (KiAbCompleteInitialization.c)
 *     CcInitializeCacheManager @ 0x140C854E8 (CcInitializeCacheManager.c)
 *     VmInitSystem @ 0x140C86258 (VmInitSystem.c)
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403B6970 (DifObjTrkIsKvEnabledForPlugin.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     DifObjTrkInsertItem @ 0x14064EAB0 (DifObjTrkInsertItem.c)
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
  _KTHREAD_WPS_FEEDBACK **p_WpsFeedback; // rdi
  _KERNEL_SHADOW_STACK_LIMIT *p_KernelShadowStackLimit; // r12
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
  p_WpsFeedback = &ExSaPageGroupDescriptorArrayLock.WpsFeedback;
  if ( (a4 & 1) != 0 )
    p_WpsFeedback = (_KTHREAD_WPS_FEEDBACK **)&ExSaPageGroupDescriptorArrayLock.Spare35[1];
  p_KernelShadowStackLimit = &ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit;
  if ( (a4 & 1) != 0 )
    p_KernelShadowStackLimit = (_KERNEL_SHADOW_STACK_LIMIT *)&ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask;
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
  v20 = KeAcquireSpinLockRaiseToDpc(&p_KernelShadowStackLimit->AllFields);
  if ( a9 )
  {
    *((_WORD *)&SListHead[1].HeaderX64 + 1) = -1;
    LOWORD(SListHead[1].Alignment) = v12;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    LODWORD(SListHead[1].Alignment) = -65536;
  }
  v21 = (PSLIST_HEADER *)p_WpsFeedback[1];
  v22 = SListHead + 4;
  if ( *v21 != (PSLIST_HEADER)p_WpsFeedback )
    __fastfail(3u);
  SListHead[4].Region = (unsigned __int64)v21;
  v22->Alignment = (unsigned __int64)p_WpsFeedback;
  *v21 = v22;
  p_WpsFeedback[1] = (_KTHREAD_WPS_FEEDBACK *)v22;
  KeReleaseSpinLock(&p_KernelShadowStackLimit->AllFields, v20);
  if ( DifObjTrkIsKvEnabledForPlugin(48LL) )
    DifObjTrkInsertItem(v24, SListHead, 96LL, 0LL);
  return 0LL;
}
