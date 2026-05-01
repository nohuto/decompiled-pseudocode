/*
 * XREFs of ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180138A30
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@@Z @ 0x180139404 (-_HandleApplicationActivation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@P.c)
 *     ?_HandleApplicationCreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18020B4DC (-_HandleApplicationCreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEA.c)
 *     ?_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18021EA70 (-_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802F03DC (-_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowManager::HandleWindowAction(
        __int64 a1,
        struct IImmersiveApplicationInternal *a2,
        HWND a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a4,
        int a5,
        struct ITaskWindow *a6)
{
  __int64 v7; // r8
  unsigned int v8; // r11d

  v7 = 0LL;
  v8 = -2147024809;
  if ( a5 > 7 )
  {
    if ( a5 == 8 )
      return (unsigned int)CImmersiveWindowManager::_HandleApplicationPrecreation((IUnknown *)(a1 - 160), a2);
    if ( a5 != 9 && (unsigned int)(a5 - 10) >= 2 )
      return v8;
LABEL_15:
    if ( a5 != 1 )
    {
      switch ( a5 )
      {
        case 9:
          v7 = 1LL;
          break;
        case 10:
          v7 = 2LL;
          break;
        case 11:
          v7 = 3LL;
          break;
      }
    }
    return (unsigned int)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64, struct ITaskWindow *))(*(_QWORD *)a2 + 48LL))(
                           a2,
                           a4,
                           v7,
                           a6);
  }
  switch ( a5 )
  {
    case 7:
      return (unsigned int)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, HWND, _QWORD))(*(_QWORD *)a2 + 56LL))(
                             a2,
                             a3,
                             0LL);
    case 0:
      return (unsigned int)CImmersiveWindowManager::_HandleApplicationCreation(
                             (IUnknown *)(a1 - 160),
                             (IUnknown *)a2,
                             a4,
                             a6);
    case 1:
      goto LABEL_15;
    case 2:
      return (unsigned int)CImmersiveWindowManager::_HandleApplicationActivation(
                             (CImmersiveWindowManager *)(a1 - 160),
                             a2,
                             a3);
    case 5:
      return (unsigned int)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, HWND, _QWORD, _QWORD))(*(_QWORD *)a2 + 112LL))(
                             a2,
                             a3,
                             0LL,
                             0LL);
    case 6:
      return (unsigned int)CImmersiveWindowManager::_RemoveApplication((CImmersiveWindowManager *)(a1 - 160), a2);
  }
  return v8;
}
