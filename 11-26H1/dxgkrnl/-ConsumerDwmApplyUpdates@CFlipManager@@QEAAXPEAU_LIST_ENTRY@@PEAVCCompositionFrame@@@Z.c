/*
 * XREFs of ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1400220B4
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1400224D0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x14001B988 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x14001C6A8 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1400673F4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::ConsumerDwmApplyUpdates(
        CFlipManager::PresentHistory **this,
        struct _LIST_ENTRY *a2,
        struct CCompositionFrame *a3)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v4; // r12
  struct FlipManagerTokenObject ***v8; // rdx
  int v9; // ebx
  unsigned __int64 v10; // rcx
  __int64 *v11; // rdi
  int v12; // esi
  __int64 v13; // r12
  __int64 v14; // r13
  void (__fastcall *v15)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64); // rbx
  unsigned int TracingId; // eax
  CFlipManager::PresentHistory *v17; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rcx
  __int64 v19; // rax
  int v20; // eax
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // [rsp+40h] [rbp-20h]
  __int64 v24; // [rsp+48h] [rbp-18h]
  _QWORD *v25; // [rsp+50h] [rbp-10h] BYREF
  _QWORD **v26; // [rsp+58h] [rbp-8h]
  struct CFlipPresentUpdate *v27; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+58h]

  Flink = a2->Flink;
  v4 = -1LL;
  v26 = &v25;
  v24 = -1LL;
  v25 = &v25;
  while ( Flink != a2 )
  {
    v8 = (struct FlipManagerTokenObject ***)&Flink[-3];
    Flink = Flink->Flink;
    v27 = 0LL;
    CFlipManager::ConsumerDwmApplyUpdate((CFlipManager *)this, v8, a3, &v27);
    if ( v27 )
    {
      if ( !*((_DWORD *)v27 + 22) )
      {
        v4 = *((_QWORD *)v27 + 8);
        v24 = v4;
      }
      v21 = (_QWORD *)(((unsigned __int64)v27 + 24) & -(__int64)(v27 != 0LL));
      v22 = v26;
      if ( *v26 != &v25 )
        __fastfail(3u);
      *(_QWORD *)((((unsigned __int64)v27 + 24) & -(__int64)(v27 != 0LL)) + 8) = v26;
      *v21 = &v25;
      *v22 = v21;
      v26 = (_QWORD **)v21;
    }
  }
  v9 = 0;
  v27 = (struct CFlipPresentUpdate *)(*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a3 + 72LL))(a3);
  v23 = *((_QWORD *)a3 + 8);
  v28 = *((_QWORD *)a3 + 9);
  while ( v25 != &v25 )
  {
    v10 = (unsigned __int64)(v25 - 3);
    v11 = (__int64 *)((unsigned __int64)(v25 - 3) & -(__int64)(v25 != 0LL));
    if ( v9 < 0 )
      goto LABEL_17;
    v12 = *(_DWORD *)((v10 & -(__int64)(v25 != 0LL)) + 0x58);
    if ( !v12 )
      v12 = *(_QWORD *)((v10 & -(__int64)(v25 != 0LL)) + 0x40) != v4;
    v13 = *(_QWORD *)((v10 & -(__int64)(v25 != 0LL)) + 0x40);
    v14 = *(_QWORD *)(((unsigned __int64)(v25 - 3) & -(__int64)(v25 != 0LL)) + 0x50);
    if ( v12 )
    {
      switch ( v12 )
      {
        case 1:
          v15 = *(void (__fastcall **)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64))(DxgkGetWin32kImportTable() + 152);
          break;
        case 2:
          v15 = *(void (__fastcall **)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64))(DxgkGetWin32kImportTable() + 136);
          break;
        case 3:
          v15 = *(void (__fastcall **)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64))(DxgkGetWin32kImportTable() + 144);
          break;
        default:
          goto LABEL_12;
      }
    }
    else
    {
      v15 = *(void (__fastcall **)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64))(DxgkGetWin32kImportTable() + 128);
    }
    TracingId = CFlipManager::GetTracingId((CFlipManager *)this);
    v15(TracingId, v13, v27, v23, v28, v14);
LABEL_12:
    v17 = this[3];
    if ( v17 )
    {
      NextEntry = CFlipManager::PresentHistory::GetNextEntry(v17);
      *(_QWORD *)NextEntry = v27;
      *((_QWORD *)NextEntry + 1) = v28;
      *((_QWORD *)NextEntry + 2) = v13;
      *((_QWORD *)NextEntry + 3) = v14;
      if ( v12 )
      {
        if ( v12 == 2 )
        {
          *((_DWORD *)NextEntry + 10) = 10;
        }
        else if ( v12 == 3 )
        {
          *((_DWORD *)NextEntry + 10) = 12;
        }
      }
      else
      {
        *((_DWORD *)NextEntry + 10) = 7;
      }
    }
    v19 = (*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a3 + 72LL))(a3);
    v20 = CFlipManager::PostFlipManagerPresentStatusStatistics((__int64)this, v11[8], v19, v12);
    v9 = v20;
    if ( v20 < 0 )
      CFlipManager::MarkAsLost(this, (unsigned int)v20, 19LL);
LABEL_17:
    v4 = v24;
    if ( v11 )
      (*(void (__fastcall **)(__int64 *, __int64))(*v11 + 24))(v11, 1LL);
  }
}
