/*
 * XREFs of PopFxRegisterDeviceWithPep @ 0x140443B58
 * Callers:
 *     PopFxRegisterDeviceWorker @ 0x140B1BA40 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PopPluginRegisterDevice @ 0x140443CDC (PopPluginRegisterDevice.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     PopPepRegisterDevice @ 0x140B3B7A8 (PopPepRegisterDevice.c)
 */

__int64 __fastcall PopFxRegisterDeviceWithPep(ULONG_PTR a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // r14d
  ULONG_PTR v7; // rbp
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  volatile unsigned __int8 *v10; // rdx
  _BYTE *v11; // rbx
  unsigned int v12; // r9d
  ULONG_PTR *i; // rbx
  int v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v4 = (int)a4;
  v16 = 0LL;
  v7 = a1;
  if ( a1 )
  {
    v8 = PopPluginRegisterDevice(a1, v15, (__int64)&v16);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 0;
    --CurrentThread->KernelApcDisable;
    v11 = (_BYTE *)KeAbPreAcquire((__int64)&stru_140F12420.StateSaveArea, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F12420.StateSaveArea, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&stru_140F12420.StateSaveArea,
        0,
        (LegacyAutoBoost *)v11,
        (struct _KTHREAD *)&stru_140F12420.StateSaveArea);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v10) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v11 + 33), v10, 1u, v12);
      }
      else
      {
        v11[10] = 1;
      }
    }
    for ( i = (ULONG_PTR *)qword_140F123F0; i != &qword_140F123F0; i = (ULONG_PTR *)*i )
    {
      v7 = (ULONG_PTR)i;
      v8 = PopPluginRegisterDevice((ULONG_PTR)i, v15, (__int64)&v16);
      if ( v8 )
        break;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F12420.StateSaveArea, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&stru_140F12420.StateSaveArea);
    KeAbPostRelease((unsigned __int64)&stru_140F12420.StateSaveArea);
    KeLeaveCriticalRegion();
  }
  if ( v8 )
  {
    v8 = 2;
    *(_QWORD *)(a3 + 72) = v16;
    *(_QWORD *)(a3 + 64) = v7;
  }
  return PopPepRegisterDevice(a2, a3, v4, v8, a3 + 56);
}
