/*
 * XREFs of WmipDeregisterDevice @ 0x140ACDBA8
 * Callers:
 *     IoWMIRegistrationControl @ 0x140ACD740 (IoWMIRegistrationControl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     WmipDeregisterRegEntry @ 0x1403B6EF0 (WmipDeregisterRegEntry.c)
 *     WmipUnreferenceRegEntry @ 0x1403B7080 (WmipUnreferenceRegEntry.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     WmipFindRegEntryByDevice @ 0x1404961EC (WmipFindRegEntryByDevice.c)
 */

__int64 __fastcall WmipDeregisterDevice(__int64 a1)
{
  unsigned int v2; // edi
  char *RegEntryByDevice; // rsi
  PVOID *i; // rbx

  v2 = 0;
  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  RegEntryByDevice = (char *)WmipFindRegEntryByDevice(a1);
  if ( RegEntryByDevice )
  {
    for ( i = (PVOID *)WmipRegWorkList; i != &WmipRegWorkList; i = (PVOID *)*i )
    {
      if ( i[3] == RegEntryByDevice )
      {
        i[3] = 0LL;
        WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
      }
    }
  }
  KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
  if ( RegEntryByDevice )
  {
    WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
    WmipDeregisterRegEntry(RegEntryByDevice);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
