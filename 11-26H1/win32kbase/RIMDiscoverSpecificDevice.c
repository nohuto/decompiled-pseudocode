/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1401BC738
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMDoOnPnpNotification @ 0x140091548 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     RIMFreeDev @ 0x140092664 (RIMFreeDev.c)
 *     RimInputTypeToDeviceType @ 0x140120CA0 (RimInputTypeToDeviceType.c)
 */

__int64 __fastcall RIMDiscoverSpecificDevice(struct RawInputManagerObject *a1, const UNICODE_STRING *a2)
{
  unsigned int v4; // eax
  int v5; // ebx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v4 = RimInputTypeToDeviceType(*((_DWORD *)a1 + 21));
  v5 = RIMCreateDev(a1, v4, a2, 1, 0, 0LL, &v7);
  if ( v5 >= 0 )
  {
    *(_DWORD *)(v7 + 168) |= 1u;
    v5 = RIMDoOnPnpNotification(a1, v7);
    if ( v5 < 0 )
      RIMFreeDev(a1, (struct RIMDEV *)v7);
  }
  return (unsigned int)v5;
}
