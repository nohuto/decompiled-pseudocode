/*
 * XREFs of ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180201F70
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18016E450 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18016ED50 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x1802A09EC (-_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerIntero.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CTaskWindowFinder *__fastcall CTaskWindowFinder::CTaskWindowFinder(
        CTaskWindowFinder *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  __int64 *v3; // rcx
  CTaskWindowFinder *result; // rax

  *(_QWORD *)this = 0LL;
  v3 = (__int64 *)((char *)this + 8);
  *v3 = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v3);
  result = this;
  *((_BYTE *)this + 16) = 0;
  return result;
}
