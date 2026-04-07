/*
 * XREFs of ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18004B744
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180049720 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800D0AA4 (-StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800E8D00 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180007DF0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004BCB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnZOrderUpdated(CTopLevelWindow3D *this, char a2)
{
  unsigned int v2; // ebx
  int v4; // ecx
  __int64 v6; // rdx
  __int64 v7; // rdi
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int inserted; // eax

  v2 = 0;
  if ( a2 || (v4 = *((_DWORD *)this + 84), (unsigned int)(v4 - 1) <= 1) || (unsigned int)(v4 - 4) <= 0xE )
  {
    v6 = *((_QWORD *)this + 36);
    v7 = *(_QWORD *)(v6 + 440);
    if ( *(_QWORD *)(v7 + 24) )
    {
      if ( (*(_BYTE *)(v6 + 678) & 0x10) != 0 )
        v7 = *(_QWORD *)(*(_QWORD *)(v6 + 600) + 440LL);
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               *(_QWORD *)(v6 + 136));
      inserted = VisualCollection::InsertRelative(
                   (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 144),
                   (CMILRefCountBase ***)this,
                   (CMILRefCountBase ***)v7,
                   1);
      v2 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x27Bu, 0LL);
    }
  }
  return v2;
}
