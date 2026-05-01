/*
 * XREFs of ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800D7524
 * Callers:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x1800D6C54 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0CTaskWindow@@QEAA@XZ @ 0x1802B8E28 (--0CTaskWindow@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802C1094 (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$CopyTo@UITaskWindow@@@?$ComPtr@VCTaskWindow@@@WRL@Microsoft@@QEBAJPEAPEAUITaskWindow@@@Z @ 0x180305FC8 (--$CopyTo@UITaskWindow@@@-$ComPtr@VCTaskWindow@@@WRL@Microsoft@@QEBAJPEAPEAUITaskWindow@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,HWND__ * &,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &,enum TASK_WINDOW_TYPE &,IImmersiveApplicationInternal * &,tagRECT const * &,APPLICATION_VIEW_DATA const * &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  CTaskWindow *v11; // rax
  CTaskWindow *v13; // rbx
  int v14; // esi
  unsigned int v15; // edi
  void *v16; // [rsp+40h] [rbp-28h] BYREF
  CTaskWindow *v17; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CTaskWindow *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v11;
  if ( !v11 )
    return 2147942414LL;
  v13 = CTaskWindow::CTaskWindow(v11);
  v17 = v13;
  v16 = 0LL;
  v14 = CTaskWindow::RuntimeClassInitialize(v13, *a2, *a3, *a4, *a5, *a6, *a7);
  if ( v14 >= 0 )
  {
    v15 = Microsoft::WRL::ComPtr<CTaskWindow>::CopyTo<ITaskWindow>(&v17, a1);
    if ( v13 )
      (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v13 + 16LL))(v13);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v16);
    return v15;
  }
  else
  {
    if ( v13 )
      (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v13 + 16LL))(v13);
    return (unsigned int)v14;
  }
}
