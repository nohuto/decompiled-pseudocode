/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x1404453A0
 * Callers:
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     ObReferenceFileObjectForWrite @ 0x140929520 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandle @ 0x14092A3F0 (ObpReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     NtWriteFile @ 0x14092B660 (NtWriteFile.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A227F0 (PspThreadFromTicket.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A4E1B0 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A6A8B0 (NtAlertThreadByThreadId.c)
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
