/*
 * XREFs of ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x14021E3E8
 * Callers:
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018A890 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018AA00 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140210910 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x14021AA94 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x14019B67C (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x14019C368 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x14021E3BC (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x14021E50C (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x14022411C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x140224CE0 (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnp(
        IVRootDeliver::PnP *this,
        struct DEVICEINFO *a2,
        struct RawInputManagerDeviceObject *a3,
        const struct CONTAINER_ID *a4)
{
  int v5; // esi
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  const struct CONTAINER_ID *v11; // r9
  _QWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]

  v5 = (int)a2;
  if ( *((_DWORD *)this + 12) > 2u )
    return 0LL;
  if ( (_DWORD)a2 == 2 )
  {
    v8 = *((_DWORD *)this + 42);
    if ( v8 < 0 )
    {
      *((_DWORD *)this + 42) = v8 & 0x7FFFFFFF;
      IVRootDeliver::PnP::SendRootPnpCreated(*((IVRootDeliver::PnP **)this + 4), a3, a3);
    }
  }
  CIVSerializer::CIVSerializer((__int64)v12, 1);
  v12[0] = &CIVGenericSerializer::`vftable';
  if ( v13 )
  {
    v9 = CIVSerializer::Serialize(
           (CIVSerializer *)v12,
           (struct _UNICODE_STRING *)(v13 + 8),
           (const struct _UNICODE_STRING *)this + 12,
           1);
    if ( v9 >= 0 )
    {
      v9 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v12);
      if ( v9 >= 0 )
      {
        v10 = v13;
        *(_DWORD *)v13 = v5;
        *(_DWORD *)(v10 + 24) = *((_DWORD *)this + 12);
        v9 = CIVSerializer::Serialize(
               (CIVSerializer *)v12,
               (struct _UNICODE_STRING *)(v10 + 8),
               (const struct _UNICODE_STRING *)this + 12,
               0);
        if ( v9 >= 0 )
        {
          *(_DWORD *)v13 = v5;
          v9 = IVRootDeliver::PnP::Detail::SendPnP(
                 (IVRootDeliver::PnP::Detail *)v12,
                 (const struct CIVSerializer *)*((unsigned int *)this + 12),
                 (__int64)a3,
                 v11);
        }
      }
    }
  }
  else
  {
    v9 = -1073741801;
  }
  v12[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v12);
  return (unsigned int)v9;
}
