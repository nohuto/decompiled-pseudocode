/*
 * XREFs of ??$MakeAndInitialize@VCSnappedWindow@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindow@@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Z @ 0x1800D92B4
 * Callers:
 *     ?s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DAFDC (-s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z @ 0x1800D9378 (-RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z.c)
 *     ??0CSnappedWindow@@QEAA@XZ @ 0x1800D95E8 (--0CSnappedWindow@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSnappedWindow,CSnappedWindow,IImmersiveMonitor * &,IApplicationView * &>(
        CSnappedWindow **a1,
        struct IImmersiveMonitor **a2,
        struct IApplicationView **a3)
{
  CSnappedWindow *v6; // rax
  CSnappedWindow *v7; // rbx
  int v8; // esi
  CSnappedWindow *v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (CSnappedWindow *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( !v6 )
    return 2147942414LL;
  v7 = CSnappedWindow::CSnappedWindow(v6);
  v10 = v7;
  v11 = 0LL;
  v8 = CSnappedWindow::RuntimeClassInitialize(v7, *a2, *a3);
  if ( v8 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
    return (unsigned int)v8;
  }
  else
  {
    if ( v7 )
      (*(void (__fastcall **)(CSnappedWindow *))(*(_QWORD *)v7 + 8LL))(v7);
    *a1 = v7;
    if ( v7 )
      (*(void (__fastcall **)(CSnappedWindow *))(*(_QWORD *)v7 + 16LL))(v7);
    return 0LL;
  }
}
