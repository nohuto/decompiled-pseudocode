/*
 * XREFs of ?StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z @ 0x1800C8BB8
 * Callers:
 *     ?_WindowEnumCallback@CInputView_SizeOrModeChangeBase@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CCE70 (-_WindowEnumCallback@CInputView_SizeOrModeChangeBase@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@C.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x180023874 (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800CA3C0 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputView_SizeOrModeChangeBase::StartThemeAnimation(
        CInputView_SizeOrModeChangeBase *this,
        struct CWindowData *a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // esi
  bool v7; // zf
  CAnimatedTransitionVisual **v8; // rbx
  struct tagRECT v10; // [rsp+30h] [rbp-18h] BYREF
  CBaseObject *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = (*(__int64 (__fastcall **)(CInputView_SizeOrModeChangeBase *, _QWORD))(*(_QWORD *)this + 112LL))(
         this,
         *((unsigned int *)a2 + 170));
  v5 = CStoryboard::_CreateAndAddAnimationComponent(this, a2, 1, v4, &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0x1434u, 0LL);
    v8 = (CAnimatedTransitionVisual **)v11;
    if ( !v11 )
      return v6;
    CStoryboard::_RemoveAnimationComponent(this, v11);
  }
  else
  {
    v7 = (*((_DWORD *)a2 + 170) & 0x1000000) == 0;
    v8 = (CAnimatedTransitionVisual **)v11;
    v10 = *(struct tagRECT *)((char *)v11 + 88);
    if ( !v7 )
      v10 = *(struct tagRECT *)((char *)a2 + 700);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v11 + 5), &v10);
    CAnimatedTransitionVisual::SetEndRect(v8[5], &v10);
  }
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return v6;
}
