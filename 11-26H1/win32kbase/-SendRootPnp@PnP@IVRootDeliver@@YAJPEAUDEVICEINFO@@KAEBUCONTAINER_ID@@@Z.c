/*
 * XREFs of ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x140221B3C
 * Callers:
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140180860 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018D1D0 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140218680 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x14021F408 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1401B4D38 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1401B71EC (--1CIVSerializer@@UEAA@XZ.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x140221B10 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x140221C60 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x140225A6C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x14022663C (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnp(
        IVRootDeliver::PnP *this,
        struct DEVICEINFO *a2,
        struct RawInputManagerDeviceObject *a3,
        const struct CONTAINER_ID *a4)
{
  int v5; // esi
  int v8; // eax
  __int64 v9; // r8
  const struct CONTAINER_ID *v10; // r9
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rdx
  _QWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]

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
  CIVSerializer::CIVSerializer((__int64)v14, 1);
  v11 = v15;
  v14[0] = &CIVGenericSerializer::`vftable';
  if ( v15 )
  {
    v12 = CIVSerializer::Serialize(
            (CIVSerializer *)v14,
            (struct _UNICODE_STRING *)(v15 + 8),
            (const struct _UNICODE_STRING *)this + 12,
            1);
    if ( v12 >= 0 )
    {
      v12 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v14);
      if ( v12 >= 0 )
      {
        v13 = v15;
        *(_DWORD *)v15 = v5;
        *(_DWORD *)(v13 + 24) = *((_DWORD *)this + 12);
        v12 = CIVSerializer::Serialize(
                (CIVSerializer *)v14,
                (struct _UNICODE_STRING *)(v13 + 8),
                (const struct _UNICODE_STRING *)this + 12,
                0);
        if ( v12 >= 0 )
        {
          *(_DWORD *)v15 = v5;
          v12 = IVRootDeliver::PnP::Detail::SendPnP(
                  (IVRootDeliver::PnP::Detail *)v14,
                  (const struct CIVSerializer *)*((unsigned int *)this + 12),
                  (__int64)a3,
                  v10);
        }
      }
    }
  }
  else
  {
    v12 = -1073741801;
  }
  v14[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v14, v11, v9, (__int64)v10);
  return (unsigned int)v12;
}
