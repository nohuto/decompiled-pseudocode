/*
 * XREFs of ?ndisSetOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B8F30
 * Callers:
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B8950 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqDd @ 0x140022A20 (WPP_RECORDER_SF_qqDd.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x140070440 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisConvertWakeUpEnableToPMConfig@@YAXKPEAU_NDIS_PM_PARAMETERS@@G@Z @ 0x1400B59C8 (-ndisConvertWakeUpEnableToPMConfig@@YAXKPEAU_NDIS_PM_PARAMETERS@@G@Z.c)
 */

__int64 __fastcall ndisSetOpenEnableWakeUp(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  unsigned __int8 *v4; // r14
  bool v7; // cf
  unsigned int v8; // ebx
  int v9; // ecx
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // eax
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // eax
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax
  char v14[4]; // [rsp+40h] [rbp-28h]

  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      a2);
  v7 = a2->DATA.QUERY_INFORMATION.InformationBufferLength < 4;
  *v4 = 1;
  if ( v7 )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 4;
    a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
    v8 = -1073741823;
  }
  else
  {
    LODWORD(a3) = 2;
    v9 = *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( ((v9 & 1) == 0
       || (MinMagicPacketWakeUp = MiniportHandle->PMAdvertisedCapabilities.MinMagicPacketWakeUp,
           MinMagicPacketWakeUp == NdisDeviceStateD1)
       || (unsigned int)(MinMagicPacketWakeUp - 3) <= 1)
      && ((v9 & 2) == 0
       || (MinPatternWakeUp = MiniportHandle->PMAdvertisedCapabilities.MinPatternWakeUp,
           MinPatternWakeUp == NdisDeviceStateD1)
       || (unsigned int)(MinPatternWakeUp - 3) <= 1)
      && ((v9 & 4) == 0
       || (MinLinkChangeWakeUp = MiniportHandle->PMAdvertisedCapabilities.MinLinkChangeWakeUp,
           MinLinkChangeWakeUp == NdisDeviceStateD1)
       || (unsigned int)(MinLinkChangeWakeUp - 3) <= 1) )
    {
      ndisConvertWakeUpEnableToPMConfig(a1->WakeUpEnable, &a1->PMCurrentParameters, 2);
      ndisGetCombinedPMConfig(MiniportHandle, &MiniportHandle->PMCurrentParameters);
      v8 = 0;
      a2->DATA.QUERY_INFORMATION.BytesWritten = 4;
    }
    else
    {
      v8 = -1073741811;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = *v4;
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)a3,
      0x11u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)a2,
      v8,
      *(_DWORD *)v14);
  }
  return v8;
}
