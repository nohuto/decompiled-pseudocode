/*
 * XREFs of ?ExpLookasideMgrGeneralWorkerRoutine@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER@@@Z @ 0x140B45800
 * Callers:
 *     <none>
 * Callees:
 *     ExpScanGeneralLookasideList @ 0x140433770 (ExpScanGeneralLookasideList.c)
 *     ExHeapLookasideRebalance @ 0x140433A10 (ExHeapLookasideRebalance.c)
 *     ?ExpScanSystemLookasideLists@@YAXK@Z @ 0x140B7E73C (-ExpScanSystemLookasideLists@@YAXK@Z.c)
 */

void __fastcall ExpLookasideMgrGeneralWorkerRoutine(struct _EXP_LOOKASIDE_MGR_WORKER *a1)
{
  int v1; // r8d
  int v2; // r8d
  int v3; // r8d
  __int64 **p_KernelShadowStackBase; // rcx
  $7593FFE5FD7F8AD12EB10858261A32F1 *p_KernelShadowStack; // rdx

  v1 = *((_DWORD *)a1 + 6);
  if ( !v1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 56LL) / 0x989680uLL;
    p_KernelShadowStackBase = (__int64 **)&ExSaPageGroupDescriptorArrayLock.KernelShadowStackBase;
    p_KernelShadowStack = ($7593FFE5FD7F8AD12EB10858261A32F1 *)&ExSaPageGroupDescriptorArrayLock.KernelShadowStack;
LABEL_6:
    ExpScanGeneralLookasideList(p_KernelShadowStackBase, (KSPIN_LOCK *)p_KernelShadowStack, v3);
    return;
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 56LL) / 0x989680uLL;
    p_KernelShadowStackBase = (__int64 **)&ExSaPageGroupDescriptorArrayLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
    p_KernelShadowStack = &ExSaPageGroupDescriptorArrayLock.1008;
    goto LABEL_6;
  }
  if ( v2 == 1 )
  {
    ExpScanSystemLookasideLists(*(_QWORD *)(*(_QWORD *)a1 + 56LL) / 0x989680uLL);
    ExHeapLookasideRebalance();
  }
}
