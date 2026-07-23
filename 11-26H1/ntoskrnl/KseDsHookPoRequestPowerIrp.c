/*
 * XREFs of KseDsHookPoRequestPowerIrp @ 0x1406014B0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventRequestPowerIrp @ 0x140601FC8 (KsepDsEventRequestPowerIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsHookPoRequestPowerIrp(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  int v7; // edi
  unsigned int v9; // ebp
  __int64 v11; // [rsp+50h] [rbp+8h]

  v7 = (unsigned __int8)a2;
  v11 = 0LL;
  v9 = guard_dispatch_icall_no_overrides(a1, a2);
  KsepDsEventRequestPowerIrp(*(_QWORD *)(a1 + 8), a1, v11, v7, a3, v9);
  if ( a6 )
    *a6 = v11;
  return v9;
}
