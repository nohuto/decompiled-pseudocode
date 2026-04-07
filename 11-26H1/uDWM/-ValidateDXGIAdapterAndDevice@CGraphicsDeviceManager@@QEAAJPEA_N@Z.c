/*
 * XREFs of ?ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z @ 0x180053F38
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18001C670 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180053F94 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x180053FCC (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGraphicsDeviceManager::ValidateDXGIAdapterAndDevice(wil::details **this, bool *a2)
{
  int v3; // eax
  void *v4; // rdx
  unsigned int v5; // edi
  void *v6; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CGraphicsDeviceManager::CheckDXGIAdapter((CGraphicsDeviceManager *)this, a2);
  v5 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x108,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
      (const char *)(unsigned int)v3,
      v8);
    return v5;
  }
  else
  {
    wil::details::ResetEvent(this[10], v4);
    wil::details::ResetEvent(this[11], v6);
    return 0LL;
  }
}
