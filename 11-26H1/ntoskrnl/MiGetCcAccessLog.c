/*
 * XREFs of MiGetCcAccessLog @ 0x140A5BDE4
 * Callers:
 *     MmPrefetchForCacheManager @ 0x140A59FA0 (MmPrefetchForCacheManager.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiQueuePageAccessLog @ 0x1403C4198 (MiQueuePageAccessLog.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiInitializePageAccessLogging @ 0x1404A0970 (MiInitializePageAccessLogging.c)
 */

__int64 __fastcall MiGetCcAccessLog(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbx
  int CurrentProcessorColor; // eax
  __int64 result; // rax
  _QWORD *v10; // r9
  __int64 v11; // r10
  unsigned __int64 v12; // rcx
  _QWORD *i; // r8
  char *AnyMultiplexedVm; // rax
  __int64 v15; // rdx

  if ( qword_140E3C500 )
  {
    v5 = _InterlockedExchange64(&qword_140E3C500, 0LL);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 40);
      if ( *(_QWORD *)(v5 + 32) + 8 * a3 <= v6 && (__int64)((*(_QWORD *)(v5 + 48) - v6) & 0xFFFFFFFFFFFFFFF8uLL) < 4096 )
        goto LABEL_8;
      MiQueuePageAccessLog((__int64)&MiSystemPartition, v5);
    }
  }
  v7 = (8 * a3 + 4175) & 0xFFFFFFFFFFFFF000uLL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = ExAllocatePoolMm(64LL, v7, 1665232205, CurrentProcessorColor | 0x80000000);
  if ( !result )
    return result;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  MiInitializePageAccessLogging((__int64)AnyMultiplexedVm, v15, v7);
  *(_DWORD *)(v5 + 8) = 1;
LABEL_8:
  v10 = *(_QWORD **)(v5 + 40);
  v11 = *(_QWORD *)(a2 + 24);
  v12 = *(_QWORD *)(v5 + 48);
  for ( i = v10 + 1; (unsigned __int64)i < v12; ++i )
  {
    if ( *i == v11 )
      goto LABEL_13;
  }
  i = *(_QWORD **)(v5 + 40);
  *(_QWORD *)(v5 + 40) = v10 - 1;
  *v10 = v11;
LABEL_13:
  *(_QWORD *)(v5 + 24) = *(_QWORD *)(v5 + 32);
  result = v5;
  *(_DWORD *)(v5 + 12) = (__int64)(v12 - (_QWORD)i) >> 3;
  return result;
}
