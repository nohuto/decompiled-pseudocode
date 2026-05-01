/*
 * XREFs of ?CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@0PEAPEAX@Z @ 0x1800D2004
 * Callers:
 *     ?CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800D1FB0 (-CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktop2@@UIVirtualDesktop@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIVirtualDesktopPrivate@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktop2@@UIVirtualDesktop@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIVirtualDesktopPrivate@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D1960 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$C_ea_1800D1960.c)
 *     ??0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z @ 0x1800D20F8 (--0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktop2@@UIVirtualDesktop@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIVirtualDesktopPrivate@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D2210 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_1800D2210.c)
 *     ?RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1800D2294 (-RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualD.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CVirtualDesktop_CreateInstance(
        const struct _GUID *a1,
        struct IVirtualDesktopVisibilityPolicy *a2,
        struct IVirtualDesktopLock *a3,
        const struct _GUID *a4,
        void **a5)
{
  CVirtualDesktop *v9; // rax
  CVirtualDesktop *v10; // rax
  char *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a5 = 0LL;
  v9 = (CVirtualDesktop *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = CVirtualDesktop::CVirtualDesktop(v9, a1);
    v11 = (char *)v10;
    if ( v10 )
    {
      v12 = CVirtualDesktop::RuntimeClassInitialize(v10, a2, a3);
      v13 = v12;
      if ( v12 < 0 )
      {
        v15 = 244LL;
      }
      else
      {
        v12 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktop2,IVirtualDesktop,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>>(
                v11,
                (__int64)a4,
                a5);
        v13 = v12;
        if ( v12 >= 0 )
        {
          v13 = 0;
LABEL_6:
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktop2,IVirtualDesktop,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>::Release(v11);
          return v13;
        }
        v15 = 245LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_6;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF3,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
