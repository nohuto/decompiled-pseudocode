/*
 * XREFs of WmipDisableCollectOrEvent @ 0x140A0CFF8
 * Callers:
 *     WmipDeleteMethod @ 0x140A0CF00 (WmipDeleteMethod.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     WmipSendDisableRequest @ 0x140A0A2CC (WmipSendDisableRequest.c)
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
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v6 = WmipSendDisableRequest(a1, v5);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v6;
}
