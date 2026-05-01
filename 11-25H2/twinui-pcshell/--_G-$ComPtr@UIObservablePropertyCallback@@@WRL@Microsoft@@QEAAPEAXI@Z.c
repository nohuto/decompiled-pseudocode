/*
 * XREFs of ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802F5B88
 * Callers:
 *     ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1801BF620 (-_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_A.c)
 *     ??1?$CLocalSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@@@QEAA@XZ @ 0x180225C44 (--1-$CLocalSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppVie.c)
 *     ??1CAppViewManager@@UEAA@XZ @ 0x1802F4F80 (--1CAppViewManager@@UEAA@XZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1802F846C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CApp.c)
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x1803FF474 (--1PeoplePaneViewManager@@UEAA@XZ.c)
 *     ?UnsubscribeFromViewChangeNotifications@PeoplePaneViewManager@@UEAAJK@Z @ 0x1804030B0 (-UnsubscribeFromViewChangeNotifications@PeoplePaneViewManager@@UEAAJK@Z.c)
 *     ?RemoveListener@?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@QEAAJPEAX@Z @ 0x1804A2A84 (-RemoveListener@-$ObservableProperty@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Int.c)
 *     ??1?$ObservableProperty@V?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1804AB680 (--1-$ObservableProperty@V-$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@@QEAA@XZ.c)
 *     ??1?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@QEAA@XZ @ 0x1804AB6F4 (--1-$ObservableProperty@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows.c)
 *     ??1SwitchItem@@UEAA@XZ @ 0x1804AB768 (--1SwitchItem@@UEAA@XZ.c)
 *     ??1VirtualDesktopItem@@UEAA@XZ @ 0x1804ACB88 (--1VirtualDesktopItem@@UEAA@XZ.c)
 *     ??1CVirtualDesktopContainerElement@@UEAA@XZ @ 0x1804CAB84 (--1CVirtualDesktopContainerElement@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return a1;
}
