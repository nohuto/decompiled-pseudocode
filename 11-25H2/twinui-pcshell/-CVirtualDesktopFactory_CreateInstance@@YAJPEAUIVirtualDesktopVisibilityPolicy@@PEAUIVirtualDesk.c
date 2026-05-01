/*
 * XREFs of ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18009FF58
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18009E880 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopFactory@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1800A17EC (--$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAU.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A18C4 (-InternalRelease@-$ComPtr@VCVirtualDesktopFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopFactory@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A18F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopF.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  void *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopVisibilityPolicy *v10; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopLock *v11; // [rsp+48h] [rbp+28h] BYREF
  void *v12; // [rsp+50h] [rbp+30h] BYREF

  v11 = a2;
  v10 = a1;
  *a4 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopFactory>::InternalRelease(&v12);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopFactory,CVirtualDesktopFactory,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
         &v12,
         &v10,
         &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = v12;
    *a4 = v12;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopFactory>::Release();
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
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopFactory>::Release();
    }
    return v6;
  }
}
