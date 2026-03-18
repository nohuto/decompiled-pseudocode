/*
 * XREFs of ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x14021C628
 * Callers:
 *     BroadcastSettingsUpdateToAllContainers @ 0x1401C5BB0 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x14021F4D0 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     GetMouseSensitivity @ 0x14013FC60 (GetMouseSensitivity.c)
 *     PackTouchpadSettings @ 0x14019C5F0 (PackTouchpadSettings.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1401B4D38 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1401B71EC (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1401BA300 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1401BDB04 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall IVRootDeliver::Settings::SendSettingsUpdateToContainer(
        IVRootDeliver::Settings *this,
        const struct CONTAINER_ID *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rdi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // edx
  int v17; // r8d
  int v18; // ecx
  int v19; // edx
  int v20; // r8d
  int v21; // ecx
  int v22; // edx
  int v23; // r8d
  _QWORD v24[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v25; // [rsp+30h] [rbp-28h]

  CIVSerializer::CIVSerializer((__int64)v24, 9);
  v6 = v25;
  v24[0] = &CIVGenericSerializer::`vftable';
  if ( v25 )
  {
    PackTouchpadSettings(v25, v3, v4);
    *v6 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 19904) + 1988LL);
    v6[1] = GetMouseSensitivity(0LL, v10, v11);
    v15 = *(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 19904);
    v6[2] = *(_DWORD *)(v15 + 4988);
    v18 = *(_DWORD *)(W32GetUserSessionState(v15, v16, v17) + 67112);
    v6[3] = v18;
    v21 = *(_DWORD *)(W32GetUserSessionState(v18, v19, v20) + 67064);
    v6[4] = v21;
    v6[5] = *(_DWORD *)(W32GetUserSessionState(v21, v22, v23) + 67128);
    if ( *(_WORD *)this || *((_WORD *)this + 1) )
      ivrIVSend((const struct CIVSerializer *)v24, 3u, this);
    else
      ivrIVBroadcast((const struct CIVSerializer *)v24, 3u, this);
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v24, v3, v4, v5);
}
