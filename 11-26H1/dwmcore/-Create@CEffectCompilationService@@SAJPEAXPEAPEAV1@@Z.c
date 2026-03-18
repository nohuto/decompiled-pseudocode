/*
 * XREFs of ?Create@CEffectCompilationService@@SAJPEAXPEAPEAV1@@Z @ 0x1801D6860
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CEffectCompilationService@@AEAA@PEAX@Z @ 0x18022ED20 (--0CEffectCompilationService@@AEAA@PEAX@Z.c)
 */

__int64 __fastcall CEffectCompilationService::Create(void *a1, struct CEffectCompilationService **a2)
{
  unsigned int v4; // edi
  CEffectCompilationService *v5; // rax
  CEffectCompilationService *v7; // rax
  CEffectCompilationService *v8; // rsi

  v4 = 0;
  v5 = (CEffectCompilationService *)DefaultHeap::AllocClear(0xF8uLL);
  if ( v5 && (v7 = CEffectCompilationService::CEffectCompilationService(v5, a1), (v8 = v7) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CEffectCompilationService *)((char *)v7 + 8));
    *a2 = v8;
    CMILRefCountImpl::AddReference((CEffectCompilationService *)((char *)v8 + 8));
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((volatile signed __int32 *)v8);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x32u, 0LL);
  }
  return v4;
}
