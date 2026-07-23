/*
 * XREFs of EtwTraceCpuPartitionGenericDpcViolation @ 0x1406C83F4
 * Callers:
 *     KiCpuPartitionCheckGenericDpc @ 0x1405F6CF0 (KiCpuPartitionCheckGenericDpc.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceCpuPartitionGenericDpcViolation(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  __int64 v2; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  if ( stru_140F03830.SchedulerApc.Thread )
  {
    if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SchedulerApc.Thread, &CPU_PARTITION_EVENT_GENERIC_DPC_VIOLATION) )
    {
      UserData.Ptr = (ULONGLONG)&v2;
      *(_QWORD *)&UserData.Size = 8LL;
      EtwWriteEx(
        (REGHANDLE)stru_140F03830.SchedulerApc.Thread,
        &CPU_PARTITION_EVENT_GENERIC_DPC_VIOLATION,
        0LL,
        0,
        0LL,
        0LL,
        1u,
        &UserData);
    }
  }
}
