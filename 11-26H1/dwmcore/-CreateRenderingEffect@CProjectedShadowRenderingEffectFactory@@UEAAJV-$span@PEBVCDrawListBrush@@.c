/*
 * XREFs of ?CreateRenderingEffect@CProjectedShadowRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180079700
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z @ 0x18007B0D0 (-Alloc@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z.c)
 *     ??0CCommonRenderingEffect@@QEAA@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@@Z @ 0x18007C1A0 (--0CCommonRenderingEffect@@QEAA@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowRenderingEffectFactory::CreateRenderingEffect(__int64 a1, __int128 *a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v6 = CThreadLocalObjectCache<CCommonRenderingEffect,CCommonRenderingEffect>::Alloc();
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    v9 = *a2;
    CCommonRenderingEffect::CCommonRenderingEffect(v6, &v9);
    *v7 = &CProjectedShadowRenderingEffect::`vftable';
    ((void (__fastcall *)(_QWORD *))CProjectedShadowRenderingEffect::`vftable')(v7);
    *a3 = v7;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x43u, 0LL);
  }
  return v5;
}
