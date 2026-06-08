/*
 * XREFs of AmdPctPlatformCounterState @ 0x1400028B8
 * Callers:
 *     AmdPctSnapPlatformCtrsEx @ 0x1400023CC (AmdPctSnapPlatformCtrsEx.c)
 *     AmdConfigureEmu @ 0x140023770 (AmdConfigureEmu.c)
 *     AmdPctCheckCounterDependency @ 0x1400237B0 (AmdPctCheckCounterDependency.c)
 *     AmdPctDiscoverCounters @ 0x1400238CC (AmdPctDiscoverCounters.c)
 *     AmdPctGetPlatformCtr @ 0x140040C10 (AmdPctGetPlatformCtr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AmdPctPlatformCounterState(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // r9

  v2 = 0LL;
  if ( a2 >= 0 )
  {
    if ( a2 >= 2 )
    {
      if ( a2 < 3 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 1240) + 32LL);
        if ( v5 )
          return v5 + 40LL * (a2 - 2);
      }
    }
    else
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL);
      if ( v3 )
        return v3 + 40LL * a2;
    }
  }
  return v2;
}
