/*
 * XREFs of ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1400A18CC
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x140080DC0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIovInitVf@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400E0DE0 (-ndisIovInitVf@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisMSetSriovAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  NTSTATUS LocallyUniqueId; // ebx
  _NDIS_SRIOV_CAPABILITIES *HardwareSriovCapabilities; // rax
  size_t v6; // rsi
  _NDIS_SRIOV_CAPABILITIES *CurrentSriovCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchHwCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  _NDIS_SRIOV_CAPABILITIES *Pool2; // rax
  _NDIS_SRIOV_CAPABILITIES *v11; // rdx
  size_t Size; // r8
  _NDIS_SRIOV_CAPABILITIES *v13; // rax
  _NDIS_SRIOV_CAPABILITIES *v14; // rax
  _NDIS_SRIOV_CAPABILITIES *v15; // rdx
  _NDIS_SRIOV_CAPABILITIES *TopSriovCurrentCapabilities; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovHwCapabilities; // rcx

  LocallyUniqueId = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x89u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      a2);
  HardwareSriovCapabilities = a2->HardwareSriovCapabilities;
  if ( !HardwareSriovCapabilities->Header.Revision
    || (v6 = 12LL, HardwareSriovCapabilities->Header.Size < 0xCu)
    || (CurrentSriovCapabilities = a2->CurrentSriovCapabilities, !CurrentSriovCapabilities->Header.Revision)
    || CurrentSriovCapabilities->Header.Size < 0xCu
    || (HardwareSriovCapabilities->SriovCapabilities & 3) == 3
    && ((NicSwitchHwCapabilities = a1->NicSwitchHwCapabilities) == 0LL || NicSwitchHwCapabilities->Header.Revision < 2u)
    || (CurrentSriovCapabilities->SriovCapabilities & 3) == 3
    && ((NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities) == 0LL
     || NicSwitchCurrentCapabilities->Header.Revision < 2u) )
  {
    LocallyUniqueId = -1073741811;
    goto LABEL_33;
  }
  if ( a1->SriovCurrentCapabilities || a1->SriovHwCapabilities )
  {
    LocallyUniqueId = -1073676283;
    goto LABEL_39;
  }
  Pool2 = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePool2(64LL, 12LL, 1869169742LL);
  a1->SriovHwCapabilities = Pool2;
  if ( !Pool2 )
  {
LABEL_16:
    LocallyUniqueId = -1073741670;
LABEL_33:
    TopSriovCurrentCapabilities = a1->TopSriovCurrentCapabilities;
    if ( TopSriovCurrentCapabilities )
    {
      ExFreePoolWithTag(TopSriovCurrentCapabilities, 0);
      a1->TopSriovCurrentCapabilities = 0LL;
    }
    SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
    if ( SriovCurrentCapabilities )
    {
      ExFreePoolWithTag(SriovCurrentCapabilities, 0);
      a1->SriovCurrentCapabilities = 0LL;
    }
    SriovHwCapabilities = a1->SriovHwCapabilities;
    if ( SriovHwCapabilities )
    {
      ExFreePoolWithTag(SriovHwCapabilities, 0);
      a1->SriovHwCapabilities = 0LL;
    }
    goto LABEL_39;
  }
  v11 = a2->HardwareSriovCapabilities;
  Size = v11->Header.Size;
  if ( v11->Header.Size >= 0xCu )
    Size = 12LL;
  memmove(Pool2, v11, Size);
  if ( (a2->CurrentSriovCapabilities->SriovCapabilities & 3) != 3 || ndisSystemSupportsSriov )
  {
    v13 = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePool2(64LL, 12LL, 1869169742LL);
    a1->SriovCurrentCapabilities = v13;
    if ( !v13 )
      goto LABEL_16;
    v14 = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePool2(64LL, 12LL, 1869169742LL);
    a1->TopSriovCurrentCapabilities = v14;
    if ( !v14 )
      goto LABEL_16;
    v15 = a2->CurrentSriovCapabilities;
    if ( v15->Header.Size < 0xCu )
      v6 = v15->Header.Size;
    memmove(a1->SriovCurrentCapabilities, v15, v6);
    memmove(a1->TopSriovCurrentCapabilities, a2->CurrentSriovCapabilities, v6);
    LocallyUniqueId = ZwAllocateLocallyUniqueId(&a1->SriovLuid);
    if ( (LocallyUniqueId
       || (a2->CurrentSriovCapabilities->SriovCapabilities & 5) == 5 && (LocallyUniqueId = ndisIovInitVf(a1)) != 0)
      && LocallyUniqueId < 0
      && LocallyUniqueId != -1073676283 )
    {
      goto LABEL_33;
    }
  }
LABEL_39:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x8Au,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      (char)a2,
      LocallyUniqueId);
  return (unsigned int)LocallyUniqueId;
}
