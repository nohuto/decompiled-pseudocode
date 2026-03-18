/*
 * XREFs of ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x14009D764
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14009C5A8 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x14009D7EC (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     ?Delete@GroupedFGBoostProp@@UEAAXXZ @ 0x14009E460 (-Delete@GroupedFGBoostProp@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall GroupedFGBoostProp::deRefAll(GroupedFGBoostProp *this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
    ObfDereferenceObject(*(PVOID *)(*((_QWORD *)this + 4) + 8 * i));
}
