/*
 * XREFs of PspEnforceLimitsJobPreCallback @ 0x140A855A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsZeroMemory @ 0x1404D36B0 (RtlIsZeroMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspQueryRateControlHistory @ 0x140A856AC (PspQueryRateControlHistory.c)
 */

__int64 __fastcall PspEnforceLimitsJobPreCallback(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  int v5; // r12d
  int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rbp
  int v9; // ebp

  v2 = 0;
  *(_DWORD *)(a1 + 1464) = PspSiloMonitorLock.Timer.Header.WaitListHead.Flink;
  if ( (*(_DWORD *)(a1 + 1056) & 6) != 0 || *(_DWORD *)(a1 + 1080) || !RtlIsZeroMemory((PVOID)(a1 + 1108), 8uLL) )
  {
    v5 = (_DWORD)a2 + 52;
    *a2 = *(_QWORD *)(a1 + 992);
    v6 = 0;
    v7 = 60LL;
    a2[1] = *(_QWORD *)(a1 + 1032);
    a2[3] = 0LL;
    do
    {
      v8 = *(_QWORD *)(a1 + 1216);
      if ( !v8 || (v9 = *(_DWORD *)(v7 + v8)) == 0 )
        v9 = 1;
      PspQueryRateControlHistory(a1, v9, 0, v5, v6);
      *(_DWORD *)((char *)a2 + v7 - 20) = v9;
      ++v6;
      v7 += 4LL;
      v5 += 4;
    }
    while ( v6 < 3 );
  }
  else
  {
    memset_0((void *)(a1 + 1352), 0, 0x68uLL);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1552), 0xFFBFFFFF);
    return (unsigned int)-1073741536;
  }
  return v2;
}
