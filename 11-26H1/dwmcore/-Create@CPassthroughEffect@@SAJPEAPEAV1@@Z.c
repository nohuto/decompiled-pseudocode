/*
 * XREFs of ?Create@CPassthroughEffect@@SAJPEAPEAV1@@Z @ 0x18015C774
 * Callers:
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x18015B7D4 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPassthroughEffect::Create(struct CPassthroughEffect **a1)
{
  _QWORD *v2; // rax
  struct CPassthroughEffect *v3; // rbx
  unsigned int v4; // ebx

  v2 = MIDL_user_allocate(0x18uLL);
  v3 = (struct CPassthroughEffect *)v2;
  if ( v2 )
  {
    v2[1] = 0LL;
    *v2 = &CPassthroughEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>'};
    v2[2] = &CPassthroughEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 1));
    *a1 = v3;
    return 0;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x10u, 0LL);
  }
  return v4;
}
