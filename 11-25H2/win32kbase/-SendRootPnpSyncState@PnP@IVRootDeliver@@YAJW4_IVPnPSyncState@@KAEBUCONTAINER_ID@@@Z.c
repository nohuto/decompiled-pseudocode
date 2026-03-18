/*
 * XREFs of ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x14021E644
 * Callers:
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x14021AA94 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x14019B67C (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x14019C368 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x14021E3BC (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnpSyncState(int a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  const struct CONTAINER_ID *v7; // r9
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v10; // [rsp+30h] [rbp-28h]

  v5 = 0;
  CIVSerializer::CIVSerializer((__int64)v9, 2);
  v9[0] = &CIVGenericSerializer::`vftable';
  if ( v10 )
  {
    *v10 = a1;
    v5 = IVRootDeliver::PnP::Detail::SendPnP((IVRootDeliver::PnP::Detail *)v9, (const struct CIVSerializer *)a2, a3, v7);
  }
  v9[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v9);
  return v5;
}
