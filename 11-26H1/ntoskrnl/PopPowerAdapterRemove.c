/*
 * XREFs of PopPowerAdapterRemove @ 0x1407D9BD0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     IoCancelIrp @ 0x14049B940 (IoCancelIrp.c)
 *     PopBatteryQueueWork @ 0x1404E0BBC (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

void __fastcall PopPowerAdapterRemove(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Blink; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  int v5; // [rsp+40h] [rbp-58h] BYREF
  __int64 v6; // [rsp+48h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-48h] BYREF
  __int64 *v8; // [rsp+70h] [rbp-28h]
  __int64 v9; // [rsp+78h] [rbp-20h]

  Blink = stru_140F10070.ApcState.ApcListHead[0].Blink;
  v5 = 0;
  if ( stru_140F10070.ApcState.ApcListHead[0].Blink && stru_140F10070.ApcState.ApcListHead[0].Blink == a1 )
  {
    IoCancelIrp((PIRP)stru_140F10070.ApcState.ApcListHead[0].Blink[3].Blink);
    KeWaitForSingleObject(&Blink[6].Blink, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((unsigned __int64 *)&qword_140F0FE60, v2, v3, v4);
    stru_140F10070.ApcState.ApcListHead[0].Blink = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_ADAPTER_REC_CAPABILITIES, (__int64)&v5);
    if ( (unsigned int)dword_140E07598 > 5 && tlgKeywordOn((__int64)&dword_140E07598, 0x400000000000LL) )
    {
      v6 = 0x1000000LL;
      v8 = &v6;
      v9 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, (unsigned __int8 *)byte_14004E2AB, 0LL, 0LL, 3u, &v7);
    }
    PopBatteryQueueWork(8u);
    PopReleaseRwLock((struct _KTHREAD *)&qword_140F0FE60);
  }
}
