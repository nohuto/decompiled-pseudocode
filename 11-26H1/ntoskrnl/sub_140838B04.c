/*
 * XREFs of sub_140838B04 @ 0x140838B04
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x140A6A758 (SLQueryLicenseValueInternal.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     qsort @ 0x140536F00 (qsort.c)
 *     ExpSetLicenseTamperState @ 0x1406CD4F4 (ExpSetLicenseTamperState.c)
 *     ntoskrnl_24 @ 0x1408382D0 (ntoskrnl_24.c)
 *     sub_140838F7C @ 0x140838F7C (sub_140838F7C.c)
 *     sub_1408393F8 @ 0x1408393F8 (sub_1408393F8.c)
 */

__int64 __fastcall sub_140838B04(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // edi
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v8; // r15
  LegacyAutoBoost *v9; // r13
  signed __int64 v10; // rdx
  struct _KLOCK_ENTRIES *v11; // r9
  struct _KTHREAD *v12; // rax
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // r13
  __int64 v16; // r13
  _DWORD *v17; // r12
  void *v18; // rcx
  char v20; // [rsp+88h] [rbp+10h]

  v5 = 0;
  v6 = 0;
  v20 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(a1 + 46840);
  v9 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 46840, 0LL, 0LL, a4);
  v10 = 17LL;
  if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx(v8, 0, v9, (struct _KTHREAD *)v8);
    v10 = 17LL;
  }
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, (void *)0x11);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( *(_BYTE *)(a1 + 46992) )
  {
    v5 = -1073741762;
  }
  else if ( *(_BYTE *)(a1 + 46828) )
  {
    if ( !*(_DWORD *)(a1 + 46824) )
      v5 = -1073741772;
  }
  else
  {
    v6 = 1;
  }
  if ( v10 != _InterlockedCompareExchange64(v8, 0LL, v10) )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((unsigned __int64)v8);
  KeLeaveCriticalRegion();
  if ( v5 >= 0 && v6 == 1 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = (AutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, v11);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v8, v13, (__int64)v8);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v14);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    if ( *(_BYTE *)(a1 + 46828) == 1 )
      goto LABEL_39;
    v16 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      v5 = sub_1408393F8(a1);
      if ( v5 >= 0 )
        goto LABEL_28;
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 46832);
      if ( v16 )
      {
LABEL_28:
        if ( (*(_DWORD *)(v16 + 12) & 1) != 0 )
          ExpSetLicenseTamperState(a1, 2);
        v17 = (_DWORD *)(a1 + 46824);
        v18 = (void *)(a1 + 24);
        if ( !*(_DWORD *)(a1 + 46824) )
        {
          LOBYTE(v14) = 1;
          v5 = sub_140838F7C(v16, v14, a1 + 24, 2925LL, a1 + 46824);
          v18 = (void *)(a1 + 24);
        }
        if ( v5 >= 0 )
        {
          if ( *v17 )
          {
            qsort(v18, (unsigned int)*v17, 0x10uLL, (int (__cdecl *)(const void *, const void *))sub_140838A90);
            *(_BYTE *)(a1 + 46828) = 1;
          }
          else
          {
            *(_BYTE *)(a1 + 46828) = 1;
            v5 = -1073741772;
          }
        }
        else if ( v5 == -1073741789 )
        {
          v5 = -1073741762;
          *(_BYTE *)(a1 + 46992) = 1;
          v20 = 1;
        }
        goto LABEL_39;
      }
      v5 = -1073741762;
      *(_BYTE *)(a1 + 46992) = 1;
      v20 = 1;
    }
LABEL_39:
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    KeAbPostRelease((unsigned __int64)v8);
    KeLeaveCriticalRegion();
  }
  if ( v20 )
    ntoskrnl_24(&KernelLicensingCacheCorrupt);
  return (unsigned int)v5;
}
