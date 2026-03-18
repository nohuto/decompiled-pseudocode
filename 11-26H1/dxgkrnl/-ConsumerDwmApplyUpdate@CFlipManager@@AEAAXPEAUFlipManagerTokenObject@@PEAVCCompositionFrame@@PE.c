/*
 * XREFs of ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1400220B4 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 * Callees:
 *     ?Remove@CFlipQueuedObject@@QEAAXXZ @ 0x1400184EC (-Remove@CFlipQueuedObject@@QEAAXXZ.c)
 *     ?IsPresentCanceled@CFlipManager@@AEAA_N_K@Z @ 0x1400187C8 (-IsPresentCanceled@CFlipManager@@AEAA_N_K@Z.c)
 *     ?SetFlipManagerObject@CFlipManagerSignal@@QEAAJPEAUFlipManagerObject@@@Z @ 0x140018814 (-SetFlipManagerObject@CFlipManagerSignal@@QEAAJPEAUFlipManagerObject@@@Z.c)
 *     ?FreeExpiredCancels@CFlipManager@@AEAAX_K@Z @ 0x140018A54 (-FreeExpiredCancels@CFlipManager@@AEAAX_K@Z.c)
 *     ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x140018D88 (-GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z.c)
 *     ??0CFlipManagerSignal@@IEAA@_K_NPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A120 (--0CFlipManagerSignal@@IEAA@_K_NPEAUFlipManagerTokenIFlipInfo@@@Z.c)
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14001A938 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x14001B070 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001B0AC (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x14001CB2C (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x14001D2A8 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001D924 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x14001EC30 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?UnlockAndRelease@CFlipManagerToken@@QEAAXXZ @ 0x140022CCC (-UnlockAndRelease@CFlipManagerToken@@QEAAXXZ.c)
 *     ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x140022CFC (-LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x140023F8C (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 *     ?AddTokenToFrame@CCompositionFrame@@QEAAXPEAVCToken@@@Z @ 0x140049C68 (-AddTokenToFrame@CCompositionFrame@@QEAAXPEAVCToken@@@Z.c)
 *     ?AddFlipManagerSignal@CCompositionFrame@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140059020 (-AddFlipManagerSignal@CCompositionFrame@@QEAAXPEAVCFlipManagerSignal@@@Z.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1400673F4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x14006C964 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::ConsumerDwmApplyUpdate(
        CFlipManager *this,
        struct FlipManagerTokenObject ***a2,
        struct CCompositionFrame *a3,
        struct CFlipPresentUpdate **a4)
{
  int v7; // r12d
  unsigned __int64 v8; // r15
  void (__fastcall *v9)(_QWORD, __int64); // rdi
  __int64 v10; // rbx
  unsigned int TracingId; // eax
  struct CFlipPresentUpdate *UpdateForPresentId; // rax
  __int64 v13; // r10
  struct CFlipPresentUpdate *v14; // r13
  __int64 v15; // rdi
  void (__fastcall *v16)(_QWORD, __int64); // rdi
  __int64 v17; // rbx
  unsigned int v18; // eax
  bool v19; // zf
  char v20; // di
  struct FlipManagerTokenIFlipInfo *v21; // rbx
  CFlipManagerSignal *Pool2; // rax
  struct CFlipManagerSignal *v23; // rax
  CFlipManagerSignal *v24; // rdi
  int updated; // eax
  CFlipManager *v26; // rcx
  CFlipManager *v27; // rcx
  void (__fastcall *v28)(_QWORD, unsigned __int64); // rbx
  unsigned int v29; // eax
  struct FlipManagerTokenObject **v30; // rdx
  struct FlipManagerTokenObject **v31; // rax
  void (__fastcall *v32)(_QWORD, unsigned __int64, __int64); // rbx
  unsigned int v33; // eax
  __int64 v34; // r8
  unsigned int (__fastcall *v35)(__int64, __int64); // rbx
  __int64 v36; // rax
  void (__fastcall *v37)(_QWORD, unsigned __int64); // rbx
  unsigned int v38; // eax
  CCompositionFrame *v39; // rbx
  char v40; // r8
  struct _LIST_ENTRY *Flink; // rdx
  void (__fastcall *v42)(_QWORD, unsigned __int64); // rbx
  unsigned int v43; // eax
  unsigned __int64 v44; // rax
  struct _LIST_ENTRY *v45; // rax
  void (__fastcall *v46)(_QWORD, CCompositionFrame *); // rbx
  unsigned int v47; // eax
  __int64 v48; // rcx
  unsigned __int64 v49; // [rsp+20h] [rbp-28h]
  struct _LIST_ENTRY v50; // [rsp+28h] [rbp-20h] BYREF
  unsigned __int64 v51; // [rsp+90h] [rbp+48h]
  CFlipManagerToken *v52; // [rsp+98h] [rbp+50h] BYREF
  CCompositionFrame *v53; // [rsp+A0h] [rbp+58h] BYREF
  struct CFlipPresentUpdate **v54; // [rsp+A8h] [rbp+60h]

  v54 = a4;
  v53 = a3;
  v49 = *((_QWORD *)a3 + 9);
  v7 = 0;
  v52 = 0LL;
  if ( !*((_BYTE *)this + 32) && *((_QWORD *)this + 5) )
  {
    FlipManagerTokenObject::LockForWrite(a2, &v52);
    (*(void (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a3 + 72LL))(a3);
    v8 = *((_QWORD *)v52 + 12);
    v51 = *((_QWORD *)v52 + 14);
    v9 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 112);
    v10 = *((_QWORD *)v52 + 12);
    TracingId = CFlipManager::GetTracingId(this);
    v9(TracingId, v10);
    if ( v8 < *((_QWORD *)this + 31) )
    {
LABEL_23:
      v28 = *(void (__fastcall **)(_QWORD, unsigned __int64))(DxgkGetWin32kImportTable() + 120);
      v29 = CFlipManager::GetTracingId(this);
      v28(v29, v8);
      CFlipManagerToken::UnlockAndRelease(v52);
      goto LABEL_24;
    }
    UpdateForPresentId = CFlipManager::GetUpdateForPresentId(this, v8);
    v14 = UpdateForPresentId;
    if ( !UpdateForPresentId )
    {
      CFlipManager::MarkAsLost(this, 3221225473LL, 17LL);
      goto LABEL_23;
    }
    if ( v13 != v8 || !CFlipManager::IsPresentCanceled(this, *((_QWORD *)UpdateForPresentId + 8)) )
      goto LABEL_6;
    if ( CEndpointResourceStateManager::IsSimpleUpdatePresent(v14) )
    {
      v48 = *((_QWORD *)v52 + 10);
      if ( !*(_BYTE *)(v48 + 86) && !*(_BYTE *)(v48 + 84) )
      {
        v7 = 3;
LABEL_6:
        v15 = *((_QWORD *)v52 + 13);
        if ( v15
          && (v35 = *(unsigned int (__fastcall **)(__int64, __int64))(DxgkGetWin32kImportTable() + 72),
              v36 = (*(__int64 (__fastcall **)(CCompositionFrame *))(*(_QWORD *)v53 + 72LL))(v53),
              v35(v36, v15))
          || v7 != 3 && *((_QWORD *)this + 31) != v8
          || v51 > v49 )
        {
          v37 = *(void (__fastcall **)(_QWORD, unsigned __int64))(DxgkGetWin32kImportTable() + 120);
          v38 = CFlipManager::GetTracingId(this);
          v37(v38, v8);
          CFlipManagerToken::UnlockAndRelease(v52);
          return;
        }
        CFlipQueuedObject::Remove((struct CFlipPresentUpdate *)((char *)v14 + 16));
        *((_DWORD *)v14 + 22) = v7;
        v16 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 168);
        v17 = --*((_QWORD *)this + 21);
        v18 = CFlipManager::GetTracingId(this);
        v16(v18, v17);
        v19 = v7 == 0;
        if ( v7 )
          v19 = 0;
        v20 = v19;
        if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
          v21 = (struct FlipManagerTokenIFlipInfo *)*((_QWORD *)v52 + 10);
        else
          v21 = 0LL;
        Pool2 = (CFlipManagerSignal *)ExAllocatePool2(257LL, 72LL, 1769161542LL);
        if ( !Pool2 || (v23 = CFlipManagerSignal::CFlipManagerSignal(Pool2, v8, v20, v21), (v24 = v23) == 0LL) )
        {
          CFlipManager::MarkAsLost(this, 3221225495LL, 19LL);
          goto LABEL_22;
        }
        updated = CEndpointResourceStateManager::PrepareBufferSignals((CFlipManager *)((char *)this + 104), v23);
        v26 = this;
        if ( updated < 0 )
          goto LABEL_21;
        CFlipManager::UpdateNextConsumerPresentIdForUpdate(this, v14, 2u);
        if ( v7 )
          goto LABEL_36;
        updated = CFlipManager::ApplyUpdateToConsumer(this, v14);
        v26 = this;
        if ( updated < 0 )
        {
LABEL_21:
          CFlipManager::MarkAsLost(v26, (unsigned int)updated, 19LL);
          (**(void (__fastcall ***)(CFlipManagerSignal *, __int64))v24)(v24, 1LL);
LABEL_22:
          CFlipManager::ReleaseKernelPresentUpdateReferences(v27, v14);
          *v54 = v14;
          goto LABEL_23;
        }
        v50.Blink = &v50;
        v50.Flink = &v50;
        updated = CFlipManager::ConsumerDwmProcessUpdateTokens(this, (struct CFlipPropertySet **)v14, v52, &v50);
        if ( updated < 0 )
        {
LABEL_20:
          v26 = this;
          goto LABEL_21;
        }
        v39 = v53;
        v40 = 0;
        while ( 1 )
        {
          Flink = v50.Flink;
          if ( v50.Flink == &v50 )
            break;
          if ( v50.Flink->Blink != &v50 )
            goto LABEL_38;
          v45 = v50.Flink->Flink;
          if ( v50.Flink->Flink->Blink != v50.Flink )
            goto LABEL_38;
          v50.Flink = v50.Flink->Flink;
          v45->Blink = &v50;
          CCompositionFrame::AddTokenToFrame(v39, (struct CToken *)&Flink[-1].Blink);
        }
        if ( v40 )
        {
          updated = CFlipManagerSignal::SetFlipManagerObject(v24, (CFlipManager *)((char *)this - 32));
          if ( updated < 0 )
            goto LABEL_20;
          CCompositionFrame::AddFlipManagerSignal(v39, v24);
        }
        else
        {
LABEL_36:
          v42 = *(void (__fastcall **)(_QWORD, unsigned __int64))(DxgkGetWin32kImportTable() + 304);
          v43 = CFlipManager::GetTracingId(this);
          v42(v43, v8);
          v44 = (*(__int64 (__fastcall **)(CCompositionFrame *))(*(_QWORD *)v53 + 72LL))(v53);
          CFlipManager::ProcessSignal(this, v24, v44, 0);
        }
        CFlipManager::FreeExpiredCancels(this, v8);
        goto LABEL_22;
      }
      v32 = *(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(DxgkGetWin32kImportTable() + 360);
      v33 = CFlipManager::GetTracingId(this);
      v34 = 1LL;
    }
    else
    {
      v32 = *(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(DxgkGetWin32kImportTable() + 360);
      v33 = CFlipManager::GetTracingId(this);
      v34 = 0LL;
    }
    v32(v33, v8, v34);
    goto LABEL_6;
  }
  v53 = 0LL;
  FlipManagerTokenObject::GetPresentId((FlipManagerTokenObject *)a2, (unsigned __int64 *)&v53);
  v46 = *(void (__fastcall **)(_QWORD, CCompositionFrame *))(DxgkGetWin32kImportTable() + 376);
  v47 = CFlipManager::GetTracingId(this);
  v46(v47, v53);
LABEL_24:
  v30 = a2[6];
  if ( v30[1] != (struct FlipManagerTokenObject *)(a2 + 6)
    || (v31 = a2[7], *v31 != (struct FlipManagerTokenObject *)(a2 + 6)) )
  {
LABEL_38:
    __fastfail(3u);
  }
  *v31 = (struct FlipManagerTokenObject *)v30;
  v30[1] = (struct FlipManagerTokenObject *)v31;
  ObfDereferenceObject(a2);
}
