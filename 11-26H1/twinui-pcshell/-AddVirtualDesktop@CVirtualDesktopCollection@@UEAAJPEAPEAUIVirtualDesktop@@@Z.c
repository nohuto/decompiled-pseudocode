/*
 * XREFs of ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x18007FF70
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x18008059C (-RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtual.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x180226E58 (-_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection::AddVirtualDesktop(
        CVirtualDesktopCollection *this,
        struct IVirtualDesktop **a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, GUID *, struct IVirtualDesktop **); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  struct IVirtualDesktop *v8; // rcx
  int v9; // eax
  struct IVirtualDesktop *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktop *v13; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
    *a2 = 0LL;
  v13 = 0LL;
  v4 = *((_QWORD *)this + 3);
  v5 = *(__int64 (__fastcall **)(__int64, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v4 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  v6 = v5(v4, &GUID_3f07f4be_b107_441a_af0f_39d82529072c, &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = CVirtualDesktopCollection::_AddDesktop(this, v13);
    v7 = v9;
    if ( v9 >= 0 )
    {
      if ( a2 )
      {
        v10 = v13;
        v13 = 0LL;
        *a2 = v10;
      }
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v6);
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return v7;
}
