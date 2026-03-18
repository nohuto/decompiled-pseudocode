/*
 * XREFs of VfPendingStartLogging @ 0x140C30158
 * Callers:
 *     IovpCallDriver1 @ 0x140C2B2B8 (IovpCallDriver1.c)
 *     IovpCompleteRequest1 @ 0x140C45D70 (IovpCompleteRequest1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfPendingStartLogging(__int64 a1)
{
  _QWORD *result; // rax

  if ( !VfForcedPendingLog )
    return 0LL;
  result = (char *)VfForcedPendingLog
         + 512
         * (unsigned __int64)(_InterlockedIncrement(&VfForcedPendingIrps) & (unsigned int)(VfForcedPendingLogLength - 1));
  *result = a1;
  result[1] = KeGetCurrentThread();
  result[2] = 0LL;
  return result;
}
