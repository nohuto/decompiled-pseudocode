/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x1404DC7D0
 * Callers:
 *     PopRequestPowerIrp @ 0x14026FDC4 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x140C2E9E0 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x1402655E0 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x1404E25FC (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1404F36FC (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1, ULONG_PTR a2, __int64 a3)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver((__int64)a1, a2);
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1, a2, a3);
}
