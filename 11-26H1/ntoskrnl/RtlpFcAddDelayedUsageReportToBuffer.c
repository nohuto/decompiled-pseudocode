/*
 * XREFs of RtlpFcAddDelayedUsageReportToBuffer @ 0x140358D6C
 * Callers:
 *     CmFcManagerNotifyFeatureUsage @ 0x140358C78 (CmFcManagerNotifyFeatureUsage.c)
 * Callees:
 *     RtlBackoff @ 0x140337F20 (RtlBackoff.c)
 *     RtlInterlockedSetClearRun @ 0x140359A90 (RtlInterlockedSetClearRun.c)
 *     RtlFindClearBits @ 0x14035A520 (RtlFindClearBits.c)
 */

__int64 __fastcall RtlpFcAddDelayedUsageReportToBuffer(unsigned __int32 *a1, _QWORD *a2)
{
  unsigned int v2; // edi
  unsigned __int32 v5; // esi
  __int64 ClearBits; // rbp
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 64LL;
  v2 = 0;
  v9 = 0;
  BitMapHeader.Buffer = a1 + 2;
  while ( 1 )
  {
    _m_prefetchw(a1);
    v5 = *a1;
    if ( *a1 == 64 )
    {
      v2 = -1073741670;
      _InterlockedIncrement((volatile signed __int32 *)a1 + 1);
      return v2;
    }
    if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)a1, v5 + 1, v5) )
      break;
    RtlBackoff(&v9);
  }
  do
    ClearBits = RtlFindClearBits(&BitMapHeader, 1u, v5);
  while ( !(unsigned int)RtlInterlockedSetClearRun(&BitMapHeader, ClearBits, 1LL) );
  *(_QWORD *)&a1[3 * ClearBits + 5] = *a2;
  return v2;
}
