/*
 * XREFs of PopDiagGetDriverName @ 0x1404809A8
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x14021BC90 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x14021BE34 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopDiagTraceDIrpAfterSx @ 0x14048093C (PopDiagTraceDIrpAfterSx.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1406161C0 (PopRecordPoIrpBlackboxInformation.c)
 *     PopDiagTraceDriverVeto @ 0x140C03778 (PopDiagTraceDriverVeto.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagGetDriverName(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  _WORD *v3; // r8
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  _WORD *v6; // rax

  if ( !a1 )
    return 3221225473LL;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_WORD **)(v2 + 64);
  if ( !v3 || !*(_WORD *)(v2 + 56) )
    return 3221225473LL;
  v4 = 64LL;
  v5 = (unsigned __int64)*(unsigned __int16 *)(v2 + 56) >> 1;
  do
  {
    if ( !v5 )
      break;
    if ( !*v3 )
      break;
    *a2++ = *v3++;
    --v5;
    --v4;
  }
  while ( v4 );
  v6 = a2 - 1;
  if ( v4 )
    v6 = a2;
  *v6 = 0;
  return v4 == 0 ? 0x80000005 : 0;
}
