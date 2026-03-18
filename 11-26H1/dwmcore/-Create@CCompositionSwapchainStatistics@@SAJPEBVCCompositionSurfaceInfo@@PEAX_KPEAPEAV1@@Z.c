/*
 * XREFs of ?Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z @ 0x180112280
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18012B7D8 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z @ 0x180132868 (-Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::Create(
        const struct CCompositionSurfaceInfo *a1,
        void *a2,
        unsigned __int64 a3,
        struct CCompositionSwapchainStatistics **a4)
{
  CCompositionSwapchainStatistics *v8; // rax
  CCompositionSwapchainStatistics *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (CCompositionSwapchainStatistics *)DefaultHeap::AllocClear(0x68uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v8 + 2) = 0;
  *((_QWORD *)v8 + 2) = a1;
  *(_QWORD *)v8 = &CCompositionSwapchainStatistics::`vftable';
  *((_QWORD *)v8 + 3) = 0LL;
  *((_QWORD *)v8 + 4) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_QWORD *)v8 + 8) = 0LL;
  *((_OWORD *)v8 + 5) = 0LL;
  *((_QWORD *)v8 + 12) = 0LL;
  (*(void (__fastcall **)(CCompositionSwapchainStatistics *))(*(_QWORD *)v8 + 8LL))(v8);
  v10 = CCompositionSwapchainStatistics::Initialize(v9, a2, a3);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *a4 = v9;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1Au, 0LL);
    (*(void (__fastcall **)(CCompositionSwapchainStatistics *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v11;
}
