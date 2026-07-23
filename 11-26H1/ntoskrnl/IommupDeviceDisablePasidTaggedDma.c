/*
 * XREFs of IommupDeviceDisablePasidTaggedDma @ 0x140785058
 * Callers:
 *     IommupDeviceDisableSvm @ 0x140B679EC (IommupDeviceDisableSvm.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HalpIommuFreeDomainId @ 0x140535968 (HalpIommuFreeDomainId.c)
 *     IommupDeviceGetPasidDevice @ 0x14058A458 (IommupDeviceGetPasidDevice.c)
 *     IommupPasidDeviceDelete @ 0x14058AC50 (IommupPasidDeviceDelete.c)
 *     IommuDisableDevicePasid @ 0x14059E170 (IommuDisableDevicePasid.c)
 *     IommupUnmapDeviceInternal @ 0x14059FB94 (IommupUnmapDeviceInternal.c)
 *     IommupHvDetachPasidDevice @ 0x1405A07C8 (IommupHvDetachPasidDevice.c)
 */

__int64 __fastcall IommupDeviceDisablePasidTaggedDma(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rdx
  __int64 v6; // rsi
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  unsigned int v11; // ebp
  struct _KLOCK_ENTRIES *v12; // r9
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rsi
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v16 = 0LL;
  if ( !IommupDeviceGetPasidDevice(a1, a2, 0, (struct _KLOCK_ENTRIES *)&v16) )
    return 3221225473LL;
  v6 = v16;
  if ( HalpHvIommu )
  {
    IommupHvDetachPasidDevice(a1, v4);
  }
  else
  {
    v7 = *(__int64 **)(v16 + 56);
    v2 = *(_DWORD *)(*v7 + 16);
    IommuDisableDevicePasid((__int64)v7, a1);
    IommupUnmapDeviceInternal(*v7, a1);
  }
  v11 = IommupPasidDeviceDelete(v6, v8, v9, v10);
  if ( !HalpHvIommu )
    HalpIommuFreeDomainId(*(_QWORD *)(a1 + 32), v2);
  v13 = (AutoBoost *)KeAbPreAcquire(a1 + 368, 0LL, 0LL, v12);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 368), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 368), v13, a1 + 368);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v14);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  if ( *(_QWORD *)(a1 + 352) != a1 + 352 )
    v11 = -1073740024;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 368), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 368));
  KeAbPostRelease(a1 + 368);
  *(_DWORD *)(a1 + 376) &= 0xFFFFFF03;
  return v11;
}
