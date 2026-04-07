/*
 * XREFs of ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18003D214
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18003CFD0 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800164E0 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTransitionVisual@CAnimationEngine@@QEAA@PEAUIAnimatedVisual@@@Z @ 0x18003D378 (--0CTransitionVisual@CAnimationEngine@@QEAA@PEAUIAnimatedVisual@@@Z.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18003D3BC (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x180065238 (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::CTransitionVisualSet::Initialize(
        CAnimationEngine::CTransitionVisualSet *this,
        struct IAnimatedVisual **a2,
        unsigned int a3)
{
  int v6; // edi
  void *v7; // rax
  unsigned int *v8; // rbx
  __int64 i; // r14
  CAnimationEngine::CTransitionVisual *v10; // rax
  __int64 v11; // rcx
  CAnimationEngine::CTransitionVisual *v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  int v15; // r9d
  unsigned int v16; // eax
  const struct std::nothrow_t *v17; // rdx
  __int64 j; // rsi
  CAnimationEngine::CTransitionVisual *v19; // rcx
  void *v20; // rcx

  v6 = 0;
  v7 = operator new(saturated_mul(a3, 8uLL));
  *((_QWORD *)this + 5) = v7;
  v8 = (unsigned int *)((char *)this + 20);
  if ( v7 )
  {
    *v8 = a3;
    for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
    {
      v10 = (CAnimationEngine::CTransitionVisual *)operator new(0x58uLL);
      if ( v10 )
        v11 = CAnimationEngine::CTransitionVisual::CTransitionVisual(v10, a2[i]);
      else
        v11 = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) = v11;
      v12 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 5) + 8 * i);
      if ( !v12 )
      {
        v16 = 1621;
        goto LABEL_11;
      }
      v13 = CAnimationEngine::CTransitionVisual::Initialize(v12);
      v6 = v13;
      v15 = v13;
      if ( v13 < 0 )
      {
        v16 = 1622;
        goto LABEL_16;
      }
      v6 = (**(__int64 (__fastcall ***)(struct IAnimatedVisual *, _QWORD, __int64, _QWORD))a2[i])(
             a2[i],
             *((unsigned int *)this + 4),
             v14,
             (unsigned int)v13);
      v15 = v6;
      if ( v6 < 0 )
      {
        v16 = 1623;
        goto LABEL_16;
      }
    }
  }
  else
  {
    v16 = 1614;
LABEL_11:
    v15 = -2147024882;
    v6 = -2147024882;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v16, 0LL);
    for ( j = 0LL; (unsigned int)j < *v8; j = (unsigned int)(j + 1) )
    {
      v19 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 5) + 8 * j);
      if ( v19 )
      {
        CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v19, (unsigned int)v17);
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * j) = 0LL;
      }
    }
    v20 = (void *)*((_QWORD *)this + 5);
    if ( v20 )
    {
      CDisplayBlackCurtainAnimatedVisual::operator delete(v20, v17);
      *((_QWORD *)this + 5) = 0LL;
    }
    *v8 = 0;
  }
  return (unsigned int)v6;
}
