/*
 * XREFs of CcReferencePrivateVolumeCacheMap @ 0x140383620
 * Callers:
 *     CcPostWorkQueueCachemapUninit @ 0x1403831F0 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x14038338C (CcWriteBehind.c)
 *     CcDeleteSharedCacheMap @ 0x14039BBF0 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
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
