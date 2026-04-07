/*
 * XREFs of ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800C3540
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18006B6D8 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800CF5C8 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSSCrossFade::_CreateAndAddCrossfadeAnimationComponent(
        CSSCrossFade *this,
        struct CWindowData *a2,
        char a3,
        struct CAnimationComponent **a4)
{
  unsigned int *v4; // rbx
  bool v8; // si
  unsigned int *v9; // rdx
  int v10; // eax

  v4 = (unsigned int *)((char *)a2 + 744);
  if ( a3 )
  {
    *v4 |= 0x200000u;
  }
  else
  {
    if ( (*v4 & 0x10000000) != 0 )
    {
      if ( (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) > 0 )
        goto LABEL_3;
      v9 = (unsigned int *)((char *)a2 + 744);
    }
    else
    {
      v9 = (unsigned int *)((char *)a2 + 744);
    }
    if ( (*v4 & 0x20000000) == 0 )
    {
      v8 = 1;
      goto LABEL_4;
    }
    v4 = v9;
  }
LABEL_3:
  v8 = 0;
  v9 = v4;
LABEL_4:
  v10 = (*(__int64 (__fastcall **)(CSSCrossFade *, _QWORD))(*(_QWORD *)this + 112LL))(this, *v9);
  return CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v10, 0LL, 0LL, -1, v8, a4);
}
