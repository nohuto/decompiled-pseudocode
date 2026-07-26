/*
 * XREFs of ndisReduceTimeoutFor9FBugcheck @ 0x1401561F0
 * Callers:
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x140155860 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140155C40 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1401560A0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 * Callees:
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 */

char __fastcall ndisReduceTimeoutFor9FBugcheck(__int64 a1, unsigned int *a2)
{
  __int64 v3; // r8
  _DEVICE_OBJECT *v4; // rcx
  ULONG v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  ULONG SecondsRemaining; // [rsp+30h] [rbp+8h] BYREF

  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)(a1 + 120)) & 0x100) != 0 )
    return 0;
  v4 = *(_DEVICE_OBJECT **)(v3 + 3832);
  SecondsRemaining = 0;
  if ( !PoQueryWatchdogTime(v4, &SecondsRemaining) )
    return 0;
  v5 = SecondsRemaining;
  if ( SecondsRemaining < 3 )
    v5 = 3;
  v6 = 3000;
  v7 = 1000 * v5 - 3000;
  if ( v7 >= 0xBB8 )
    v6 = v7;
  if ( v6 < *a2 )
    *a2 = v6;
  return 1;
}
