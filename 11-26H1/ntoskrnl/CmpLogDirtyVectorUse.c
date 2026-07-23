/*
 * XREFs of CmpLogDirtyVectorUse @ 0x1408BD7B8
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x140358118 (HvpGenerateLogEntryDirtyData.c)
 *     HvpGenerateLogEntry @ 0x1408BD3E8 (HvpGenerateLogEntry.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 */

USHORT __fastcall CmpLogDirtyVectorUse(__int64 a1, int a2, int a3, int a4)
{
  unsigned __int32 i; // ecx
  signed __int32 v6; // eax
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax

  for ( i = *(_DWORD *)(a1 + 2960); ; i = v6 )
  {
    v6 = _InterlockedCompareExchange(
           (volatile signed __int32 *)(a1 + 2960),
           i + 1 < *(_DWORD *)(a1 + 2964) ? i + 1 : 0,
           i);
    if ( i == v6 )
      break;
  }
  v7 = 9LL * i;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(a1 + 8 * v7 + 2980) = a3;
  *(_DWORD *)(a1 + 8 * v7 + 2984) = a4;
  *(_DWORD *)(a1 + 8 * v7 + 2976) = a2;
  *(_QWORD *)(a1 + 8 * v7 + 2968) = CurrentThread;
  return RtlCaptureStackBackTrace(1u, 6u, (PVOID *)(a1 + 2992 + 8 * v7), 0LL);
}
