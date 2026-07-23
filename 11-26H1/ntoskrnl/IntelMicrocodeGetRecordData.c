/*
 * XREFs of IntelMicrocodeGetRecordData @ 0x1406E2640
 * Callers:
 *     GetMicrocodePatchData @ 0x1406E16D0 (GetMicrocodePatchData.c)
 *     MicrocodeUpdate @ 0x1406E1C10 (MicrocodeUpdate.c)
 * Callees:
 *     PrExtGetRecordDataLength @ 0x1406E0FC0 (PrExtGetRecordDataLength.c)
 */

__int64 __fastcall IntelMicrocodeGetRecordData(__int64 a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // r8

  if ( a2 < 0x10 )
    return 3221225485LL;
  v6 = 4 * *(_DWORD *)(a1 + 28) + 32;
  if ( v6 != *(_DWORD *)(a1 + 16) )
    return 3221225485LL;
  *a4 = v6 + a1;
  return PrExtGetRecordDataLength(a1, a2, a3);
}
