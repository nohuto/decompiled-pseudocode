/*
 * XREFs of ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180056628
 * Callers:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180019C6C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800548B4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z @ 0x180098EA4 (-OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019CAC (-OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowIconic::OnColorizationUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax

  v4 = 0;
  *(_BYTE *)(*((_QWORD *)this + 10) + 673LL) ^= (*(_BYTE *)(*((_QWORD *)this + 9) + 673LL) ^ *(_BYTE *)(*((_QWORD *)this + 10) + 673LL)) & 0x40;
  CTopLevelWindow::OnColorizationUpdated(*((CTopLevelWindow **)this + 11));
  if ( a2 )
  {
    v7 = CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11), v5, v6);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x203u, 0LL);
  }
  return v4;
}
