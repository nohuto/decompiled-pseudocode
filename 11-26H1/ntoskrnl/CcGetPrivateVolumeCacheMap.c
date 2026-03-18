/*
 * XREFs of CcGetPrivateVolumeCacheMap @ 0x14039C140
 * Callers:
 *     CcWriteBehindPostProcess @ 0x140384CD4 (CcWriteBehindPostProcess.c)
 *     CcNotifyOfMappedWrite @ 0x14038984C (CcNotifyOfMappedWrite.c)
 *     CcDeleteSharedCacheMap @ 0x14039BBF0 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     CcDeleteSectionsForPartition @ 0x1405B2470 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetPrivateVolumeCacheMap(__int64 a1)
{
  if ( CcEnablePerVolumeLazyWriter )
    return *(_QWORD *)(a1 + 600);
  else
    return 0LL;
}
