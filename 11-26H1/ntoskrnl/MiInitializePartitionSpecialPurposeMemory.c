/*
 * XREFs of MiInitializePartitionSpecialPurposeMemory @ 0x140B68D40
 * Callers:
 *     MiInitializePartitionSpecialPurposeMemoryCallout @ 0x1407118C0 (MiInitializePartitionSpecialPurposeMemoryCallout.c)
 *     MiSpecialPurposeMemoryChangePrepare @ 0x140B68C20 (MiSpecialPurposeMemoryChangePrepare.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140263D70 (KeExpandKernelStackAndCallout.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiFindSpecialPurposeMemoryType @ 0x140533010 (MiFindSpecialPurposeMemoryType.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PsCreatePartition @ 0x14080347C (PsCreatePartition.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializePartitionSpecialPurposeMemory(__int64 a1, _OWORD *a2)
{
  struct _KLOCK_ENTRIES *v4; // r9
  char *PoolMm; // rsi
  __int64 v7; // r15
  void *v8; // r14
  PVOID *v9; // r12
  unsigned __int64 *v10; // rbx
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rdi
  int v14; // edi
  _QWORD *SpecialPurposeMemoryType; // rax
  int CurrentProcessorColor; // eax
  int v17; // eax
  __int64 v18; // rbx
  __int128 v19; // xmm1
  _QWORD *v20; // rcx
  __int64 *v21; // [rsp+40h] [rbp-39h] BYREF
  __int64 v22; // [rsp+48h] [rbp-31h]
  __int128 Parameter; // [rsp+50h] [rbp-29h] BYREF
  __int64 v24; // [rsp+60h] [rbp-19h]
  int v25[4]; // [rsp+68h] [rbp-11h] BYREF
  __int128 v26; // [rsp+78h] [rbp-1h]
  __int128 v27; // [rsp+88h] [rbp+Fh]
  HANDLE Handle; // [rsp+F0h] [rbp+77h] BYREF
  void *v30; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_OWORD *)v25 = 0LL;
  *(_QWORD *)&v27 = 0LL;
  v26 = 0LL;
  DWORD2(v27) = 0;
  Parameter = 0LL;
  v24 = 0LL;
  if ( MiFindSpecialPurposeMemoryType(a1, a2) )
    return 0LL;
  PoolMm = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  v21 = 0LL;
  v30 = 0LL;
  v9 = (PVOID *)(a1 + 256);
  if ( (ULONG *)a1 == &MiSystemPartition )
    goto LABEL_16;
  v22 = **((_QWORD **)*v9 + 9);
  *(_QWORD *)&Parameter = v22;
  *((_QWORD *)&Parameter + 1) = a2;
  v10 = (unsigned __int64 *)(v22 + 21448);
  v11 = (AutoBoost *)KeAbPreAcquire(v22 + 21448, 0LL, 0LL, v4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 21448), 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v11, (__int64)v10);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v14 = KeExpandKernelStackAndCallout(
          (PEXPAND_STACK_CALLOUT)MiInitializePartitionSpecialPurposeMemoryCallout,
          &Parameter,
          (unsigned __int64)(unsigned int)KeKernelStackSize >> 1);
  if ( v14 < 0 || (v14 = v24, (int)v24 < 0) )
  {
LABEL_19:
    if ( v10 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v10);
      KeAbPostRelease((unsigned __int64)v10);
    }
    goto LABEL_28;
  }
  SpecialPurposeMemoryType = MiFindSpecialPurposeMemoryType(v22, a2);
  v14 = ObDuplicateObject(
          (__int64)PsInitialSystemProcess,
          (void *)SpecialPurposeMemoryType[7],
          0LL,
          (__int64 *)&v30,
          0,
          512,
          2,
          0);
  if ( v14 < 0 )
  {
    v8 = v30;
    goto LABEL_19;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10);
  KeAbPostRelease((unsigned __int64)v10);
  v8 = v30;
LABEL_16:
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = (char *)ExAllocatePoolMm(64LL, 0x60uLL, 1951230285, CurrentProcessorColor | 0x80000000);
  if ( PoolMm )
  {
    v25[0] = 48;
    *(_QWORD *)&v25[2] = 0LL;
    DWORD2(v26) = 512;
    *(_QWORD *)&v26 = 0LL;
    v27 = 0LL;
    v14 = PsCreatePartition((__int64)v8, &Handle, 2031619, (int)v25, 0, 2);
    if ( v14 >= 0 )
    {
      v17 = PsReferencePartitionByHandle((ULONG_PTR)Handle, 2031619, 0, 0x4D536D4Du, &v21);
      v7 = (__int64)v21;
      v14 = v17;
      if ( v17 >= 0 )
      {
        v18 = *v21;
        ObfReferenceObjectWithTag(*v9, 0x72536D4Du);
        *(_QWORD *)(v18 + 21400) = *v9;
        *(_QWORD *)(v18 + 21408) = v8;
        v8 = 0LL;
        *(_OWORD *)(v18 + 21416) = *a2;
        *(_OWORD *)(v18 + 21432) = a2[1];
        *((_QWORD *)PoolMm + 2) = _InterlockedIncrement64((volatile signed __int64 *)&stru_140E2DAB0.Header.WaitListHead.Flink);
        *(_OWORD *)(PoolMm + 24) = *a2;
        v19 = a2[1];
        *((_QWORD *)PoolMm + 8) = v18;
        *(_OWORD *)(PoolMm + 40) = v19;
        *((_QWORD *)PoolMm + 7) = Handle;
        v20 = *(_QWORD **)(a1 + 21408);
        if ( *v20 != a1 + 21400 )
          __fastfail(3u);
        *(_QWORD *)PoolMm = a1 + 21400;
        *((_QWORD *)PoolMm + 1) = v20;
        *v20 = PoolMm;
        *(_QWORD *)(a1 + 21408) = PoolMm;
        PoolMm = 0LL;
        v14 = 0;
        Handle = 0LL;
      }
    }
  }
  else
  {
    v14 = -1073741670;
  }
LABEL_28:
  if ( v8 )
    ZwClose(v8);
  if ( Handle )
    ZwClose(Handle);
  if ( v7 )
    PsDereferencePartition(v7);
  if ( PoolMm )
    ExFreePoolWithTag(PoolMm, 0);
  return (unsigned int)v14;
}
