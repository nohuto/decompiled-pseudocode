/*
 * XREFs of ZwQueryInformationJobObject @ 0x14069DC00
 * Callers:
 *     DifZwQueryInformationJobObjectWrapper @ 0x1406391C0 (DifZwQueryInformationJobObjectWrapper.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
