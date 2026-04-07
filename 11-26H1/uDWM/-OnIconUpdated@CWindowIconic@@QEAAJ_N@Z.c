/*
 * XREFs of ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180067874
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180067938 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 * Callees:
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18004C0D8 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?OnIconUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180067A30 (-OnIconUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180073C2C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CWindowIconic::OnIconUpdated(CWindowIconic *this, char a2)
{
  __int64 v4; // rdx
  int CentralImage; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)(*((_QWORD *)this + 10) + 152LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 152LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 160LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 160LL);
  if ( a2 && !*((_DWORD *)this + 4) )
  {
    CentralImage = CWindowIconic::LoadCentralImage(this);
    if ( CentralImage < 0 )
    {
      v8 = 615LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowiconic.cpp",
        (const char *)(unsigned int)CentralImage,
        v10);
      return (unsigned int)CentralImage;
    }
    CentralImage = CWindowIconic::UpdateClientArea(this, v4, v6, v7);
    if ( CentralImage < 0 )
    {
      v8 = 618LL;
      goto LABEL_5;
    }
    CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 13));
  }
  CTopLevelWindow::OnIconUpdated(*((CTopLevelWindow **)this + 11));
  if ( a2 )
    CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11));
  return 0LL;
}
