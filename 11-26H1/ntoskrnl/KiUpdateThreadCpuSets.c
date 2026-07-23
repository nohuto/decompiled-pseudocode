/*
 * XREFs of KiUpdateThreadCpuSets @ 0x14045C180
 * Callers:
 *     KeSetSelectedCpuSetsThread @ 0x14045BD60 (KeSetSelectedCpuSetsThread.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14045C12C (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeSetCpuSetWorkloadClassThread @ 0x1405F6878 (KeSetCpuSetWorkloadClassThread.c)
 * Callees:
 *     KiComputeThreadAffinity @ 0x14022B520 (KiComputeThreadAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022CBFC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     EtwTraceIdealProcessor @ 0x1404E0C98 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x140506B68 (EtwTraceThreadAffinity.c)
 */

void __fastcall KiUpdateThreadCpuSets(__int64 a1, struct _SINGLE_LIST_ENTRY *a2, volatile signed __int32 **a3)
{
  char v3; // r14
  unsigned int v4; // esi
  unsigned int v7; // ebp
  int v8; // ebx
  char v9; // al
  int v10; // r8d
  _OWORD v11[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+50h] [rbp-28h]

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 588);
  v7 = v4;
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  else
  {
    memset(v11, 0, sizeof(v11));
    v12 = 0LL;
    v8 = KiAcquireThreadStateLockForWrite(a1, (__int64)v11, a3);
    v9 = KiComputeThreadAffinity(a1);
    v7 = *(_DWORD *)(a1 + 588);
    v3 = v9;
    KiRescheduleThreadAfterAffinityChange(a1, v8, (unsigned __int64)v11, a2);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 && v3 )
  {
    v10 = *(_DWORD *)(a1 + 116) >> 3;
    LOBYTE(v10) = (*(_DWORD *)(a1 + 116) & 8) != 0;
    EtwTraceThreadAffinity(a1, *(unsigned __int16 *)(a1 + 584), v10, 0, *(_QWORD *)(a1 + 576), 1334);
  }
  if ( v4 != v7 && (xmmword_140FC0C10 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(a1, 1350LL, v4, v7);
}
