/*
 * XREFs of UpdateGraphicsDeviceList @ 0x14000A35C
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1400096D0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 *     SafeEnableMDEV @ 0x14013AF00 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x14019B620 (SafeDisableMDEV.c)
 *     xxxUserResetDisplayDevice @ 0x1401C4F6C (xxxUserResetDisplayDevice.c)
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
