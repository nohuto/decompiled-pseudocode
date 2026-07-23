/*
 * XREFs of IoMapTransferInternal @ 0x14043841C
 * Callers:
 *     HalMapTransferEx @ 0x140437D70 (HalMapTransferEx.c)
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

__int64 __fastcall IoMapTransferInternal(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int *a5,
        char a6,
        char a7)
{
  __int64 v7; // rbx
  unsigned int v12; // r12d
  char v13; // r15
  __int64 ContiguousPiece; // rdx
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int ContiguousPieceV2; // eax
  unsigned int v23; // r12d
  __int64 v24; // r8
  _QWORD *v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 *v30; // r10
  __int64 v31; // r9
  __int64 v32; // rdi
  unsigned int v33; // r11d
  __int64 v34; // r9
  __int64 v35; // r9
  __int64 v36; // r10
  size_t v37; // [rsp+20h] [rbp-68h]
  int v38; // [rsp+28h] [rbp-60h]
  char v39; // [rsp+28h] [rbp-60h]
  char v40; // [rsp+30h] [rbp-58h]
  __int64 v41; // [rsp+40h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF
  char v43; // [rsp+A0h] [rbp+18h]

  v7 = 0LL;
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 156) != 2 )
      return HalpMapTransferV3(a1, a2, (_DWORD)a3, a4, (__int64)a5, a6, a7);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v12 = *a5;
    if ( *a5 )
    {
      v43 = *(_BYTE *)(a1 + 441);
      v41 = a3[7];
      if ( !*(_BYTE *)(a1 + 442) )
      {
        v13 = a6;
        ContiguousPiece = (unsigned int)HalpDmaNextContiguousPiece(a1, a2, 0, a4, a6, v12);
        v15 = v12;
        v16 = *(_QWORD *)(a2 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48);
        v17 = v16 << 12;
        if ( (_DWORD)ContiguousPiece != v12 )
          goto LABEL_6;
        if ( *(_QWORD *)(a1 + 144) < v17 + (unsigned __int64)(a4 & 0xFFF) + ContiguousPiece - 1
          || !a6
          && !*(_BYTE *)(a1 + 445)
          && ((v17 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1, (v17 & v36) != 0) || (v35 & v17) != 0) )
        {
          v12 = *a5;
          v15 = *a5;
LABEL_6:
          v18 = *a3 + (a4 & 0xFFF);
          if ( a6 )
          {
            LODWORD(v37) = v15;
            HalpDmaSyncMapBuffers(a1, a2, a4, (__int64)a3, v37, a6, 0, 0);
          }
          else if ( !*(_BYTE *)(a1 + 445) )
          {
            LODWORD(v37) = v12;
            HalpDmaSyncMapBuffers(a1, a2, a4, (__int64)a3, v37, 0, 1, 0);
          }
          goto LABEL_9;
        }
        v18 = (v16 << 12) + (a4 & 0xFFF);
        v28 = *a5;
        goto LABEL_31;
      }
      v13 = a6;
      if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
        ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(a1, a2, v20, v21, a6, v12);
      else
        ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(a1, a2, v20, v21, a6, v12);
      *a5 = ContiguousPieceV2;
      v23 = ContiguousPieceV2;
      v24 = a4 & 0xFFF;
      v18 = v24
          + (*(_QWORD *)(a2 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12);
      if ( *(_QWORD *)(a1 + 144) >= v18 + (unsigned __int64)ContiguousPieceV2 - 1 )
      {
        if ( a6 )
          goto LABEL_58;
        if ( *(_BYTE *)(a1 + 445) )
          goto LABEL_9;
        v17 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
        if ( (v17 & v18) == 0 && (v17 & v34) == 0 )
        {
LABEL_58:
          if ( *(_BYTE *)(a1 + 445) )
          {
LABEL_9:
            if ( !v43 )
            {
              if ( !v13 )
              {
                if ( *(_BYTE *)(a1 + 444) )
                  HalpDmaZeroMapBuffers(v17, v41, a4 & 0xFFF, *a5);
              }
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 160) + 128LL), &LockHandle);
              guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 432), a2);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
            return v18;
          }
          v28 = v23;
LABEL_31:
          LOBYTE(v38) = 0;
          LOBYTE(v37) = v13;
          HalpDmaFlushBuffer(v17, a2, a4, v28, v37, v38);
          goto LABEL_9;
        }
      }
      v25 = (_QWORD *)a3[7];
      v18 = v24 + *v25;
      if ( a6 )
      {
        v40 = 0;
        v39 = a6;
      }
      else
      {
        if ( *(_BYTE *)(a1 + 445) )
          goto LABEL_18;
        v40 = 1;
        v39 = 0;
      }
      LODWORD(v37) = v23;
      HalpDmaSyncMapBuffers(a1, a2, a4, (__int64)v25, v37, v39, v40, 0);
LABEL_18:
      v26 = a3[7];
      v17 = (a4 & 0xFFF) + 4095;
      v27 = (v17 + (unsigned __int64)v23) >> 12;
      if ( (_DWORD)v27 )
      {
        v17 = (unsigned int)v27;
        do
        {
          v26 = *(_QWORD *)(v26 + 8);
          --v17;
        }
        while ( v17 );
      }
      a3[7] = v26;
      goto LABEL_9;
    }
    return v7;
  }
  v29 = 4096 - (unsigned int)(a4 & 0xFFF);
  v30 = (__int64 *)(a2 + 8 * (((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 6));
  v31 = *v30;
  v32 = (a4 & 0xFFF) + (*v30 << 12);
  v33 = *a5;
  if ( (unsigned int)v29 < *a5 )
  {
    while ( v31 + 1 == *++v30 )
    {
      if ( ((v31 ^ *v30) & 0xFFFFFFFFFFF00000uLL) == 0 )
      {
        v29 = (unsigned int)(v29 + 4096);
        v31 = *v30;
        if ( (unsigned int)v29 < v33 )
          continue;
      }
      if ( (unsigned int)v29 >= v33 )
        goto LABEL_39;
      break;
    }
    *a5 = v29;
  }
LABEL_39:
  if ( !*(_BYTE *)(a1 + 445) )
    HalpDmaFlushBuffer(v29, a2, a4, *a5, a6, a7);
  return v32;
}
