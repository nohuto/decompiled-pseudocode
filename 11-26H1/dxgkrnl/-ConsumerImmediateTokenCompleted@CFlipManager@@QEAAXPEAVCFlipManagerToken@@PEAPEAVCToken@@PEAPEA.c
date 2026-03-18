/*
 * XREFs of ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC
 * Callers:
 *     ?ConsumerImmediateTokenCompleted@FlipManagerObject@@QEAAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x1400189B4 (-ConsumerImmediateTokenCompleted@FlipManagerObject@@QEAAJPEAVCFlipManagerToken@@PEAPEAVCToken@@P.c)
 * Callees:
 *     ?IsPresentCanceled@CFlipManager@@AEAA_N_K@Z @ 0x1400187C8 (-IsPresentCanceled@CFlipManager@@AEAA_N_K@Z.c)
 *     ?SetFlipManagerObject@CFlipManagerSignal@@QEAAJPEAUFlipManagerObject@@@Z @ 0x140018814 (-SetFlipManagerObject@CFlipManagerSignal@@QEAAJPEAUFlipManagerObject@@@Z.c)
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140018A24 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 *     ?FreeExpiredCancels@CFlipManager@@AEAAX_K@Z @ 0x140018A54 (-FreeExpiredCancels@CFlipManager@@AEAAX_K@Z.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140018B90 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x140018D88 (-GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z.c)
 *     Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline @ 0x140019460 (Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     _lambda_45b452eeef8f878a1390d07846441040_::operator() @ 0x140019548 (_lambda_45b452eeef8f878a1390d07846441040_--operator().c)
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x140019E94 (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z @ 0x14001A094 (-Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z.c)
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14001A938 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14001B070 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001B0AC (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x14001B988 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x14001C6A8 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x14001CB2C (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x14001D2A8 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001D924 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x14001EC30 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x140023F8C (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1400673F4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::ConsumerImmediateTokenCompleted(
        CFlipManager *this,
        struct CFlipManagerToken *a2,
        struct CToken **a3,
        struct CFlipManagerSignal **a4)
{
  struct CToken **v4; // rsi
  __int64 v7; // rdi
  struct _LIST_ENTRY **p_Blink; // rbx
  unsigned __int8 v9; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  struct CFlipPresentUpdate *v13; // rcx
  CFlipManager *v14; // rcx
  int v15; // eax
  CFlipManager *v16; // rcx
  int updated; // eax
  struct _LIST_ENTRY *Flink; // rax
  CFlipManager::PresentHistory *v19; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  int v21; // eax
  int v22; // edi
  NTSTATUS v23; // eax
  struct CFlipManagerSignal *v24; // rdx
  unsigned int v25; // ecx
  int v26; // eax
  CFlipManager *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdi
  void (__fastcall *v30)(_QWORD, __int64, bool, _QWORD, __int64, _QWORD); // r14
  unsigned int v31; // eax
  struct CToken *v32; // rax
  CFlipManagerSignal *v33; // rcx
  struct _LIST_ENTRY *v34; // rcx
  struct _LIST_ENTRY *v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 Win32kImportTable; // rax
  __int64 v41; // rdi
  void (__fastcall *v42)(_QWORD, __int64, __int64); // rsi
  unsigned int TracingId; // eax
  void (__fastcall *v44)(_QWORD, __int64); // rdi
  __int64 v45; // rbx
  unsigned int v46; // eax
  __int64 v47; // rdx
  struct _LIST_ENTRY *v48; // rdx
  struct _LIST_ENTRY *v49; // rax
  CFlipManagerSignal *v50; // [rsp+48h] [rbp-29h] BYREF
  struct CFlipPresentUpdate *UpdateForPresentId; // [rsp+50h] [rbp-21h] BYREF
  struct _LIST_ENTRY **v52; // [rsp+58h] [rbp-19h] BYREF
  __int64 v53; // [rsp+60h] [rbp-11h]
  __int64 v54; // [rsp+68h] [rbp-9h]
  struct _LIST_ENTRY v55; // [rsp+70h] [rbp-1h] BYREF
  CFlipManagerSignal **v56; // [rsp+80h] [rbp+Fh] BYREF
  struct CFlipManagerSignal *p_UpdateForPresentId; // [rsp+88h] [rbp+17h] BYREF
  char v58; // [rsp+90h] [rbp+1Fh]
  unsigned int v59; // [rsp+D8h] [rbp+67h]

  v4 = a3;
  if ( *((_BYTE *)this + 32) )
    return;
  v7 = *((_QWORD *)a2 + 10);
  p_Blink = 0LL;
  v52 = 0LL;
  v9 = 0;
  v50 = 0LL;
  v10 = 0LL;
  v54 = v7;
  v53 = 0LL;
  v59 = 0;
  if ( v7 )
  {
    v36 = *(_QWORD *)(v7 + 104);
    v10 = *(_QWORD *)(v36 + 40);
    v37 = *(_DWORD *)(v36 + 48);
    v9 = *(_DWORD *)(v36 + 52) != 0;
    v53 = v10;
    v59 = v37;
  }
  UpdateForPresentId = CFlipManager::GetUpdateForPresentId(this, *((_QWORD *)a2 + 12));
  if ( !UpdateForPresentId )
  {
    v39 = 17LL;
    v38 = 3221225473LL;
    goto LABEL_52;
  }
  v56 = (CFlipManagerSignal **)this;
  p_UpdateForPresentId = (struct CFlipManagerSignal *)&UpdateForPresentId;
  v58 = 1;
  if ( !v9 && CFlipManager::IsPresentCanceled(this, v11) )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    v41 = *((_QWORD *)a2 + 12);
    v42 = *(void (__fastcall **)(_QWORD, __int64, __int64))(Win32kImportTable + 360);
    TracingId = CFlipManager::GetTracingId(this);
    v42(TracingId, v41, 2LL);
    v7 = v54;
    v4 = a3;
  }
  IsEnabledDeviceUsageNoInline = Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline();
  v13 = UpdateForPresentId;
  if ( (!IsEnabledDeviceUsageNoInline || v7)
    && !CEndpointResourceStateManager::IsSimpleUpdatePresent(UpdateForPresentId) )
  {
    v47 = 3221225473LL;
    v16 = this;
LABEL_64:
    CFlipManager::MarkAsLost(v16, v47, 19LL);
    goto LABEL_65;
  }
  CFlipManager::PurgeSkippedTokens(this, *((_QWORD *)v13 + 8), v9);
  if ( *((_BYTE *)this + 32) )
  {
LABEL_65:
    CFlipManager::ReleaseKernelPresentUpdateReferences(v14, UpdateForPresentId);
    if ( UpdateForPresentId )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)UpdateForPresentId + 24LL))(
        UpdateForPresentId,
        1LL);
    v44 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 168);
    v45 = --*((_QWORD *)this + 21);
    v46 = CFlipManager::GetTracingId(this);
    v44(v46, v45);
    goto LABEL_61;
  }
  if ( v9 )
    goto LABEL_16;
  v15 = CFlipManager::ApplyUpdateToConsumer(this, UpdateForPresentId);
  v16 = this;
  if ( v15 < 0 )
  {
    v47 = (unsigned int)v15;
    goto LABEL_64;
  }
  v55.Blink = &v55;
  v55.Flink = &v55;
  updated = CFlipManager::ConsumerDwmProcessUpdateTokens(this, UpdateForPresentId, a2, &v55);
  if ( updated < 0 )
  {
    CFlipManager::MarkAsLost(this, (unsigned int)updated, 19LL);
    v58 = 0;
    lambda_45b452eeef8f878a1390d07846441040_::operator()(&v56);
    return;
  }
  if ( (unsigned int)Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline() )
  {
    Flink = v55.Flink;
    if ( v55.Flink != &v55 )
    {
      if ( !v4 )
        goto LABEL_43;
      if ( v55.Flink->Blink != &v55 || (v34 = v55.Flink->Flink, v55.Flink->Flink->Blink != v55.Flink) )
LABEL_55:
        __fastfail(3u);
      v55.Flink = v55.Flink->Flink;
      p_Blink = &Flink[-1].Blink;
      v34->Blink = &v55;
      v52 = &Flink[-1].Blink;
      while ( 1 )
      {
        Flink = v55.Flink;
LABEL_43:
        if ( Flink == &v55 )
          break;
        if ( Flink->Blink != &v55 )
          goto LABEL_55;
        v35 = Flink->Flink;
        if ( Flink->Flink->Blink != Flink )
          goto LABEL_55;
        v55.Flink = Flink->Flink;
        v35->Blink = &v55;
        if ( Flink != (struct _LIST_ENTRY *)8 )
          ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))Flink[-1].Blink->Flink)(&Flink[-1].Blink, 1LL);
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v48 = v55.Flink;
      if ( v55.Flink == &v55 )
        break;
      if ( v55.Flink->Blink != &v55 )
        goto LABEL_55;
      v49 = v55.Flink->Flink;
      if ( v55.Flink->Flink->Blink != v55.Flink )
        goto LABEL_55;
      v55.Flink = v55.Flink->Flink;
      v49->Blink = &v55;
      wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))&v52,
        (__int64 (__fastcall ***)(_QWORD, __int64))&v48[-1].Blink);
    }
    p_Blink = v52;
  }
  v19 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
  if ( v19 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v19);
    *((_QWORD *)NextEntry + 3) = *((_QWORD *)a2 + 14);
    *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 12);
    *((_DWORD *)NextEntry + 10) = 8;
  }
LABEL_16:
  CFlipManager::UpdateNextConsumerPresentIdForUpdate(this, UpdateForPresentId, 0);
  v58 = 0;
  lambda_45b452eeef8f878a1390d07846441040_::operator()(&v56);
  p_UpdateForPresentId = 0LL;
  v56 = &v50;
  v58 = 1;
  v21 = Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline();
  v22 = CFlipManagerSignal::Create(
          *((_QWORD *)a2 + 12),
          v9 != 1,
          (struct FlipManagerTokenIFlipInfo *)(v7 & -(__int64)(v21 != 0)),
          &p_UpdateForPresentId);
  if ( v58 )
    wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))v56,
      (__int64 (__fastcall ***)(_QWORD, __int64))p_UpdateForPresentId);
  if ( v22 < 0 )
  {
    v38 = (unsigned int)v22;
    v39 = 19LL;
    goto LABEL_52;
  }
  v23 = CEndpointResourceStateManager::PrepareBufferSignals((CFlipManager *)((char *)this + 104), v50);
  if ( v23 < 0 )
    goto LABEL_51;
  if ( !p_Blink )
  {
    v24 = v50;
    v50 = 0LL;
    CFlipManager::ProcessSignal(this, v24, 0xFFFFFFFFFFFFFFFFuLL, 0);
    goto LABEL_22;
  }
  v23 = CFlipManagerSignal::SetFlipManagerObject(v50, *((struct FlipManagerObject **)a2 + 11));
  if ( v23 < 0 )
  {
LABEL_51:
    v38 = (unsigned int)v23;
    v39 = 19LL;
LABEL_52:
    v27 = this;
LABEL_59:
    CFlipManager::MarkAsLost(v27, v38, v39);
LABEL_61:
    wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v50,
      0LL);
    wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v52,
      0LL);
    return;
  }
LABEL_22:
  if ( v9 )
    v25 = 3;
  else
    v25 = v10 == 0;
  v26 = CFlipManager::PostFlipManagerPresentStatusStatistics(this, *((_QWORD *)a2 + 12), 0LL, v25);
  v27 = this;
  if ( v26 < 0 )
  {
    v38 = (unsigned int)v26;
    v39 = 19LL;
    goto LABEL_59;
  }
  CFlipManager::FreeExpiredCancels(this, *((_QWORD *)a2 + 12));
  v28 = DxgkGetWin32kImportTable();
  v29 = *((_QWORD *)a2 + 12);
  v30 = *(void (__fastcall **)(_QWORD, __int64, bool, _QWORD, __int64, _QWORD))(v28 + 192);
  v31 = CFlipManager::GetTracingId(this);
  v30(v31, v29, p_Blink != 0LL, v9, v53, v59);
  if ( v54 )
    CFlipManager::PostFlipManagerIFlipFrameStatistics(this, a2);
  if ( a3 )
  {
    v32 = (struct CToken *)p_Blink;
    p_Blink = 0LL;
    *a3 = v32;
  }
  if ( a4 )
  {
    v33 = 0LL;
    *a4 = v50;
  }
  else
  {
    v33 = v50;
  }
  v50 = 0LL;
  if ( v33 )
    (**(void (__fastcall ***)(CFlipManagerSignal *, __int64))v33)(v33, 1LL);
  if ( p_Blink )
    ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))(*p_Blink)->Flink)(p_Blink, 1LL);
}
