/*
 * XREFs of ObReferenceFileObjectForWrite @ 0x140929520
 * Callers:
 *     NtCopyFileChunk @ 0x140ADF550 (NtCopyFileChunk.c)
 *     IopIoRingReferenceFileObject @ 0x140B409DC (IopIoRingReferenceFileObject.c)
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
 */

__int64 __fastcall ObReferenceFileObjectForWrite(ULONG_PTR BugCheckParameter1, __int64 a2, _QWORD *a3, int *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  char v5; // r12
  ULONG_PTR v6; // rbp
  _KPROCESS *Process; // rax
  ULONG_PTR KernelTime; // r13
  signed __int64 *v10; // rax
  signed __int64 *v11; // rdi
  __int64 v12; // rsi
  signed __int64 v13; // r14
  __int128 v14; // rt0
  unsigned __int8 v15; // tt
  unsigned __int64 HandlePointer; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  void *v19; // r15
  int *v20; // r8
  int v21; // edx
  __int64 v22; // rsi
  char v23; // al
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  signed __int64 v26; // r8
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // ebx
  int v30; // eax
  signed __int32 v31[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v32; // [rsp+30h] [rbp-48h] BYREF
  int v33; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v34; // [rsp+90h] [rbp+18h]
  int *v35; // [rsp+98h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  v33 = 0;
  v6 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0x80000000) != 0LL )
  {
    if ( (_BYTE)a2 || BugCheckParameter1 > 0xFFFFFFFFFFFFFFFDuLL )
      return 3221225480LL;
    KernelTime = ObpKernelHandleTable;
    v6 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
  }
  else
  {
    Process = CurrentThread->ApcState.Process;
    KernelTime = Process[1].KernelTime;
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
      return 3221225480LL;
  }
  --CurrentThread->KernelApcDisable;
  if ( (v6 & 0x3FC) == 0 || (v10 = (signed __int64 *)ExpLookupHandleTableEntry(KernelTime, v6), (v11 = v10) == 0LL) )
  {
LABEL_41:
    if ( v6 )
      ExHandleLogBadReference(KernelTime, v6, KeGetCurrentThread()->PreviousMode);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, a2);
    v29 = -1073741816;
    goto LABEL_46;
  }
  _m_prefetchw(v10);
  v12 = *v10;
  v13 = v10[1];
LABEL_10:
  *((_QWORD *)&v32 + 1) = v13;
  *(_QWORD *)&v32 = v12;
  do
  {
    if ( (v12 & 0x1FFFE) == 0 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v11);
          v26 = *v11;
          if ( (*v11 & 1) != 0 )
            break;
          if ( !v26 )
            goto LABEL_41;
          ExpBlockOnLockedHandleEntry(KernelTime, v11, v26);
        }
      }
      while ( v26 != _InterlockedCompareExchange64(v11, v26 - 1, v26) );
      HandlePointer = ExGetHandlePointer(v11);
      v32 = *(_OWORD *)v11;
      v27 = (int)(ExSlowReplenishHandleTableEntry((unsigned __int64 *)v11) + 1);
      v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, v27);
      if ( v28 <= 0 )
        KeBugCheckEx(0x18u, 0LL, HandlePointer + 48, 0x10uLL, v27 + v28);
      _InterlockedIncrement64(v11);
      _InterlockedOr(v31, 0);
      if ( *(_QWORD *)(KernelTime + 48) )
        ExfUnblockPushLock((volatile __int64 *)(KernelTime + 48), 0LL);
      goto LABEL_20;
    }
    if ( (v12 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(KernelTime, v11, v12);
      _m_prefetchw(v11);
      v12 = *v11;
      v13 = v11[1];
      goto LABEL_10;
    }
    *(_QWORD *)&v14 = v12;
    *((_QWORD *)&v14 + 1) = v13;
    v15 = _InterlockedCompareExchange128(v11, v13, v12 - 2, (signed __int64 *)&v14);
    a2 = *((_QWORD *)&v14 + 1);
    v12 = v14;
    v32 = v14;
    v13 = *((_QWORD *)&v14 + 1);
  }
  while ( !v15 );
  if ( (unsigned __int16)((unsigned __int64)v12 >> 1) == 16 )
  {
    *(_QWORD *)&v32 = v12 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)(((unsigned __int64)v12 >> 1) - 1));
    HandlePointer = ExGetHandlePointer((__int64 *)&v32);
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, 0x7FF0uLL);
    if ( v17 <= 0 )
      KeBugCheckEx(0x18u, 0LL, HandlePointer + 48, 0x10uLL, v17 + 32752);
    v30 = ExFastReplenishHandleTableEntry(v11, (unsigned __int64 *)&v32, 32752);
    if ( v30 )
      _InterlockedAdd64((volatile signed __int64 *)HandlePointer, -v30);
LABEL_20:
    LODWORD(v13) = DWORD2(v32);
    v12 = v32;
    goto LABEL_21;
  }
  HandlePointer = ExGetHandlePointer((__int64 *)&v32);
LABEL_21:
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v18);
  if ( ObpTraceFlags )
    ObpPushStackInfo(HandlePointer, 1, 0x746C6644u);
  v19 = (void *)(HandlePointer + 48);
  if ( (int)IoComputeDesiredAccessFileObject(HandlePointer + 48, &v33) < 0 )
  {
    v29 = -1073741788;
    goto LABEL_45;
  }
  v20 = v35;
  v21 = v33;
  v22 = (v12 >> 17) & 7;
  v35[1] = v13 & 0x1FFFFFF;
  v23 = v22 | 8;
  if ( (v13 & 0x2000000) == 0 )
    v23 = v22;
  *v20 = v23 & 7;
  if ( (v13 & 0x1FFFFFF & (unsigned int)v21) == 0 )
  {
    v29 = -1073741790;
LABEL_45:
    ObfDereferenceObject(v19);
LABEL_46:
    *v34 = 0LL;
    return v29;
  }
  if ( v5 )
  {
    if ( (*(_BYTE *)(HandlePointer + 26) & 0x40) != 0 )
    {
      v24 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x7F];
      v25 = *(_QWORD *)v24;
      if ( *(_BYTE *)(*(_QWORD *)v24 + 24LL) )
      {
        if ( v25 && *(_QWORD *)(v25 + 16) == 1LL )
        {
          v29 = -1073700858;
          goto LABEL_45;
        }
      }
    }
  }
  if ( (*v20 & 4) != 0 && v21 && v5 && !ObpAuditObjectAccess(KernelTime, v6, v11, HandlePointer, v21) )
  {
    v29 = -1073741816;
    goto LABEL_45;
  }
  *v34 = v19;
  return 0LL;
}
