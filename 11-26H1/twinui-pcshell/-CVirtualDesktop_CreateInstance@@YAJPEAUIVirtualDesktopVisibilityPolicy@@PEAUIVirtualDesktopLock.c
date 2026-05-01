/*
 * XREFs of ?CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D2C1C
 * Callers:
 *     ?CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D2BD0 (-CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktop2@@UIVirtualDesktop@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIVirtualDesktopPrivate@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktop2@@UIVirtualDesktop@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIVirtualDesktopPrivate@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D1960 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$C_ea_1800D1960.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktop2@@UIVirtualDesktop@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIVirtualDesktopPrivate@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D2210 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_1800D2210.c)
 *     ?RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1800D2294 (-RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualD.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CVirtualDesktop@@QEAA@XZ @ 0x18056911C (--0CVirtualDesktop@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualDesktop_CreateInstance(
        struct IVirtualDesktopVisibilityPolicy *a1,
        struct IVirtualDesktopLock *a2,
        const struct _GUID *a3,
        void **a4)
{
  CVirtualDesktop *v8; // rax
  CVirtualDesktop *v10; // rax
  char *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  v8 = (CVirtualDesktop *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 || (v10 = CVirtualDesktop::CVirtualDesktop(v8), (v11 = (char *)v10) == 0LL) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE2,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v12 = CVirtualDesktop::RuntimeClassInitialize(v10, a1, a2);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 227LL;
  }
  else
  {
    v12 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktop2,IVirtualDesktop,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>>(
            v11,
            (__int64)a3,
            a4);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v13 = 0;
      goto LABEL_8;
    }
    v14 = 228LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
    (const char *)(unsigned int)v12);
LABEL_8:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktop2,IVirtualDesktop,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>::Release((__int64)v11);
  return v13;
}
