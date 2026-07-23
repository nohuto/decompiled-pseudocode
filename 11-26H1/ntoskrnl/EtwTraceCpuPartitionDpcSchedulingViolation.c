/*
 * XREFs of EtwTraceCpuPartitionDpcSchedulingViolation @ 0x1405333FC
 * Callers:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceCpuPartitionDpcSchedulingViolation(__int64 a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v3; // [rsp+50h] [rbp-28h]
  __int64 v4; // [rsp+58h] [rbp-20h]
  __int64 v5; // [rsp+80h] [rbp+8h] BYREF
  int v6; // [rsp+88h] [rbp+10h] BYREF

  v6 = a2;
  v5 = a1;
  if ( stru_140F03830.SchedulerApc.Thread )
  {
    if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SchedulerApc.Thread, &CPU_PARTITION_EVENT_DPC_SCHEDULING_VIOLATION) )
    {
      UserData.Ptr = (ULONGLONG)&v5;
      *(_QWORD *)&UserData.Size = 8LL;
      v3 = &v6;
      v4 = 4LL;
      EtwWriteEx(
        (REGHANDLE)stru_140F03830.SchedulerApc.Thread,
        &CPU_PARTITION_EVENT_DPC_SCHEDULING_VIOLATION,
        0LL,
        0,
        0LL,
        0LL,
        2u,
        &UserData);
    }
  }
}
