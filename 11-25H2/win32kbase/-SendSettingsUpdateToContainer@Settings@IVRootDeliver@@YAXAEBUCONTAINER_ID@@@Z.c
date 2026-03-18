/*
 * XREFs of ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140217458
 * Callers:
 *     BroadcastSettingsUpdateToAllContainers @ 0x1400A8400 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x14021AB60 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x14019B67C (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x14019C368 (--1CIVSerializer@@UEAA@XZ.c)
 *     PackMouseSettings @ 0x140217138 (PackMouseSettings.c)
 *     PackPenSettings @ 0x140217190 (PackPenSettings.c)
 *     PackTouchpadSettings @ 0x1402171E8 (PackTouchpadSettings.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x14021AFF0 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x14021B160 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall IVRootDeliver::Settings::SendSettingsUpdateToContainer(
        IVRootDeliver::Settings *this,
        const struct CONTAINER_ID *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v7; // [rsp+30h] [rbp-28h]

  CIVSerializer::CIVSerializer((__int64)v6, 9);
  v6[0] = &CIVGenericSerializer::`vftable';
  if ( v7 )
  {
    PackTouchpadSettings(v7, v3);
    PackMouseSettings(v7, v4);
    PackPenSettings(v7, v5);
    if ( *(_WORD *)this || *((_WORD *)this + 1) )
      ivrIVSend((const struct CIVSerializer *)v6, 3u, this);
    else
      ivrIVBroadcast((const struct CIVSerializer *)v6, 3u, this);
  }
  v6[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v6);
}
