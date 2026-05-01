/*
 * XREFs of ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x18052B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x180234E2C (-_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::AddVirtualDesktop(
        CVirtualDesktopCollection *this,
        const struct _GUID *a2,
        struct IVirtualDesktop **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, const struct _GUID *, GUID *, struct IVirtualDesktop **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  struct IVirtualDesktop *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IVirtualDesktop *v14; // [rsp+50h] [rbp+8h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v14 = 0LL;
  v6 = *((_QWORD *)this + 3);
  v7 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v6 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  v8 = v7(v6, a2, &GUID_3f07f4be_b107_441a_af0f_39d82529072c, &v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 107LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  v8 = CVirtualDesktopCollection::_AddDesktop(this, v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 108LL;
    goto LABEL_7;
  }
  if ( a3 )
  {
    v11 = v14;
    v14 = 0LL;
    *a3 = v11;
  }
  v9 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  return v9;
}
