/*
 * XREFs of ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x18012AA90
 * Callers:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18012A8AC (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?clear@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18012A834 (-clear@-$vector@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x18012B148 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18012B648 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18012B7D8 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z @ 0x18012BB94 (-FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
        CGlobalCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE_ *a2)
{
  __int64 v2; // rax
  unsigned int v5; // ebp
  struct ISwapChainRealization *v6; // rbx
  bool v7; // dl
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v14; // eax
  struct ISwapChainRealization *Realization; // rax
  void (__fastcall ***v16)(_QWORD, char *, char *, char *); // rax
  void (__fastcall ***v17)(_QWORD, char *, char *, char *); // rcx
  void (__fastcall **v18)(_QWORD, char *, char *, char *); // rax
  char *v19; // rdx

  v2 = *((_QWORD *)a2 + 2);
  v5 = 0;
  v6 = 0LL;
  if ( *((_QWORD *)this + 17) != v2 )
  {
    v7 = *((_DWORD *)this + 36) == 3 && v2;
    CGlobalCompositionSurfaceInfo::CBindInfo::Reset((CGlobalCompositionSurfaceInfo *)((char *)this + 112), v7);
    CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(this, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = *((_QWORD *)a2 + 2);
  if ( v8 )
  {
    if ( *((_QWORD *)this + 17) != v8 )
      goto LABEL_18;
    v9 = *((_QWORD *)this + 23);
    v10 = *((unsigned int *)a2 + 6);
    if ( v10 < (*((_QWORD *)this + 24) - v9) >> 3 )
      v6 = *(struct ISwapChainRealization **)(v9 + 8 * v10);
    if ( v6 )
    {
      v11 = *(_QWORD *)v6;
    }
    else
    {
LABEL_18:
      v14 = CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(
              (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
              *((_QWORD *)a2 + 2));
      v5 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x121u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xDBu, 0LL);
        goto LABEL_13;
      }
      Realization = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(
                      (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
                      *((_DWORD *)a2 + 6));
      v6 = Realization;
      if ( !Realization )
        goto LABEL_12;
      v11 = *(_QWORD *)Realization;
    }
    (*(void (__fastcall **)(struct ISwapChainRealization *))(v11 + 8))(v6);
LABEL_12:
    *((_DWORD *)this + 39) = *((_DWORD *)a2 + 7);
    *((_DWORD *)this + 72) = *((_DWORD *)a2 + 92);
    *((_DWORD *)this + 83) = *((_DWORD *)a2 + 93);
    *((_BYTE *)this + 300) = *(_DWORD *)a2 == 2;
    CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(
      this,
      v6,
      (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 224),
      (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 32),
      (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 196));
    v12 = *(_QWORD *)(*((_QWORD *)g_pComposition + 708) + 24LL);
    if ( v12 )
    {
      v16 = (void (__fastcall ***)(_QWORD, char *, char *, char *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
      v17 = v16;
      if ( v16 )
      {
        v18 = *v16;
        v19 = (char *)this + 104;
        if ( !this )
          v19 = 0LL;
        (*v18)(v17, v19, (char *)a2 + 32, (char *)a2 + 196);
      }
    }
  }
LABEL_13:
  if ( *((_BYTE *)this + 295) )
  {
    std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::clear((__int64 **)this + 23);
    *((_BYTE *)this + 295) = 0;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  return v5;
}
