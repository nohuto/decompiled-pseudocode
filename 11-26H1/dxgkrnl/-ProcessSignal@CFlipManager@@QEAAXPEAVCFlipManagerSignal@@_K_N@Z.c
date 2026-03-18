/*
 * XREFs of ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001D924
 * Callers:
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140018B90 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x14001E0E0 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Release@CCompositionFrame@@UEAAJXZ @ 0x14001E210 (-Release@CCompositionFrame@@UEAAJXZ.c)
 *     ?Discard@CCompositionFrame@@UEAAXXZ @ 0x14001E5A0 (-Discard@CCompositionFrame@@UEAAXXZ.c)
 *     ?Confirm@CCompositionFrame@@UEAAXXZ @ 0x14001E8E0 (-Confirm@CCompositionFrame@@UEAAXXZ.c)
 * Callees:
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001A4B8 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x14001C6A8 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ @ 0x14001D6FC (-ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x14001EAE8 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::ProcessSignal(CFlipManager *this, struct CFlipManagerSignal *a2, __int64 a3, char a4)
{
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 Win32kImportTable; // rax
  __int64 v13; // rbx
  void (__fastcall *v14)(_QWORD, __int64); // rdi
  unsigned int TracingId; // eax
  unsigned __int64 v16; // rdx
  _QWORD **v17; // rbx
  _QWORD *v18; // rcx
  _QWORD *v19; // rdi
  _QWORD *i; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  CFlipManager::PresentHistory *v23; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v8 = (_QWORD *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v9 = *v8;
  if ( *(_QWORD **)(*v8 + 8LL) != v8 )
    goto LABEL_6;
  v10 = *(_QWORD **)((((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)) + 8);
  if ( (_QWORD *)*v10 != v8 )
    goto LABEL_6;
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  v8[1] = v8;
  *v8 = v8;
  CFlipManagerSignal::ServiceBufferSignals(a2);
  IsEnabledDeviceUsageNoInline = Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline();
  if ( !*((_QWORD *)this + 38) || IsEnabledDeviceUsageNoInline && *((_BYTE *)this + 32) )
  {
    if ( a2 )
      (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))a2)(a2, 1LL);
    return;
  }
  Win32kImportTable = DxgkGetWin32kImportTable();
  v13 = *((_QWORD *)a2 + 7);
  v14 = *(void (__fastcall **)(_QWORD, __int64))(Win32kImportTable + 208);
  TracingId = CFlipManager::GetTracingId(this);
  v14(TracingId, v13);
  v16 = *((_QWORD *)a2 + 7);
  v17 = (_QWORD **)((char *)this + 208);
  if ( v16 == *((_QWORD *)this + 33) )
  {
    CFlipManager::IssueAndFreeSignal(this, a2, a3, a4);
    v18 = *v17;
    if ( *v17 != v17 )
    {
      do
      {
        v19 = (_QWORD *)*v18;
        if ( *(_QWORD *)(((unsigned __int64)(v18 - 1) & -(__int64)(v18 != 0LL)) + 0x38) != *((_QWORD *)this + 33) )
          break;
        CFlipManager::IssueAndFreeSignal(
          this,
          (struct CFlipManagerSignal *)((unsigned __int64)(v18 - 1) & -(__int64)(v18 != 0LL)),
          a3,
          a4);
        v18 = v19;
      }
      while ( v19 != v17 );
    }
    return;
  }
  for ( i = *v17; i != v17; i = (_QWORD *)*i )
  {
    v21 = (__int64)(i + 6);
    if ( !i )
      v21 = 56LL;
    if ( v16 < *(_QWORD *)v21 )
      break;
  }
  v22 = (_QWORD *)i[1];
  if ( (_QWORD *)*v22 != i )
LABEL_6:
    __fastfail(3u);
  *v8 = i;
  v8[1] = v22;
  *v22 = v8;
  i[1] = v8;
  v23 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
  if ( v23 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v23);
    *(_QWORD *)NextEntry = a3;
    *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 7);
    *((_DWORD *)NextEntry + 10) = 15;
  }
}
