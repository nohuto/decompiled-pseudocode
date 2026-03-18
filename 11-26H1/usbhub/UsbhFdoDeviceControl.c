/*
 * XREFs of UsbhFdoDeviceControl @ 0x14001BCE0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x14001A440 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhIoctlGetHubCaps @ 0x1400246CC (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x140024AB8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x140025250 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1400258B0 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140026290 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhFdoChainIrp @ 0x14003B12C (UsbhFdoChainIrp.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhIoctlCyclePort @ 0x14004CF64 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetHubCapsEx @ 0x14004D280 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x14004D550 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004D834 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DAC4 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfo @ 0x14004DE48 (UsbhIoctlGetNodeConnectionInfo.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004DEE0 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x14004E1D8 (UsbhIoctlResetStuckHub.c)
 */

__int64 __fastcall UsbhFdoDeviceControl(__int64 a1, IRP *a2)
{
  __int64 CurrentStackLocation; // rbp
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rdx
  _DWORD *v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v5 = *(_DWORD *)(CurrentStackLocation + 24);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884))
           + *(_QWORD *)(v6 + 888);
        *(_DWORD *)v7 = 1869169734;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = (v5 >> 2) & 0xFFF;
        *(_QWORD *)(v7 + 24) = a2;
      }
    }
  }
  if ( KeGetCurrentIrql() )
  {
    UsbhException(a1, 0, 93, 0LL, 0, -1073741811, (v5 >> 2) & 0xFFF, usbfile_hub_c, 1431, 0);
    a2->IoStatus.Status = -1073741811;
    IofCompleteRequest(a2, 0);
    return 3221225485LL;
  }
  else
  {
    v8 = FdoExt(a1);
    Usbh_SSH_Event(a1, 6u, (__int64)(v8 + 434));
    switch ( v5 )
    {
      case 0x220448u:
        if ( (UsbhLogMask & 0x20) != 0 )
        {
          if ( a1 )
          {
            v10 = *(_QWORD *)(a1 + 64);
            if ( v10 )
            {
              v11 = *(_QWORD *)(v10 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
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
        return UsbhIoctlGetNodeConnectionInfoExApi(a1, a2, CurrentStackLocation, 1);
      case 0x220410u:
        return UsbhIoctlGetDescriptorFromNodeConnection(a1, (_DWORD)a2);
      case 0x220408u:
        return UsbhIoctlGetNodeInformation(a1, a2, CurrentStackLocation);
      case 0x220414u:
        return UsbhIoctlGetNodeConnectionName(a1, a2, CurrentStackLocation);
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
              result = UsbhIoctlGetHubCaps(a1, a2, CurrentStackLocation);
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
              result = UsbhIoctlGetNodeConnectionInfoExV2(a1, a2, CurrentStackLocation);
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
