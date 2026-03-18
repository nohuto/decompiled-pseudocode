/*
 * XREFs of ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x140221D98
 * Callers:
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x14021F408 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1401B4D38 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1401B71EC (--1CIVSerializer@@UEAA@XZ.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x140221B10 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnpSyncState(int a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  const struct CONTAINER_ID *v9; // r9
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v12; // [rsp+30h] [rbp-28h]

  v5 = 0;
  CIVSerializer::CIVSerializer((__int64)v11, 2);
  v11[0] = &CIVGenericSerializer::`vftable';
  if ( v12 )
  {
    *v12 = a1;
    v5 = IVRootDeliver::PnP::Detail::SendPnP(
           (IVRootDeliver::PnP::Detail *)v11,
           (const struct CIVSerializer *)a2,
           a3,
           v9);
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v11, v7, v8, (__int64)v9);
  return v5;
}
