/*
 * XREFs of ??1?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18004E4E8
 * Callers:
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$6 @ 0x1801D4610 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$6.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$7 @ 0x1801D4630 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$7.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$8 @ 0x1801D4650 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$8.c)
 *     _InputSiteManager::GetInputSiteForEvaluationListFromDITCallbackStruct_::_1_::dtor$0 @ 0x1801D4720 (_InputSiteManager--GetInputSiteForEvaluationListFromDITCallbackStruct_--_1_--dtor$0.c)
 *     _InputSiteHierarchyManager::GetInputSiteListToRoot_::_1_::dtor$1 @ 0x1801D5CF4 (_InputSiteHierarchyManager--GetInputSiteListToRoot_--_1_--dtor$1.c)
 *     _CUIHierarchy::UpdateInputDisabledStateOnWindowAddition_::_1_::dtor$2 @ 0x1801D8AD3 (_CUIHierarchy--UpdateInputDisabledStateOnWindowAddition_--_1_--dtor$2.c)
 *     _InputSiteHierarchyManager::GetAllInputSites_::_1_::dtor$0 @ 0x1801DB056 (_InputSiteHierarchyManager--GetAllInputSites_--_1_--dtor$0.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$0 @ 0x1801DB131 (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::~vector<Microsoft::WRL::ComPtr<InputSite>>(
        __int64 **a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v2 != v3 )
    {
      v4 = *v2;
      if ( *v2 )
      {
        *v2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v2;
    }
    result = std::_Deallocate<16>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
