/*
 * XREFs of UsbhGetDeviceInformation @ 0x14003947C
 * Callers:
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x140046E6C (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhGetUsbDeviceFlags @ 0x140031854 (UsbhGetUsbDeviceFlags.c)
 *     Usbh_HubGetUsbDescriptors @ 0x14003914C (Usbh_HubGetUsbDescriptors.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1400418B8 (UsbhParseConfigurationDescriptorEx.c)
 *     FindMidiInterfaceDescriptor @ 0x140045A34 (FindMidiInterfaceDescriptor.c)
 *     UsbhValidateConfigurationDescriptor @ 0x14005BCEC (UsbhValidateConfigurationDescriptor.c)
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
  unsigned __int64 v12; // r15
  char v13; // al
  unsigned __int8 *v14; // rcx
  _BYTE *v15; // rdx
  char v16; // al
  int v17; // eax
  char v18; // cl
  __int64 v19; // rax
  __int64 v20; // rsi
  char v21; // al
  __int64 MidiInterfaceDescriptor; // rax
  int v23; // [rsp+20h] [rbp-40h]
  int v24; // [rsp+20h] [rbp-40h]
  __int64 v25; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+50h] BYREF
  int v28; // [rsp+B8h] [rbp+58h] BYREF

  v28 = 0;
  v3 = 0;
  v4 = 255;
  LODWORD(v25) = 18;
  v5 = PdoExt(a2);
  v27 = 255;
  v6 = 255LL;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(64LL, v6, 1112885333LL);
    if ( !Pool2 )
      return 3221225626LL;
    UsbDescriptors = Usbh_HubGetUsbDescriptors(
                       a1,
                       *((_QWORD *)v5 + 145),
                       (__int64)(v5 + 350),
                       (__int64)&v25,
                       Pool2,
                       (__int64)&v27);
    if ( UsbDescriptors < 0 )
      break;
    v8 = *(unsigned __int16 *)(Pool2 + 2);
    if ( v27 >= v8 || v3 )
      break;
    v27 = *(unsigned __int16 *)(Pool2 + 2);
    v4 = v8;
    ExFreePoolWithTag((PVOID)Pool2, 0);
    v6 = v27;
    v3 = 1;
  }
  if ( (UsbDescriptors & 0xC0000000) == 0xC0000000 )
  {
    v5[705] = 1073807367;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_GET_DESCRIPTORS_FAILURE);
    UsbhException(
      a1,
      *((_WORD *)v5 + 714),
      36,
      (const void *)Pool2,
      v27,
      UsbDescriptors,
      -1,
      usbfile_bus_c,
      3878,
      0,
      v25);
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)UsbDescriptors;
  }
  UsbDeviceFlags = UsbhGetUsbDeviceFlags(a1, a2);
  if ( (UsbDeviceFlags & 0xC0000000) == 0xC0000000 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_REGISTRY_FAILURE);
    return (unsigned int)UsbDeviceFlags;
  }
  if ( (unsigned __int8)UsbhValidateConfigurationDescriptor(Pool2, v27, &v28, dword_1400706D0 != 0) )
  {
    if ( UsbDeviceFlags >= 0 && v4 < *(_WORD *)(Pool2 + 2) )
      *(_WORD *)(Pool2 + 2) = v4;
    v12 = Pool2 + *(unsigned __int16 *)(Pool2 + 2);
    if ( *((_BYTE *)v5 + 1417) > 1u )
    {
      v5[701] |= 0x80u;
      if ( *((_BYTE *)v5 + 1417) > 1u && *(_BYTE *)(Pool2 + 4) > 1u )
      {
        v13 = *((_BYTE *)v5 + 1404);
        if ( !v13 || v13 == -17 && *((_BYTE *)v5 + 1405) == 2 && *((_BYTE *)v5 + 1406) == 1 )
        {
          v14 = (unsigned __int8 *)(Pool2 + 9);
          while ( (unsigned __int64)v14 < v12 )
          {
            v15 = v14;
            v14 += *v14;
            v16 = v15[1];
            if ( v16 == 11 && v15[4] == 1 || v16 == 4 && v15[5] == 1 )
            {
              v5[355] |= 0x20u;
              break;
            }
          }
        }
      }
    }
    v17 = v5[355];
    if ( (v17 & 0x20) == 0 && *((_BYTE *)v5 + 1417) == 1 && *(_BYTE *)(Pool2 + 4) > 1u )
    {
      v18 = *((_BYTE *)v5 + 1404);
      if ( !v18 || v18 == -17 && *((_BYTE *)v5 + 1405) == 2 && *((_BYTE *)v5 + 1406) == 1 )
      {
        v5[355] = v17 | 0x20;
LABEL_59:
        if ( (*(_BYTE *)(Pool2 + 7) & 0x20) != 0 )
          v5[355] |= 0x100u;
        *((_QWORD *)v5 + 299) = Pool2;
        return (unsigned int)UsbDeviceFlags;
      }
    }
    v19 = UsbhParseConfigurationDescriptorEx(a1, Pool2, Pool2, -1, v23, -1, -1, -1);
    v20 = v19;
    if ( !v19 || v12 - v19 < 9 )
      goto LABEL_59;
    v21 = *(_BYTE *)(v19 + 5);
    if ( v21 == 9 )
    {
      v5[355] |= 4u;
LABEL_58:
      *(_QWORD *)((char *)v5 + 2433) = *(_QWORD *)v20;
      *((_BYTE *)v5 + 2441) = *(_BYTE *)(v20 + 8);
      goto LABEL_59;
    }
    if ( v21 == 1 )
    {
      MidiInterfaceDescriptor = FindMidiInterfaceDescriptor(a1, Pool2, v20);
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
                                  v20,
                                  *(unsigned __int8 *)(v20 + 2),
                                  v24,
                                  8,
                                  6,
                                  98);
      if ( !MidiInterfaceDescriptor || v5[292] != 2 )
        goto LABEL_58;
      v5[355] |= 0x200000u;
    }
    v20 = MidiInterfaceDescriptor;
    goto LABEL_58;
  }
  v5[705] = 1073807364;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CONFIG_DESC_VALIDATION_FAILURE);
  UsbhException(a1, *((_WORD *)v5 + 714), 36, (const void *)Pool2, v27, -1073741811, v28, usbfile_bus_c, 3911, 0, v25);
  ExFreePoolWithTag((PVOID)Pool2, 0);
  return 3221225485LL;
}
