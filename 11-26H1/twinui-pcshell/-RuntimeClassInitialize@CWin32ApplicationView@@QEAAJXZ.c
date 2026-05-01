/*
 * XREFs of ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x180087DD0
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x180087A80 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x180070BB8 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x180070E08 (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 *     ?AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180071DEC (-AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z @ 0x1801BC230 (-SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::RuntimeClassInitialize(CWin32ApplicationView *this)
{
  int Instance; // ebx
  __int64 v3; // rdx
  const struct _GUID *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = CApplicationViewBase::RuntimeClassInitialize(this);
  if ( Instance < 0 )
  {
    v3 = 38LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 28);
  Instance = AppSizeConstraintsCache_CreateInstance(v5, (void **)this + 28);
  if ( Instance < 0 )
  {
    v3 = 39LL;
    goto LABEL_3;
  }
  Instance = CWin32ApplicationView::InitializeCloakType((__int64)this, 0);
  if ( Instance < 0 )
  {
    v3 = 40LL;
    goto LABEL_3;
  }
  Instance = CWin32ApplicationView::SetForceActiveWindowAppearance(this, 0);
  if ( Instance < 0 )
  {
    v3 = 41LL;
    goto LABEL_3;
  }
  return 0LL;
}
