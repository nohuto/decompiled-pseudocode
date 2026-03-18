/*
 * XREFs of ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x1801A17D0
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x180138D94 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollAnimation::SelectInertiaModifier(CScrollAnimation *this)
{
  struct CInteractionTrackerBase *InteractionTracker; // rdi
  __int64 (__fastcall *v3)(struct CInteractionTrackerBase *, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD)); // rbx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD); // rbx
  __int64 v8; // rdi
  __int64 (__fastcall ***v10)(_QWORD); // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v11)(_QWORD); // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v3 = *(__int64 (__fastcall **)(struct CInteractionTrackerBase *, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD)))(*(_QWORD *)InteractionTracker + 568LL);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v10);
  v4 = v3(InteractionTracker, *((unsigned int *)this + 71), *((_QWORD *)this + 40), &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x393u, 0LL);
    v7 = v10;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 264LL))(this);
    v7 = v10;
    v8 = v6;
    if ( *(__int64 (__fastcall ****)(_QWORD))(v6 + 24) != v10 )
    {
      v11 = v10;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v11);
      v11 = *(__int64 (__fastcall ****)(_QWORD))(v8 + 24);
      *(_QWORD *)(v8 + 24) = v7;
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v11);
      v7 = v10;
    }
    *((_BYTE *)this + 340) &= ~1u;
    v5 = 0;
  }
  if ( v7 )
  {
    v10 = 0LL;
    (*v7)[1](v7);
  }
  return v5;
}
