/*
 * XREFs of RawDispatch @ 0x140A35180
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     FsRtlIsNtstatusExpected @ 0x1402E2870 (FsRtlIsNtstatusExpected.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     RawSetInformation @ 0x140800084 (RawSetInformation.c)
 *     RawCleanup @ 0x140A35394 (RawCleanup.c)
 *     RawClose @ 0x140A3552C (RawClose.c)
 *     RawReadWriteDeviceControl @ 0x140A355B4 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x140A356CC (RawCreate.c)
 *     RawQueryVolumeInformation @ 0x140A35C8C (RawQueryVolumeInformation.c)
 *     RawFileSystemControl @ 0x140A35E00 (RawFileSystemControl.c)
 *     RawQueryInformation @ 0x140A36C34 (RawQueryInformation.c)
 */

__int64 __fastcall RawDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r14
  unsigned int MajorFunction; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int Information; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  UCHAR v18; // al

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_WORD *)(a1 + 2) != 336
    || (v18 = CurrentStackLocation->MajorFunction, CurrentStackLocation->MajorFunction == 13)
    && CurrentStackLocation->MinorFunction == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = a1 + 336;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( MajorFunction <= 9 )
    {
      if ( MajorFunction == 9 )
        goto LABEL_15;
      if ( !CurrentStackLocation->MajorFunction )
      {
        Information = RawCreate((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_8;
      }
      v13 = MajorFunction - 2;
      if ( !v13 )
      {
        Information = RawClose((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_8;
      }
      v14 = v13 - 1;
      if ( !v14 )
        goto LABEL_15;
      v15 = v14 - 1;
      if ( !v15 )
        goto LABEL_15;
      v16 = v15 - 1;
      if ( !v16 )
      {
        Information = RawQueryInformation(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_8;
      }
      if ( v16 == 1 )
      {
        Information = RawSetInformation(a1 + 336, a2, (__int64)CurrentStackLocation);
        goto LABEL_8;
      }
    }
    else
    {
      v7 = MajorFunction - 10;
      if ( !v7 )
      {
        Information = RawQueryVolumeInformation(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_8;
      }
      v8 = v7 - 3;
      if ( !v8 )
      {
        Information = RawFileSystemControl(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_8;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
LABEL_15:
        Information = RawReadWriteDeviceControl((PFSRTL_ADVANCED_FCB_HEADER)v5, a2);
        goto LABEL_8;
      }
      v10 = v9 - 4;
      if ( !v10 )
      {
        Information = RawCleanup((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
LABEL_8:
        v12 = Information;
LABEL_30:
        KeLeaveCriticalRegion();
        return v12;
      }
      if ( v10 == 9 )
      {
        if ( CurrentStackLocation->MinorFunction == 1 )
        {
          v12 = -2147483631;
          a2->IoStatus.Status = -2147483631;
          IofCompleteRequest(a2, 1);
          goto LABEL_30;
        }
        ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 576));
        if ( (*(_DWORD *)(v5 + 120) & 2) != 0 )
        {
          v12 = -1073741202;
          a2->IoStatus.Status = -1073741202;
          IofCompleteRequest(a2, 1);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 240));
          goto LABEL_30;
        }
        ++*(_DWORD *)(v5 + 128);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 240));
        goto LABEL_15;
      }
    }
    KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (v18 & 0xED) != 0 || v18 == 16 )
    v12 = -1073741808;
  else
    v12 = 0;
  a2->IoStatus.Status = v12;
  IofCompleteRequest(a2, 1);
  return v12;
}
