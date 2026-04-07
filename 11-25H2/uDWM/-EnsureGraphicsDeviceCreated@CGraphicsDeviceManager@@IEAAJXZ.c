/*
 * XREFs of ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18004059C
 * Callers:
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18003FE94 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ @ 0x180099BEC (-HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ.c)
 *     ?GetGraphicsDeviceNoRef@CDesktopManager@@SAJPEAVCGraphicsDeviceGuard@CGraphicsDeviceManager@@PEAPEAUICompositionGraphicsDevice@Composition@UI@Windows@@@Z @ 0x1800A0340 (-GetGraphicsDeviceNoRef@CDesktopManager@@SAJPEAVCGraphicsDeviceGuard@CGraphicsDeviceManager@@PEA.c)
 * Callees:
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800901C4 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(CGraphicsDeviceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 4) )
    return 0LL;
  v2 = CGraphicsDeviceManager::InitializeGraphicsDevice(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE1,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
    (const char *)(unsigned int)v2,
    v4);
  return v3;
}
