/*
 * XREFs of MmRotatePhysicalView @ 0x140AEF280
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403146B4 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiGetVadCacheAttribute @ 0x1404DBCAC (MiGetVadCacheAttribute.c)
 *     MiLogVirtualRotateEvent @ 0x140870FEC (MiLogVirtualRotateEvent.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140AEF51C (MiRotateToFrameBufferNoCopy.c)
 *     MiRotateToFrameBuffer @ 0x140AEF750 (MiRotateToFrameBuffer.c)
 *     MiReplaceRotateWithDemandZero @ 0x140AEFA48 (MiReplaceRotateWithDemandZero.c)
 */

NTSTATUS __stdcall MmRotatePhysicalView(
        PVOID VirtualAddress,
        PSIZE_T NumberOfBytes,
        PMDL NewMdl,
        MM_ROTATE_DIRECTION Direction,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context)
{
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // r12
  char *v11; // rsi
  unsigned __int64 v12; // rbx
  ULONG_PTR v13; // rax
  __int64 v14; // rbp
  unsigned int VadFlags; // eax
  unsigned int VadCacheAttribute; // eax
  int v17; // eax
  NTSTATUS v18; // ebx
  PVOID v20; // r14
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF
  __int64 ProcessPartition; // [rsp+88h] [rbp+10h]

  v6 = *NumberOfBytes;
  v7 = 0LL;
  LODWORD(v21) = 0;
  v11 = (char *)VirtualAddress;
  if ( ((unsigned __int16)VirtualAddress & 0xFFF) != 0 )
  {
    v18 = -1073741585;
    goto LABEL_13;
  }
  if ( (v6 & 0xFFF) != 0 )
    goto LABEL_29;
  if ( Direction >= MmMaximumRotateDirection )
  {
    v18 = -1073741583;
    goto LABEL_13;
  }
  v12 = (unsigned __int64)VirtualAddress + v6 - 1;
  if ( v12 <= (unsigned __int64)VirtualAddress )
  {
LABEL_29:
    v18 = -1073741584;
    goto LABEL_13;
  }
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  v13 = MiObtainReferencedVadEx((unsigned __int64)v11, 0LL, (int *)&v21);
  v14 = v13;
  if ( !v13 )
  {
    v18 = v21;
    if ( (_DWORD)v21 == -1073741664 )
      v18 = -1073741819;
    goto LABEL_13;
  }
  VadFlags = MiReadVadFlags(v13);
  if ( (VadFlags & 0x1C) != 0x10
    || (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) < v12 >> 12 )
  {
    v18 = -1073741800;
    goto LABEL_12;
  }
  VadCacheAttribute = MiGetVadCacheAttribute(VadFlags);
  if ( Direction > MmToFrameBufferNoCopy )
  {
    if ( Direction == MmToRegularMemoryNoCopy )
    {
      v18 = MiReplaceRotateWithDemandZeroNoCopy(v14, (unsigned __int64)v11, v12, VadCacheAttribute);
      MiUnlockAndDereferenceVad((volatile signed __int32 *)v14);
      *NumberOfBytes = v6;
      if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 && v6 )
        MiLogVirtualRotateEvent((__int64)v11, v6, 3);
      return v18;
    }
    v20 = Context;
    v18 = v21;
    while ( v6 )
    {
      v21 = 0LL;
      v18 = MiReplaceRotateWithDemandZero(v14, v11, v6, CopyFunction, v20, &v21);
      v7 += v21;
      if ( v18 == 1073741849 )
        break;
      v6 -= v21;
      v11 += v21;
    }
    goto LABEL_12;
  }
  if ( Direction )
    v17 = MiRotateToFrameBufferNoCopy(v14, v11, NewMdl, v6 >> 12);
  else
    v17 = MiRotateToFrameBuffer(ProcessPartition, v14, v11, NewMdl, v6 >> 12, CopyFunction, Context);
  v18 = v17;
  if ( v17 < 0 )
  {
LABEL_12:
    MiUnlockAndDereferenceVad((volatile signed __int32 *)v14);
LABEL_13:
    *NumberOfBytes = v7;
    return v18;
  }
  MiUnlockAndDereferenceVad((volatile signed __int32 *)v14);
  *NumberOfBytes = v6;
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
  {
    if ( v6 )
      MiLogVirtualRotateEvent((__int64)v11, v6, Direction);
  }
  return 0;
}
