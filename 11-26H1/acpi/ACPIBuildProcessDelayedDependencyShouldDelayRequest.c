/*
 * XREFs of ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x140043030
 * Callers:
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x140042F5C (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x140058170 (ACPIBuildProcessDelayedDependencyPhase0.c)
 * Callees:
 *     AreDependenciesSatisfied @ 0x140059FF8 (AreDependenciesSatisfied.c)
 */

char __fastcall ACPIBuildProcessDelayedDependencyShouldDelayRequest(__int64 a1)
{
  _QWORD *v1; // rsi
  char v2; // bl
  unsigned int i; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( (*(_DWORD *)(a1 + 20) & 0x20) == 0 )
    return 0;
  v1 = *(_QWORD **)(a1 + 40);
  v2 = 1;
  if ( (v1[1] & 0xA00000000000LL) == 0 )
  {
    v2 = 0;
    if ( !v1[81] || (unsigned __int8)AreDependenciesSatisfied(v1[95]) )
    {
      for ( i = 0; i <= 5; ++i )
      {
        if ( i > 4 )
          v5 = 448LL;
        else
          v5 = 8LL * i + 408;
        v6 = *(_QWORD *)((char *)v1 + v5);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 8);
          if ( *(_QWORD *)(v7 + 96) )
          {
            if ( !(unsigned __int8)AreDependenciesSatisfied(*(_QWORD *)(v7 + 32)) )
              return 1;
          }
        }
      }
    }
    else
    {
      return 1;
    }
  }
  return v2;
}
