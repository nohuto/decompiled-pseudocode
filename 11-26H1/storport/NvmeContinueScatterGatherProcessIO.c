/*
 * XREFs of NvmeContinueScatterGatherProcessIO @ 0x140119EC0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeSubmitIoToSQ @ 0x140020590 (NvmeSubmitIoToSQ.c)
 *     NvmeNamespaceQueueIo @ 0x1400210B0 (NvmeNamespaceQueueIo.c)
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeSendSplitIo @ 0x140040110 (NvmeSendSplitIo.c)
 *     GetNVMePrpListBufferEntry @ 0x140047000 (GetNVMePrpListBufferEntry.c)
 *     FreeNVMeChainedIoSplitContext @ 0x140057B10 (FreeNVMeChainedIoSplitContext.c)
 *     AllocateNewNVMePrpListBufferEntry @ 0x140058120 (AllocateNewNVMePrpListBufferEntry.c)
 *     FreeAllSglAndContextInChainedSplitIoContext @ 0x140119C60 (FreeAllSglAndContextInChainedSplitIoContext.c)
 *     FreeNVMeSGLBufferContext @ 0x140119DA0 (FreeNVMeSGLBufferContext.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeContinueScatterGatherProcessIO(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v6; // r13
  IRP *v7; // rbp
  __int64 v8; // r14
  unsigned __int16 *v9; // rdi
  __int64 v10; // rbx
  char v11; // r13
  int v12; // edi
  __int64 v13; // rax
  unsigned __int8 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r11
  int v17; // r10d
  __int64 NVMePrpListBufferEntry; // r9
  _MDL *MdlAddress; // rax
  __int64 v20; // r8
  unsigned __int16 *v21; // rax
  __int64 QuadPart; // rbx
  int v23; // edi
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  unsigned __int8 v27; // bl
  KIRQL v28; // r13
  __int64 v29; // rax
  __int64 v30; // rbx
  int v31; // [rsp+28h] [rbp-A0h]
  int v32; // [rsp+60h] [rbp-68h]
  int v33; // [rsp+68h] [rbp-60h]
  __int64 v34; // [rsp+70h] [rbp-58h]
  __int64 v35; // [rsp+78h] [rbp-50h]
  __int64 v36; // [rsp+80h] [rbp-48h]
  bool v37; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v38; // [rsp+E0h] [rbp+18h]
  int v39; // [rsp+E8h] [rbp+20h]

  v38 = a3;
  v4 = *(_QWORD *)(a4 + 32);
  v6 = *(_BYTE *)(a4 + 126);
  v7 = *(IRP **)(a4 + 40);
  v8 = *(unsigned int *)(a4 + 120);
  v9 = *(unsigned __int16 **)(a4 + 64);
  v10 = *(_QWORD *)(a4 + 72);
  v36 = *(_QWORD *)(a1 + 64);
  v34 = *(_QWORD *)(v4 + 16);
  v37 = 0;
  *(_QWORD *)(a4 + 24) = a3;
  if ( (v6 & 2) == 0 )
  {
    v13 = *(_QWORD *)(a4 + 96);
    v14 = v6 & 1;
    v15 = *(unsigned int *)(a4 + 116);
    v16 = *(_QWORD *)(a4 + 104);
    v17 = *(_DWORD *)(a4 + 112);
    NVMePrpListBufferEntry = 0LL;
    v35 = v13;
    MdlAddress = v7->MdlAddress;
    v39 = v17;
    v33 = v16;
    v32 = v15;
    if ( ((((LODWORD(MdlAddress->StartVa) + MdlAddress->ByteOffset) & 0xFFF) + v15 + 4095) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
    {
      NVMePrpListBufferEntry = (__int64)GetNVMePrpListBufferEntry(*(_QWORD *)(v4 + 16), v8);
      if ( !NVMePrpListBufferEntry )
      {
        NVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(v4 + 16), v8);
        if ( !NVMePrpListBufferEntry )
        {
          NvmeNamespaceQueueIo(v4, (__int64)v7, v8);
          v12 = -2147483631;
LABEL_13:
          v11 = 0;
          goto LABEL_14;
        }
      }
      LODWORD(v16) = v33;
      LOWORD(v17) = v39;
      LODWORD(v15) = v32;
    }
    if ( !v9 )
    {
      v20 = *(_QWORD *)(v4 + 16);
      if ( (*(_BYTE *)(v20 + 136) & 2) != 0 )
      {
        v10 = *(_QWORD *)(v20 + 728) + 192 * v8;
      }
      else
      {
        v10 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(v20 + 872) + 2 * v8) + *(_QWORD *)(v20 + 728) - 192LL;
        LODWORD(v15) = v32;
      }
    }
    LOBYTE(v31) = 0;
    v12 = NvmeSubmitIoToSQ(v4, (__int64)v7, v10, NVMePrpListBufferEntry, v8, v31, v15, v35, v16, v17, v14, v9);
    goto LABEL_13;
  }
  v11 = 1;
  v12 = NvmeSendSplitIo(*(_QWORD *)(a4 + 88), v8, v10, v9, &v37, 0LL, 0LL, 0LL, 1);
LABEL_14:
  if ( v12 != 259 )
  {
    v21 = *(unsigned __int16 **)(a4 + 64);
    if ( v21 )
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(a4 + 72) + 64LL),
        (PSLIST_ENTRY)(*(_QWORD *)(*(_QWORD *)(a4 + 72) + 32LL) + ((unsigned __int64)*v21 << 7)));
    if ( (int)(v12 + 0x80000000) >= 0 && v12 != -2147483631 )
    {
      if ( v11 )
      {
        if ( v37 )
        {
          QuadPart = v7->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
          v23 = *(_DWORD *)(QuadPart + 112);
          FreeAllSglAndContextInChainedSplitIoContext(v34, QuadPart);
          FreeNVMeChainedIoSplitContext(v34, v8, QuadPart, (__int64)v7);
          v7->IoStatus.Information = 0LL;
          v7->IoStatus.Status = v23;
          IofCompleteRequest(v7, 0);
          v24 = *(_QWORD *)(v4 + 128);
          if ( !*(_BYTE *)v24
            && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v24 + 24) + 8 * v8), 0xFFFFFFFF) == 1 )
          {
            v25 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 128LL);
            if ( NvmeNamespaceCheckAndAcquirePoFx(v4) )
            {
              PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v4 + 128) + 8LL), 0LL, 2LL);
              NvmeNamespaceReleasePoFx(v4);
            }
            v26 = *(_QWORD *)(v25 + 160);
            if ( *(_BYTE *)v26 == 1 )
LABEL_34:
              PoFxIdleComponent(**(_QWORD **)(v26 + 8), 0LL, 2LL);
          }
        }
      }
      else
      {
        v27 = *(_BYTE *)(a4 + 126) & 1;
        v28 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v36 + 1160) + 8LL) + 96LL))(
          *(_QWORD *)(v36 + 1160),
          v38,
          v27 ^ 1u);
        if ( v28 < 2u )
          KeLowerIrql(v28);
        FreeNVMeSGLBufferContext(v34, a4, 1);
        v7->IoStatus.Information = 0LL;
        v7->IoStatus.Status = v12;
        IofCompleteRequest(v7, 0);
        v29 = *(_QWORD *)(v4 + 128);
        if ( !*(_BYTE *)v29
          && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v29 + 24) + 8 * v8), 0xFFFFFFFF) == 1 )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 128LL);
          if ( NvmeNamespaceCheckAndAcquirePoFx(v4) )
          {
            PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v4 + 128) + 8LL), 0LL, 2LL);
            NvmeNamespaceReleasePoFx(v4);
          }
          v26 = *(_QWORD *)(v30 + 160);
          if ( *(_BYTE *)v26 == 1 )
            goto LABEL_34;
        }
      }
    }
  }
}
