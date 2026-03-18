/*
 * XREFs of UsbhInternalValidateDeviceCapabilityDescriptor @ 0x14005B5FC
 * Callers:
 *     UsbhValidateBOSDescriptorSet @ 0x14005BBC0 (UsbhValidateBOSDescriptorSet.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhInternalValidateBillboardCapabilityDescriptor @ 0x14005B330 (UsbhInternalValidateBillboardCapabilityDescriptor.c)
 *     UsbhInternalValidateContainerIDCapabilityDescriptor @ 0x14005B558 (UsbhInternalValidateContainerIDCapabilityDescriptor.c)
 *     UsbhInternalValidatePlatformCapabilityDescriptor @ 0x14005B82C (UsbhInternalValidatePlatformCapabilityDescriptor.c)
 *     UsbhInternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x14005BA88 (UsbhInternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 */

char __fastcall UsbhInternalValidateDeviceCapabilityDescriptor(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v5; // rdx
  char v7; // r10
  int v8; // r8d
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // eax
  _QWORD *v18; // rax
  __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  v5 = *a2;
  v7 = 1;
  if ( (unsigned __int8)v5 < 3u )
  {
    v8 = 1447183409;
LABEL_3:
    Log(a1, 256, v8, v5, 0LL);
    return 0;
  }
  switch ( a2[2] )
  {
    case 2u:
      if ( (_BYTE)v5 != 7 )
      {
        v8 = 1448423985;
        goto LABEL_3;
      }
      v17 = *(_DWORD *)(a2 + 3);
      if ( (v17 & 0xFFFF00E1) != 0 )
        Log(a1, 256, 1448423986, v17, 0LL);
      v18 = *(_QWORD **)(a3 + 24);
      if ( !*v18 )
      {
        *v18 = a2;
        return v7;
      }
      v11 = 1447183410;
      goto LABEL_39;
    case 3u:
      v7 = UsbhInternalValidateSuperSpeedDeviceCapabilityDescriptor(a1, a2);
      if ( !v7 )
        return 0;
      v16 = *(_QWORD *)(a3 + 24);
      if ( *(_QWORD *)(v16 + 8) )
      {
        v11 = 1447183411;
        goto LABEL_39;
      }
      *(_QWORD *)(v16 + 8) = a2;
      break;
    case 4u:
      v7 = UsbhInternalValidateContainerIDCapabilityDescriptor(a1, a2);
      if ( !v7 )
        return 0;
      v15 = *(_QWORD *)(a3 + 24);
      if ( *(_QWORD *)(v15 + 16) )
      {
        v11 = 1447183412;
        goto LABEL_39;
      }
      *(_QWORD *)(v15 + 16) = a2;
      break;
    case 5u:
      v19 = 0LL;
      v7 = UsbhInternalValidatePlatformCapabilityDescriptor(a1, a2, &v19);
      if ( !v7 )
        return 0;
      if ( v19 )
      {
        v12 = *(_QWORD *)(a3 + 24);
        if ( *(_QWORD *)(v12 + 24) )
        {
          Log(a1, 256, 1447183414, 0LL, 0LL);
          v7 = 0;
        }
        else
        {
          *(_QWORD *)(v12 + 24) = v19;
        }
      }
      v13 = *(_QWORD *)(a2 + 4) - *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1;
      if ( !v13 )
        v13 = *(_QWORD *)(a2 + 12) - *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4;
      if ( !v13 )
      {
        v14 = *(_QWORD *)(a3 + 24);
        if ( *(_QWORD *)(v14 + 32) )
        {
          v11 = 1447183415;
          goto LABEL_39;
        }
        *(_QWORD *)(v14 + 32) = a2;
      }
      break;
    case 0xDu:
      v7 = UsbhInternalValidateBillboardCapabilityDescriptor(a1, a2);
      if ( !v7 )
        return 0;
      v10 = *(_QWORD *)(a3 + 24);
      if ( *(_QWORD *)(v10 + 40) )
      {
        v11 = 1447183416;
LABEL_39:
        Log(a1, 256, v11, 0LL, 0LL);
        return 0;
      }
      *(_QWORD *)(v10 + 40) = a2;
      break;
  }
  return v7;
}
