/*
 * XREFs of PspEnableProcessOptionalXStateFeatures @ 0x140B643BC
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     KeFlushProcessWriteBuffers @ 0x140252FDC (KeFlushProcessWriteBuffers.c)
 *     PspUnlockProcessThreadListShared @ 0x140271060 (PspUnlockProcessThreadListShared.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     PspLockProcessThreadListShared @ 0x140444020 (PspLockProcessThreadListShared.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     KeGetIdealNodeNumberThread @ 0x140485DEC (KeGetIdealNodeNumberThread.c)
 *     KeCopyXfdMaskToPeb @ 0x1404E1928 (KeCopyXfdMaskToPeb.c)
 *     KeEnableOptionalXStateFeaturesApc @ 0x1405EF310 (KeEnableOptionalXStateFeaturesApc.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspEnableProcessOptionalXStateFeatures(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v5; // r12
  unsigned int v6; // r14d
  __int64 v7; // r13
  __int64 v8; // rsi
  void *v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // r15
  __int64 v13; // rdi
  __int64 **v14; // r15
  __int64 **v15; // rcx
  unsigned __int64 v16; // rax
  __int64 Pool2; // rax
  _DWORD *v18; // rcx
  __int64 *v19; // r12
  __int64 *v20; // r15
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned int v27; // edi
  unsigned int v28; // r12d
  __int64 v29; // r15
  struct _KTHREAD *v30; // rax
  __int64 v31; // rdx
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-21h]
  PVOID P; // [rsp+50h] [rbp-19h]
  struct _KTHREAD *v35; // [rsp+58h] [rbp-11h]
  __int128 v36; // [rsp+60h] [rbp-9h] BYREF
  __int128 v37; // [rsp+70h] [rbp+7h]
  __int128 v38; // [rsp+80h] [rbp+17h]
  __int64 *v40; // [rsp+E0h] [rbp+77h]
  int v41; // [rsp+E0h] [rbp+77h]
  int KernelStack; // [rsp+E8h] [rbp+7Fh]

  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  v5 = (_QWORD *)a1;
  v35 = (struct _KTHREAD *)(a1 + 1960);
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  KernelStack = 0;
  v36 = 0LL;
  v7 = 0LL;
  LODWORD(v8) = 0;
  v37 = 0LL;
  v38 = 0LL;
  v12 = (AutoBoost *)KeAbPreAcquire(a1 + 1960, 0LL, 0LL, a4);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5 + 490, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5 + 245, v12, (__int64)(v5 + 245));
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v9);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = a2 & 0x40000;
  if ( (v13 & v5[51]) == 0 )
    goto LABEL_54;
  PspLockProcessThreadListShared((__int64)v5, (__int64)CurrentThread, v10, v11);
  v14 = (__int64 **)(v5 + 110);
  v15 = (__int64 **)v5[110];
  v40 = v5 + 110;
  if ( v15 == v5 + 110 )
  {
    v18 = 0LL;
    goto LABEL_38;
  }
  do
  {
    if ( (v13 & (unsigned __int64)*(v15 - 42)) != 0 && ((_DWORD)v15[5] & 1) == 0 )
      LODWORD(v8) = v8 + 1;
    v15 = (__int64 **)*v15;
  }
  while ( v15 != v14 );
  if ( !(_DWORD)v8 )
  {
    v18 = 0LL;
    goto LABEL_38;
  }
  v16 = (unsigned __int64)(unsigned int)v8 << 7;
  if ( v16 > 0xFFFFFFFF || (int)v16 + 8 < (unsigned int)v16 )
  {
    v6 = -1073741675;
    goto LABEL_35;
  }
  KernelStack = 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  P = (PVOID)Pool2;
  v18 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    v6 = -1073741801;
    goto LABEL_35;
  }
  v19 = *v14;
  v7 = Pool2 + 8;
  v8 = 0LL;
  if ( *v14 == (__int64 *)v14 )
  {
LABEL_27:
    v5 = (_QWORD *)a1;
LABEL_38:
    v5[51] &= ~v13;
    if ( (_DWORD)v8 )
      *v18 = v8;
    v41 = -1;
    v27 = -1;
    if ( (_DWORD)v8 )
    {
      v28 = 0;
      v29 = v7 + 112;
      v30 = CurrentThread;
      do
      {
        if ( *(struct _KTHREAD **)v29 == v30 )
        {
          v27 = v28;
          v41 = v28;
        }
        else
        {
          KeInitializeApc(
            v7 + ((unsigned __int64)v28 << 7),
            *(_QWORD *)v29,
            0,
            (__int64)KeEnableOptionalXStateFeaturesApc,
            0LL,
            0LL,
            0,
            0LL);
          if ( !(unsigned __int8)KeInsertQueueApc(v7 + ((unsigned __int64)v28 << 7), 0LL, 0LL, 0) )
          {
            if ( *(_QWORD *)(v29 - 16) )
            {
              *((_QWORD *)&v37 + 1) = *(_QWORD *)(v29 - 16);
              *(_QWORD *)&v37 = *(_QWORD *)v29;
              v38 = 0LL;
              v36 = 0x500000008uLL;
              MmDeleteKernelStack((int *)&v36);
            }
            if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(v29 + 8), 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(P, 0);
          }
          v27 = v41;
          v30 = CurrentThread;
        }
        ++v28;
        v29 += 128LL;
      }
      while ( v28 < (unsigned int)v8 );
      v6 = KernelStack;
      v5 = (_QWORD *)a1;
    }
    PspUnlockProcessThreadListShared((__int64)v5, CurrentThread);
    if ( v27 != -1 )
      KeEnableOptionalXStateFeaturesApc(v7 + ((unsigned __int64)v27 << 7));
    KeFlushProcessWriteBuffers(0LL);
    KeCopyXfdMaskToPeb(v5);
LABEL_54:
    v26 = (__int64)CurrentThread;
    goto LABEL_55;
  }
  KernelStack = 0;
  while ( 1 )
  {
    v20 = v19 - 175;
    if ( (v13 & *(v19 - 42)) == 0 || (v20[180] & 1) != 0 )
      goto LABEL_26;
    if ( (*((_DWORD *)v20 + 29) & 0x800000) == 0 )
      break;
LABEL_25:
    v23 = (unsigned __int64)(unsigned int)v8 << 7;
    v8 = (unsigned int)(v8 + 1);
    *(_QWORD *)(v23 + v7 + 104) = v13;
    *(_QWORD *)(v23 + v7 + 112) = v20;
    *(_QWORD *)(v23 + v7 + 120) = v18;
LABEL_26:
    v19 = (__int64 *)*v19;
    if ( v19 == v40 )
      goto LABEL_27;
  }
  *(_QWORD *)&v36 = 0x500000020LL;
  DWORD2(v36) = (unsigned __int16)KeGetIdealNodeNumberThread((__int64)(v19 - 175));
  *(_QWORD *)&v37 = v19 - 175;
  KernelStack = MmCreateKernelStack((__int64)&v36);
  v6 = KernelStack;
  if ( KernelStack >= 0 )
  {
    v21 = *((_QWORD *)&v37 + 1);
    v22 = (unsigned __int64)(unsigned int)v8 << 7;
    *(_QWORD *)(v22 + v7 + 88) = *((_QWORD *)&v37 + 1) - (unsigned int)KeDecoupledStateSaveAreaLength;
    v18 = P;
    *(_QWORD *)(v22 + v7 + 96) = v21;
    goto LABEL_25;
  }
  if ( (_DWORD)v8 )
  {
    v24 = (__int64 *)(v7 + 112);
    do
    {
      if ( *(v24 - 2) )
      {
        v25 = *v24;
        *((_QWORD *)&v37 + 1) = *(v24 - 2);
        v38 = 0LL;
        *(_QWORD *)&v37 = v25;
        v36 = 0x500000008uLL;
        MmDeleteKernelStack((int *)&v36);
      }
      v24 += 16;
      --v8;
    }
    while ( v8 );
  }
  v5 = (_QWORD *)a1;
  LODWORD(v8) = 0;
LABEL_35:
  v26 = (__int64)CurrentThread;
  PspUnlockProcessThreadListShared((__int64)v5, CurrentThread);
LABEL_55:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v35->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&v35->Header.Lock);
  KeAbPostRelease((unsigned __int64)v35);
  KiLeaveCriticalRegionUnsafe(v26, v31);
  if ( P && !(_DWORD)v8 )
    ExFreePoolWithTag(P, 0);
  return v6;
}
