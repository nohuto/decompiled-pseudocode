/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x14012E1E8
 * Callers:
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1400F1384 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     RIMGetCurrentPowerInputMode @ 0x14012E11C (RIMGetCurrentPowerInputMode.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x140184450 (rimDisplayOffPolicyUpdateStateAndApply.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 (*__fastcall ApiSetGetPowerTransitionsState(void *a1))(void)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 (*result)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  memset(a1, 0, 0x40uLL);
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3, v2) + 48) + 4560LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 4568LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(void *))result)(a1);
    }
  }
  return result;
}
