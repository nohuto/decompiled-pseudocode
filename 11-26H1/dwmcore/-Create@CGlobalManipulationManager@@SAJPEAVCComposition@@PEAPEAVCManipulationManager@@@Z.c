/*
 * XREFs of ?Create@CGlobalManipulationManager@@SAJPEAVCComposition@@PEAPEAVCManipulationManager@@@Z @ 0x1801DB148
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F4FE0 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1801DB214 (--0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationManager@@IEAAJXZ @ 0x1801DDDAC (-Initialize@CManipulationManager@@IEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGlobalManipulationManager::Create(struct CComposition *a1, struct CManipulationManager **a2)
{
  CGlobalManipulationManager *v4; // rax
  CGlobalManipulationManager *v5; // rax
  CManipulationManager *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CGlobalManipulationManager *)DefaultHeap::AllocClear(0x190uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v5 = CGlobalManipulationManager::CGlobalManipulationManager(v4, a1);
  v6 = v5;
  if ( v5 )
  {
    CMILRefCountImpl::AddReference((CGlobalManipulationManager *)((char *)v5 + 8));
    v8 = CManipulationManager::Initialize(v6);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x23u, 0LL);
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x20u, 0LL);
  }
  return v7;
}
