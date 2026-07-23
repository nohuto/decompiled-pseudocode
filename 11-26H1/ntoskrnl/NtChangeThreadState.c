/*
 * XREFs of NtChangeThreadState @ 0x140949110
 * Callers:
 *     DifNtChangeThreadStateWrapper @ 0x140672680 (DifNtChangeThreadStateWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PspProcessSuspendThreadParameters @ 0x1404EA760 (PspProcessSuspendThreadParameters.c)
 *     Feature_SuspendThread2__private_IsEnabledDeviceUsageNoInline @ 0x1404F7494 (Feature_SuspendThread2__private_IsEnabledDeviceUsageNoInline.c)
 *     PsMultiResumeThread @ 0x1404F76A8 (PsMultiResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PspSuspendThread @ 0x140949620 (PspSuspendThread.c)
 */

NTSTATUS __cdecl NtChangeThreadState(
        HANDLE ThreadStateChangeHandle,
        HANDLE ThreadHandle,
        THREAD_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  char PreviousMode; // si
  unsigned int v11; // r13d
  int v12; // eax
  char *v13; // rbp
  NTSTATUS v14; // edi
  int v15; // edx
  int v16; // eax
  struct _KLOCK_ENTRIES *v17; // r9
  struct _KTHREAD *v18; // r15
  struct _KTHREAD *CurrentThread; // r12
  volatile signed __int64 *v20; // rsi
  AutoBoost *v21; // rax
  void *v22; // rdx
  signed __int8 v23; // cf
  AutoBoost *v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  struct _KLOCK_ENTRIES *v27; // r9
  char v28; // r13
  AutoBoost *v29; // rax
  void *v30; // rdx
  AutoBoost *v31; // r14
  int v33; // edx
  int v34; // eax
  ULONG Tag[2]; // [rsp+20h] [rbp-88h]
  __int64 v36; // [rsp+28h] [rbp-80h]
  __int64 v37; // [rsp+30h] [rbp-78h]
  __int64 v38; // [rsp+38h] [rbp-70h]
  char v39; // [rsp+40h] [rbp-68h]
  char v40; // [rsp+40h] [rbp-68h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID v42; // [rsp+50h] [rbp-58h] BYREF
  _OWORD v43[5]; // [rsp+58h] [rbp-50h] BYREF

  Object = 0LL;
  v42 = 0LL;
  v43[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( StateChangeType )
  {
    if ( StateChangeType != ThreadStateChangeResume )
      return -1073741821;
    goto LABEL_3;
  }
  if ( !(unsigned int)Feature_SuspendThread2__private_IsEnabledDeviceUsageNoInline() )
  {
LABEL_3:
    if ( (_DWORD)ExtendedInformationLength )
      return -1073741820;
    if ( ExtendedInformation )
      return -1073741811;
    v11 = Reserved;
    if ( (_DWORD)Reserved )
      return -1073741811;
    goto LABEL_6;
  }
  v11 = Reserved;
  v14 = PspProcessSuspendThreadParameters(
          Reserved,
          (__int64)ExtendedInformation,
          ExtendedInformationLength,
          PreviousMode,
          (int *)v43);
  if ( v14 < 0 )
    return v14;
LABEL_6:
  v12 = ObpReferenceObjectByHandleWithTag(
          (ULONG_PTR)ThreadStateChangeHandle,
          1,
          *(__int64 *)&stru_140FC11F0.WaitBlockFill11[64],
          PreviousMode,
          0x63547350u,
          &v42,
          0LL,
          0LL);
  v13 = (char *)v42;
  v14 = v12;
  if ( v12 >= 0 )
  {
    v15 = 0;
    if ( (unsigned int)StateChangeType <= ThreadStateChangeResume )
      v15 = 2;
    v16 = ObpReferenceObjectByHandleWithTag(
            (ULONG_PTR)ThreadHandle,
            v15,
            (__int64)PsThreadType,
            PreviousMode,
            0x63547350u,
            &Object,
            0LL,
            0LL);
    v18 = (struct _KTHREAD *)Object;
    v14 = v16;
    if ( v16 < 0 )
      goto LABEL_40;
    if ( *(PVOID *)v13 != Object || (CurrentThread = KeGetCurrentThread(), Object == CurrentThread) && (v11 & 1) != 0 )
    {
      v14 = -1073741811;
LABEL_40:
      if ( v18 )
        ObfDereferenceObjectWithTag(v18, 0x63547350u);
      goto LABEL_42;
    }
    v39 = 1;
    --CurrentThread->KernelApcDisable;
    v20 = (volatile signed __int64 *)(v13 + 8);
    v21 = (AutoBoost *)KeAbPreAcquire((__int64)(v13 + 8), 0LL, 0LL, v17);
    v23 = _interlockedbittestandset64((volatile signed __int32 *)v13 + 2, 0LL);
    v24 = v21;
    Object = v21;
    if ( v23 )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13 + 1, v21, (__int64)(v13 + 8));
      v24 = (AutoBoost *)Object;
    }
    if ( v24 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v24, v22);
      else
        *((_BYTE *)v24 + 10) = 1;
    }
    if ( StateChangeType )
    {
      if ( StateChangeType != ThreadStateChangeResume )
        goto LABEL_19;
      v34 = *((_DWORD *)v13 + 5);
      if ( !v34 )
      {
        v14 = -1073741811;
LABEL_62:
        if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v13 + 1);
        KeAbPostRelease((unsigned __int64)(v13 + 8));
LABEL_39:
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v25);
        goto LABEL_40;
      }
      *((_DWORD *)v13 + 5) = v34 - 1;
    }
    else
    {
      v33 = *((_DWORD *)v13 + 4);
      if ( v33 + *((_DWORD *)v13 + 5) == 0x7FFFFFFF )
      {
        v14 = -1073741750;
        goto LABEL_62;
      }
      *((_DWORD *)v13 + 4) = v33 + 1;
    }
LABEL_19:
    if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v13 + 1);
    KeAbPostRelease((unsigned __int64)(v13 + 8));
    if ( StateChangeType )
    {
      if ( StateChangeType == ThreadStateChangeResume )
        v14 = PsMultiResumeThread((__int64)v18, 0LL, 1LL);
    }
    else
    {
      v26 = ((unsigned __int64)v43 + 8) & -(__int64)((v43[0] & 2) != 0);
      if ( v18 != CurrentThread )
      {
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v25);
        v39 = 0;
      }
      v14 = PspSuspendThread(v18, v11, v26, 0LL, *(_QWORD *)Tag, v36, v37, v38, v39, Object);
      if ( v18 == CurrentThread )
      {
        v28 = v40;
      }
      else
      {
        --CurrentThread->KernelApcDisable;
        v28 = 1;
      }
      v29 = (AutoBoost *)KeAbPreAcquire((__int64)(v13 + 8), 0LL, 0LL, v27);
      v31 = v29;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13 + 1, v29, (__int64)(v13 + 8));
      if ( v31 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v31, v30);
        else
          *((_BYTE *)v31 + 10) = 1;
      }
      if ( v14 >= 0 )
        ++*((_DWORD *)v13 + 5);
      --*((_DWORD *)v13 + 4);
      if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v13 + 1);
      KeAbPostRelease((unsigned __int64)(v13 + 8));
      if ( !v28 )
        goto LABEL_40;
    }
    goto LABEL_39;
  }
LABEL_42:
  if ( v13 )
    ObfDereferenceObjectWithTag(v13, 0x63547350u);
  return v14;
}
