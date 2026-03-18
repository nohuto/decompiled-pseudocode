/*
 * XREFs of RIMIDE_CreateGenericHidDevice @ 0x14019CF94
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x140171340 (NtUserInitializeGenericHidInjection.c)
 *     ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x14021D0B8 (-CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     RIMIDECreatePseudoHIDDevice @ 0x1401E90CC (RIMIDECreatePseudoHIDDevice.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

NTSTATUS __fastcall RIMIDE_CreateGenericHidDevice(__int64 a1, __int64 a2)
{
  ULONG v4; // edx
  UCHAR *v5; // rcx
  NTSTATUS result; // eax
  CHAR *Report; // rcx
  int Usage; // edx
  int UsagePage; // ecx
  int v10; // [rsp+40h] [rbp-69h]
  __int64 v11; // [rsp+48h] [rbp-61h]
  ULONG UsageValue[4]; // [rsp+60h] [rbp-49h] BYREF
  struct _HIDP_DEVICE_DESC v13; // [rsp+70h] [rbp-39h] BYREF
  struct _HIDP_DEVICE_DESC DeviceDescription; // [rsp+B0h] [rbp+7h] BYREF

  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  v4 = *(unsigned __int16 *)(a1 + 40);
  v5 = *(UCHAR **)(a1 + 32);
  UsageValue[0] = 1;
  result = HidP_GetCollectionDescription(v5, v4, PagedPool, &DeviceDescription);
  if ( result >= 0 )
  {
    Report = *(CHAR **)(a1 + 48);
    if ( Report )
      HidP_GetUsageValue(
        HidP_Feature,
        0xDu,
        0,
        0x55u,
        UsageValue,
        DeviceDescription.CollectionDesc->PreparsedData,
        Report,
        *(unsigned __int16 *)(a1 + 56));
    Usage = DeviceDescription.CollectionDesc->Usage;
    UsagePage = DeviceDescription.CollectionDesc->UsagePage;
    v11 = *(_QWORD *)(a1 + 24);
    v13 = DeviceDescription;
    return RIMIDECreatePseudoHIDDevice(UsagePage, Usage, UsageValue[0], 1, 0LL, &v13, 3, 0, v10, v11, a2);
  }
  return result;
}
