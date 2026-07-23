/*
 * XREFs of PopPluginRequestPowerControl @ 0x1403C10D8
 * Callers:
 *     PoFxPowerControl @ 0x1403C1020 (PoFxPowerControl.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginRequestPowerControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  unsigned int v7; // ebx
  _QWORD v9[6]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]
  __int64 v11; // [rsp+58h] [rbp-10h]

  v7 = -1073741822;
  v9[0] = *(_QWORD *)(a1 + 72);
  v9[4] = a5;
  v9[5] = a6;
  v9[1] = a2;
  v11 = 0LL;
  v9[2] = a3;
  v9[3] = a4;
  v10 = 0LL;
  if ( (unsigned __int8)guard_dispatch_icall_no_overrides(14LL, v9) == 1 )
  {
    if ( a7 )
      *a7 = v10;
    return (unsigned int)v11;
  }
  return v7;
}
