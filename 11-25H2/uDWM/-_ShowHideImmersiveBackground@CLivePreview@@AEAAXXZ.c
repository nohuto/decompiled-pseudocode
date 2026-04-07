/*
 * XREFs of ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x180054614
 * Callers:
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180052518 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180049148 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800527C0 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x1800528DC (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x180055730 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

void __fastcall CLivePreview::_ShowHideImmersiveBackground(CLivePreview *this)
{
  unsigned int i; // edi
  CTopLevelWindow *v3; // r15
  struct CWindowData *WindowData; // rax
  const RECT **v5; // rbp
  const RECT *v6; // rsi
  const RECT **v7; // r14
  const RECT *v8; // rdx
  struct tagRECT v9; // [rsp+20h] [rbp-38h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 96); ++i )
  {
    v3 = *(CTopLevelWindow **)(*((_QWORD *)this + 45) + 16LL * i);
    WindowData = CTopLevelWindow::GetWindowData(v3);
    v5 = (const RECT **)*((_QWORD *)this + 57);
    v6 = (const RECT *)WindowData;
    v7 = (const RECT **)*((_QWORD *)this + 56);
    if ( v7 != v5 )
    {
      while ( 1 )
      {
        v8 = *v7;
        if ( (*v7)[8].left == 1 )
        {
          if ( v6 && (unsigned int)CLivePreview::_GetCoverageStateOfWindow((__int64)this, (__int64)v6) )
            goto LABEL_17;
        }
        else
        {
          v9 = 0LL;
          if ( v6 && (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(v6 + 3, v8 + 3, &v9) == 1 )
            goto LABEL_17;
        }
        if ( ++v7 == v5 )
          goto LABEL_4;
      }
    }
    if ( WindowData && (unsigned int)CLivePreview::_GetCoverageStateOfWindow((__int64)this, (__int64)WindowData) )
    {
LABEL_17:
      if ( *(_BYTE *)(*((_QWORD *)this + 45) + 16LL * i + 8) )
      {
        CTopLevelWindow::StartLivePreviewAnimation((__int64)v3, 3);
        *(_BYTE *)(*((_QWORD *)this + 45) + 16LL * i + 8) = 0;
      }
    }
    else
    {
LABEL_4:
      if ( !*(_BYTE *)(*((_QWORD *)this + 45) + 16LL * i + 8) )
      {
        CTopLevelWindow::StartLivePreviewAnimation((__int64)v3, 4);
        *(_BYTE *)(*((_QWORD *)this + 45) + 16LL * i + 8) = 1;
      }
    }
  }
}
