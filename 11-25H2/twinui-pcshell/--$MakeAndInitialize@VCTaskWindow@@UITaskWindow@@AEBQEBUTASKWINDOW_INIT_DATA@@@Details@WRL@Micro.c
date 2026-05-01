/*
 * XREFs of ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x1802A9D98
 * Callers:
 *     ?s_CreateInstance@CTaskWindow@@SAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A9D0C (-s_CreateInstance@CTaskWindow@@SAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Attach@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z @ 0x1801B3724 (-Attach@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z.c)
 *     ??0CTaskWindow@@QEAA@XZ @ 0x1802B8E28 (--0CTaskWindow@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$CopyTo@UITaskWindow@@@?$ComPtr@VCTaskWindow@@@WRL@Microsoft@@QEBAJPEAPEAUITaskWindow@@@Z @ 0x180305FC8 (--$CopyTo@UITaskWindow@@@-$ComPtr@VCTaskWindow@@@WRL@Microsoft@@QEBAJPEAPEAUITaskWindow@@@Z.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18030661C (-RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
        _QWORD *a1,
        const struct TASKWINDOW_INIT_DATA **a2)
{
  CTaskWindow *v4; // rax
  CTaskWindow *v6; // rax
  const struct TASKWINDOW_INIT_DATA *v7; // rdx
  CTaskWindow *v8; // rbx
  int v9; // edi
  CTaskWindow *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (CTaskWindow *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = CTaskWindow::CTaskWindow(v4);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<PositionerPriority>::Attach((__int64 *)&v10, (__int64)v6);
  v11 = 0LL;
  v7 = *a2;
  v8 = v10;
  v9 = CTaskWindow::RuntimeClassInitialize(v10, v7);
  if ( v9 >= 0 )
  {
    v9 = Microsoft::WRL::ComPtr<CTaskWindow>::CopyTo<ITaskWindow>(&v10, a1);
    if ( v8 )
      (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else if ( v8 )
  {
    (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
  return (unsigned int)v9;
}
