/*
 * XREFs of ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180035EF8
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180017A70 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800431C0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800CC248 (-StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001BE20 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x180036090 (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnZOrderUpdated(CTopLevelWindow3D *this, char a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 Element; // rax
  __int64 v9; // rcx
  int inserted; // eax

  v2 = 0;
  if ( a2 || (v4 = *((_DWORD *)this + 70), v4 == 1) || v4 == 2 || (unsigned int)(v4 - 4) <= 0xE )
  {
    v6 = *((_QWORD *)this + 29);
    v7 = *(_QWORD *)(v6 + 440);
    if ( *(_QWORD *)(v7 + 24) )
    {
      if ( (*(_BYTE *)(v6 + 742) & 8) != 0 )
        v7 = *(_QWORD *)(*(_QWORD *)(v6 + 600) + 440LL);
      Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 53) + 8LL);
      if ( Element )
        v9 = *(_QWORD *)(Element + 24);
      else
        v9 = 0LL;
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(v9 + 136),
                   (CBaseObject ***)this,
                   (CBaseObject ***)v7,
                   1);
      v2 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x277u, 0LL);
    }
  }
  return v2;
}
