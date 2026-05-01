/*
 * XREFs of ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x180081EA4
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800826D8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x180080788 (--$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAP.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x180080840 (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDCompBatchAnimationCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDCompBatchAnima.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopForegroundPolicy_CreateInstance(
        struct IVirtualDesktopCollection *a1,
        struct IVirtualDesktopVisibilityPolicy *a2,
        struct IVirtualDesktopDefaultForegroundHandler *a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  CVirtualDesktopForegroundPolicy *v9; // rcx
  volatile int *v10; // rdx
  CVirtualDesktopForegroundPolicy *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopCollection *v13; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v14; // [rsp+48h] [rbp+28h] BYREF
  struct IVirtualDesktopDefaultForegroundHandler *v15; // [rsp+50h] [rbp+30h] BYREF
  CVirtualDesktopForegroundPolicy *v16; // [rsp+58h] [rbp+38h] BYREF

  v15 = a3;
  v14 = a2;
  v13 = a1;
  v5 = a5;
  *a5 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease((__int64 *)&v16);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopForegroundPolicy,CVirtualDesktopForegroundPolicy,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopDefaultForegroundHandler * &>(
         &v16,
         &v13,
         &v14,
         &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v16;
    *v5 = v16;
    (*(void (__fastcall **)(CVirtualDesktopForegroundPolicy *))(*(_QWORD *)v9 + 8LL))(v9);
    v11 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDCompBatchAnimationCallback>::Release(
        (__int64)v11,
        v10);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF3,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease((__int64 *)&v16);
    return v7;
  }
}
