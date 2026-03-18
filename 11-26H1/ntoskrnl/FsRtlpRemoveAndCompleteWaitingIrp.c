/*
 * XREFs of FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FE7A0
 * Callers:
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1403F8514 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F8A0C (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403FC3F4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockCleanup @ 0x1403FCDAC (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x1403FEDE8 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpWaitOnIrp @ 0x1404EC254 (FsRtlpWaitOnIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404EC858 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpOplockBreakToII @ 0x1405148C0 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x140527130 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14052A77C (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1405B6114 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B6350 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14078EBEC (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpRemoveAndCompleteWaitingIrp(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  __int64 v8; // [rsp+60h] [rbp-18h]

  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v5 = P[2];
    v8 = 8LL;
    v7 = &v5;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)byte_14004553D, 0LL, 0LL, 3u, &v6);
  }
  v2 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v3 = (PVOID *)P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  v4 = P[2];
  if ( v4 )
  {
    *(_BYTE *)(v4 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v4 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v4 + 69));
    *(_QWORD *)(v4 + 56) = *((unsigned int *)P + 12);
    *(_DWORD *)(v4 + 48) = *(_BYTE *)(v4 + 68) != 0 ? 0xC0000120 : 0;
  }
  guard_dispatch_icall_no_overrides(P[4], v4);
  ExFreePoolWithTag(P, 0);
}
