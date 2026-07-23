/*
 * XREFs of PsSetPagePriorityThread @ 0x140384E10
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BEAC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 *     CcPerformReadAhead @ 0x140388BC8 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1403A05A8 (CcCompleteAsyncRead.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     EtwTracePriority @ 0x140202938 (EtwTracePriority.c)
 */

__int64 __fastcall PsSetPagePriorityThread(__int64 a1, int a2)
{
  signed __int32 v2; // eax
  unsigned __int32 v3; // ebx
  unsigned int v4; // ebx

  v2 = *(_DWORD *)(a1 + 1440);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1440), (a2 << 12) | v2 & 0xFFFF8FFF, v2);
  }
  while ( v2 != v3 );
  v4 = (v3 >> 12) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 0x533u, v4, a2, 0LL);
  return v4;
}
