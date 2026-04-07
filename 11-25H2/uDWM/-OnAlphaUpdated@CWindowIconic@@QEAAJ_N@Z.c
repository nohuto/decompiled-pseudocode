/*
 * XREFs of ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800565A8
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800548B4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E2DD0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019D30 (-OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowIconic::OnAlphaUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  int v8; // eax

  v4 = 0;
  *(_BYTE *)(*((_QWORD *)this + 10) + 408LL) = *(_BYTE *)(*((_QWORD *)this + 9) + 408LL);
  CTopLevelWindow::OnSourceConstantAlphaUpdated(*((CTopLevelWindow **)this + 11));
  if ( a2 )
  {
    v8 = CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11), v5, v6);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x2B2u, 0LL);
  }
  return v4;
}
