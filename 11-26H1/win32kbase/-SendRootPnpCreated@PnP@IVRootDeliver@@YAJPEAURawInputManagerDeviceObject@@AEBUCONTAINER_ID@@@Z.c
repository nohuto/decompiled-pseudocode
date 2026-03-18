/*
 * XREFs of ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x140221C60
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140095000 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x14021F408 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x140221B3C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1401B4D38 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1401B71EC (--1CIVSerializer@@UEAA@XZ.c)
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x14021E468 (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerial.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x14021E74C (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSeri.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x140221B10 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x140225A6C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnpCreated(
        IVRootDeliver::PnP *this,
        struct RawInputManagerDeviceObject *a2,
        const struct CONTAINER_ID *a3)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  char *v6; // rcx
  PVOID v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  const struct CONTAINER_ID *v10; // r9
  int v11; // ebx
  struct _UNICODE_STRING v12; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD *v14; // [rsp+40h] [rbp-20h]
  char *v15; // [rsp+80h] [rbp+20h] BYREF

  v12 = 0LL;
  v4 = ((unsigned __int64)this + 72) & -(__int64)(this != 0LL);
  if ( *(_DWORD *)(v4 + 0x30) > 2u )
    return 0LL;
  v6 = *(char **)((((unsigned __int64)this + 72) & -(__int64)(this != 0LL)) + 0x528);
  v7 = 0LL;
  v15 = 0LL;
  if ( v6 )
  {
    result = RawInputManagerDeviceObjectResolveHandle(v6, 3u, 1, (PVOID *)&v15);
    if ( (int)result < 0 )
      return result;
    v7 = v15;
    v12 = *(struct _UNICODE_STRING *)(v15 + 264);
  }
  CIVSerializer::CIVSerializer((__int64)v13, 0);
  v13[0] = &CIVGenericSerializer::`vftable';
  if ( v14 )
  {
    v11 = IVMeasureRimDevForIVPnpCreatePacket((struct RIMDEV *)v4, &v12, (struct CIVPnPCreateSerializer *)v13);
    if ( v11 >= 0 )
    {
      v11 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v13);
      if ( v11 >= 0 )
      {
        v11 = IVSerializeRimDevForIVPnpCreatePacket((struct RIMDEV *)v4, &v12, (struct CIVPnPCreateSerializer *)v13);
        if ( v11 >= 0 )
        {
          *v14 = 1;
          v11 = IVRootDeliver::PnP::Detail::SendPnP(
                  (IVRootDeliver::PnP::Detail *)v13,
                  (const struct CIVSerializer *)*(unsigned int *)(v4 + 48),
                  (__int64)a2,
                  v10);
        }
      }
    }
  }
  else
  {
    v11 = -1073741801;
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  v13[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v13, v8, v9, (__int64)v10);
  return (unsigned int)v11;
}
