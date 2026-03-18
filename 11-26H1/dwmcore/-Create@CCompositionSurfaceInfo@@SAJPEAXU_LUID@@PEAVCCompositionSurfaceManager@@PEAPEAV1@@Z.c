/*
 * XREFs of ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800F6614
 * Callers:
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18012DA04 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F4FE0 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z @ 0x1800F66D8 (--0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z.c)
 *     ?Initialize@CCompositionSurfaceInfo@@IEAAJPEAX@Z @ 0x1800F69AC (-Initialize@CCompositionSurfaceInfo@@IEAAJPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::Create(
        void *a1,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3,
        struct CCompositionSurfaceInfo **a4)
{
  CGlobalCompositionSurfaceInfo *v8; // rax
  CGlobalCompositionSurfaceInfo *v9; // rax
  CCompositionSurfaceInfo *v10; // rbx
  int v11; // edi
  unsigned int v12; // eax

  *a4 = 0LL;
  v8 = (CGlobalCompositionSurfaceInfo *)DefaultHeap::AllocClear(0x1B8uLL);
  if ( !v8 )
  {
    v10 = 0LL;
    goto LABEL_9;
  }
  v9 = CGlobalCompositionSurfaceInfo::CGlobalCompositionSurfaceInfo(v8, a2, a3);
  v10 = v9;
  if ( !v9 )
  {
LABEL_9:
    v11 = -2147024882;
    v12 = 31;
    goto LABEL_5;
  }
  CMILRefCountImpl::AddReference((CGlobalCompositionSurfaceInfo *)((char *)v9 + 8));
  v11 = CCompositionSurfaceInfo::Initialize(v10, a1);
  if ( v11 >= 0 )
  {
    *a4 = v10;
    return (unsigned int)v11;
  }
  v12 = 33;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v12, 0LL);
  if ( v10 )
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v10);
  return (unsigned int)v11;
}
