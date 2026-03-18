/*
 * XREFs of UsbhGetDeviceInformation @ 0x14001A9A8
 * Callers:
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x140047328 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhGetUsbDeviceFlags @ 0x140018314 (UsbhGetUsbDeviceFlags.c)
 *     Usbh_HubGetUsbDescriptors @ 0x140039B00 (Usbh_HubGetUsbDescriptors.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x140041D7C (UsbhParseConfigurationDescriptorEx.c)
 *     FindMidiInterfaceDescriptor @ 0x140045EF4 (FindMidiInterfaceDescriptor.c)
 *     UsbhValidateConfigurationDescriptor @ 0x14005B724 (UsbhValidateConfigurationDescriptor.c)
 */

__int64 __fastcall UsbhGetDeviceInformation(__int64 a1, __int64 a2)
{
  int v3; // r12d
  unsigned __int16 v4; // r15
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  int UsbDescriptors; // esi
  unsigned int v8; // eax
  __int64 Pool2; // rdi
  int UsbDeviceFlags; // r12d
  int v12; // eax
  unsigned __int64 v13; // r15
  char v14; // al
  unsigned __int8 *v15; // rcx
  _BYTE *v16; // rdx
  char v17; // al
  int v18; // eax
  char v19; // cl
  __int64 v20; // rax
  __int64 v21; // rsi
  char v22; // al
  __int64 MidiInterfaceDescriptor; // rax
  __int64 v24; // [rsp+20h] [rbp-40h]
  int v25; // [rsp+20h] [rbp-40h]
  __int64 v26; // [rsp+28h] [rbp-38h]
  int v27; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+50h] BYREF
  int v30; // [rsp+B8h] [rbp+58h] BYREF

  v30 = 0;
  v3 = 0;
  v4 = 255;
  v27 = 18;
  v5 = PdoExt(a2);
  v29 = 255;
  v6 = 255LL;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(64LL, v6, 1112885333LL);
    if ( !Pool2 )
      return 3221225626LL;
    UsbDescriptors = Usbh_HubGetUsbDescriptors(
                       a1,
                       *((_QWORD *)v5 + 145),
                       (int)v5 + 1400,
                       (unsigned int)&v27,
                       Pool2,
                       (__int64)&v29);
    if ( UsbDescriptors < 0 )
      break;
    v8 = *(unsigned __int16 *)(Pool2 + 2);
    if ( v29 >= v8 || v3 )
      break;
    v29 = *(unsigned __int16 *)(Pool2 + 2);
    v4 = v8;
    ExFreePoolWithTag((PVOID)Pool2, 0);
    v6 = v29;
    v3 = 1;
  }
  if ( (UsbDescriptors & 0xC0000000) == 0xC0000000 )
  {
    LODWORD(v26) = UsbDescriptors;
    LODWORD(v24) = *((unsigned __int16 *)v5 + 714);
    v5[705] = 1073807367;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_GET_DESCRIPTORS_FAILURE, v24, v26);
    UsbhException(a1, *((_WORD *)v5 + 714), 36, (const void *)Pool2, v29, UsbDescriptors, -1, usbfile_bus_c, 3878, 0);
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)UsbDescriptors;
  }
  UsbDeviceFlags = UsbhGetUsbDeviceFlags(a1, a2);
  if ( (UsbDeviceFlags & 0xC0000000) == 0xC0000000 )
  {
    LODWORD(v26) = UsbDeviceFlags;
    LODWORD(v24) = *((unsigned __int16 *)v5 + 714);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_REGISTRY_FAILURE, v24, v26);
    return (unsigned int)UsbDeviceFlags;
  }
  if ( (unsigned __int8)UsbhValidateConfigurationDescriptor(Pool2, v29, &v30, dword_14006F670 != 0) )
  {
    if ( UsbDeviceFlags >= 0 && v4 < *(_WORD *)(Pool2 + 2) )
      *(_WORD *)(Pool2 + 2) = v4;
    v13 = Pool2 + *(unsigned __int16 *)(Pool2 + 2);
    if ( *((_BYTE *)v5 + 1417) > 1u )
    {
      v5[701] |= 0x80u;
      if ( *((_BYTE *)v5 + 1417) > 1u && *(_BYTE *)(Pool2 + 4) > 1u )
      {
        v14 = *((_BYTE *)v5 + 1404);
        if ( !v14 || v14 == -17 && *((_BYTE *)v5 + 1405) == 2 && *((_BYTE *)v5 + 1406) == 1 )
        {
          v15 = (unsigned __int8 *)(Pool2 + 9);
          while ( (unsigned __int64)v15 < v13 )
          {
            v16 = v15;
            v15 += *v15;
            v17 = v16[1];
            if ( v17 == 11 && v16[4] == 1 || v17 == 4 && v16[5] == 1 )
            {
              v5[355] |= 0x20u;
              break;
            }
          }
        }
      }
    }
    v18 = v5[355];
    if ( (v18 & 0x20) == 0 && *((_BYTE *)v5 + 1417) == 1 && *(_BYTE *)(Pool2 + 4) > 1u )
    {
      v19 = *((_BYTE *)v5 + 1404);
      if ( !v19 || v19 == -17 && *((_BYTE *)v5 + 1405) == 2 && *((_BYTE *)v5 + 1406) == 1 )
      {
        v5[355] = v18 | 0x20;
LABEL_59:
        if ( (*(_BYTE *)(Pool2 + 7) & 0x20) != 0 )
          v5[355] |= 0x100u;
        *((_QWORD *)v5 + 299) = Pool2;
        return (unsigned int)UsbDeviceFlags;
      }
    }
    v20 = UsbhParseConfigurationDescriptorEx(a1, Pool2, Pool2, -1, v24, -1, -1, -1);
    v21 = v20;
    if ( !v20 || v13 - v20 < 9 )
      goto LABEL_59;
    v22 = *(_BYTE *)(v20 + 5);
    if ( v22 == 9 )
    {
      v5[355] |= 4u;
LABEL_58:
      *(_QWORD *)((char *)v5 + 2433) = *(_QWORD *)v21;
      *((_BYTE *)v5 + 2441) = *(_BYTE *)(v21 + 8);
      goto LABEL_59;
    }
    if ( v22 == 1 )
    {
      MidiInterfaceDescriptor = FindMidiInterfaceDescriptor(a1, Pool2, v21);
      if ( !MidiInterfaceDescriptor )
        goto LABEL_58;
    }
    else
    {
      if ( *((_WORD *)v5 + 701) <= 0x200u )
        goto LABEL_58;
      if ( (v5[358] & 0x10000) != 0 )
        goto LABEL_58;
      MidiInterfaceDescriptor = UsbhParseConfigurationDescriptorEx(
                                  a1,
                                  Pool2,
                                  v21,
                                  *(unsigned __int8 *)(v21 + 2),
                                  v25,
                                  8,
                                  6,
                                  98);
      if ( !MidiInterfaceDescriptor || v5[292] != 2 )
        goto LABEL_58;
      v5[355] |= 0x200000u;
    }
    v21 = MidiInterfaceDescriptor;
    goto LABEL_58;
  }
  v12 = *((unsigned __int16 *)v5 + 714);
  v5[705] = 1073807364;
  LODWORD(v26) = -1073741811;
  LODWORD(v24) = v12;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CONFIG_DESC_VALIDATION_FAILURE, v24, v26);
  UsbhException(a1, *((_WORD *)v5 + 714), 36, (const void *)Pool2, v29, -1073741811, v30, usbfile_bus_c, 3911, 0);
  ExFreePoolWithTag((PVOID)Pool2, 0);
  return 3221225485LL;
}
