/*
 * XREFs of ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180082428
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800826D8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopFactory@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18008007C (--$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAU.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1801EFF18 (-InternalRelease@-$ComPtr@VCVirtualDesktopFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopFactory@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801EFF40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopF.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopFactory_CreateInstance(
        struct IVirtualDesktopVisibilityPolicy *a1,
        struct IVirtualDesktopLock *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 *v7; // rcx
  __int64 *v9; // rcx
  __int64 *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopVisibilityPolicy *v12; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopLock *v13; // [rsp+48h] [rbp+28h] BYREF
  __int64 *v14; // [rsp+50h] [rbp+30h] BYREF

  v13 = a2;
  v12 = a1;
  *a4 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopFactory>::InternalRelease(&v14);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopFactory,CVirtualDesktopFactory,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
         &v14,
         (__int64 *)&v12,
         (__int64 *)&v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = v14;
    *a4 = v14;
    (*(void (__fastcall **)(__int64 *))(*v9 + 8))(v9);
    v10 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopFactory>::Release(v10);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopfactory.cpp",
      (const char *)(unsigned int)v5);
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopFactory>::Release(v7);
    }
    return v6;
  }
}
