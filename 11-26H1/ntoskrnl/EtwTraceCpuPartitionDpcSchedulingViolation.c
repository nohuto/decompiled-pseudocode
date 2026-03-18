/*
 * XREFs of EtwTraceCpuPartitionDpcSchedulingViolation @ 0x140530EFC
 * Callers:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
  if ( qword_140F03590 )
  {
    if ( EtwEventEnabled(qword_140F03590, &CPU_PARTITION_EVENT_DPC_SCHEDULING_VIOLATION) )
    {
      UserData.Ptr = (ULONGLONG)&v5;
      *(_QWORD *)&UserData.Size = 8LL;
      v3 = &v6;
      v4 = 4LL;
      EtwWriteEx(qword_140F03590, &CPU_PARTITION_EVENT_DPC_SCHEDULING_VIOLATION, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
