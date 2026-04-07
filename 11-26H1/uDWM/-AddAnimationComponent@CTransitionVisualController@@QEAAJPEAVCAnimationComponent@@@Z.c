/*
 * XREFs of ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18002AEF4
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18006C7C0 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029908 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x180073344 (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18008B704 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 */

__int64 __fastcall CTransitionVisualController::AddAnimationComponent(
        CContainerVisual **this,
        struct CAnimationComponent *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // r8d
  CBaseObject *v7; // rax
  struct CVisual *v8; // rdx
  unsigned int v10; // eax
  int v11; // esi
  unsigned int v12; // [rsp+20h] [rbp-18h]
  CBaseObject *v13; // [rsp+48h] [rbp+10h] BYREF
  float v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  v3 = CTransitionVisualController::_EnsureTransitionVisualRoot((CTransitionVisualController *)this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v12 = 2223;
    goto LABEL_9;
  }
  v3 = CTransitionVisualController::_EnsureStagingVisualRoot((CTransitionVisualController *)this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v12 = 2224;
    goto LABEL_9;
  }
  v5 = *((_DWORD *)this + 34);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v4 = -2147024362;
    v10 = 183;
    v11 = -2147024362;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v10, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v11,
      0x8B2u,
      0LL);
    return v4;
  }
  if ( v6 <= *((_DWORD *)this + 33) )
  {
    *((_QWORD *)this[14] + v5) = v13;
    *((_DWORD *)this + 34) = v6;
    goto LABEL_6;
  }
  v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 14), 8, 1, &v13);
  v4 = v11;
  if ( v11 < 0 )
  {
    v10 = 194;
    goto LABEL_12;
  }
LABEL_6:
  CBaseObject::AddRef(v13);
  v7 = v13;
  v8 = (struct CVisual *)*((_QWORD *)v13 + 4);
  if ( v8 )
  {
    v3 = CContainerVisual::AddChild(this[18], v8);
    v4 = v3;
    if ( v3 < 0 )
    {
      v12 = 2231;
      goto LABEL_9;
    }
    v7 = v13;
  }
  v3 = CContainerVisual::AddChild(
         this[2],
         (struct CVisual *)((*((_QWORD *)v7 + 5) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v7 + 5) >> 64)));
  v4 = v3;
  if ( v3 < 0 )
  {
    v12 = 2235;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v3,
      v12,
      0LL);
    return v4;
  }
  v14 = 0.0;
  if ( (int)CTransitionVisualController::GetPerspectiveValue(
              *(_DWORD *)(*((_QWORD *)v13 + 18) + 72LL),
              *((_DWORD *)v13 + 7),
              &v14) >= 0 )
    *(float *)(*((_QWORD *)v13 + 5) + 872LL) = v14;
  return v4;
}
