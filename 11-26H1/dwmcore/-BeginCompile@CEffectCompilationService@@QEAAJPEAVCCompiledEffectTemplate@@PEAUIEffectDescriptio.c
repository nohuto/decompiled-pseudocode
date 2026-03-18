/*
 * XREFs of ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18014D028
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18014CE4C (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1800AAD50 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddTemplate_RenderThread@CEffectCompilationTask@@AEAAJPEAVCCompiledEffectTemplate@@@Z @ 0x18014D430 (-AddTemplate_RenderThread@CEffectCompilationTask@@AEAAJPEAVCCompiledEffectTemplate@@@Z.c)
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x18014D4DC (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 *     ?Initialize@CEffectCompilationTask@@AEAAJXZ @ 0x18014DCB0 (-Initialize@CEffectCompilationTask@@AEAAJXZ.c)
 *     McTemplateU0pdsddt_EventWriteTransfer @ 0x18014E018 (McTemplateU0pdsddt_EventWriteTransfer.c)
 *     ??$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x18014EFC0 (--$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@-$_Hash@V-$_Umap_traits@UEffec.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z @ 0x18020F9BC (--0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Compositio.c)
 *     ??$_Erase@UEffectDescriptionKey@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBUEffectDescriptionKey@@@Z @ 0x18022EB94 (--$_Erase@UEffectDescriptionKey@@@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectComp.c)
 *     ?find@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@AEBUEffectDescriptionKey@@@Z @ 0x18022F04C (-find@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhash_compa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectCompilationService::BeginCompile(
        CEffectCompilationService *this,
        struct CCompiledEffectTemplate *a2,
        struct Windows::UI::Composition::IEffectDescription *a3,
        struct CEffectCompilationTask **a4)
{
  __int64 v4; // rax
  PTP_WORK *v6; // rbx
  unsigned __int8 v9; // r13
  char *v10; // rdi
  PTP_WORK *v11; // rdi
  int v12; // eax
  int v13; // edi
  __int64 *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // ecx
  int v19; // esi
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // rdx
  struct CEffectCompilationTask *v23; // rax
  unsigned int v25; // eax
  CEffectCompilationTask *v26; // rax
  CEffectCompilationTask *v27; // rax
  int v28; // eax
  __int64 v29; // rax
  const char *v30; // r15
  int (__fastcall *v31)(struct Windows::UI::Composition::IEffectDescription *, PVOID *); // rdi
  PVOID v32; // rcx
  char v33; // di
  int ChannelCallbackId; // eax
  int v35; // edx
  char *v36; // [rsp+40h] [rbp-30h]
  _QWORD v37[2]; // [rsp+48h] [rbp-28h] BYREF
  char v38[24]; // [rsp+58h] [rbp-18h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+38h]
  PVOID pv; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v41; // [rsp+C0h] [rbp+50h] BYREF
  struct CEffectCompilationTask **v42; // [rsp+C8h] [rbp+58h]

  v42 = a4;
  v4 = *(_QWORD *)a3;
  v6 = 0LL;
  v37[1] = a3;
  pv = 0LL;
  v9 = 1;
  v10 = (char *)this + 96;
  v37[0] = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(v4 + 104))(a3);
  v36 = v10;
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::find(
    v10,
    &v41,
    v37);
  if ( v41 != *((_QWORD *)this + 13) )
  {
    v11 = *(PTP_WORK **)(v41 + 32);
    if ( v11 )
    {
      (*(void (__fastcall **)(_QWORD))*v11)(*(_QWORD *)(v41 + 32));
      v6 = v11;
    }
    CEffectCompilationService::TryReviveDeadTask(this, (const struct CEffectCompilationTask *)v6);
    goto LABEL_5;
  }
  v26 = (CEffectCompilationTask *)DefaultHeap::AllocClear(0x68uLL);
  if ( !v26 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v27 = CEffectCompilationTask::CEffectCompilationTask(v26, this, a3);
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&pv, (void (__fastcall ***)(_QWORD))v27);
  v6 = (PTP_WORK *)pv;
  if ( !pv )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x70u, 0LL);
    goto LABEL_21;
  }
  if ( CCommonRegistryData::EnableEffectCaching )
    std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::emplace<EffectDescriptionKey &,CEffectCompilationTask *>(
      (char *)this + 96,
      v38,
      v37,
      &pv);
  v28 = CEffectCompilationTask::Initialize(v6);
  v13 = v28;
  if ( v28 >= 0 )
  {
    v9 = 0;
LABEL_5:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v29 = *(_QWORD *)a3;
      v30 = "null";
      pv = 0LL;
      v31 = *(int (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *, PVOID *))(v29 + 88);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&pv);
      if ( v31(a3, &pv) >= 0 )
        v30 = (const char *)(*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)pv + 16LL))(pv);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        v33 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 32LL))(a3);
        (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 80LL))(a3);
        ChannelCallbackId = CNotificationResource::GetChannelCallbackId(a2);
        McTemplateU0pdsddt_EventWriteTransfer(v9, v35, (_DWORD)v6, ChannelCallbackId, (__int64)v30, v35, v33, v9);
      }
      v32 = pv;
      if ( pv )
      {
        pv = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v32 + 8LL))(v32);
      }
    }
    v12 = CEffectCompilationTask::AddTemplate_RenderThread((CEffectCompilationTask *)v6, a2);
    v13 = v12;
    if ( v12 >= 0 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
      v14 = (__int64 *)((char *)this + 64);
      v15 = 0LL;
      v16 = *((_QWORD *)this + 8);
      v17 = *((unsigned int *)this + 22);
      while ( (unsigned int)v15 < (unsigned int)v17 )
      {
        if ( v6 == *(PTP_WORK **)(v16 + 8 * v15) )
          goto LABEL_16;
        v15 = (unsigned int)(v15 + 1);
      }
      v18 = v17 + 1;
      pv = v6;
      if ( (int)v17 + 1 < (unsigned int)v17 )
      {
        v13 = -2147024362;
        v25 = 183;
        v19 = -2147024362;
      }
      else
      {
        v19 = 0;
        if ( v18 <= *((_DWORD *)this + 21) )
        {
          *(_QWORD *)(v16 + 8 * v17) = v6;
          *((_DWORD *)this + 22) = v18;
LABEL_14:
          v13 = v19;
          if ( *((_BYTE *)v6 + 96) )
          {
            v20 = *v14;
            v21 = *((unsigned int *)this + 50);
            v22 = *(_QWORD *)(*v14 + 8LL * (unsigned int)(*((_DWORD *)this + 22) - 1));
            *(_QWORD *)(v20 + 8LL * (unsigned int)(*((_DWORD *)this + 22) - 1)) = *(_QWORD *)(*v14 + 8 * v21);
            *(_QWORD *)(v20 + 8 * v21) = v22;
            ++*((_DWORD *)this + 50);
            SetEvent(*((HANDLE *)this + 7));
          }
LABEL_16:
          if ( this != (CEffectCompilationService *)-16LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
          if ( !v9 )
            SubmitThreadpoolWork(v6[8]);
          v23 = (struct CEffectCompilationTask *)v6;
          v6 = 0LL;
          *v42 = v23;
          if ( v13 < 0 )
            goto LABEL_25;
          goto LABEL_21;
        }
        v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8, 1, &pv);
        v13 = v19;
        if ( v19 >= 0 )
          goto LABEL_14;
        v25 = 194;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v25, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x9Cu, 0LL);
      if ( this != (CEffectCompilationService *)-16LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
      goto LABEL_25;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x94u, 0LL);
    goto LABEL_25;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x77u, 0LL);
LABEL_25:
  if ( !v6 )
    return (unsigned int)v13;
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Erase<EffectDescriptionKey>(
    v36,
    v37);
LABEL_21:
  if ( v6 )
    (*((void (__fastcall **)(PTP_WORK *))*v6 + 1))(v6);
  return (unsigned int)v13;
}
