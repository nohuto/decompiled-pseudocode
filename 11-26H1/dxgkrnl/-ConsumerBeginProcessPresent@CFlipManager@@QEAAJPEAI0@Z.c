/*
 * XREFs of ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1400245EC
 * Callers:
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x140025B30 (NtFlipObjectConsumerBeginProcessPresent.c)
 * Callees:
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x140019678 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x14001CB2C (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z @ 0x140023138 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x140024790 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ??0CFlipPresentUpdate@@QEAA@_K0_N@Z @ 0x14002598C (--0CFlipPresentUpdate@@QEAA@_K0_N@Z.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x140025A00 (-Dequeue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x140025CDC (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::ConsumerBeginProcessPresent(CFlipManager *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  struct CFlipPresentUpdate *v7; // rbx
  _QWORD *v8; // r14
  _QWORD *v9; // rcx
  int v10; // edi
  struct CFlipPresentUpdate *v11; // rdx
  void (__fastcall *v12)(_QWORD, __int64); // rdi
  __int64 v13; // rbx
  unsigned int TracingId; // eax
  CFlipPresentUpdate *v15; // rax
  struct CFlipPresentUpdate *v16; // rax
  CFlipPresentUpdate *v17; // r14
  __int64 v18; // rcx

  v3 = 0;
  v7 = 0LL;
  if ( *((_OWORD *)this + 17) != 0LL
    || (v8 = (_QWORD *)((char *)this + 152), v9 = (_QWORD *)*((_QWORD *)this + 19), v9 == v8) )
  {
    v10 = -1073741823;
    goto LABEL_16;
  }
  v11 = (struct CFlipPresentUpdate *)((unsigned __int64)(v9 - 3) & -(__int64)(v9 != 0LL));
  *((_QWORD *)this + 34) = v11;
  v10 = CFlipManager::ApplyUpdateToConsumer(this, v11);
  if ( v10 < 0 )
  {
LABEL_16:
    CFlipManager::FreeCurrentUpdates(this);
    if ( v7 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
    return (unsigned int)v10;
  }
  CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v8);
  v12 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 168);
  v13 = --*((_QWORD *)this + 21);
  TracingId = CFlipManager::GetTracingId(this);
  v12(TracingId, v13);
  if ( (_QWORD *)*v8 == v8 )
    KeResetEvent(*((PRKEVENT *)this + 36));
  v15 = (CFlipPresentUpdate *)DXGQUOTAALLOCATOR<256,1970291526>::operator new();
  if ( !v15 )
  {
    v7 = 0LL;
    goto LABEL_15;
  }
  v16 = CFlipPresentUpdate::CFlipPresentUpdate(v15, *((_QWORD *)this + 29), 0LL, 1);
  v7 = v16;
  v17 = v16;
  if ( !v16 )
  {
LABEL_15:
    v10 = -1073741801;
    goto LABEL_16;
  }
  v10 = CEndpointResourceStateManager::PrepareIncrementalUpdateForUser((CFlipManager *)((char *)this + 104), v16);
  if ( v10 < 0 )
    goto LABEL_16;
  CFlipPresentUpdate::SetFlipPropertySet(v17, *(struct CFlipPropertySet **)(*((_QWORD *)this + 34) + 56LL));
  *((_QWORD *)this + 35) = v17;
  *a2 = *((_DWORD *)v17 + 10);
  v18 = *(_QWORD *)(*((_QWORD *)this + 35) + 56LL);
  if ( v18 )
    v3 = *(_DWORD *)(v18 + 32);
  *a3 = v3;
  return (unsigned int)v10;
}
