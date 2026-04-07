/*
 * XREFs of ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18005670C
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18008B110 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetSwapchainTarget@CTopLevelWindow@@AEAAJPEAVCIndirectSwapchainRenderTargetProxy@@_N@Z @ 0x1800CBC2C (-SetSwapchainTarget@CTopLevelWindow@@AEAAJPEAVCIndirectSwapchainRenderTargetProxy@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180029CF4 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z @ 0x180056828 (-UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z.c)
 */

__int64 __fastcall CTopLevelWindow::SendBoundsToSwapchainTarget(CIndirectSwapchainRenderTargetProxy **this)
{
  unsigned int v1; // ebx
  unsigned int cxLeftWidth; // edx
  unsigned int cyTopHeight; // r8d
  CIndirectSwapchainRenderTargetProxy *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // r9d
  unsigned int v10; // ecx
  int updated; // eax
  CIndirectSwapchainRenderTargetProxy *v12; // rax
  float v13; // xmm2_4
  struct _MARGINS v14; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  if ( this[92] )
  {
    cxLeftWidth = 0;
    cyTopHeight = 0;
    if ( *((_BYTE *)this + 728) )
    {
      v14 = 0LL;
      CTopLevelWindow::GetFrameMargins((CTopLevelWindow *)this, &v14);
      v6 = this[87];
      cxLeftWidth = v14.cxLeftWidth;
      cyTopHeight = v14.cyTopHeight;
      v7 = *((_QWORD *)v6 + 7);
      v8 = *((_QWORD *)v6 + 6);
      v9 = v7 - v14.cxRightWidth - v8 - v14.cxLeftWidth;
      v10 = HIDWORD(v7) - HIDWORD(v8) - v14.cyBottomHeight - v14.cyTopHeight;
    }
    else
    {
      v12 = this[87];
      v13 = *((float *)v12 + 83);
      v9 = (int)(float)((float)(int)(*(_QWORD *)((char *)v12 + 244) - *(_OWORD *)((char *)v12 + 236)) * v13);
      v10 = (int)(float)((float)(int)(HIDWORD(*(_QWORD *)((char *)v12 + 244)) - HIDWORD(*(_QWORD *)((char *)v12 + 236)))
                       * v13);
    }
    updated = CIndirectSwapchainRenderTargetProxy::UpdateTargetBounds(this[92], cxLeftWidth, cyTopHeight, v9, v10);
    v1 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x16B2u, 0LL);
  }
  return v1;
}
