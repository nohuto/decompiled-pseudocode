/*
 * XREFs of ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x180082370
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800826D8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x180081150 (--$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtu.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x180081220 (-InternalRelease@-$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopCollection@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180081250 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection_CreateInstance(
        struct IVirtualDesktopFactory *a1,
        struct IVirtualDesktopPersistence *a2,
        char a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  CVirtualDesktopCollection *v9; // rcx
  volatile int *v10; // rdx
  CVirtualDesktopCollection *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopFactory *v13; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopPersistence *v14; // [rsp+48h] [rbp+28h] BYREF
  char v15; // [rsp+50h] [rbp+30h] BYREF
  CVirtualDesktopCollection *v16; // [rsp+58h] [rbp+38h] BYREF

  v15 = a3;
  v14 = a2;
  v13 = a1;
  v5 = a5;
  *a5 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease((__int64 *)&v16);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopCollection,CVirtualDesktopCollection,IVirtualDesktopFactory * &,IVirtualDesktopPersistence * &,bool &>(
         &v16,
         &v13,
         &v14,
         &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v16;
    *v5 = v16;
    (*(void (__fastcall **)(CVirtualDesktopCollection *))(*(_QWORD *)v9 + 8LL))(v9);
    v11 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopCollection>::Release(
        (__int64)v11,
        v10);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x198,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease((__int64 *)&v16);
    return v7;
  }
}
