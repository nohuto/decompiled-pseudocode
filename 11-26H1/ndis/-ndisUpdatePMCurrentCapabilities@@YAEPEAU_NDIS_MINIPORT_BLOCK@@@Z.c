/*
 * XREFs of ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140085370
 * Callers:
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x14016AD60 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z @ 0x140168F70 (-ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z.c)
 */

bool __fastcall ndisUpdatePMCurrentCapabilities(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int128 v2; // xmm1
  unsigned int MediaSpecificWakeUpEvents; // eax
  __int128 v4; // xmm0
  unsigned int Flags; // ecx
  _DEVICE_POWER_STATE DeviceWake; // eax
  unsigned int Value; // eax
  __int64 v8; // rdx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  KIRQL v12; // dl
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int SupportedProtocolOffloads; // ecx
  unsigned int PnPCapabilities; // eax
  unsigned int v18; // r8d
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // ecx
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // ecx
  unsigned int SupportedWoLPacketPatterns; // eax
  __int128 v23; // [rsp+40h] [rbp-48h]
  __int128 v24; // [rsp+50h] [rbp-38h]
  __int128 v25; // [rsp+60h] [rbp-28h]
  __int64 v26; // [rsp+70h] [rbp-18h]

  v23 = *(_OWORD *)&a1->PMAdvertisedCapabilities.Header.Type;
  v24 = *(_OWORD *)&a1->PMAdvertisedCapabilities.MaxWoLPatternSize;
  v25 = *(_OWORD *)&a1->PMAdvertisedCapabilities.NumArpOffloadIPv4Addresses;
  v26 = *(_QWORD *)&a1->PMAdvertisedCapabilities.MinLinkChangeWakeUp;
  v2 = *(_OWORD *)&a1->PMHardwareCapabilities.MaxWoLPatternSize;
  MediaSpecificWakeUpEvents = a1->PMHardwareCapabilities.MediaSpecificWakeUpEvents;
  *(_OWORD *)&a1->PMAdvertisedCapabilities.Header.Type = *(_OWORD *)&a1->PMHardwareCapabilities.Header.Type;
  v4 = *(_OWORD *)&a1->PMHardwareCapabilities.NumArpOffloadIPv4Addresses;
  *(_OWORD *)&a1->PMAdvertisedCapabilities.MaxWoLPatternSize = v2;
  *(_QWORD *)&v2 = *(_QWORD *)&a1->PMHardwareCapabilities.MinLinkChangeWakeUp;
  *(_OWORD *)&a1->PMAdvertisedCapabilities.NumArpOffloadIPv4Addresses = v4;
  *(_QWORD *)&a1->PMAdvertisedCapabilities.MinLinkChangeWakeUp = v2;
  a1->PMAdvertisedCapabilities.MediaSpecificWakeUpEvents = MediaSpecificWakeUpEvents;
  *(_QWORD *)&a1->PMAdvertisedCapabilities.Flags = 0LL;
  a1->PMAdvertisedCapabilities.SupportedProtocolOffloads = 0;
  *(_QWORD *)&a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp = 0LL;
  a1->PMAdvertisedCapabilities.MinLinkChangeWakeUp = NdisDeviceStateUnspecified;
  Flags = a1->PMHardwareCapabilities.Flags;
  if ( (Flags & 0x10) != 0 )
    a1->PMAdvertisedCapabilities.Flags = 16;
  if ( (a1->PnPFlags & 1) != 0 && (a1->PnPCapabilities & 8) == 0 )
  {
    DeviceWake = a1->DeviceCaps.DeviceWake;
    if ( DeviceWake == PowerDeviceD1 || (unsigned int)(DeviceWake - 3) <= 1 )
    {
      if ( a1->DeviceCaps.SystemWake )
      {
        if ( (Flags & 4) != 0 && !ndisDefaultNapsState )
        {
          Value = a1->PMAdminConfig.Value;
          if ( (Value & 0xC000) == 0 )
            a1->PMAdminConfig.Value = Value & 0xFFFF0FFF | 0xA000;
        }
        if ( (a1->Flags & 0x80u) != 0
          && (a1->Flags & 0x100) == 0
          && (a1->PMAdminConfig.Value & 0x3000) == 0x2000
          && (v8 = a1->PMHardwareCapabilities.Flags, (v8 & 6) != 0)
          || (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x1Eu)
          && (a1->Flags & 0x20000) == 0
          && (DriverHandle = a1->DriverHandle, DriverHandle->IdleNotificationHandler)
          && DriverHandle->CancelIdleNotificationHandler
          && (a1->PMAdminConfig.Value & 0x3000) == 0x2000
          && (v8 = a1->PMHardwareCapabilities.Flags, (v8 & 6) != 0) )
        {
          v10 = a1->PMAdvertisedCapabilities.Flags | 2;
          a1->PMAdvertisedCapabilities.Flags = v10;
          if ( (v8 & 4) != 0 )
          {
            v11 = v10 | 4;
            a1->PMAdvertisedCapabilities.Flags = v11;
            if ( (v8 & 8) != 0 )
            {
              a1->PMAdvertisedCapabilities.Flags = v11 | 8;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qZ(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v8,
                  9u,
                  0x8Fu,
                  (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
                  (char)a1,
                  &a1->pAdapterInstanceName->Length);
            }
          }
        }
        if ( (a1->PMHardwareCapabilities.Flags & 1) != 0 )
          a1->PMAdvertisedCapabilities.Flags |= 1u;
        a1->PMAdvertisedCapabilities.MinLinkChangeWakeUp = a1->PMHardwareCapabilities.MinLinkChangeWakeUp;
        v12 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        if ( ndisAoAcCapable
          || ndisAoAcTest
          || a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x14u)
          || (MinLinkChangeWakeUp = a1->PMAdvertisedCapabilities.MinLinkChangeWakeUp,
              MinLinkChangeWakeUp != NdisDeviceStateD1)
          && (unsigned int)(MinLinkChangeWakeUp - 3) > 1
          || a1->MediaDisconnectTimeOut == 0xFFFF
          || (v14 = a1->PMAdminConfig.Value, (v14 & 0x30) == 0x10)
          || (v14 & 0x3000) == 0x2000
          || a1->MediaType
          || a1->PhysicalMediumType != NdisPhysicalMedium802_3
          || !a1->S0WakeupSupported
          || (a1->Flags & 0x80u) != 0 )
        {
          a1->WSyncFlags &= ~8u;
        }
        else
        {
          a1->WSyncFlags |= 8u;
        }
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v12);
        v15 = a1->PMAdminConfig.Value;
        SupportedProtocolOffloads = a1->PMHardwareCapabilities.SupportedProtocolOffloads;
        a1->PMAdvertisedCapabilities.SupportedProtocolOffloads = SupportedProtocolOffloads;
        if ( (v15 & 0xC0) == 0x40 )
        {
          SupportedProtocolOffloads &= ~1u;
          a1->PMAdvertisedCapabilities.SupportedProtocolOffloads = SupportedProtocolOffloads;
        }
        if ( (v15 & 0x300) == 0x100 )
        {
          SupportedProtocolOffloads &= ~2u;
          a1->PMAdvertisedCapabilities.SupportedProtocolOffloads = SupportedProtocolOffloads;
        }
        if ( (v15 & 0xC00) == 0x400 )
        {
          SupportedProtocolOffloads &= ~0x80u;
          a1->PMAdvertisedCapabilities.SupportedProtocolOffloads = SupportedProtocolOffloads;
        }
        if ( (SupportedProtocolOffloads & 1) == 0 )
        {
          PnPCapabilities = a1->PnPCapabilities;
          if ( (PnPCapabilities & 0x10000000) != 0 && a1->MiniportPhysicalMediumType != NdisPhysicalMediumWirelessWan )
            a1->PnPCapabilities = PnPCapabilities | 0x100;
        }
        v18 = a1->PnPCapabilities;
        if ( (v18 & 0x10) == 0 )
        {
          MinMagicPacketWakeUp = a1->PMHardwareCapabilities.MinMagicPacketWakeUp;
          if ( (MinMagicPacketWakeUp == NdisDeviceStateD1 || (unsigned int)(MinMagicPacketWakeUp - 3) <= 1)
            && ((v18 & 0x100) != 0 || (v15 & 0xC) != 4) )
          {
            a1->PMAdvertisedCapabilities.SupportedWoLPacketPatterns = 2;
            a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp = MinMagicPacketWakeUp;
          }
          MinPatternWakeUp = a1->PMHardwareCapabilities.MinPatternWakeUp;
          if ( (MinPatternWakeUp == NdisDeviceStateD1 || (unsigned int)(MinPatternWakeUp - 3) <= 1)
            && (v15 & 3) != 1
            && (v18 & 0x100) == 0 )
          {
            SupportedWoLPacketPatterns = a1->PMHardwareCapabilities.SupportedWoLPacketPatterns;
            if ( (SupportedWoLPacketPatterns & 1) != 0 )
            {
              a1->PMAdvertisedCapabilities.SupportedWoLPacketPatterns |= 1u;
              a1->PMAdvertisedCapabilities.MinPatternWakeUp = MinPatternWakeUp;
            }
            a1->PMAdvertisedCapabilities.SupportedWoLPacketPatterns |= SupportedWoLPacketPatterns & 0xFFFFFFFC;
          }
        }
      }
    }
  }
  ndisConvertPMCapabilitiesToPnp(&a1->PMAdvertisedCapabilities, &a1->PMCapabilities61);
  return *(_QWORD *)&a1->PMAdvertisedCapabilities.Flags != *(_QWORD *)((char *)&v23 + 4)
      || a1->PMAdvertisedCapabilities.SupportedProtocolOffloads != HIDWORD(v24)
      || *(_QWORD *)&a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp != *((_QWORD *)&v25 + 1)
      || a1->PMAdvertisedCapabilities.MinLinkChangeWakeUp != (_DWORD)v26;
}
