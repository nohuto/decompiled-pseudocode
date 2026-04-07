/*
 * XREFs of ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x180005D94
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180005F38 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800060D4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x180013990 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180013F60 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::NotifyTouchDragVisualComplete(
        CContactManager *this,
        const struct CTouchDragVisual *a2)
{
  unsigned int v4; // esi
  int i; // r8d
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  int Touch; // eax
  struct CVisual *v10; // r14
  CWindowList *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  CContainerVisual *OverlayRootVisualForDesktop; // rax
  bool v15; // r8
  CVisual *v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 20); ++i )
  {
    v17 = 104LL * (unsigned int)i;
    v18 = *((_QWORD *)this + 7);
    if ( *(const struct CTouchDragVisual **)(v18 + v17 + 80) == a2 )
    {
      if ( i >= 0 )
      {
        *(_BYTE *)(v18 + v17 + 96) = 1;
        *(_QWORD *)(v17 + *((_QWORD *)this + 7) + 16) = *(_QWORD *)(v17 + *((_QWORD *)this + 7) + 8);
        v7 = *((_QWORD *)this + 7);
        if ( !*(_QWORD *)(v17 + v7 + 88)
          && !*(_QWORD *)(v17 + v7 + 64)
          && (*((_BYTE *)this + 324) || *(_DWORD *)(v17 + v7 + 40)) )
        {
          if ( !*(_QWORD *)(v17 + v7 + 48) )
          {
            v8 = *((_QWORD *)a2 + 27);
            Touch = CreateTouchVisual<CDirectTouchVisual>(v8);
            v4 = Touch;
            if ( Touch < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Touch, 0x427u, 0LL);
              break;
            }
            v10 = *(struct CVisual **)(v17 + *((_QWORD *)this + 7) + 48);
            v11 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
            if ( v11 )
            {
              OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(v11, v8, 1);
              v16 = OverlayRootVisualForDesktop;
              if ( OverlayRootVisualForDesktop )
              {
                CContainerVisual::AddChild(OverlayRootVisualForDesktop, v10, v15);
                CVisual::MoveToFront(v16, 0);
              }
            }
          }
          v12 = *((_QWORD *)this + 7);
          v13 = 4294967291LL;
          if ( !*((_BYTE *)this + 324) )
            v13 = *(unsigned int *)(v17 + v12 + 40);
          CDirectTouchVisual::StartDown(*(_QWORD *)(v17 + v12 + 48), v17 + v12 + 8, v17 + v12 + 24, v13);
        }
      }
      break;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
