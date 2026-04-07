/*
 * XREFs of ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x1800330C0
 * Callers:
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x1800322BC (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180005914 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800332BC (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800332CC (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x1800333F0 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

void __fastcall CLivePreview::_ShowHideImmersiveBackground(CLivePreview *this)
{
  unsigned int i; // edi
  CTopLevelWindow *v3; // rbp
  struct CWindowData *WindowData; // rax
  __int64 *v5; // r14
  struct CWindowData *v6; // rsi
  __int64 *v7; // r15
  __int64 v8; // rdx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 80); ++i )
  {
    v3 = *(CTopLevelWindow **)(*((_QWORD *)this + 37) + 16LL * i);
    WindowData = CTopLevelWindow::GetWindowData(v3);
    v5 = (__int64 *)*((_QWORD *)this + 46);
    v6 = WindowData;
    v7 = (__int64 *)*((_QWORD *)this + 47);
    if ( v5 != v7 )
    {
      while ( 1 )
      {
        v8 = *v5;
        if ( *(_DWORD *)(*v5 + 128) == 1 )
        {
          if ( v6 && (unsigned int)CLivePreview::_GetCoverageStateOfWindow(this, v6) )
            goto LABEL_16;
        }
        else
        {
          v9 = 0LL;
          if ( v6 && (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects((char *)v6 + 48, v8 + 48, &v9) == 1 )
            goto LABEL_16;
        }
        if ( ++v5 == v7 )
          goto LABEL_7;
      }
    }
    if ( WindowData && (unsigned int)CLivePreview::_GetCoverageStateOfWindow(this, WindowData) )
    {
LABEL_16:
      if ( *(_BYTE *)(*((_QWORD *)this + 37) + 16LL * i + 8) )
      {
        CTopLevelWindow::StartLivePreviewAnimation((__int64)v3, 3);
        *(_BYTE *)(*((_QWORD *)this + 37) + 16LL * i + 8) = 0;
      }
    }
    else
    {
LABEL_7:
      if ( !*(_BYTE *)(*((_QWORD *)this + 37) + 16LL * i + 8) )
      {
        CTopLevelWindow::StartLivePreviewAnimation((__int64)v3, 4);
        *(_BYTE *)(*((_QWORD *)this + 37) + 16LL * i + 8) = 1;
      }
    }
  }
}
