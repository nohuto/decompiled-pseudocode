/*
 * XREFs of PopSubscribeHibernatePolicyWnf @ 0x1407D0974
 * Callers:
 *     PoInitHiberServices @ 0x1407C8370 (PoInitHiberServices.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140948A90 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSubscribeHibernatePolicyWnf()
{
  __int64 result; // rax

  if ( (int)ExSubscribeWnfStateChange(
              (unsigned int)&stru_140F11D08.216,
              (unsigned int)&WNF_PO_HIBERNATE_POLICY_CHANGE,
              1,
              0,
              (__int64)PopWnfHibernatePolicyCallback,
              (__int64)&PopAllowHibernateReg) < 0 )
    stru_140F11D08.WaitListEntry.Flink = 0LL;
  result = ExSubscribeWnfStateChange(
             (unsigned int)&stru_140F11D08.WaitBlockList,
             (unsigned int)&WNF_BOOT_BOOT_STL_ENFORCED,
             1,
             0,
             (__int64)PopWnfHibernateRevocationCheckCallback,
             0LL);
  if ( (int)result < 0 )
    stru_140F11D08.WaitBlockList = 0LL;
  return result;
}
