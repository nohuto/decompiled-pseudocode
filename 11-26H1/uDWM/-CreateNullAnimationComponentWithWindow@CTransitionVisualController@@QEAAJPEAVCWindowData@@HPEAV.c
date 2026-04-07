/*
 * XREFs of ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18006D6A4
 * Callers:
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x18006D5D0 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029908 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18003323C (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x180038194 (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18006D874 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18007B550 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ??2CAnimationComponent@@SAPEAX_K@Z @ 0x180085CA8 (--2CAnimationComponent@@SAPEAX_K@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18008B704 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 */

__int64 __fastcall CTransitionVisualController::CreateNullAnimationComponentWithWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        unsigned int a3,
        struct CStoryboard *a4,
        bool a5,
        struct CAnimationComponent **a6)
{
  CAnimatedTransitionVisual *v6; // rdi
  unsigned int v11; // ebx
  void *v12; // rax
  __int64 v13; // rdx
  struct CAnimationComponent *v14; // rbp
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // eax
  struct CTopLevelWindow *v19; // rcx
  CAnimationComponent **v20; // r8
  CAnimatedTransitionVisual *v22; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0LL;
  v22 = 0LL;
  v11 = 4095;
  if ( a2 )
    v11 = *((_DWORD *)a2 + 186) & 0x400000 | 0xFFF;
  v12 = CAnimationComponent::operator new((unsigned __int64)this);
  if ( v12
    && (!a2 ? (v13 = 0LL) : (v13 = *((_QWORD *)a2 + 5)),
        (v14 = (struct CAnimationComponent *)CAnimationComponent::CAnimationComponent(v12, v13, v11, a3, a4)) != 0LL) )
  {
    v15 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v15,
        0x678u,
        0LL);
    }
    else
    {
      v17 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
      v16 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v17,
          0x679u,
          0LL);
      }
      else
      {
        v18 = CAnimatedTransitionVisual::Create(&v22);
        v16 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v18,
            0x67Bu,
            0LL);
          v6 = v22;
        }
        else
        {
          v6 = v22;
          CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(v22, *((_DWORD *)a4 + 18), a3);
          if ( a5 )
          {
            if ( a2 )
            {
              v19 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 55);
              if ( v19 )
                CTransitionVisualController::_MoveWindowOffscreen(v19, 1);
            }
          }
          *a6 = v14;
          CBaseObject::AddRef(v14);
          CAnimationComponent::SetTransitionVisual(*v20, v6);
        }
      }
    }
    CBaseObject::Release(v14);
    if ( v6 )
      CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v6 + 8));
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x676u,
      0LL);
  }
  return v16;
}
