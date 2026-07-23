/*
 * XREFs of IommuDeviceDelete @ 0x1407897F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline @ 0x140589D58 (Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 *     IommupDeviceGetPasidDevice @ 0x14058A458 (IommupDeviceGetPasidDevice.c)
 */

__int64 __fastcall IommuDeviceDelete(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // r15
  __int64 v9; // r15
  bool v10; // zf
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // r15
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 **v17; // rcx
  __int64 *v18; // rax
  __int64 *v20; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v20 = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
    return 3221227272LL;
  if ( (unsigned int)Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = (AutoBoost *)KeAbPreAcquire(a1 + 432, 0LL, 0LL, v5);
    v8 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 432), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 432), v6, a1 + 432);
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v8, v7);
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    v9 = *(_QWORD *)(a1 + 72);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 432), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 432));
    KeAbPostRelease(a1 + 432);
    v10 = v9 == 0;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 72) == 0LL;
  }
  if ( !v10 )
    return 3221227272LL;
  if ( *(_BYTE *)(a1 + 266) )
  {
    IommupDeviceGetPasidDevice(a1, v3, 1, (struct _KLOCK_ENTRIES *)&v20);
    v12 = (AutoBoost *)KeAbPreAcquire(a1 + 368, 0LL, 0LL, v11);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 368), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 368), v12, a1 + 368);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    v15 = a1 + 352;
    v16 = *(_QWORD *)(a1 + 352);
    v17 = *(__int64 ***)(a1 + 360);
    if ( *v17 != (__int64 *)(a1 + 352) )
      __fastfail(3u);
    v18 = v20;
    *v20 = v15;
    v18[1] = (__int64)v17;
    *v17 = v18;
    *(_QWORD *)(a1 + 360) = v18;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 368), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 368));
    KeAbPostRelease(a1 + 368);
    v1 = a1 + 352 != v16 ? 0xC0000708 : 0;
    if ( v16 != v15 )
      return a1 + 352 != v16 ? 0xC0000708 : 0;
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 16), 1) != 2 )
    return (unsigned int)HalpIommuDeleteDevice((__int64 *)a1, v3, v4, v5);
  return v1;
}
