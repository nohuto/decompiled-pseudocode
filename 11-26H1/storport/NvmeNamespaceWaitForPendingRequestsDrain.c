/*
 * XREFs of NvmeNamespaceWaitForPendingRequestsDrain @ 0x14011629C
 * Callers:
 *     NvmeNamespaceRemoveDeviceIrp @ 0x14010D4BC (NvmeNamespaceRemoveDeviceIrp.c)
 * Callees:
 *     StorDelayExecution @ 0x140032790 (StorDelayExecution.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x14004B464 (NvmeAdapterAcquireRemoveLock.c)
 */

__int64 __fastcall NvmeNamespaceWaitForPendingRequestsDrain(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r12
  unsigned int v7; // r13d
  char v8; // r15
  char v9; // r14
  int v11; // eax
  bool v12; // sf
  __int64 i; // rbp
  __int64 v15; // [rsp+60h] [rbp+8h]
  _DWORD *v16; // [rsp+78h] [rbp+20h]

  v3 = g_CpuInfo;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 256);
  v6 = 0LL;
  v7 = 0;
  v16 = g_CpuInfo;
  v8 = 0;
  v15 = v5;
  v9 = a3;
  if ( a3 )
  {
    v11 = NvmeAdapterAcquireRemoveLock(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL));
    v5 = v15;
    v4 = v11;
    v12 = v11 < 0;
    v3 = v16;
    if ( v12 )
      v9 = 0;
    else
      v8 = 1;
  }
  for ( i = 0LL; (unsigned int)i < v3[3]; i = (unsigned int)(i + 1) )
  {
    if ( v9 )
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1104LL) + 8 * i);
    while ( **(_DWORD **)(v5 + 8 * i + 24) )
    {
      StorDelayExecution(0x3E8u);
      v7 += 1000;
      if ( v7 >= 0x989680 )
      {
        v4 = -1073741643;
        goto LABEL_16;
      }
      v5 = v15;
    }
    if ( v9 )
      _InterlockedExchange64((volatile __int64 *)(v6 + 8LL * *(unsigned int *)(a1 + 56) + 264), 0LL);
    v3 = v16;
  }
LABEL_16:
  if ( v8 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL)
                                                                        + 152LL));
  return v4;
}
