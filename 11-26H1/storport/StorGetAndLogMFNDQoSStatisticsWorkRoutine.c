/*
 * XREFs of StorGetAndLogMFNDQoSStatisticsWorkRoutine @ 0x1400C9F40
 * Callers:
 *     <none>
 * Callees:
 *     StorGetAndLogMFNDQoSStatistics @ 0x1400C9C9C (StorGetAndLogMFNDQoSStatistics.c)
 */

void __fastcall StorGetAndLogMFNDQoSStatisticsWorkRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  StorGetAndLogMFNDQoSStatistics(
    v2,
    *(_DWORD *)(a2 + 12),
    *(_DWORD *)(a2 + 8),
    *(unsigned __int16 *)(a2 + 20),
    (unsigned __int16 *)(a2 + 22));
  v4 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 6224) + 48LL) && *(_WORD *)(a2 + 20) )
  {
    do
    {
      v5 = v4++;
      v6 = *(unsigned __int16 *)(a2 + 2 * v5 + 22);
      _interlockedbittestandreset(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v2 + 6224) + 48LL) + 4 * ((unsigned __int64)(v6 - 1) >> 5)),
        ((_BYTE)v6 - 1) & 0x1F);
    }
    while ( v4 < *(unsigned __int16 *)(a2 + 20) );
  }
  IoFreeWorkItem(*(PIO_WORKITEM *)a2);
  ExFreePoolWithTag((PVOID)a2, 0x49576152u);
}
