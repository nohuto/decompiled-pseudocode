/*
 * XREFs of ??_GCProjectedShadowRenderingEffect@@EEAAPEAXI@Z @ 0x180187650
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCommonRenderingEffect@@MEAA@XZ @ 0x18001B5E4 (--1CCommonRenderingEffect@@MEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAXPEAX@Z @ 0x18018769C (-Free@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CProjectedShadowRenderingEffect *__fastcall CProjectedShadowRenderingEffect::`scalar deleting destructor'(
        CProjectedShadowRenderingEffect *this,
        char a2)
{
  CCommonRenderingEffect::~CCommonRenderingEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 72LL);
    else
      CThreadLocalObjectCache<CCommonRenderingEffect,CCommonRenderingEffect>::Free(this);
  }
  return this;
}
