/*
 * XREFs of ExRundownCompleted @ 0x14049C000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
