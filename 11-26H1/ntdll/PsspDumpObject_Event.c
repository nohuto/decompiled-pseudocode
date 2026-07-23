/*
 * XREFs of PsspDumpObject_Event @ 0x1801006E0
 * Callers:
 *     PsspWalkHandleTable @ 0x1800B3A60 (PsspWalkHandleTable.c)
 * Callees:
 *     NtQueryEvent @ 0x18015F900 (NtQueryEvent.c)
 */

NTSTATUS __fastcall PsspDumpObject_Event(void *a1, void *a2, unsigned int a3, ULONG *ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 < 8 )
    return -1073741789;
  else
    return NtQueryEvent(a1, EventBasicInformation, a2, 8u, ReturnLength);
}
