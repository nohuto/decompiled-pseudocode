/*
 * XREFs of DrpVerifyData @ 0x1406E25C0
 * Callers:
 *     DrpGetRecord @ 0x1406E24F8 (DrpGetRecord.c)
 *     DrpGetRecordCount @ 0x1406E2534 (DrpGetRecordCount.c)
 *     DrpGetSectionAtIndex @ 0x1406E2560 (DrpGetSectionAtIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrpVerifyData(__int64 a1, unsigned __int64 a2)
{
  if ( !a1 || a2 < 0x18 )
    return 3221225485LL;
  if ( *(_DWORD *)a1 == 1296256339 )
    return a2 != *(_QWORD *)(a1 + 8) ? 0xC0000206 : 0;
  return 3221266432LL;
}
