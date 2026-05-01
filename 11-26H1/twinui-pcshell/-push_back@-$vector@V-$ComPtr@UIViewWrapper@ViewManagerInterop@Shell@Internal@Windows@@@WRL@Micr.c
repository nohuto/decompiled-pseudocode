/*
 * XREFs of ?push_back@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801C1794
 * Callers:
 *     ?GetViews@WindowEventDispatcher@@UEAAXAEAV?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180419F10 (-GetViews@WindowEventDispatcher@@UEAAXAEAV-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::push_back(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx
  _QWORD *result; // rax
  __int64 v5; // r9

  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 == *(_QWORD **)(a1 + 16) )
    return (_QWORD *)std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>(
                       a1,
                       v3,
                       a2);
  result = Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(v3, a2);
  *(_QWORD *)(v5 + 8) += 8LL;
  return result;
}
