/*
 * XREFs of ExpPoolDestroy @ 0x140846574
 * Callers:
 *     ExDestroyPool @ 0x1406CBBF0 (ExDestroyPool.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x1403524BC (RtlpHpMetadataFree.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     ExpPoolHeapDestroy @ 0x1408466CC (ExpPoolHeapDestroy.c)
 *     ExpPoolMgrUnregisterPool @ 0x1408475D0 (ExpPoolMgrUnregisterPool.c)
 */

__int64 __fastcall ExpPoolDestroy(__int64 a1)
{
  unsigned int i; // ebx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 24));
  _InterlockedExchange64((volatile __int64 *)(a1 + 24), 1LL);
  ExpPoolMgrUnregisterPool(&dword_140E6BC60, a1);
  for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
    ExpPoolHeapDestroy(*(_QWORD *)(a1 + 16 * (i + 5LL)));
  v4 = *(_OWORD *)(a1 + 8);
  return RtlpHpMetadataFree(a1, &v4);
}
