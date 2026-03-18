/*
 * XREFs of VfRlrsVolatileConfigUpdate @ 0x140648604
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x140647B64 (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     VfFaultsAddAllApps @ 0x140C3441C (VfFaultsAddAllApps.c)
 *     VfFaultsAddAllTags @ 0x140C344D0 (VfFaultsAddAllTags.c)
 *     VfFaultsRemoveAllApps @ 0x140C34968 (VfFaultsRemoveAllApps.c)
 *     VfFaultsRemoveAllTags @ 0x140C34A00 (VfFaultsRemoveAllTags.c)
 */

__int64 __fastcall VfRlrsVolatileConfigUpdate(__int64 a1, char a2)
{
  int v3; // edi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax

  v3 = 0;
  if ( a2 )
  {
    VfFaultInjectionMaxProbability = 10000;
    VfFaultInjectionProbability = 600;
LABEL_13:
    VfFaultsRemoveAllTags();
    VfFaultsRemoveAllApps();
    return (unsigned int)v3;
  }
  if ( !a1 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 4) )
    VfFaultInjectionMaxProbability = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    VfFaultInjectionMaxProbability = 10000;
    v5 = 600;
  }
  VfFaultInjectionProbability = v5;
  VfFaultsRemoveAllTags();
  VfFaultsRemoveAllApps();
  v6 = *(unsigned __int16 *)(a1 + 24);
  if ( (_WORD)v6 )
  {
    v3 = VfFaultsAddAllApps(*(_QWORD *)(a1 + 32), v6 >> 1);
    if ( v3 < 0 )
      goto LABEL_13;
  }
  v7 = *(unsigned __int16 *)(a1 + 8);
  if ( (_WORD)v7 )
  {
    v3 = VfFaultsAddAllTags(*(_QWORD *)(a1 + 16), v7 >> 1);
    if ( v3 < 0 )
      goto LABEL_13;
  }
  return (unsigned int)v3;
}
