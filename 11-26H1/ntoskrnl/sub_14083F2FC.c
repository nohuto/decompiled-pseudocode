/*
 * XREFs of sub_14083F2FC @ 0x14083F2FC
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     SpRegOpenRedirectedKey @ 0x140840930 (SpRegOpenRedirectedKey.c)
 */

__int64 __fastcall sub_14083F2FC(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  NTSTATUS v5; // edi
  char v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v8; // rbx
  void *v9; // rdx
  __int64 v10; // rcx
  LegacyAutoBoost *v11; // rsi
  HANDLE KeyHandle; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0;
  KeyHandle = 0LL;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(a1 + 46840);
  v11 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 46840, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v8, 0, v11, (struct _KTHREAD *)v8);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v9);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( *(_QWORD *)(a1 + 46832) )
  {
    v5 = SpRegOpenRedirectedKey(v10, v9, &KeyHandle);
    if ( v5 >= 0 )
    {
      v6 = 1;
      v5 = ZwSetValueKey(
             KeyHandle,
             (PUNICODE_STRING)&stru_140BE0A88,
             0,
             3u,
             *(PVOID *)(a1 + 46832),
             **(_DWORD **)(a1 + 46832));
    }
  }
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((unsigned __int64)v8);
  KeLeaveCriticalRegion();
  if ( v6 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
