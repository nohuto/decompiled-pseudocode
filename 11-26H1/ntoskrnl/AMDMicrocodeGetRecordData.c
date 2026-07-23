/*
 * XREFs of AMDMicrocodeGetRecordData @ 0x1406E289C
 * Callers:
 *     GetMicrocodePatchData @ 0x1406E16D0 (GetMicrocodePatchData.c)
 *     MicrocodeUpdate @ 0x1406E1C10 (MicrocodeUpdate.c)
 * Callees:
 *     PrExtGetRecordDataLength @ 0x1406E0FC0 (PrExtGetRecordDataLength.c)
 */

__int64 __fastcall AMDMicrocodeGetRecordData(_DWORD *a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // r8

  if ( *a1 == 1 )
  {
    if ( a2 < 0x10 )
      return 3221225485LL;
    v6 = 4LL * (unsigned int)a1[6] + 28;
  }
  else
  {
    if ( *a1 != 13 )
      return 3221225659LL;
    if ( a2 < 0x10 )
      return 3221225485LL;
    v6 = 4LL * (unsigned int)a1[8] + 36;
  }
  if ( v6 != a1[4] )
    return 3221225485LL;
  *a4 = (char *)a1 + v6;
  return PrExtGetRecordDataLength((__int64)a1, a2, a3);
}
