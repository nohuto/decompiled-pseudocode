/*
 * XREFs of RIMIDE_InitializeDeviceInjection @ 0x14020A824
 * Callers:
 *     NtUserInitializeInputDeviceInjection @ 0x1401E5550 (NtUserInitializeInputDeviceInjection.c)
 * Callees:
 *     RIMIDECreatePseudoHIDDevice @ 0x1402083FC (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x140209F58 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMIDE_InitializeDeviceInjection(
        unsigned __int16 a1,
        unsigned __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 *a7)
{
  unsigned int v10; // ebx
  unsigned int v12; // esi
  int v13; // eax
  struct _HIDP_DEVICE_DESC v15; // [rsp+60h] [rbp-91h] BYREF
  struct _HIDP_DEVICE_DESC DeviceDescription; // [rsp+A0h] [rbp-51h] BYREF

  v10 = 1;
  v12 = -1073741823;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  if ( a1 == 13 )
  {
    v13 = 10;
    if ( a2 != 4 )
      v13 = 1;
    v10 = v13;
    if ( a2 == 5 )
      v10 = 5;
  }
  if ( (unsigned int)BuildReportDescriptor(a1, a2, a3, a4, v10, &DeviceDescription) )
  {
    v15 = DeviceDescription;
    return (unsigned int)RIMIDECreatePseudoHIDDevice(a1, a2, v10, a6, a5, &v15, 3, 0, 0LL, a7);
  }
  return v12;
}
