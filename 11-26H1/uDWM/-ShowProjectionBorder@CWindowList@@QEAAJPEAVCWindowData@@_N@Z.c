/*
 * XREFs of ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001AB8C
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5930 (-_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800E1E44 (-OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180019A40 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001B184 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x18009EBC0 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800BEB90 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800BEC2C (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ShowProjectionBorder(CWindowList *this, struct CWindowData *a2, char a3)
{
  unsigned int v6; // edi
  struct CVisual **v7; // r14
  CVisual *v8; // rcx
  int v10; // eax
  int v11; // eax
  CContainerVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  int v14; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v7 = (struct CVisual **)((char *)a2 + 464);
  v8 = (CVisual *)*((_QWORD *)a2 + 58);
  if ( a3 )
  {
    if ( v8 || (v10 = CProjectionBorderVisual::Create((struct CProjectionBorderVisual **)a2 + 58), v6 = v10, v10 >= 0) )
    {
      if ( (*((_BYTE *)a2 + 742) & 8) != 0 )
      {
        v11 = CWindowList::ReevaluateAutoParenting(this, a2, 0);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x202Au, 0LL);
          goto LABEL_3;
        }
      }
      else
      {
        RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 17));
        inserted = CContainerVisual::InsertChildAfter(RootVisualForDesktop, *v7, *((struct CVisual **)a2 + 55));
        v6 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x202Eu, 0LL);
          goto LABEL_3;
        }
      }
      CProjectionBorderVisual::Show(*v7, (*((_BYTE *)a2 + 740) & 1) == 0);
      CProjectionBorderVisual::UpdateRectFromWindow(*v7, a2);
      goto LABEL_3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x2022u, 0LL);
  }
  else if ( v8 )
  {
    CVisual::RemoveSelfFromParent(v8);
    if ( *v7 )
    {
      CBaseObject::Release(*v7);
      *v7 = 0LL;
    }
    v14 = CWindowList::ReevaluateAutoParenting(this, a2, 0);
    v6 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x203Au, 0LL);
  }
LABEL_3:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
