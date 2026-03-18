/*
 * XREFs of WmipDisableCollectOrEvent @ 0x140A0D5A8
 * Callers:
 *     WmipDeleteMethod @ 0x140A0D4B0 (WmipDeleteMethod.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     WmipSendDisableRequest @ 0x140A0B064 (WmipSendDisableRequest.c)
 */

__int64 __fastcall WmipDisableCollectOrEvent(_DWORD *a1, int a2)
{
  int v3; // edx
  char v5; // bl
  unsigned int v6; // ebx

  v3 = a2 - 2244924;
  if ( v3 )
  {
    if ( v3 != 4 )
      return 3221225647LL;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  v6 = WmipSendDisableRequest(a1, v5);
  KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
  return v6;
}
