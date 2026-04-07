/*
 * XREFs of ?_CreateAndAddCrossfadeAnimationComponent@CCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800C34E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x18003841C (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCrossFade::_CreateAndAddCrossfadeAnimationComponent(
        CCrossFade *this,
        struct CWindowData *a2,
        __int64 a3,
        struct CAnimationComponent **a4)
{
  int v7; // eax

  v7 = (*(__int64 (__fastcall **)(CCrossFade *, _QWORD))(*(_QWORD *)this + 112LL))(this, *((unsigned int *)a2 + 186));
  return CStoryboard::_CreateAndAddAnimationComponent(this, a2, 1, v7, a4);
}
