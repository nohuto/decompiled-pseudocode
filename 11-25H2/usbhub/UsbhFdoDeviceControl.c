/*
 * XREFs of UsbhFdoDeviceControl @ 0x140021D60
 * Callers:
 *     <none>
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     UsbhIoctlGetHubCaps @ 0x14001EB4C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x14001EF24 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x14001FB50 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1400202C0 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140020DC0 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1400220E0 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhFdoChainIrp @ 0x14003B6CC (UsbhFdoChainIrp.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     UsbhIoctlCyclePort @ 0x14004D390 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetHubCapsEx @ 0x14004D6AC (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x14004D974 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004DC58 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DEE8 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfo @ 0x14004E26C (UsbhIoctlGetNodeConnectionInfo.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004E304 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x14004E5F8 (UsbhIoctlResetStuckHub.c)
 */

__int64 __fastcall UsbhFdoDeviceControl(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 CurrentStackLocation; // rbp
  unsigned int v5; // edi
  void *DeviceExtension; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rax
  __int64 result; // rax
  void *v10; // rdx
  __int64 v11; // rcx

  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v5 = *(_DWORD *)(CurrentStackLocation + 24);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v7 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v7 = 1869169734;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = (v5 >> 2) & 0xFFF;
        *(_QWORD *)(v7 + 24) = a2;
      }
    }
  }
  if ( KeGetCurrentIrql() )
  {
    UsbhException((__int64)a1, 0, 93, 0LL, 0, -1073741811, (v5 >> 2) & 0xFFF, usbfile_hub_c, 1431, 0);
    a2->IoStatus.Status = -1073741811;
    IofCompleteRequest(a2, 0);
    return 3221225485LL;
  }
  else
  {
    v8 = FdoExt((__int64)a1);
    Usbh_SSH_Event(a1, 6u, (__int64)(v8 + 434));
    switch ( v5 )
    {
      case 0x220448u:
        if ( (UsbhLogMask & 0x20) != 0 )
        {
          if ( a1 )
          {
            v10 = a1->DeviceExtension;
            if ( v10 )
            {
              v11 = *((_QWORD *)v10 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
              *(_DWORD *)v11 = 943615849;
              *(_QWORD *)(v11 + 8) = 0LL;
              *(_QWORD *)(v11 + 16) = a2;
              *(_QWORD *)(v11 + 24) = 0LL;
            }
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            2,
            47,
            (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
        return UsbhIoctlGetNodeConnectionInfoExApi((_DWORD)a1, (_DWORD)a2);
      case 0x220410u:
        return UsbhIoctlGetDescriptorFromNodeConnection((__int64)a1, a2, CurrentStackLocation);
      case 0x220408u:
        return UsbhIoctlGetNodeInformation((__int64)a1, a2, CurrentStackLocation);
      case 0x220414u:
        return UsbhIoctlGetNodeConnectionName((__int64)a1, a2, CurrentStackLocation);
      default:
        if ( v5 > 0x2F0003 )
        {
          return UsbhFdoChainIrp(a1, a2);
        }
        else if ( v5 == 3080195 )
        {
          a2->IoStatus.Status = -1073741808;
          IofCompleteRequest(a2, 0);
          return 3221225488LL;
        }
        else
        {
          switch ( v5 )
          {
            case 0x22040Cu:
              result = UsbhIoctlGetNodeConnectionInfo(a1, a2, CurrentStackLocation);
              break;
            case 0x220420u:
              result = UsbhIoctlGetNodeConnectionDriverKeyName(a1, a2, CurrentStackLocation);
              break;
            case 0x22043Cu:
              result = UsbhIoctlGetHubCaps((__int64)a1, a2, CurrentStackLocation);
              break;
            case 0x220440u:
              result = UsbhIoctlGetNodeConnectionAttributes(a1, a2, CurrentStackLocation);
              break;
            case 0x220444u:
              result = UsbhIoctlCyclePort(a1, a2, CurrentStackLocation);
              break;
            case 0x22044Cu:
              result = UsbhIoctlResetStuckHub(a1, a2);
              break;
            case 0x220450u:
              result = UsbhIoctlGetHubCapsEx(a1, a2, CurrentStackLocation);
              break;
            case 0x220454u:
              result = UsbhIoctlGetHubInformationEx(a1, a2, CurrentStackLocation);
              break;
            case 0x220458u:
              result = UsbhIoctlGetPortConnectorProperties(a1, a2, CurrentStackLocation);
              break;
            case 0x22045Cu:
              result = UsbhIoctlGetNodeConnectionInfoExV2((__int64)a1, a2, CurrentStackLocation);
              break;
            default:
              return UsbhFdoChainIrp(a1, a2);
          }
        }
        break;
    }
  }
  return result;
}
