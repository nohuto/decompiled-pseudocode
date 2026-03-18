/*
 * XREFs of ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140018B90
 * Callers:
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     ?Remove@CFlipQueuedObject@@QEAAXXZ @ 0x1400184EC (-Remove@CFlipQueuedObject@@QEAAXXZ.c)
 *     wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset @ 0x140018740 (wil--details--lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___--reset.c)
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z @ 0x14001A094 (-Create@CFlipManagerSignal@@SAJ_K_NPEAUFlipManagerTokenIFlipInfo@@PEAPEAV1@@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x14001B988 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x14001C6A8 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x14001D2A8 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001D924 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x14001EC30 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1400673F4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::PurgeSkippedTokens(CFlipManager *this, unsigned __int64 a2, unsigned __int8 a3)
{
  _QWORD *v3; // r14
  _QWORD *v7; // rcx
  unsigned int v8; // ebp
  _QWORD *v9; // rsi
  unsigned __int64 i; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  CFlipManager::PresentHistory *v14; // rcx
  int v15; // eax
  struct CFlipManagerSignal *v16; // rbx
  int v17; // eax
  void (__fastcall *v18)(_QWORD, unsigned __int64); // rbx
  unsigned int TracingId; // eax
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  __int64 v21[2]; // [rsp+20h] [rbp-48h] BYREF
  char v22; // [rsp+30h] [rbp-38h]
  struct CFlipManagerSignal *v23; // [rsp+70h] [rbp+8h] BYREF

  v3 = (_QWORD *)((char *)this + 152);
  v7 = (_QWORD *)*((_QWORD *)this + 19);
  if ( v7 != v3 )
  {
    v8 = 2 * a3 + 1;
    if ( v7 )
      v9 = v7 - 3;
    else
      v9 = 0LL;
    for ( i = v9[8]; ; ++i )
    {
      if ( i >= a2 )
        return;
      v11 = (_QWORD *)*v3;
      if ( (_QWORD *)*v3 == v3 || !v11 || (v12 = (__int64)(v11 - 3)) == 0 )
      {
LABEL_14:
        CFlipManager::MarkAsLost(this, 3221225473LL, 17LL);
        return;
      }
      while ( *(_QWORD *)(v12 + 64) != i )
      {
        v13 = *(_QWORD **)(v12 + 24);
        if ( v13 != v3 )
        {
          v12 = (unsigned __int64)(v13 - 3) & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64);
          if ( v12 )
            continue;
        }
        goto LABEL_14;
      }
      v21[0] = (__int64)this;
      v21[1] = v12;
      v22 = 1;
      CFlipQueuedObject::Remove((CFlipQueuedObject *)(v12 + 16));
      *(_DWORD *)(v12 + 88) = v8;
      v14 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
      if ( v14 )
      {
        NextEntry = CFlipManager::PresentHistory::GetNextEntry(v14);
        *((_QWORD *)NextEntry + 3) = *(_QWORD *)(v12 + 80);
        *((_QWORD *)NextEntry + 2) = i;
        *((_DWORD *)NextEntry + 10) = 9;
      }
      CFlipManager::UpdateNextConsumerPresentIdForUpdate(this, (struct CFlipPresentUpdate *)v12, 3u);
      wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset(v21);
      v23 = 0LL;
      v15 = CFlipManagerSignal::Create(i, a3 != 1, 0LL, &v23);
      if ( v15 < 0 )
        break;
      v16 = v23;
      v17 = CEndpointResourceStateManager::PrepareBufferSignals((CFlipManager *)((char *)this + 104), v23);
      if ( v17 < 0 )
      {
        CFlipManager::MarkAsLost(this, (unsigned int)v17, 19LL);
        if ( v16 )
          (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))v16)(v16, 1LL);
        goto LABEL_21;
      }
      CFlipManager::ProcessSignal(this, v16, 0xFFFFFFFFFFFFFFFFuLL, 0);
      v15 = CFlipManager::PostFlipManagerPresentStatusStatistics(this, i, 0LL, v8);
      if ( v15 < 0 )
        break;
      v18 = *(void (__fastcall **)(_QWORD, unsigned __int64))(DxgkGetWin32kImportTable() + 200);
      TracingId = CFlipManager::GetTracingId(this);
      v18(TracingId, i);
      wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset(v21);
    }
    CFlipManager::MarkAsLost(this, (unsigned int)v15, 19LL);
LABEL_21:
    wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset(v21);
  }
}
