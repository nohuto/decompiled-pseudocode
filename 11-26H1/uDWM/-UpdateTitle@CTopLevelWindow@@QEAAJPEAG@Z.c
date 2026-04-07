/*
 * XREFs of ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x180031F10
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18003137C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x180031910 (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateTitle(CTopLevelWindow *this, unsigned __int16 *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax

  v2 = *((_QWORD *)this + 64);
  v3 = 0;
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v2 + 48LL))(v2, a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1367u, 0LL);
  }
  return v3;
}
