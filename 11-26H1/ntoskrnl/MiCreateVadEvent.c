/*
 * XREFs of MiCreateVadEvent @ 0x14099F5BC
 * Callers:
 *     MiCreateUserPhysicalView @ 0x14087EEBC (MiCreateUserPhysicalView.c)
 *     MiCreatePlaceholderStorage @ 0x14099782C (MiCreatePlaceholderStorage.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateFixupVad @ 0x14099F45C (MiCreateFixupVad.c)
 *     MiCreateWriteWatchView @ 0x1409A07F8 (MiCreateWriteWatchView.c)
 *     MiCreateRotateView @ 0x1409A097C (MiCreateRotateView.c)
 *     MiCreateLargePageEvent @ 0x140B3EC6C (MiCreateLargePageEvent.c)
 * Callees:
 *     MiConfirmQuotaAmount @ 0x1403C6C30 (MiConfirmQuotaAmount.c)
 *     MiConfirmQuotaProcess @ 0x1403C6C74 (MiConfirmQuotaProcess.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C6CB0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiInsertVadEvent @ 0x140494C48 (MiInsertVadEvent.c)
 *     MiAllocateVadEvent @ 0x14099F6FC (MiAllocateVadEvent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateVadEvent(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        unsigned __int64 a3,
        __int16 a4,
        __int64 a5,
        __int64 *a6)
{
  unsigned __int64 v10; // rbx
  __int64 VadEvent; // rax
  __int64 v12; // rdi
  _BYTE *v13; // rsi
  int v14; // r14d
  char v15; // cl
  __int64 result; // rax

  v10 = 104LL;
  *a6 = 0LL;
  if ( a3 )
    v10 = 8 * ((a3 >> 6) + ((a3 & 0x3F) != 0) + 13LL);
  VadEvent = MiAllocateVadEvent(BugCheckParameter4, v10);
  v12 = VadEvent;
  if ( !VadEvent )
    return 3221225626LL;
  v13 = (_BYTE *)(VadEvent + 11);
  if ( VadEvent != -11 )
  {
    MiConfirmQuotaProcess((unsigned __int8 *)(VadEvent + 11), BugCheckParameter4);
    MiConfirmQuotaAmount(v13, 0LL);
  }
  v14 = PsChargeProcessNonPagedPoolQuota(BugCheckParameter4, v10);
  if ( v14 < 0 )
  {
    ExFreePoolWithTag((PVOID)v12, 0);
    return (unsigned int)v14;
  }
  else
  {
    if ( v13 )
      *v13 = *v13 & 0xF | v10 & 0xF0;
    v15 = *(_BYTE *)(v12 + 10) | 1;
    *(_BYTE *)(v12 + 10) = v15;
    *(_WORD *)(v12 + 8) = a4;
    *(_QWORD *)(v12 + 16) = a5;
    if ( a3 )
    {
      *(_BYTE *)(v12 + 10) = v15 | 2;
      *(_QWORD *)(v12 + 24) = a3;
      *(_QWORD *)(v12 + 32) = v12 + 104;
    }
    MiInsertVadEvent(a2, v12, 1);
    result = 0LL;
    *a6 = v12;
  }
  return result;
}
