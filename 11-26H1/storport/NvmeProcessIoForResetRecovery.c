/*
 * XREFs of NvmeProcessIoForResetRecovery @ 0x1400FFB24
 * Callers:
 *     NvmeControllerRequeueSQPendingRequests @ 0x1400F9ED4 (NvmeControllerRequeueSQPendingRequests.c)
 * Callees:
 *     NvmeNamespaceQueueIo @ 0x1400210B0 (NvmeNamespaceQueueIo.c)
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     FreeNVMeChainedIoSplitContext @ 0x140057B10 (FreeNVMeChainedIoSplitContext.c)
 *     FreeAllSglAndContextInChainedSplitIoContext @ 0x140119C60 (FreeAllSglAndContextInChainedSplitIoContext.c)
 */

char __fastcall NvmeProcessIoForResetRecovery(__int64 a1, IRP *a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v5; // rbp
  unsigned __int8 v7; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 QuadPart; // rbx
  unsigned __int16 v11; // dx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx

  v5 = a3;
  v7 = 4;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  QuadPart = 0LL;
  v11 = 0;
  if ( *(_BYTE *)(a1 + 668) )
    v7 = *(_BYTE *)(a1 + 668);
  if ( a4 && CurrentStackLocation->Parameters.WMI.ProviderId == 0x8765432100000003uLL )
  {
    QuadPart = CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    v11 = *(_WORD *)(QuadPart + 32);
  }
  CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)(CurrentStackLocation->Parameters.Create.EaLength
                                                                                           + 1);
  if ( CurrentStackLocation->Parameters.Create.EaLength > v7 )
  {
    if ( QuadPart )
    {
      _InterlockedExchange((volatile __int32 *)(a5 + 104), 5);
      LODWORD(v14) = _InterlockedIncrement((volatile signed __int32 *)(QuadPart + 116));
      if ( (int)v14 < v11 )
        return v14;
      FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD *)(a1 + 16), QuadPart);
      FreeNVMeChainedIoSplitContext(*(_QWORD *)(a1 + 16), v5, QuadPart, (__int64)a2);
    }
    a2->IoStatus.Information = 0LL;
    a2->IoStatus.Status = -2147483619;
    IofCompleteRequest(a2, 0);
    v15 = *(_QWORD *)(a1 + 128);
    if ( !*(_BYTE *)v15
      && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v15 + 24) + 8 * v5), 0xFFFFFFFF) == 1 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
      if ( NvmeNamespaceCheckAndAcquirePoFx(a1) )
      {
        PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), 0LL, 2LL);
        NvmeNamespaceReleasePoFx(a1);
      }
      v17 = *(_QWORD *)(v16 + 160);
      if ( *(_BYTE *)v17 == 1 )
        PoFxIdleComponent(**(_QWORD **)(v17 + 8), 0LL, 2LL);
    }
    v14 = *(_QWORD *)(a1 + 496);
    if ( v14 )
    {
      v18 = *(unsigned __int8 *)(v14 + 28);
      ++*(_DWORD *)(v14 + 24);
      v19 = *(_QWORD *)(a1 + 496);
      if ( (unsigned __int8)v18 < *(_BYTE *)(v19 + 29) )
      {
        v20 = 2 * (v18 + 2);
        *(_QWORD *)(v19 + 8 * v20 + 8) = a2;
        *(_QWORD *)(v19 + 8 * v20) = MEMORY[0xFFFFF78000000014];
      }
      v21 = *(_QWORD *)(a1 + 496);
      LOBYTE(v14) = (unsigned __int8)(v18 + 1) < *(_BYTE *)(v21 + 29) ? v18 + 1 : 0;
      *(_BYTE *)(v21 + 28) = v14;
    }
  }
  else
  {
    if ( !QuadPart )
      goto LABEL_15;
    v12 = QuadPart;
    if ( v11 )
    {
      v13 = v11;
      do
      {
        if ( *(_DWORD *)(v12 + 104) != 5 && *(_DWORD *)(v12 + 104) != 3 )
          _InterlockedExchange((volatile __int32 *)(v12 + 104), 3);
        v12 = *(_QWORD *)(v12 + 96);
        --v13;
      }
      while ( v13 );
    }
    LOBYTE(v14) = _interlockedbittestandset((volatile signed __int32 *)(QuadPart + 108), 0);
    if ( (_BYTE)v14 != 1 )
LABEL_15:
      LOBYTE(v14) = NvmeNamespaceQueueIo(a1, (__int64)a2, v5);
  }
  return v14;
}
