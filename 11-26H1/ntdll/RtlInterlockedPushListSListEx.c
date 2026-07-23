/*
 * XREFs of RtlInterlockedPushListSListEx @ 0x180105A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall RtlInterlockedPushListSListEx(
        PSLIST_HEADER ListHead,
        PSLIST_ENTRY List,
        PSLIST_ENTRY ListEnd,
        DWORD Count)
{
  return (PSLIST_ENTRY)InterlockedPushListSList(ListHead, List, ListEnd, Count);
}
