/*
 * XREFs of ??1?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180013A68
 * Callers:
 *     _DWMInputRouter::GetInitialTargetFromHitTestResult_::_1_::dtor$3 @ 0x1801D4490 (_DWMInputRouter--GetInitialTargetFromHitTestResult_--_1_--dtor$3.c)
 *     _DWMInputRouter::GetTargetListFromHitTestResult_::_1_::dtor$0 @ 0x1801D44B0 (_DWMInputRouter--GetTargetListFromHitTestResult_--_1_--dtor$0.c)
 *     _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor$19 @ 0x1801D5DE0 (_InputSiteHierarchyManager--UpdateHierarchyFromInputSinkDataCache_--_1_--dtor$19.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::~vector<Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 **a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v1 != v3 )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v1++);
    result = std::_Deallocate<16>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
