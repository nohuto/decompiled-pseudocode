/*
 * XREFs of IopMapTransfer @ 0x14035E030
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     HalpDmaNextContiguousPiece @ 0x14035D8E4 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x14035D930 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaSyncMapBuffers @ 0x14035DBE0 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaGetAdapterVersion @ 0x14035E758 (HalpDmaGetAdapterVersion.c)
 *     HalpMapTransferV3 @ 0x140438870 (HalpMapTransferV3.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x140438948 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaFlushBuffer @ 0x140438C2C (HalpDmaFlushBuffer.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140439690 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaZeroMapBuffers @ 0x14058BC68 (HalpDmaZeroMapBuffers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopMapTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5, char a6)
{
  bool v6; // zf
  __int64 v11; // r8
  char v12; // r15
  __int64 ContiguousPiece; // rdx
  unsigned int v14; // eax
  __int64 v15; // r10
  __int64 v16; // rcx
  char v17; // r11
  __int64 v18; // rbx
  unsigned int v20; // r8d
  __int64 v21; // r9
  unsigned int ContiguousPieceV2; // eax
  unsigned int v23; // edx
  __int64 v24; // r8
  _QWORD *v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // r9
  unsigned int v29; // r10d
  __int64 v30; // rcx
  unsigned int v31; // edx
  __int64 *v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // eax
  __int64 v38; // r8
  _QWORD *v39; // rcx
  __int64 v40; // rdi
  unsigned __int64 v41; // rsi
  __int64 v42; // rax
  size_t v43; // [rsp+20h] [rbp-59h]
  int v44; // [rsp+28h] [rbp-51h]
  char v45; // [rsp+28h] [rbp-51h]
  char v46; // [rsp+30h] [rbp-49h]
  char v47; // [rsp+38h] [rbp-41h]
  __int64 v48; // [rsp+40h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-1h] BYREF
  char v50; // [rsp+D0h] [rbp+57h]
  unsigned int v51; // [rsp+E0h] [rbp+67h]
  unsigned int v52; // [rsp+E0h] [rbp+67h]

  v6 = *(_DWORD *)(a1 + 520) == 3;
  *(_BYTE *)(a1 + 524) = 1;
  if ( v6 )
  {
    v37 = *(_DWORD *)(a1 + 252);
    if ( *a5 > v37 )
      *a5 = v37;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 156) != 2 )
    {
      v18 = HalpMapTransferV3(a1, a2, a3, a4, (__int64)a5, a6, 0);
      goto LABEL_10;
    }
    v11 = *a5;
    v51 = v11;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !(_DWORD)v11 )
    {
      v18 = 0LL;
      goto LABEL_10;
    }
    v50 = *(_BYTE *)(a1 + 441);
    v48 = *(_QWORD *)(a3 + 56);
    if ( !*(_BYTE *)(a1 + 442) )
    {
      v12 = a6;
      ContiguousPiece = (unsigned int)HalpDmaNextContiguousPiece(a1, a2, 0, a4, a6, v11);
      v14 = v51;
      v15 = *(_QWORD *)(a2 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48);
      v16 = v51;
      if ( (_DWORD)ContiguousPiece != v51 )
        goto LABEL_7;
      if ( *(_QWORD *)(a1 + 144) < (*(_QWORD *)(a2
                                              + 8LL
                                              * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12)
                                              + 48) << 12)
                                 + (unsigned __int64)(a4 & 0xFFF)
                                 + ContiguousPiece
                                 - 1
        || !a6
        && !*(_BYTE *)(a1 + 445)
        && ((v16 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1, (v16 & v36) != 0) || (v35 & v16) != 0) )
      {
        v14 = *a5;
        v16 = *a5;
LABEL_7:
        v17 = 0;
        v18 = *(_QWORD *)a3 + (a4 & 0xFFF);
        if ( a6 )
        {
          LODWORD(v43) = v16;
          HalpDmaSyncMapBuffers(a1, a2, a4, a3, v43, a6, 0, 0);
        }
        else
        {
          if ( *(_BYTE *)(a1 + 445) )
            goto LABEL_9;
          LODWORD(v43) = v14;
          HalpDmaSyncMapBuffers(a1, a2, a4, a3, v43, 0, 1, 0);
        }
        goto LABEL_32;
      }
      v28 = *a5;
      v18 = (v15 << 12) + (a4 & 0xFFF);
      LOBYTE(v44) = 0;
LABEL_31:
      LOBYTE(v43) = v12;
      HalpDmaFlushBuffer(v16, a2, a4, v28, v43, v44);
LABEL_32:
      v17 = 0;
      goto LABEL_9;
    }
    v12 = a6;
    if ( (unsigned int)HalpDmaGetAdapterVersion(a1, a2, v11, a4) == 2 )
      ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(a1, a2, a3, v21, a6, v20);
    else
      ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(a1, a2, a3, v21, a6, v20);
    *a5 = ContiguousPieceV2;
    v23 = ContiguousPieceV2;
    v52 = ContiguousPieceV2;
    v24 = a4 & 0xFFF;
    v17 = 0;
    v18 = v24 + (*(_QWORD *)(a2 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12);
    if ( *(_QWORD *)(a1 + 144) < v18 + (unsigned __int64)ContiguousPieceV2 - 1 )
    {
LABEL_15:
      v25 = *(_QWORD **)(a3 + 56);
      v18 = v24 + *v25;
      if ( a6 )
      {
        v47 = v17;
        v46 = v17;
        v45 = a6;
      }
      else
      {
        if ( *(_BYTE *)(a1 + 445) != v17 )
          goto LABEL_18;
        v47 = v17;
        v46 = 1;
        v45 = v17;
      }
      LODWORD(v43) = v23;
      HalpDmaSyncMapBuffers(a1, a2, a4, (__int64)v25, v43, v45, v46, v47);
      v17 = 0;
LABEL_18:
      v26 = *(_QWORD *)(a3 + 56);
      v16 = a4 & 0xFFF;
      v27 = (v16 + (unsigned __int64)v52 + 4095) >> 12;
      if ( (_DWORD)v27 )
      {
        v16 = (unsigned int)v27;
        do
        {
          v26 = *(_QWORD *)(v26 + 8);
          --v16;
        }
        while ( v16 );
      }
      *(_QWORD *)(a3 + 56) = v26;
      goto LABEL_9;
    }
    if ( !a6 )
    {
      if ( *(_BYTE *)(a1 + 445) )
      {
LABEL_9:
        if ( v50 == v17 )
        {
          if ( !v12 && *(_BYTE *)(a1 + 444) != v17 )
            HalpDmaZeroMapBuffers(v16, v48, a4 & 0xFFF, *a5);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 160) + 128LL), &LockHandle);
          LOBYTE(v38) = v12;
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 432), a2, v38);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        goto LABEL_10;
      }
      v16 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
      if ( (v16 & v18) != 0 || (v16 & v34) != 0 )
      {
        v23 = v52;
        goto LABEL_15;
      }
      v23 = v52;
    }
    if ( *(_BYTE *)(a1 + 445) != v17 )
      goto LABEL_9;
    LOBYTE(v44) = v17;
    v28 = v23;
    goto LABEL_31;
  }
  v29 = *a5;
  v30 = a4 & 0xFFF;
  v31 = 4096 - (a4 & 0xFFF);
  v32 = (__int64 *)(a2 + 8 * (((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 6));
  v33 = *v32;
  v18 = v30 + (*v32 << 12);
  if ( v31 < *a5 )
  {
    while ( 1 )
    {
      v30 = *++v32;
      if ( v33 + 1 != *v32 )
        break;
      if ( ((v33 ^ v30) & 0xFFFFFFFFFFF00000uLL) == 0 )
      {
        v31 += 4096;
        v33 = *v32;
        if ( v31 < v29 )
          continue;
      }
      if ( v31 >= v29 )
        goto LABEL_41;
      break;
    }
    *a5 = v31;
  }
LABEL_41:
  if ( !*(_BYTE *)(a1 + 445) )
    HalpDmaFlushBuffer(v30, a2, a4, *a5, a6, 0);
LABEL_10:
  if ( *(_DWORD *)(a1 + 520) == 3 )
  {
    v39 = *(_QWORD **)(a3 + 24);
    v40 = v18 & 0xFFF;
    v41 = (v40 + *a5 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( *(_BYTE *)(a3 + 64) )
    {
      v42 = *(unsigned int *)(a3 + 16);
      v18 = v40 + *v39 + v42 + *(_QWORD *)(a3 + 32);
      *(_DWORD *)(a3 + 16) = v41 + v42;
    }
    else
    {
      guard_dispatch_icall_no_overrides(v39, *(_QWORD *)(a3 + 40), 3LL);
      *(_QWORD *)(a3 + 40) += v41;
      return MEMORY[0] + v40;
    }
  }
  return v18;
}
