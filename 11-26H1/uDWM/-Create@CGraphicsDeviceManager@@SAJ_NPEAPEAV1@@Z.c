/*
 * XREFs of ?Create@CGraphicsDeviceManager@@SAJ_NPEAPEAV1@@Z @ 0x18006E02C
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800720A0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CGraphicsDeviceManager@@IEAAJXZ @ 0x18006E104 (-Initialize@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 *     ??0CGraphicsDeviceManager@@IEAA@_N@Z @ 0x18008A634 (--0CGraphicsDeviceManager@@IEAA@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGraphicsDeviceManager::Create(bool a1, struct CGraphicsDeviceManager **a2)
{
  CGraphicsDeviceManager *v4; // rax
  CBaseObject *v5; // rax
  struct CGraphicsDeviceManager *v6; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v12; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (CGraphicsDeviceManager *)DefaultHeap::AllocClear(0x80uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CGraphicsDeviceManager::CGraphicsDeviceManager(v4, a1);
  v6 = v5;
  v12 = v5;
  if ( v5 )
  {
    v8 = CGraphicsDeviceManager::Initialize(v5);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v12 = 0LL;
      *a2 = v6;
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v12);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v8,
        v10);
      CBaseObject::Release(v6);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
      (const char *)0x8007000ELL,
      v10);
    return 2147942414LL;
  }
}
