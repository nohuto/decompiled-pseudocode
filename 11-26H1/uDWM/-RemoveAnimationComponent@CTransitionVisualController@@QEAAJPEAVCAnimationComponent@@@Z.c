/*
 * XREFs of ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800296AC
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180028368 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800C44A4 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029908 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z @ 0x18004E130 (-Remove@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18008B704 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveAnimationComponent(CContainerVisual **this, struct CVisual **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  bool v7; // bp
  struct CVisual *v8; // rdx
  struct CVisual *v9; // rax
  CContainerVisual *v10; // rcx
  int v11; // eax
  int v13; // eax
  struct CAnimationComponent *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = (struct CAnimationComponent *)a2;
  v4 = CTransitionVisualController::_EnsureTransitionVisualRoot((CTransitionVisualController *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v4,
      0x8D0u,
      0LL);
  }
  else
  {
    v6 = CTransitionVisualController::_EnsureStagingVisualRoot((CTransitionVisualController *)this);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v6,
        0x8D1u,
        0LL);
    }
    else
    {
      v7 = (unsigned int)DynArray<CAnimationComponent *,0>::Remove(this + 14, &v14) != 0;
      if ( !*((_DWORD *)this + 34) )
        this[12] = (CContainerVisual *)-1LL;
      v8 = a2[4];
      if ( v8 && (v13 = CContainerVisual::RemoveChild(this[18], v8), v5 = v13, v13 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v13,
          0x8DDu,
          0LL);
      }
      else
      {
        v9 = a2[5];
        v10 = (CContainerVisual *)*((_QWORD *)v9 + 4);
        if ( v10 )
        {
          v11 = CContainerVisual::RemoveChild(
                  v10,
                  (struct CVisual *)(((unsigned __int64)v9 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64)));
          v5 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              v11,
              0x8E3u,
              0LL);
        }
      }
      if ( v7 && a2 )
        CBaseObject::Release((CBaseObject *)a2);
    }
  }
  return v5;
}
