/*
 * XREFs of _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor$19 @ 0x1801D5DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180013A68 (--1-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget@@@WRL@.c)
 */

__int64 __fastcall InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor_19(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 104) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 104) &= ~4u;
    return std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::~vector<Microsoft::WRL::ComPtr<IInputTarget>>((__int64 **)(a2 + 80));
  }
  return result;
}
