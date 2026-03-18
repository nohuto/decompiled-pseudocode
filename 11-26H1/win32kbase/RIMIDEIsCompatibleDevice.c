/*
 * XREFs of RIMIDEIsCompatibleDevice @ 0x140209508
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x14005E0A4 (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x14007966C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimInputTypeFromRimDev @ 0x1401FE69C (rimInputTypeFromRimDev.c)
 */

__int64 __fastcall RIMIDEIsCompatibleDevice(_DWORD *a1, __int64 a2)
{
  int v4; // eax

  v4 = rimInputTypeFromRimDev(a2);
  if ( (v4 & a1[21]) == 0 )
    return 0LL;
  if ( v4 != 32 || a1[264] )
    return 1LL;
  if ( !a1[22] )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2356);
  return rimIsExplicitRimUsagesMatchingUsages(
           (__int64)a1,
           *(_WORD *)(*(_QWORD *)(a2 + 448) + 16LL),
           *(_WORD *)(*(_QWORD *)(a2 + 448) + 18LL));
}
