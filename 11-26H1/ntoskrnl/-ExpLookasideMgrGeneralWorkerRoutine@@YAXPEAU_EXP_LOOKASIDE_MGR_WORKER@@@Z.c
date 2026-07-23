/*
 * XREFs of ?ExpLookasideMgrGeneralWorkerRoutine@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER@@@Z @ 0x140B47830
 * Callers:
 *     <none>
 * Callees:
 *     ExpScanGeneralLookasideList @ 0x140428840 (ExpScanGeneralLookasideList.c)
 *     ExHeapLookasideRebalance @ 0x140428AE0 (ExHeapLookasideRebalance.c)
 *     ?ExpScanSystemLookasideLists@@YAXK@Z @ 0x140B8761C (-ExpScanSystemLookasideLists@@YAXK@Z.c)
 */

void __fastcall ExpLookasideMgrGeneralWorkerRoutine(struct _EXP_LOOKASIDE_MGR_WORKER *a1)
{
  int v1; // r8d
  int v2; // r8d
  int v3; // r8d
  __int64 **p_WpsFeedback; // rcx
  _KERNEL_SHADOW_STACK_LIMIT *p_KernelShadowStackLimit; // rdx

  v1 = *((_DWORD *)a1 + 6);
  if ( !v1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 56LL) / 0x989680uLL;
    p_WpsFeedback = (__int64 **)&ExSaPageGroupDescriptorArrayLock.WpsFeedback;
    p_KernelShadowStackLimit = &ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit;
LABEL_6:
    ExpScanGeneralLookasideList(p_WpsFeedback, &p_KernelShadowStackLimit->AllFields, v3);
    return;
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 56LL) / 0x989680uLL;
    p_WpsFeedback = (__int64 **)&ExSaPageGroupDescriptorArrayLock.Spare35[1];
    p_KernelShadowStackLimit = (_KERNEL_SHADOW_STACK_LIMIT *)&ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask;
    goto LABEL_6;
  }
  if ( v2 == 1 )
  {
    ExpScanSystemLookasideLists(*(_QWORD *)(*(_QWORD *)a1 + 56LL) / 0x989680uLL);
    ExHeapLookasideRebalance();
  }
}
