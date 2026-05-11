/*
 * XREFs of USBHwSelectAudioConfiguration @ 0x140035AB0
 * Callers:
 *     USBDeviceStart @ 0x140040220 (USBDeviceStart.c)
 * Callees:
 *     memmove @ 0x14001C7C0 (memmove.c)
 *     USBHwAllocateAndBag @ 0x14002D6A0 (USBHwAllocateAndBag.c)
 *     USBHwCreateInterfaceList @ 0x14003540C (USBHwCreateInterfaceList.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x14003BE20 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwSelectAudioConfiguration(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v3; // r15
  struct _USB_CONFIGURATION_DESCRIPTOR *v4; // r14
  int v5; // ebx
  PUSBD_INTERFACE_LIST_ENTRY v6; // r12
  struct _URB *ConfigurationRequest; // rax
  struct _URB *v8; // rdi
  int v9; // eax
  unsigned int v10; // esi
  void *v11; // r9
  PUSB_INTERFACE_DESCRIPTOR InterfaceDescriptor; // r13
  PUSBD_INTERFACE_LIST_ENTRY InterfaceList; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  InterfaceList = 0LL;
  v3 = *(_QWORD **)(v1 + 72);
  v4 = (struct _USB_CONFIGURATION_DESCRIPTOR *)v3[5];
  v5 = USBHwCreateInterfaceList(a1, &InterfaceList);
  if ( v5 >= 0 )
  {
    v6 = InterfaceList;
    ConfigurationRequest = USBD_CreateConfigurationRequestEx(v4, InterfaceList);
    v8 = ConfigurationRequest;
    if ( ConfigurationRequest )
    {
      v9 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), ConfigurationRequest, 0LL);
      v5 = v9;
      if ( v8->UrbHeader.Status >= 0 )
      {
        if ( v9 >= 0 )
        {
          v10 = 0;
          v3[3] = v8->UrbSelectConfiguration.ConfigurationHandle;
          if ( !v4->bNumInterfaces )
            goto LABEL_11;
          do
          {
            v11 = *(void **)(a1 + 8);
            InterfaceList = (PUSBD_INTERFACE_LIST_ENTRY)&v6[v10].Interface;
            InterfaceDescriptor = InterfaceList->InterfaceDescriptor;
            v5 = USBHwAllocateAndBag(
                   (PVOID *)&InterfaceList->InterfaceDescriptor,
                   *(unsigned __int16 *)InterfaceList->InterfaceDescriptor,
                   64LL,
                   v11);
            if ( v5 >= 0 )
              memmove(
                InterfaceList->InterfaceDescriptor,
                InterfaceDescriptor,
                *(unsigned __int16 *)&InterfaceDescriptor->bLength);
            ++v10;
          }
          while ( v10 < v4->bNumInterfaces );
          if ( v5 >= 0 )
LABEL_11:
            v3[2] = v6;
        }
      }
      else
      {
        v5 = -1073741808;
      }
      ExFreePool(v8);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
