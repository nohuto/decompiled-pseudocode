/*
 * XREFs of ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18007D198
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180067C80 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18007E8F8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008AB18 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180015188 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x180033A1C (-WasMaximized@CWindowIconic@@AEAA_NXZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 *     IsOpenThemeDataPresent @ 0x18008F41C (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CWindowIconic::OnWindowStyleUpdated(CWindowIconic *this, char a2)
{
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 116LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 120LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 120LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 736LL) = *(_BYTE *)(*((_QWORD *)this + 10) + 736LL) & 0xF7 | ((unsigned __int8)IsOpenThemeDataPresent() != 0
                                                                                                  ? 8
                                                                                                  : 0);
  *(_DWORD *)(*((_QWORD *)this + 10) + 412LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 412LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 736LL) ^= (*(_BYTE *)(*((_QWORD *)this + 9) + 736LL) ^ *(_BYTE *)(*((_QWORD *)this + 10) + 736LL)) & 2;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) &= 0xFF30FFFF;
  if ( *((_DWORD *)this + 4) != 2 || *((_BYTE *)this + 21) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) |= 0xCF0000u;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) &= ~0x20000000u;
  if ( CWindowIconic::WasMaximized(this) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) |= 0x1000000u;
  CTopLevelWindow::OnWindowStyleUpdated(*((CTopLevelWindow **)this + 11));
  if ( a2 )
    CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11));
  return 0LL;
}
