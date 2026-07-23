/*
 * XREFs of HalpIommuUnblockDevice @ 0x140505B10
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     HalpIommuQueryAcpiDeviceMapping @ 0x1404ED060 (HalpIommuQueryAcpiDeviceMapping.c)
 *     HalpIommuCheckExceptionList @ 0x1404FB164 (HalpIommuCheckExceptionList.c)
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x14058FB54 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuGetAcpiDeviceMapCount @ 0x140590134 (HalpIommuGetAcpiDeviceMapCount.c)
 *     HalpIommuJoinDmaDomain @ 0x140590474 (HalpIommuJoinDmaDomain.c)
 *     IommupHvAttachDeviceDomain @ 0x14059FFE8 (IommupHvAttachDeviceDomain.c)
 */

__int64 __fastcall HalpIommuUnblockDevice(__int128 *Src, __int64 a2, __int64 *a3)
{
  __int64 v3; // rsi
  int v5; // r8d
  char v6; // di
  char v7; // r15
  __int128 *v8; // rbx
  __int64 v9; // rcx
  int v10; // r8d
  int AcpiDeviceMapping; // eax
  __int128 *v12; // rcx
  int Device; // eax
  __int64 v14; // rcx
  int v15; // ebx
  struct _KLOCK_ENTRIES *v16; // r9
  AutoBoost *v17; // rax
  volatile unsigned __int8 *v18; // rdx
  signed __int8 v19; // cf
  AutoBoost *v20; // rsi
  int IncreaseAliasTrack; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int128 v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h]
  char v27; // [rsp+90h] [rbp+40h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+58h]

  v27 = 0;
  v3 = 0LL;
  *a3 = 0LL;
  v26 = 0LL;
  v5 = *(_DWORD *)Src;
  v6 = 0;
  v7 = 0;
  v29 = 0LL;
  v28 = 0LL;
  v8 = Src;
  v25 = 0LL;
  if ( v5 == 5 || HalpIommuCheckExceptionList((__int64)Src) || HalpHvIommu && !HalpHvIommuDeviceDomain )
    return 0LL;
  if ( v10 == 2 )
  {
    AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping(v9, (__int64)&v25);
    v12 = &v25;
    if ( AcpiDeviceMapping < 0 )
      v12 = v8;
    v8 = v12;
  }
  Device = HalpIommuCreateDevice(v8, (__int64)&v28);
  if ( Device >= 0 )
  {
    v6 = 1;
    if ( *(_DWORD *)v8 == 1 && ((unsigned int)HalpIommuGetAcpiDeviceMapCount(v8) > 1 || (*((_BYTE *)v8 + 4) & 1) != 0) )
    {
      v17 = (AutoBoost *)KeAbPreAcquire((__int64)&HalpDeviceBlockUnblockPushLock, 0LL, 0LL, v16);
      v19 = _interlockedbittestandset64(&HalpDeviceBlockUnblockPushLock.Header.Lock, 0LL);
      v20 = v17;
      if ( v19 )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&HalpDeviceBlockUnblockPushLock,
          v17,
          (__int64)&HalpDeviceBlockUnblockPushLock);
      if ( v20 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v18) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v20 + 33), v18, 1);
        }
        else
        {
          *((_BYTE *)v20 + 10) = 1;
        }
      }
      v7 = 1;
      IncreaseAliasTrack = HalpIommuCreateIncreaseAliasTrack(v8);
      v3 = v29;
      v15 = IncreaseAliasTrack;
      if ( IncreaseAliasTrack < 0 || *(__int64 *)(v29 + 24) > 1 )
        goto LABEL_33;
    }
    if ( HalpHvIommu )
    {
      v15 = IommupHvAttachDeviceDomain(*(_QWORD *)(v28 + 32), 0LL, 0LL);
      if ( v15 < 0 )
      {
        v22 = 0;
        if ( v15 != -1070268314 )
          v22 = v15;
        v15 = v22;
      }
    }
    else
    {
      v15 = HalpIommuJoinDmaDomain(v28, HalpIommuBypassDomain, &v27);
      if ( v15 == -1073741776 && (v27 & 1) != 0 )
      {
        v15 = 0;
        HalpIommuDeleteDevice(v28);
        v6 = 0;
        v28 = 0LL;
      }
    }
    if ( v7 )
    {
LABEL_33:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock.Header.Lock);
      KeAbPostRelease((unsigned __int64)&HalpDeviceBlockUnblockPushLock);
    }
  }
  else
  {
    v15 = 0;
    if ( Device != -1073741275 )
      v15 = Device;
  }
  if ( v15 >= 0 )
  {
    *a3 = v28;
  }
  else
  {
    if ( v6 )
      HalpIommuDeleteDevice(v28);
    if ( v3 )
    {
      v23 = *(_QWORD *)(v3 + 16);
      if ( v23 )
        HalpMmAllocCtxFree(v14, v23);
      HalpMmAllocCtxFree(v14, v3);
    }
  }
  return (unsigned int)v15;
}
