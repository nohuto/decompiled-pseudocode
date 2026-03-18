/*
 * XREFs of ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x1801D777C
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1801E0558 (-Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x180207D4C (--0CGlobalSurfaceManager@@IEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CGlobalSurfaceManager::Create(void **a1, void **a2, struct CSurfaceManager **a3)
{
  CGlobalSurfaceManager *v6; // rax
  CGlobalSurfaceManager *v7; // rbx
  CGlobalSurfaceManager *v8; // rax
  CGlobalSurfaceManager *v9; // rdi
  unsigned int v10; // ebx
  int v11; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (CGlobalSurfaceManager *)DefaultHeap::AllocClear(0x210uLL);
  v7 = v6;
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v6, 0, 0x210uLL);
  v8 = CGlobalSurfaceManager::CGlobalSurfaceManager(v7);
  v9 = v8;
  if ( v8 )
  {
    CMILRefCountImpl::AddReference((CGlobalSurfaceManager *)((char *)v8 + 8));
    v11 = CGlobalSurfaceManager::Initialize(v9, a1, a2);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x52u, 0LL);
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((volatile signed __int32 *)v9);
    }
    else
    {
      *a3 = v9;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x4Fu, 0LL);
  }
  return v10;
}
