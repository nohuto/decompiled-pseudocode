/*
 * XREFs of ??0GuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEAA@AEBW4SnapAssistUsage@23456@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@6@@Z @ 0x1805BD948
 * Callers:
 *     ??$make@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@AEAW4SnapAssistUsage@34567@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@@winrt@@YA?A_PAEAW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@0@$$QEAU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@0@@Z @ 0x1805A5F98 (--$make@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??1?$_Tidy_guard@V?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1802C60C8 (--1-$_Tidy_guard@V-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V.c)
 *     ??0?$producers_base@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@V?$tuple@UGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1805BD930 (--0-$producers_base@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@.c)
 *     ?_Buy_nonzero@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1805BDA20 (-_Buy_nonzero@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V-$al.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs::GuidedSnapAssistCompletedArgs(
        __int64 a1)
{
  _DWORD *v2; // r9
  void **v3; // rsi
  __int64 v4; // r8
  void *v5; // r14
  __int64 v6; // rbp
  __int64 v7; // r15
  char *v8; // rbx
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = (__int64 *)a1;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs,std::tuple<winrt::Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs>>::producers_base<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs,std::tuple<winrt::Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs>>((_QWORD *)(a1 + 16));
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(a1 + 8, 1LL);
  *(_QWORD *)a1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs>::`vftable';
  *(_DWORD *)(a1 + 24) = *v2;
  v3 = (void **)(a1 + 32);
  v5 = *(void **)v4;
  v6 = *(unsigned int *)(v4 + 8);
  v7 = *(_QWORD *)v4 + 4 * v6;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v6 )
  {
    std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Buy_nonzero(
      a1 + 32,
      (unsigned int)v6);
    v8 = (char *)*v3;
    std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
      v5,
      v7,
      *v3);
    *(_QWORD *)(a1 + 40) = &v8[4 * v6];
    v10 = 0LL;
    std::_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>(&v10);
  }
  return a1;
}
