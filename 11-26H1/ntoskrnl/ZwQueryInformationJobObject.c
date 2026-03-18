/*
 * XREFs of ZwQueryInformationJobObject @ 0x140725ED0
 * Callers:
 *     DifZwQueryInformationJobObjectWrapper @ 0x1406B1560 (DifZwQueryInformationJobObjectWrapper.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
