/*
 * XREFs of ?Create@CGlobalInputManager@@SAJPEAVCComposition@@PEAPEAVCInputManager@@@Z @ 0x180216718
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F4FE0 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CGlobalInputManager@@UEAAJXZ @ 0x1801E1E30 (-Initialize@CGlobalInputManager@@UEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??0CInputManager@@IEAA@PEAVCComposition@@@Z @ 0x180226808 (--0CInputManager@@IEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CGlobalInputManager::Create(struct CComposition *a1, struct CInputManager **a2)
{
  CInputManager *v4; // rax
  CInputManager *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CInputManager *)DefaultHeap::AllocClear(0x138uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  CInputManager::CInputManager(v4, a1);
  *((_QWORD *)v5 + 38) = 0LL;
  *(_QWORD *)v5 = &CGlobalInputManager::`vftable';
  CMILRefCountImpl::AddReference((CInputManager *)((char *)v5 + 8));
  v6 = CGlobalInputManager::Initialize((struct CComposition **)v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x21u, 0LL);
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v5);
  }
  else
  {
    *a2 = v5;
  }
  return v7;
}
