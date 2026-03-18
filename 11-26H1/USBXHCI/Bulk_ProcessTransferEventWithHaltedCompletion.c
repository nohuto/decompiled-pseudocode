/*
 * XREFs of Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1400242DC
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x140022EF0 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x140023810 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     Bulk_Transfer_CompleteCancelable @ 0x140018350 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Stage_Release @ 0x140018AA8 (Bulk_Stage_Release.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x140029210 (Bulk_Stage_FreeScatterGatherList.c)
 *     memmove @ 0x140059540 (memmove.c)
 */

void __fastcall Bulk_ProcessTransferEventWithHaltedCompletion(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  KSPIN_LOCK *v4; // r14
  size_t v5; // rbp
  KIRQL v9; // al
  __int64 *v10; // r10
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rdx

  v4 = (KSPIN_LOCK *)(a1 + 96);
  v5 = a4;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(a1 + 332) |= 4u;
  *(_BYTE *)(a1 + 104) = v9;
  *(_DWORD *)(a1 + 360) = 1;
  KeReleaseSpinLock(v4, v9);
  v10 = *(__int64 **)(a1 + 56);
  _m_prefetchw(v10 + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)v10 + 8, 0x20u) & 0x20) != 0 )
    Controller_HwVerifierBreakIfEnabled(
      *v10,
      v10[1],
      v10[3],
      0x2000000LL,
      "Received duplicate Transfer Event TRB with Halted Completion Code",
      0LL,
      0LL);
  else
    ESM_AddEsmEvent((__int64)v10);
  v11 = *(_QWORD *)a2;
  *(_DWORD *)(v11 + 108) += v5;
  v12 = *(_QWORD *)(v11 + 48);
  *(_DWORD *)(v11 + 68) = a3;
  if ( (*(_DWORD *)(v12 + 32) & 1) != 0 && *(_DWORD *)(v11 + 76) == 2 )
    memmove(*(void **)(a2 + 64), *(const void **)(*(_QWORD *)(a2 + 72) + 16LL), v5);
  Bulk_Stage_FreeScatterGatherList(a1, a2);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v4);
  Bulk_Stage_Release(a1, a2);
  ++*(_DWORD *)(v11 + 116);
  Bulk_Transfer_CompleteCancelable(a1, (__int64 *)v11, -1, 0);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1004LL) == 1 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 356));
  else
    --*(_DWORD *)(a1 + 356);
  --*(_DWORD *)(a1 + 360);
  v13 = *(_DWORD *)(a1 + 332);
  KeReleaseSpinLock(v4, *(_BYTE *)(a1 + 104));
  if ( (v13 & 2) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v14 + 37)
      || (v15 = *(_QWORD *)(v14 + 144),
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 20)) == *(_DWORD *)(v15 + 8)) )
    {
      ESM_AddEsmEvent(v14);
    }
  }
}
