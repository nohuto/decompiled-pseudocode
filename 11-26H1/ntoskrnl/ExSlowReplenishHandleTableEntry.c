/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x14044D280
 * Callers:
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     ObReferenceFileObjectForWrite @ 0x1408F9590 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandle @ 0x1408FA460 (ObpReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     NtWriteFile @ 0x1408FB6D0 (NtWriteFile.c)
 *     PsLookupThreadByThreadId @ 0x140A10B70 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A33250 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A5D8F0 (NtAlertThreadByThreadId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSlowReplenishHandleTableEntry(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( (*a1 & 0x1FFFE) < 0xFFFE && !ExpHandleTableFastRefsDisabled )
  {
    result = 0x7FFF - (unsigned int)(unsigned __int16)(v1 >> 1);
    *a1 = v1 & 0xFFFFFFFFFFFE0001uLL | 0xFFFE;
  }
  return result;
}
