/*
 * XREFs of ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x1400DE584
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDB98 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1400DE4D0 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     ?Delete@GroupedFGBoostProp@@UEAAXXZ @ 0x1400DECC0 (-Delete@GroupedFGBoostProp@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall GroupedFGBoostProp::deRefAll(GroupedFGBoostProp *this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
    ObfDereferenceObject(*(PVOID *)(*((_QWORD *)this + 4) + 8 * i));
}
