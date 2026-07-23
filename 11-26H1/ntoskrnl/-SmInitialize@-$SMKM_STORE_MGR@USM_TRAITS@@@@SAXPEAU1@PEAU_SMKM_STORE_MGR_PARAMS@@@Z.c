/*
 * XREFs of ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140640E84
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14064098C (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     SmPartitionInitialize @ 0x14081F244 (SmPartitionInitialize.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SmKmInitialize @ 0x1408209A0 (SmKmInitialize.c)
 */

__int64 (__fastcall *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(
        __int64 a1,
        __int64 a2))(__int64 a1, __int64 a2)
{
  __int64 v4; // xmm1_8
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int16 v8; // di
  size_t v9; // rbx
  __int64 (__fastcall *result)(__int64, __int64); // rax

  memset_0((void *)a1, 0, 0x870uLL);
  v4 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 2120) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 2136) = v4;
  SmKmInitialize(a1);
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_OWORD *)(a1 + 288) = 0LL;
  memset_0((void *)(a1 + 1704), 0, 0x78uLL);
  *(_BYTE *)(a1 + 1714) = 6;
  *(_BYTE *)(a1 + 1712) = 1;
  *(_QWORD *)(a1 + 1728) = a1 + 1720;
  *(_QWORD *)(a1 + 1720) = a1 + 1720;
  *(_QWORD *)(a1 + 1736) = a1;
  memset_0((void *)(a1 + 1824), 0, 0x78uLL);
  *(_BYTE *)(a1 + 1832) = 1;
  *(_BYTE *)(a1 + 1834) = 6;
  *(_QWORD *)(a1 + 1848) = a1 + 1840;
  *(_QWORD *)(a1 + 1840) = a1 + 1840;
  *(_QWORD *)(a1 + 1856) = a1;
  memset_0((void *)(a1 + 304), 0, 0x308uLL);
  v5 = 32LL;
  v6 = (_QWORD *)(a1 + 312);
  do
  {
    v7 = v6 - 1;
    *v6 = v6 - 1;
    v6 += 3;
    *v7 = 0LL;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)(a1 + 1072) = 0LL;
  InitializeSListHead((PSLIST_HEADER)(a1 + 1088));
  memset_0((void *)(a1 + 1112), 0, 0x24CuLL);
  *(_QWORD *)(a1 + 1104) = a1;
  *(_DWORD *)(a1 + 1700) = 7;
  v8 = KiMaximumGroups;
  v9 = (unsigned __int16)KiMaximumGroups;
  *(_WORD *)(a1 + 1432) = 1;
  v9 *= 8LL;
  *(_WORD *)(a1 + 1434) = v8;
  *(_DWORD *)(a1 + 1436) = 0;
  memset_0((void *)(a1 + 1440), 0, v9);
  *(_WORD *)(a1 + 1152) = 1;
  *(_WORD *)(a1 + 1154) = v8;
  *(_DWORD *)(a1 + 1156) = 0;
  memset_0((void *)(a1 + 1160), 0, v9);
  *(_DWORD *)(a1 + 1144) = *(_DWORD *)(a1 + 2124);
  *(_WORD *)(a1 + 1946) = 0;
  KiInitializeTimer2(a1 + 1944, (__int64)SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogTimerCallback, a1, 8);
  result = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  *(_QWORD *)(a1 + 2096) = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  *(_QWORD *)(a1 + 2104) = 0LL;
  *(_QWORD *)(a1 + 2080) = 0LL;
  return result;
}
