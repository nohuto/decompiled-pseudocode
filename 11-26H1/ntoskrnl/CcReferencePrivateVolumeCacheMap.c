/*
 * XREFs of CcReferencePrivateVolumeCacheMap @ 0x1403853D0
 * Callers:
 *     CcPostWorkQueueCachemapUninit @ 0x140384FA0 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x14038513C (CcWriteBehind.c)
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcReferencePrivateVolumeCacheMap(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
    if ( result <= 1 )
      __fastfail(0xEu);
  }
  return result;
}
