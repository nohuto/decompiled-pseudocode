/*
 * XREFs of UsbhGetAlternateUsbDescriptors @ 0x140046E6C
 * Callers:
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetDeviceInformation @ 0x14003947C (UsbhGetDeviceInformation.c)
 *     UsbhValidateDeviceDescriptor @ 0x14003A018 (UsbhValidateDeviceDescriptor.c)
 *     UsbhBusIf_SetMsOs20Support @ 0x140057A3C (UsbhBusIf_SetMsOs20Support.c)
 *     UsbhValidateBOSDescriptorSet @ 0x14005BBC0 (UsbhValidateBOSDescriptorSet.c)
 *     UsbhGetBosDescriptor @ 0x14005CAF8 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x14005CC9C (UsbhGetDeviceDescriptor.c)
 */

char __fastcall UsbhGetAlternateUsbDescriptors(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v9; // r9
  void *v10; // rcx
  void *v11; // rcx
  int v12; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v12) = 0;
  v6 = PdoExt(a2);
  if ( (int)UsbhGetDeviceDescriptor(a1, a2) < 0 )
    return 0;
  if ( !UsbhValidateDeviceDescriptor(a1, (__int64)(v6 + 350), v7, 0LL, &v12) )
  {
    v6[705] = 1073807365;
    return 0;
  }
  if ( (_BYTE)v12 )
    v6[355] |= 0x40u;
  v9 = *(_QWORD *)(a3 + 24);
  LOBYTE(v9) = *(_BYTE *)(v9 + 6);
  UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v6 + 145), v6 + 350, v9);
  v10 = (void *)*((_QWORD *)v6 + 299);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)v6 + 299) = 0LL;
  }
  if ( (int)UsbhGetDeviceInformation(a1, a2) < 0 )
    return 0;
  if ( *((_WORD *)v6 + 701) > 0x200u && (v6[358] & 0x20000) == 0 )
  {
    v12 = 0;
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_OWORD *)(a3 + 32) = 0LL;
    *(_QWORD *)(a3 + 48) = 0LL;
    v11 = (void *)*((_QWORD *)v6 + 300);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)v6 + 300) = 0LL;
    }
    if ( (int)UsbhGetBosDescriptor(a1, a2, &v12) < 0 )
      return 1;
    if ( !(unsigned __int8)UsbhValidateBOSDescriptorSet(
                             *((_QWORD *)v6 + 148),
                             *((_QWORD *)v6 + 300),
                             (int)v6 + 1400,
                             v12,
                             a3) )
    {
      v6[705] = 1073807378;
      return 0;
    }
  }
  v6[706] |= 4u;
  return 1;
}
