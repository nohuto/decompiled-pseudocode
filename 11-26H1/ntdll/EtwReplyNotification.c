/*
 * XREFs of EtwReplyNotification @ 0x18010B380
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180162A10 (NtTraceControl.c)
 */

__int64 __fastcall EtwReplyNotification(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // ebx
  NTSTATUS v3; // eax
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(a1 + 4);
  v2 = 0;
  v5 = 0;
  v3 = NtTraceControl(18LL, a1, v1, 0LL, 0, &v5);
  if ( v3 )
    return RtlNtStatusToDosError(v3);
  return v2;
}
