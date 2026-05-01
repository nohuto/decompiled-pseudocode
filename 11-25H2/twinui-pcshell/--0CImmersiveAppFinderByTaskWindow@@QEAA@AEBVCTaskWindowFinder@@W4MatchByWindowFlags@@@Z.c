/*
 * XREFs of ??0CImmersiveAppFinderByTaskWindow@@QEAA@AEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x180083EB8
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180082DF0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x1800836F8 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x1802A6A8C (-_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerIntero.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CImmersiveAppFinderByTaskWindow::CImmersiveAppFinderByTaskWindow(__int64 a1, __int64 a2, int a3)
{
  __int64 *v5; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v5 = (__int64 *)(a1 + 8);
  *v5 = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  result = a1;
  *(_DWORD *)(a1 + 24) = a3;
  return result;
}
