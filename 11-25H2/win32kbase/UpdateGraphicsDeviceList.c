/*
 * XREFs of UpdateGraphicsDeviceList @ 0x14006A7C8
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x14006A610 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 *     SafeDisableMDEV @ 0x140075040 (SafeDisableMDEV.c)
 *     SafeEnableMDEV @ 0x14014C4A0 (SafeEnableMDEV.c)
 *     xxxUserResetDisplayDevice @ 0x1401A13BC (xxxUserResetDisplayDevice.c)
 */

__int64 __fastcall UpdateGraphicsDeviceList(int *a1)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  result = UserIsWddmConnectedSession();
  if ( (_DWORD)result )
  {
    result = DrvUpdateGraphicsDeviceList(0LL);
    if ( !(_DWORD)result )
    {
      result = SafeDisableMDEV(1LL);
      if ( (_DWORD)result )
      {
        DrvUpdateGraphicsDeviceList(1LL);
        SafeEnableMDEV(1LL);
        result = xxxUserResetDisplayDevice();
        v2 = 1;
      }
    }
  }
  *a1 = v2;
  return result;
}
