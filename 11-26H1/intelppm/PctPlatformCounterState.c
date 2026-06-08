/*
 * XREFs of PctPlatformCounterState @ 0x140002B50
 * Callers:
 *     PctSnapPlatformCtrsEx @ 0x140004C64 (PctSnapPlatformCtrsEx.c)
 *     ConfigureIntelEmu @ 0x14002B800 (ConfigureIntelEmu.c)
 *     PctDiscoverPlatformCtrs @ 0x14002B860 (PctDiscoverPlatformCtrs.c)
 *     PctEnumPlatfromCtr @ 0x1400439E0 (PctEnumPlatfromCtr.c)
 *     PctGetPlatformCtr @ 0x140043A50 (PctGetPlatformCtr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PctPlatformCounterState(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9

  v2 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL);
  if ( v3 )
    return v3 + 40LL * a2;
  return v2;
}
