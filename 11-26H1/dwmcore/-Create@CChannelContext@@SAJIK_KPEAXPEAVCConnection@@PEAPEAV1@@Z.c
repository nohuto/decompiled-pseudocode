/*
 * XREFs of ?Create@CChannelContext@@SAJIK_KPEAXPEAVCConnection@@PEAPEAV1@@Z @ 0x180163D70
 * Callers:
 *     ?OpenChannel@CComposition@@IEAAJIK_KPEAX@Z @ 0x180163C50 (-OpenChannel@CComposition@@IEAAJIK_KPEAX@Z.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x18016426C (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ??0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z @ 0x1801645A8 (--0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z.c)
 *     ??_ECChannelContext@@EEAAPEAXI@Z @ 0x1801C5610 (--_ECChannelContext@@EEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAXPEAVCConnection@@@Z @ 0x18020BCF0 (--0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAXPEAVCConnection@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannelContext::Create(
        unsigned int a1,
        unsigned int a2,
        unsigned __int64 a3,
        void *a4,
        struct CConnection *a5,
        struct CChannelContext **a6)
{
  unsigned int v8; // ebx
  int ProcessAttribution; // eax
  CChannelContext *v11; // rcx
  struct CProcessAttribution *v12; // rdi
  CChannelContext *v13; // rbp
  CResourceTable *v14; // rax
  CResourceTable *v15; // rax
  CResourceTable *v16; // rsi
  void *v18; // [rsp+20h] [rbp-28h]
  struct CProcessAttribution *v19; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v8 = 0;
  v19 = 0LL;
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(qword_1803DEAE0, a2, a3, &v19);
  if ( ProcessAttribution < 0 )
    ModuleFailFastForHRESULT(ProcessAttribution, retaddr);
  v11 = (CChannelContext *)DefaultHeap::AllocClear(0x90uLL);
  if ( !v11 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v18 = a4;
  v12 = v19;
  v13 = CChannelContext::CChannelContext(v11, a1, a2, v19, v18, a5);
  if ( v13 )
  {
    v14 = (CResourceTable *)DefaultHeap::AllocClear(0x50uLL);
    if ( !v14 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v15 = CResourceTable::CResourceTable(v14, a1, v12);
    v16 = v15;
    if ( v15 )
    {
      (**(void (__fastcall ***)(CResourceTable *))v15)(v15);
      *((_QWORD *)v13 + 6) = v16;
      *a6 = v13;
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x31u, 0LL);
      CChannelContext::`vector deleting destructor'(v13, 1u);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Eu, 0LL);
  }
  if ( v12 )
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((volatile signed __int32 *)v12);
  return v8;
}
