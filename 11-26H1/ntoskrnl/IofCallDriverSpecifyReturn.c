/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x1404D5EB0
 * Callers:
 *     PopRequestPowerIrp @ 0x14026F334 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x140C349F0 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x140264B50 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x1404DBCDC (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1404ECCDC (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1, ULONG_PTR a2, __int64 a3)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver((__int64)a1, a2);
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1, a2, a3);
}
