/*
 * XREFs of ZwQueryInformationProcess @ 0x14069B460
 * Callers:
 *     DifZwQueryInformationProcessWrapper @ 0x140639370 (DifZwQueryInformationProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14068C42C (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
