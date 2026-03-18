/*
 * XREFs of ?CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z @ 0x1801AC460
 * Callers:
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x18007C9C0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 * Callees:
 *     ?Alloc@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z @ 0x18007B0D0 (-Alloc@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z.c)
 *     ??0CCommonRenderingEffect@@QEAA@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@@Z @ 0x18007C1A0 (--0CCommonRenderingEffect@@QEAA@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCommonRenderingEffectFactory::CreateSolidColorRenderingEffect(
        CCommonRenderingEffectFactory *this,
        struct CRenderingEffect **a2)
{
  struct CRenderingEffect *v2; // rax
  unsigned int v3; // ebx
  __int64 v6; // rdi
  unsigned __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (struct CRenderingEffect *)CCommonRenderingEffectFactory::s_cpSolidColorEffect;
  v3 = 0;
  if ( CCommonRenderingEffectFactory::s_cpSolidColorEffect )
    goto LABEL_2;
  v2 = (struct CRenderingEffect *)CThreadLocalObjectCache<CCommonRenderingEffect,CCommonRenderingEffect>::Alloc();
  if ( v2 )
  {
    v7[0] = 0LL;
    v7[1] = 0LL;
    v2 = (struct CRenderingEffect *)CCommonRenderingEffect::CCommonRenderingEffect((__int64)v2, v7);
  }
  v6 = CCommonRenderingEffectFactory::s_cpSolidColorEffect;
  CCommonRenderingEffectFactory::s_cpSolidColorEffect = (__int64)v2;
  if ( v2 )
  {
    (**(void (__fastcall ***)(struct CRenderingEffect *))v2)(v2);
    v2 = (struct CRenderingEffect *)CCommonRenderingEffectFactory::s_cpSolidColorEffect;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v2 = (struct CRenderingEffect *)CCommonRenderingEffectFactory::s_cpSolidColorEffect;
  }
  if ( v2 )
  {
LABEL_2:
    *a2 = v2;
    (**(void (__fastcall ***)(__int64))CCommonRenderingEffectFactory::s_cpSolidColorEffect)(CCommonRenderingEffectFactory::s_cpSolidColorEffect);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x59u, 0LL);
  }
  return v3;
}
