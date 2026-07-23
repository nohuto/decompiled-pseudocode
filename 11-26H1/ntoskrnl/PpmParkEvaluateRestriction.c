/*
 * XREFs of PpmParkEvaluateRestriction @ 0x14025CAB4
 * Callers:
 *     PpmParkComputeDiff @ 0x14025C028 (PpmParkComputeDiff.c)
 * Callees:
 *     ?RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140253CAC (-RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     PpmEventParkNodeRestriction @ 0x140419160 (PpmEventParkNodeRestriction.c)
 *     PpmEventTraceHeteroSets @ 0x1404B7270 (PpmEventTraceHeteroSets.c)
 *     KeUpdateProcessorRestrictions @ 0x1405EBF80 (KeUpdateProcessorRestrictions.c)
 */

void __fastcall PpmParkEvaluateRestriction(__int64 a1)
{
  char v1; // di

  v1 = 0;
  if ( *(_BYTE *)(a1 + 1196)
    || *(_DWORD *)(a1 + 1192) == 3
    && (unsigned int)RtlpAndAffinityExNoResult((struct _KAFFINITY_EX *)(a1 + 16), &PpmPerfChangedCoreParkingMask) )
  {
    v1 = 1;
  }
  else if ( !*(_BYTE *)(a1 + 1214) )
  {
    return;
  }
  PpmEventParkNodeRestriction(0LL, a1);
  if ( v1 )
  {
    if ( (unsigned __int8)KeUpdateProcessorRestrictions(
                            *(unsigned __int16 *)(a1 + 4),
                            (int)a1 + 16,
                            *(unsigned __int16 *)(a1 + 1212),
                            *(_QWORD *)(a1 + 1216),
                            a1 + 1198) )
      PpmEventTraceHeteroSets(2LL);
    *(_BYTE *)(a1 + 1196) = 0;
  }
}
