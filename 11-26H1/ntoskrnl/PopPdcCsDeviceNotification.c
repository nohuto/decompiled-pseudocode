/*
 * XREFs of PopPdcCsDeviceNotification @ 0x140B32390
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140CDBBC4 (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     PopNetCompliantNicUpdate @ 0x1407DE328 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1407DE67C (PopNetNonCompliantDeviceUpdate.c)
 *     PopPdcUpdateDeviceCompliance @ 0x140B32564 (PopPdcUpdateDeviceCompliance.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x140B32614 (PopNetUpdateCsConsumptionFlags.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPdcCsDeviceNotification(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  struct _KLOCK_ENTRIES *v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbp
  _DWORD *v10; // rcx
  _DWORD *v11; // r8
  char v12; // dl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  int *v19; // rcx
  _QWORD *v20; // rdx
  void **v21; // rax
  __int64 Pool2; // rax
  __int64 *v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-8h]

  v2 = 0;
  if ( !SSHSupportIsPlatformAoAc() )
    return v2;
  if ( *(_DWORD *)(v3 + 8) > 4u )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PopPdcDeviceListLock, 0LL, 0LL, v4);
  v8 = _interlockedbittestandset64(&PopPdcDeviceListLock.Header.Lock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&PopPdcDeviceListLock, v6, (__int64)&PopPdcDeviceListLock);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = PopPdcDeviceList;
  v11 = 0LL;
  v12 = 0;
  while ( v10 != (_DWORD *)&PopPdcDeviceList )
  {
    v11 = v10;
    if ( *((_QWORD *)v10 + 2) == *(_QWORD *)a1 )
    {
      v12 = 1;
      break;
    }
    v10 = *(_DWORD **)v10;
  }
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v12 )
    {
      ++v11[7];
      goto LABEL_15;
    }
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      v2 = -1073741801;
      goto LABEL_15;
    }
    *(_QWORD *)(Pool2 + 16) = *(_QWORD *)a1;
    *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(a1 + 8);
    *(_BYTE *)(Pool2 + 32) = *(_BYTE *)(a1 + 13);
    *(_DWORD *)(Pool2 + 28) = 1;
    v23 = (__int64 *)off_140E08088;
    if ( *off_140E08088 == (_UNKNOWN *)&PopPdcDeviceList )
    {
      *(_QWORD *)Pool2 = &PopPdcDeviceList;
      *(_QWORD *)(Pool2 + 8) = v23;
      *v23 = Pool2;
      off_140E08088 = (_UNKNOWN **)Pool2;
LABEL_20:
      PopPdcUpdateDeviceCompliance();
      PopAcquirePolicyLock(v15, v14);
      v18 = *(int *)(a1 + 8);
      if ( (_DWORD)v18 == 1 || (((_DWORD)v18 - 2) & 0xFFFFFFFD) == 0 )
      {
        if ( *(_BYTE *)(a1 + 13) )
          PopNetCompliantNicUpdate(*(_BYTE *)(a1 + 12));
        PopNetUpdateCsConsumptionFlags();
      }
      else
      {
        v19 = PopCsDeviceCompliance;
        if ( PopCsDeviceCompliance[v18] == -1 )
          PopNetNonCompliantDeviceUpdate(*(_BYTE *)(a1 + 12), v18);
      }
      PopReleasePolicyLock(v19, v18, v16, v17, v24);
      goto LABEL_15;
    }
LABEL_41:
    __fastfail(3u);
  }
  if ( v12 )
  {
    if ( (int)--v11[7] > 0 )
      goto LABEL_15;
    v20 = *(_QWORD **)v10;
    if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) == v10 )
    {
      v21 = (void **)*((_QWORD *)v10 + 1);
      if ( *v21 == v10 )
      {
        *v21 = v20;
        v20[1] = v21;
        ExFreePoolWithTag(v11, 0x6F435343u);
        goto LABEL_20;
      }
    }
    goto LABEL_41;
  }
  v2 = -1073741811;
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPdcDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPdcDeviceListLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&PopPdcDeviceListLock);
  KeLeaveCriticalRegion();
  return v2;
}
