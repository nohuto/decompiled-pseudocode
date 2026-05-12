/*
 * XREFs of sub_14000A648 @ 0x14000A648
 * Callers:
 *     sub_140009D88 @ 0x140009D88 (sub_140009D88.c)
 * Callees:
 *     sub_14000A7B4 @ 0x14000A7B4 (sub_14000A7B4.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_140053738 @ 0x140053738 (sub_140053738.c)
 */

void __fastcall sub_14000A648(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r8d
  __int64 v6; // rdi
  void *v7; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !(unsigned __int8)sub_140021280(a4) )
    goto LABEL_7;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a4 + 1872) + 36LL), 0, 1) )
  {
    v6 = *(_QWORD *)(a4 + 24);
    if ( (unsigned __int8)sub_140021280(a4) )
    {
      PoFxIdleComponent(**(_QWORD **)(a4 + 1872), 0LL, 0LL);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a4 + 1864));
    }
    if ( *(_QWORD *)(v6 + 4960) )
      sub_140021110(v6, 0LL, 0LL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a4 + 48), &LockHandle);
  sub_14000A7B4(a4);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoFxReportDevicePoweredOn(**(_QWORD **)(a4 + 1872));
  if ( byte_140168DAA )
  {
    if ( (*(_BYTE *)(a4 + 507) & 2) != 0 )
    {
      if ( (byte_1401694F2 & 0x10) == 0 )
        goto LABEL_6;
      v7 = &unk_140149D60;
    }
    else
    {
      if ( (byte_1401694F2 & 0x10) == 0 )
        goto LABEL_6;
      v7 = &unk_14014AC80;
    }
    sub_140053738(
      *(_QWORD *)(a4 + 24),
      (_DWORD)v7,
      v5,
      **(_QWORD **)(a4 + 1872),
      *(_DWORD *)(*(_QWORD *)(a4 + 24) + 56LL),
      *(_BYTE *)(a4 + 104),
      *(_BYTE *)(a4 + 105),
      *(_BYTE *)(a4 + 106),
      1);
  }
LABEL_6:
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a4 + 1864));
LABEL_7:
  if ( *(_DWORD *)(a4 + 3432) == 7 )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 24) + 960LL) + 48LL)
                                                    + 996LL));
}
