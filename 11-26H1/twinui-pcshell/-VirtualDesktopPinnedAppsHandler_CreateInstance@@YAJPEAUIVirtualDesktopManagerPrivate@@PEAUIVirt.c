/*
 * XREFs of ?VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1801B7D0C
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800826D8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@$$TAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualPinnedAppsHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@$$QEA$$TAEAPEAUIVirtualDesktopLock@@@Z @ 0x1801B7E0C (--$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopPinnedAppsHandler_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopRegistryHelpers *a2,
        struct IVirtualDesktopVisibilityPolicy *a3,
        struct IUnknown *a4,
        struct IVirtualDesktopLock *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IVirtualDesktopManagerPrivate *v15; // [rsp+50h] [rbp+20h] BYREF
  struct IVirtualDesktopRegistryHelpers *v16; // [rsp+58h] [rbp+28h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, void **); // [rsp+68h] [rbp+38h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v7 = a7;
  *a7 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<VirtualPinnedAppsHandler,VirtualPinnedAppsHandler,IVirtualDesktopManagerPrivate * &,IVirtualDesktopRegistryHelpers * &,IVirtualDesktopVisibilityPolicy * &,std::nullptr_t,IVirtualDesktopLock * &>(
         (unsigned int)&v18,
         (unsigned int)&v15,
         (unsigned int)&v16,
         (unsigned int)&v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16B,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v8);
    v13 = (__int64)v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  else
  {
    v10 = (**v18)(v18, &GUID_eb8033b6_74a3_4bd8_9b46_400d380a753c, v7);
    v9 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16C,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v10);
    v11 = (__int64)v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return v9;
}
