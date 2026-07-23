/*
 * XREFs of NtWriteFile @ 0x14092B660
 * Callers:
 *     DifNtWriteFileWrapper @ 0x140695750 (DifNtWriteFileWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1404453A0 (ExSlowReplenishHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x140466170 (ExHandleLogBadReference.c)
 *     ExFastReplenishHandleTableEntry @ 0x1404A61B0 (ExFastReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpAuditObjectAccess @ 0x14091F14C (ObpAuditObjectAccess.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     IoComputeDesiredAccessFileObject @ 0x14092B600 (IoComputeDesiredAccessFileObject.c)
 *     IopWriteFile @ 0x140982A60 (IopWriteFile.c)
 *     PsIsProcessAppContainer @ 0x1409A7110 (PsIsProcessAppContainer.c)
 */

NTSTATUS __stdcall NtWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  unsigned __int64 v9; // rbp
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rax
  ULONG_PTR KernelTime; // r13
  __int64 *v13; // rax
  __int64 *v14; // rdi
  __int64 v15; // rsi
  signed __int64 v16; // r14
  __int128 v17; // rt0
  unsigned __int8 v18; // tt
  unsigned __int64 HandlePointer; // rbx
  __int64 v20; // rax
  NTSTATUS v21; // ebx
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  void *v27; // r15
  __int64 v28; // rsi
  char v29; // dl
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  _DWORD *v32; // rax
  int v33; // eax
  void *v34; // rcx
  void *v35; // rcx
  signed __int32 v36[8]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned int v37; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v38[12]; // [rsp+78h] [rbp-60h] BYREF
  char PreviousMode; // [rsp+E0h] [rbp+8h]

  v9 = (unsigned __int64)FileHandle;
  CurrentThread = KeGetCurrentThread();
  v37 = 0;
  PreviousMode = CurrentThread->PreviousMode;
  if ( (int)FileHandle >= 0 )
  {
    Process = CurrentThread->ApcState.Process;
    KernelTime = Process[1].KernelTime;
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
      goto LABEL_7;
    return -1073741816;
  }
  if ( CurrentThread->PreviousMode || (unsigned __int64)FileHandle > 0xFFFFFFFFFFFFFFFDuLL )
    return -1073741816;
  KernelTime = ObpKernelHandleTable;
  v9 = (unsigned __int64)FileHandle ^ 0xFFFFFFFF80000000uLL;
LABEL_7:
  --CurrentThread->KernelApcDisable;
  if ( (v9 & 0x3FC) == 0
    || (v13 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)KernelTime, v9), (v14 = v13) == 0LL) )
  {
LABEL_18:
    if ( v9 )
      ExHandleLogBadReference(KernelTime, v9, KeGetCurrentThread()->PreviousMode);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, (__int64)Event);
    return -1073741816;
  }
  _m_prefetchw(v13);
  v15 = *v13;
  v16 = v13[1];
LABEL_10:
  v38[1] = v16;
  v38[0] = v15;
  do
  {
    if ( (v15 & 0x1FFFE) == 0 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v14);
          v23 = *v14;
          if ( (*v14 & 1) != 0 )
            break;
          if ( !v23 )
            goto LABEL_18;
          ExpBlockOnLockedHandleEntry(KernelTime, v14, v23);
        }
      }
      while ( v23 != _InterlockedCompareExchange64(v14, v23 - 1, v23) );
      HandlePointer = ExGetHandlePointer(v14);
      *(_OWORD *)v38 = *(_OWORD *)v14;
      v25 = (int)(ExSlowReplenishHandleTableEntry((unsigned __int64 *)v14) + 1);
      v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, v25);
      if ( v26 <= 0 )
        KeBugCheckEx(0x18u, 0LL, HandlePointer + 48, 0x10uLL, v25 + v26);
      _InterlockedIncrement64(v14);
      _InterlockedOr(v36, 0);
      if ( *(_QWORD *)(KernelTime + 48) )
        ExfUnblockPushLock((volatile __int64 *)(KernelTime + 48), 0LL);
      goto LABEL_31;
    }
    if ( (v15 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(KernelTime, v14, v15);
      _m_prefetchw(v14);
      v15 = *v14;
      v16 = v14[1];
      goto LABEL_10;
    }
    *(_QWORD *)&v17 = v15;
    *((_QWORD *)&v17 + 1) = v16;
    v18 = _InterlockedCompareExchange128(v14, v16, v15 - 2, (signed __int64 *)&v17);
    Event = (HANDLE)*((_QWORD *)&v17 + 1);
    v15 = v17;
    *(_OWORD *)v38 = v17;
    v16 = *((_QWORD *)&v17 + 1);
  }
  while ( !v18 );
  if ( (unsigned __int16)((unsigned __int64)v15 >> 1) == 16 )
  {
    v38[0] = v15 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)(((unsigned __int64)v15 >> 1) - 1));
    HandlePointer = ExGetHandlePointer((__int64 *)v38);
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, 0x7FF0uLL);
    if ( v20 <= 0 )
      KeBugCheckEx(0x18u, 0LL, HandlePointer + 48, 0x10uLL, v20 + 32752);
    v33 = ExFastReplenishHandleTableEntry(v14, v38, 32752);
    if ( v33 )
      _InterlockedAdd64((volatile signed __int64 *)HandlePointer, -v33);
LABEL_31:
    LODWORD(v16) = v38[1];
    v15 = v38[0];
    goto LABEL_32;
  }
  HandlePointer = ExGetHandlePointer((__int64 *)v38);
LABEL_32:
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v24);
  if ( ObpTraceFlags )
    ObpPushStackInfo(HandlePointer, 1, 0x746C6644u);
  v27 = (void *)(HandlePointer + 48);
  if ( (int)IoComputeDesiredAccessFileObject(HandlePointer + 48, (int *)&v37) < 0 )
  {
    v21 = -1073741788;
    goto LABEL_47;
  }
  v28 = (v15 >> 17) & 7;
  v29 = v28 | 8;
  if ( (v16 & 0x2000000) == 0 )
    v29 = v28;
  if ( (v16 & 0x1FFFFFF & v37) == 0 )
  {
    v21 = -1073741790;
LABEL_47:
    ObfDereferenceObject(v27);
    return v21;
  }
  if ( PreviousMode )
  {
    if ( (*(_BYTE *)(HandlePointer + 26) & 0x40) != 0 )
    {
      v30 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x7F];
      v31 = *(_QWORD *)v30;
      if ( *(_BYTE *)(*(_QWORD *)v30 + 24LL) )
      {
        if ( v31 && *(_QWORD *)(v31 + 16) == 1LL )
        {
          v34 = (void *)(HandlePointer + 48);
          v21 = -1073700858;
          ObfDereferenceObject(v34);
          return v21;
        }
      }
    }
  }
  if ( (v29 & 4) != 0 && v37 && PreviousMode && !ObpAuditObjectAccess(KernelTime, v9, v14, HandlePointer, v37) )
  {
    v35 = (void *)(HandlePointer + 48);
    v21 = -1073741816;
    ObfDereferenceObject(v35);
    return v21;
  }
  v32 = *(_DWORD **)(HandlePointer + 256);
  if ( v32 && (*v32 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
  {
    ObfDereferenceObject((PVOID)(HandlePointer + 48));
    return -1073739504;
  }
  return IopWriteFile(
           HandlePointer + 48,
           IoStatusBlock,
           (__int64)Buffer,
           Length,
           (__int64)ByteOffset,
           (__int64)Key,
           v16 & 0x1FFFFFF,
           0LL,
           0LL,
           0,
           0LL);
}
