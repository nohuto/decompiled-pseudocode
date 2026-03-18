/*
 * XREFs of NtChangeThreadState @ 0x140AD4B20
 * Callers:
 *     DifNtChangeThreadStateWrapper @ 0x14066EAA0 (DifNtChangeThreadStateWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PspProcessSuspendThreadParameters @ 0x1404F1180 (PspProcessSuspendThreadParameters.c)
 *     Feature_SuspendThread2__private_IsEnabledDeviceUsageNoInline @ 0x1404FDF54 (Feature_SuspendThread2__private_IsEnabledDeviceUsageNoInline.c)
 *     PsMultiResumeThread @ 0x1404FE168 (PsMultiResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PspSuspendThread @ 0x140AD5030 (PspSuspendThread.c)
 */

__int64 __fastcall NtChangeThreadState(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  char PreviousMode; // si
  unsigned int v11; // r13d
  int v12; // eax
  char *v13; // rbp
  int v14; // edi
  __int64 v15; // rdx
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
  char v37; // [rsp+40h] [rbp-68h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID v39; // [rsp+50h] [rbp-58h] BYREF
  _OWORD v40[5]; // [rsp+58h] [rbp-50h] BYREF

  Object = 0LL;
  v39 = 0LL;
  v40[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a3 )
  {
    if ( a3 != 1 )
      return (unsigned int)-1073741821;
    goto LABEL_3;
  }
  if ( !(unsigned int)Feature_SuspendThread2__private_IsEnabledDeviceUsageNoInline() )
  {
LABEL_3:
    if ( a5 )
      return (unsigned int)-1073741820;
    if ( a4 || (v11 = a6) != 0 )
      return (unsigned int)-1073741811;
    goto LABEL_6;
  }
  v11 = a6;
  v14 = PspProcessSuspendThreadParameters(a6, a4, a5, PreviousMode, (int *)v40);
  if ( v14 < 0 )
    return (unsigned int)v14;
LABEL_6:
  v12 = ObpReferenceObjectByHandleWithTag(
          BugCheckParameter1,
          1LL,
          *(POBJECT_TYPE **)&stru_140FC01F0.WaitBlockFill11[64],
          PreviousMode,
          0x63547350u,
          &v39,
          0LL,
          0LL);
  v13 = (char *)v39;
  v14 = v12;
  if ( v12 >= 0 )
  {
    v15 = 0LL;
    if ( a3 <= 1 )
      v15 = 2LL;
    v16 = ObpReferenceObjectByHandleWithTag(a2, v15, PsThreadType, PreviousMode, 0x63547350u, &Object, 0LL, 0LL);
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
    v37 = 1;
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
    if ( a3 )
    {
      if ( a3 != 1 )
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
    if ( a3 )
    {
      if ( a3 == 1 )
        v14 = PsMultiResumeThread((__int64)v18, 0LL, 1LL);
    }
    else
    {
      v26 = ((unsigned __int64)v40 + 8) & -(__int64)((v40[0] & 2) != 0);
      if ( v18 != CurrentThread )
      {
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v25);
        v37 = 0;
      }
      v14 = PspSuspendThread(v18, v11, v26, 0LL, *(_QWORD *)Tag, v36);
      if ( v18 == CurrentThread )
      {
        v28 = v37;
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
  return (unsigned int)v14;
}
