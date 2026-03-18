/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1401F0D54
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x140154130 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RimInputTypeToDeviceType @ 0x1400357C0 (RimInputTypeToDeviceType.c)
 *     RIMDoOnPnpNotification @ 0x140113F30 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
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
