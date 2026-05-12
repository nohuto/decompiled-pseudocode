/*
 * XREFs of GetTokenData @ 0x140136BEC
 * Callers:
 *     ParseAssignNamespace @ 0x1401323D0 (ParseAssignNamespace.c)
 *     ParseBandMetadata @ 0x140132530 (ParseBandMetadata.c)
 *     ParseLockingObjectInfo @ 0x1401326F0 (ParseLockingObjectInfo.c)
 *     FindNamedToken @ 0x1401334C4 (FindNamedToken.c)
 *     ParseGetTableColumnData @ 0x140133860 (ParseGetTableColumnData.c)
 *     ParseSyncSessionData @ 0x140135C90 (ParseSyncSessionData.c)
 *     ParseTPerProperties @ 0x140135DF0 (ParseTPerProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTokenData(__int64 a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 7) <= 0xA )
  {
    v1 = a1 + 16;
    if ( *(_DWORD *)(a1 + 12) > 8u )
      return *(_QWORD *)v1;
  }
  return v1;
}
