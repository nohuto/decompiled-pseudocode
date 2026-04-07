/*
 * XREFs of ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800566B8
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800548B4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180055740 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180055A98 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008F614 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001BFB0 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x1800567E0 (-WasMaximized@CWindowIconic@@AEAA_NXZ.c)
 *     IsOpenThemeDataPresent @ 0x18009BCE0 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CWindowIconic::OnWindowStyleUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  int v8; // eax

  v4 = 0;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 116LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 120LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 120LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 672LL) = *(_BYTE *)(*((_QWORD *)this + 10) + 672LL) & 0xF7 | ((unsigned __int8)IsOpenThemeDataPresent() != 0
                                                                                                  ? 8
                                                                                                  : 0);
  *(_DWORD *)(*((_QWORD *)this + 10) + 412LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 412LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 672LL) ^= (*(_BYTE *)(*((_QWORD *)this + 9) + 672LL) ^ *(_BYTE *)(*((_QWORD *)this + 10) + 672LL)) & 2;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) &= 0xFF30FFFF;
  if ( *((_DWORD *)this + 4) != 2 || *((_BYTE *)this + 21) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) |= 0xCF0000u;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) &= ~0x20000000u;
  if ( CWindowIconic::WasMaximized(this) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) |= 0x1000000u;
  CTopLevelWindow::OnWindowStyleUpdated(*((CTopLevelWindow **)this + 11));
  if ( a2 )
  {
    v8 = CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11), v5, v6);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x22Cu, 0LL);
  }
  return v4;
}
