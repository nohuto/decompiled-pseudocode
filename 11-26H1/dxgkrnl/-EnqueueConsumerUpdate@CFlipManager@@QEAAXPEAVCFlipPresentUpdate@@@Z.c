/*
 * XREFs of ?EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001C5F4
 * Callers:
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001C4D8 (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::EnqueueConsumerUpdate(PRKEVENT *this, struct CFlipPresentUpdate *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  void (__fastcall *v7)(_QWORD, PRKEVENT); // rdi
  PRKEVENT v8; // rbx
  unsigned int TracingId; // eax

  v2 = this + 19;
  if ( (_QWORD *)*v2 == v2 )
    KeSetEvent(this[36], 1, 0);
  v5 = (_QWORD *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  v6 = (_QWORD *)v2[1];
  if ( (_QWORD *)*v6 != v2 )
    __fastfail(3u);
  *v5 = v2;
  *(_QWORD *)((((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL)) + 8) = v6;
  *v6 = v5;
  v2[1] = v5;
  v7 = *(void (__fastcall **)(_QWORD, PRKEVENT))(DxgkGetWin32kImportTable() + 168);
  this[21] = (PRKEVENT)((char *)this[21] + 1);
  v8 = this[21];
  TracingId = CFlipManager::GetTracingId((CFlipManager *)this);
  v7(TracingId, v8);
  this[30] = (PRKEVENT)((char *)this[30] + 1);
}
