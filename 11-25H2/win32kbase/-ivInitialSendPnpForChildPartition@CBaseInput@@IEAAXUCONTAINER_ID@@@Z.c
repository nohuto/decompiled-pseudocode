/*
 * XREFs of ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x14021AA94
 * Callers:
 *     ?ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z @ 0x14021ABB0 (-ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x14002E578 (RimInputTypeToDeviceInputType.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsExemptInjectionDevice @ 0x1401284F0 (IsExemptInjectionDevice.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x14021E3E8 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x14021E50C (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x14021E644 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall CBaseInput::ivInitialSendPnpForChildPartition(__int64 a1, unsigned int a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 i; // rdi
  const struct CONTAINER_ID *v7; // r8
  const struct CONTAINER_ID *v8; // r9
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v2 = *(struct W32_PUSH_LOCK **)(a1 + 1232);
  W32AcquirePushLockExclusiveEx(v2, 0);
  v4 = (unsigned int)RimInputTypeToDeviceInputType(*(_DWORD *)(a1 + 144));
  IVRootDeliver::PnP::SendRootPnpSyncState(1LL, v4, &v9);
  for ( i = **(_QWORD **)(a1 + 1240); i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(_DWORD *)(i + 48) == (_DWORD)v4
      && !IsExemptInjectionDevice(*(_QWORD *)i, v5)
      && (*(_DWORD *)(i + 184) & 4) == 0 )
    {
      IVRootDeliver::PnP::SendRootPnpCreated(
        *(IVRootDeliver::PnP **)(i + 32),
        (struct RawInputManagerDeviceObject *)&v9,
        v7);
      IVRootDeliver::PnP::SendRootPnp((IVRootDeliver::PnP *)i, (struct DEVICEINFO *)2, (unsigned int)&v9, v8);
    }
  }
  IVRootDeliver::PnP::SendRootPnpSyncState(2LL, (unsigned int)v4, &v9);
  W32ReleasePushLockExclusiveEx(v2, 0LL);
}
