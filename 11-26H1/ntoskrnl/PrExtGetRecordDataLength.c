/*
 * XREFs of PrExtGetRecordDataLength @ 0x1406DCD20
 * Callers:
 *     IntelMicrocodeGetRecordData @ 0x1406DE3A0 (IntelMicrocodeGetRecordData.c)
 *     AMDMicrocodeGetRecordData @ 0x1406DE5FC (AMDMicrocodeGetRecordData.c)
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PrExtGetRecordDataLength(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || a2 < 0x10 )
    return 3221225485LL;
  *a3 = *(_QWORD *)(a1 + 8);
  return result;
}
