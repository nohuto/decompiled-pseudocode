/*
 * XREFs of ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x14001862C
 * Callers:
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x140018AD8 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x1400A4570 (-Delete@CFlipManager@@MEAAJPEAX@Z.c)
 * Callees:
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001B0AC (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x140025A00 (-Dequeue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::FreeQueuedUpdates(CFlipManager *this)
{
  _QWORD *v2; // rbp
  struct CFlipPresentUpdate *v3; // r14
  void (__fastcall *v4)(_QWORD, __int64); // rdi
  __int64 v5; // rbx
  unsigned int TracingId; // eax
  CFlipManager *v7; // rcx
  struct CFlipPresentUpdate *v8; // rbx
  CFlipManager *v9; // rcx
  _QWORD *v10; // rsi
  void (__fastcall ***v11)(_QWORD, __int64); // rcx

  v2 = (_QWORD *)((char *)this + 152);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (struct CFlipPresentUpdate *)CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v2);
    v4 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 168);
    v5 = --*((_QWORD *)this + 21);
    TracingId = CFlipManager::GetTracingId(this);
    v4(TracingId, v5);
    CFlipManager::ReleaseKernelPresentUpdateReferences(v7, v3);
    if ( v3 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
  }
  while ( *((CFlipManager **)this + 22) != (CFlipManager *)((char *)this + 176) )
  {
    v8 = (struct CFlipPresentUpdate *)CFlipObjectQueue<CFlipPresentUpdate>::Dequeue((char *)this + 176);
    CFlipManager::ReleaseKernelPresentUpdateReferences(v9, v8);
    if ( v8 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  }
  v10 = (_QWORD *)((char *)this + 208);
  while ( (_QWORD *)*v10 != v10 )
  {
    v11 = (void (__fastcall ***)(_QWORD, __int64))((*v10 - 8LL) & -(__int64)(*v10 != 0LL));
    if ( v11 )
      (**v11)(v11, 1LL);
  }
}
