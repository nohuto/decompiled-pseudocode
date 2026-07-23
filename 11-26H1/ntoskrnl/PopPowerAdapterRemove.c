/*
 * XREFs of PopPowerAdapterRemove @ 0x1407DDB70
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 *     PopBatteryQueueWork @ 0x1404DA29C (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

void __fastcall PopPowerAdapterRemove(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  int Buffer; // [rsp+40h] [rbp-58h] BYREF
  __int64 v6; // [rsp+48h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-48h] BYREF
  __int64 *v8; // [rsp+70h] [rbp-28h]
  __int64 v9; // [rsp+78h] [rbp-20h]

  v1 = qword_140F108D0;
  Buffer = 0;
  if ( qword_140F108D0 && qword_140F108D0 == a1 )
  {
    IoCancelIrp(*(PIRP *)(qword_140F108D0 + 56));
    KeWaitForSingleObject((PVOID)(v1 + 104), Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB, v2, v3, v4);
    qword_140F108D0 = 0LL;
    ZwUpdateWnfStateData(&WNF_PO_POWER_ADAPTER_REC_CAPABILITIES, &Buffer, 4u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
    {
      v6 = 0x1000000LL;
      v8 = &v6;
      v9 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07560,
        (unsigned __int8 *)&word_14004DB96,
        0LL,
        0LL,
        3u,
        &v7);
    }
    PopBatteryQueueWork(8u);
    PopReleaseRwLock((struct _KTHREAD *)&PopCB);
  }
}
