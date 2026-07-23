/*
 * XREFs of NtChangeProcessState @ 0x1407F71F0
 * Callers:
 *     DifNtChangeProcessStateWrapper @ 0x1406724D0 (DifNtChangeProcessStateWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x14077E180 (PsFreezeProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtChangeProcessState(
        HANDLE ProcessStateChangeHandle,
        HANDLE ProcessHandle,
        PROCESS_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  NTSTATUS v8; // edi
  int v9; // eax
  unsigned __int64 *v10; // rsi
  int v11; // eax
  struct _KLOCK_ENTRIES *v12; // r9
  PVOID v13; // r15
  struct _KTHREAD *CurrentThread; // r12
  AutoBoost *v15; // rax
  void *v16; // rdx
  struct _KLOCK_ENTRIES *v17; // r9
  AutoBoost *v18; // rdi
  __int64 v19; // rdx
  PVOID v21; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+48h] [rbp-20h] BYREF

  Object = 0LL;
  v21 = 0LL;
  if ( (unsigned int)StateChangeType >= ProcessStateChangeMax )
    return -1073741821;
  if ( (_DWORD)ExtendedInformationLength )
    return -1073741820;
  if ( ExtendedInformation || (_DWORD)Reserved )
    return -1073741811;
  v9 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessStateChangeHandle, 0x63507350u, (__int64)&v21, 0LL, 0LL);
  v10 = (unsigned __int64 *)v21;
  v8 = v9;
  if ( v9 >= 0 )
  {
    v11 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x63507350u, (__int64)&Object, 0LL, 0LL);
    v13 = Object;
    v8 = v11;
    if ( v11 < 0 )
      goto LABEL_32;
    if ( (PVOID)*v10 != Object )
    {
      v8 = -1073741811;
LABEL_32:
      if ( v13 )
        ObfDereferenceObjectWithTag(v13, 0x63507350u);
      goto LABEL_34;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (AutoBoost *)KeAbPreAcquire((__int64)(v10 + 1), 0LL, 0LL, v12);
    v18 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10 + 2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10 + 1, v15, (__int64)(v10 + 1));
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v16);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    if ( StateChangeType )
    {
      if ( StateChangeType == ProcessStateChangeResume )
      {
        if ( !*((_DWORD *)v10 + 4) )
        {
          v8 = -1073741811;
LABEL_29:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v10 + 1);
          KeAbPostRelease((unsigned __int64)(v10 + 1));
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v19);
          goto LABEL_32;
        }
        PsThawMultiProcess((__int64)v13, 0, 1LL, v17);
        --*((_DWORD *)v10 + 4);
      }
    }
    else
    {
      if ( *((_DWORD *)v10 + 4) == -1 )
      {
        v8 = -1073741750;
        goto LABEL_29;
      }
      if ( !PsFreezeProcess((__int64)v13, 0) )
      {
        v8 = -1073741558;
        goto LABEL_29;
      }
      ++*((_DWORD *)v10 + 4);
    }
    v8 = 0;
    goto LABEL_29;
  }
LABEL_34:
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x63507350u);
  return v8;
}
