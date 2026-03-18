/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x1400EB1F8
 * Callers:
 *     RIMGetCurrentPowerInputMode @ 0x1400EB12C (RIMGetCurrentPowerInputMode.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x140136574 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1401AF7C0 (rimDisplayOffPolicyUpdateStateAndApply.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 (*__fastcall ApiSetGetPowerTransitionsState(void *a1))(void)
{
  __int64 v2; // rcx
  __int64 (*result)(void); // rax
  __int64 v4; // rcx

  memset(a1, 0, 0x40uLL);
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 48) + 4112LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 4120LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(void *))result)(a1);
    }
  }
  return result;
}
