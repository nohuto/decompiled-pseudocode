/*
 * XREFs of sub_1407A98F4 @ 0x1407A98F4
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x1407AA53C (SLQueryLicenseValueInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 *     ExpSetLicenseTamperState @ 0x140649C24 (ExpSetLicenseTamperState.c)
 *     ntoskrnl_24 @ 0x1407A90D0 (ntoskrnl_24.c)
 *     sub_1407A9D6C @ 0x1407A9D6C (sub_1407A9D6C.c)
 *     sub_1407AA1F8 @ 0x1407AA1F8 (sub_1407AA1F8.c)
 */

__int64 __fastcall sub_1407A98F4(__int64 a1)
{
  signed __int64 *v2; // rdi
  __int64 *v3; // rsi
  int v4; // eax
  unsigned int v5; // esi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rsi
  __int64 v9; // rsi
  int v10; // r14d
  size_t v11; // rax
  int v13; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *v15; // [rsp+48h] [rbp-40h]
  char v16; // [rsp+98h] [rbp+10h]
  char v17; // [rsp+A0h] [rbp+18h]

  v13 = 0;
  v17 = 0;
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (signed __int64 *)(a1 + 46840);
  v3 = KeAbPreAcquire(a1 + 46840, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v3, (unsigned __int64)v2);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  if ( *(_BYTE *)(a1 + 46992) )
  {
    v13 = -1073741762;
  }
  else if ( *(_BYTE *)(a1 + 46828) )
  {
    v4 = 0;
    if ( !*(_DWORD *)(a1 + 46824) )
      v4 = -1073741772;
    v13 = v4;
  }
  else
  {
    v17 = 1;
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
  v5 = v13;
  if ( v13 >= 0 && v17 == 1 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v6 = KeAbPreAcquire((__int64)v2, 0LL);
    v8 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2, v6, (__int64)v2);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    if ( *(_BYTE *)(a1 + 46828) == 1 )
      goto LABEL_37;
    v9 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      v10 = sub_1407AA1F8(a1);
      v13 = v10;
      if ( v10 >= 0 )
        goto LABEL_26;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 46832);
      if ( v9 )
      {
        v10 = v13;
LABEL_26:
        if ( (*(_DWORD *)(v9 + 12) & 1) != 0 )
          ExpSetLicenseTamperState(a1, 2);
        if ( !*(_DWORD *)(a1 + 46824) )
        {
          LOBYTE(v7) = 1;
          v10 = sub_1407A9D6C(v9, v7, a1 + 24, 2925LL, a1 + 46824);
          v13 = v10;
        }
        if ( v10 >= 0 )
        {
          v11 = *(unsigned int *)(a1 + 46824);
          if ( (_DWORD)v11 )
          {
            qsort((void *)(a1 + 24), v11, 0x10uLL, (int (__cdecl *)(const void *, const void *))sub_1407A9880);
            *(_BYTE *)(a1 + 46828) = 1;
          }
          else
          {
            *(_BYTE *)(a1 + 46828) = 1;
            v13 = -1073741772;
          }
        }
        else if ( v10 == -1073741789 )
        {
          v13 = -1073741762;
          *(_BYTE *)(a1 + 46992) = 1;
          v16 = 1;
        }
        goto LABEL_37;
      }
      v13 = -1073741762;
      *(_BYTE *)(a1 + 46992) = 1;
      v16 = 1;
    }
LABEL_37:
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegion();
    v5 = v13;
  }
  if ( v16 )
    ntoskrnl_24(&KernelLicensingCacheCorrupt);
  return v5;
}
