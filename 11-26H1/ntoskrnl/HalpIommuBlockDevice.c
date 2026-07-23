/*
 * XREFs of HalpIommuBlockDevice @ 0x1404F8D00
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
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 *     HalpIommuDecreaseAliasTrack @ 0x14058FC60 (HalpIommuDecreaseAliasTrack.c)
 *     HalpIommuLeaveDmaDomain @ 0x1405905CC (HalpIommuLeaveDmaDomain.c)
 */

__int64 __fastcall HalpIommuBlockDevice(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax
  char v5; // bp
  __int128 *v7; // rbx
  int AcpiDeviceMapping; // eax
  __int128 *v9; // rcx
  AutoBoost *v10; // rax
  volatile unsigned __int8 *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rsi
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  result = 0LL;
  v20 = 0LL;
  v5 = 0;
  v18 = 0LL;
  v19 = 0LL;
  if ( !a1 )
    return result;
  v7 = (__int128 *)*a1;
  if ( *(_DWORD *)*a1 == 2 )
  {
    AcpiDeviceMapping = HalpIommuQueryAcpiDeviceMapping(*a1, (__int64)&v18);
    v9 = &v18;
    if ( AcpiDeviceMapping < 0 )
      v9 = v7;
    v7 = v9;
  }
  if ( *(_DWORD *)v7 != 1 )
    goto LABEL_16;
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&HalpDeviceBlockUnblockPushLock, 0LL, 0LL, a4);
  v12 = _interlockedbittestandset64(&HalpDeviceBlockUnblockPushLock.Header.Lock, 0LL);
  v13 = v10;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&HalpDeviceBlockUnblockPushLock,
      v10,
      (__int64)&HalpDeviceBlockUnblockPushLock);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v11) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v13 + 33), v11, 1);
    }
    else
    {
      *((_BYTE *)v13 + 10) = 1;
    }
  }
  v5 = 1;
  v15 = HalpIommuDecreaseAliasTrack(v7, &v20);
  if ( v15 < 0 )
    goto LABEL_16;
  v16 = v20;
  if ( *(__int64 *)(v20 + 24) <= 0 )
  {
    HalpMmAllocCtxFree(v14, *(_QWORD *)(v20 + 16));
    HalpMmAllocCtxFree(v17, v16);
LABEL_16:
    v15 = HalpIommuLeaveDmaDomain(a1, HalpIommuBypassDomain);
  }
  HalpIommuDeleteDevice(a1);
  if ( v5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&HalpDeviceBlockUnblockPushLock);
  }
  return (unsigned int)v15;
}
