/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18007E540
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabletModePositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18022E3A0 (-CreateInstance@-$SimpleClassFactory@VTabletModePositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknow.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x18007E5FC (-RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ.c)
 *     ??0TabletModePositioner@@QEAA@XZ @ 0x18007E738 (--0TabletModePositioner@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositioner,IUnknown,>(_QWORD *a1)
{
  IUnknown *v2; // rax
  IUnknown *v3; // rdi
  int v4; // ebx
  IUnknown *v6; // [rsp+30h] [rbp+8h] BYREF
  IUnknown *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (IUnknown *)operator new(0x210uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v6);
    return (unsigned int)v4;
  }
  v3 = (IUnknown *)TabletModePositioner::TabletModePositioner((TabletModePositioner *)v2);
  v7 = v3;
  v6 = 0LL;
  v4 = TabletModePositioner::RuntimeClassInitialize(v3);
  if ( v4 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
    goto LABEL_7;
  }
  v4 = ((__int64 (__fastcall *)(IUnknown *, GUID *, _QWORD *))v3->lpVtbl->QueryInterface)(
         v3,
         &GUID_00000000_0000_0000_c000_000000000046,
         a1);
  ((void (__fastcall *)(IUnknown *))v3->lpVtbl->Release)(v3);
  return (unsigned int)v4;
}
