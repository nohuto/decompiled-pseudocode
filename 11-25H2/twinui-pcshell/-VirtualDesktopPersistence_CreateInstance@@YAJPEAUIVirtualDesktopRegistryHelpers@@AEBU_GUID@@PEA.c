/*
 * XREFs of ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x18029F270
 * Callers:
 *     ?CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVirtualDesktopPersistence@@@Z @ 0x18029F1D8 (-CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ @ 0x18020882C (-InternalRelease@-$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopPersistence@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180208860 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopP.c)
 *     ??$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x18029F37C (--$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@@Deta.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopPersistence_CreateInstance(
        struct IVirtualDesktopRegistryHelpers *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  int v5; // ebx
  volatile int *v6; // rdx
  __int64 v7; // rcx
  const struct _GUID *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktopRegistryHelpers *v13; // [rsp+30h] [rbp+8h] BYREF
  void *v14; // [rsp+38h] [rbp+10h] BYREF

  v13 = a1;
  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease((__int64 *)&v14);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopPersistence,VirtualDesktopPersistence,IVirtualDesktopRegistryHelpers * &>(
         &v14,
         &v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_f7ed6698_3d52_49ee_a98b_c9f3cdbb3eba, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v10 = v14;
      *a3 = v14;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
      v5 = 0;
    }
    else if ( InlineIsEqualGUID(v8, v8) )
    {
      v9 = v14;
      *a3 = v14;
      v5 = 0;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL))(v9);
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13B,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v4);
    v7 = (__int64)v14;
    if ( v14 )
    {
      v14 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopPersistence>::Release(
        v7,
        v6);
    }
  }
  return (unsigned int)v5;
}
