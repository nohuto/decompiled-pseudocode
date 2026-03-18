/*
 * XREFs of RIMIDE_CreateGenericHidDevice @ 0x1401B8FF0
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x1401E4FC0 (NtUserInitializeGenericHidInjection.c)
 *     ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x140220A7C (-CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     RIMIDECreatePseudoHIDDevice @ 0x1402083FC (RIMIDECreatePseudoHIDDevice.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

NTSTATUS __fastcall RIMIDE_CreateGenericHidDevice(__int64 a1, __int64 a2)
{
  ULONG v4; // edx
  UCHAR *v5; // rcx
  NTSTATUS result; // eax
  CHAR *Report; // rcx
  int Usage; // edx
  int UsagePage; // ecx
  __int64 v10; // [rsp+40h] [rbp-59h]
  ULONG UsageValue[4]; // [rsp+50h] [rbp-49h] BYREF
  struct _HIDP_DEVICE_DESC v12; // [rsp+60h] [rbp-39h] BYREF
  _HIDP_DEVICE_DESC DeviceDescription; // [rsp+A0h] [rbp+7h] BYREF

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
    v10 = *(_QWORD *)(a1 + 24);
    v12 = DeviceDescription;
    return RIMIDECreatePseudoHIDDevice(UsagePage, Usage, UsageValue[0], 1, 0LL, &v12, 3, 0, v10, a2);
  }
  return result;
}
