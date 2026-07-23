/*
 * XREFs of HalpAllocateAdapterCallbackV2 @ 0x14035CC90
 * Callers:
 *     HalBuildScatterGatherListV2 @ 0x14035BE20 (HalBuildScatterGatherListV2.c)
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

__int64 __fastcall HalpAllocateAdapterCallbackV2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rsi
  int *v5; // r14
  unsigned __int8 v6; // al
  __int64 *v7; // rdi
  unsigned int v8; // ebp
  __int64 v9; // r10
  __int64 v10; // r12
  int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // r13
  unsigned int v14; // eax
  __int64 *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned int v17; // eax
  int *v18; // r14
  bool v19; // zf
  __int64 v20; // r8
  unsigned int ContiguousPiece; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned __int8 v24; // r10
  __int64 v25; // rax
  __int64 *v26; // rax
  int v28; // r8d
  unsigned int ContiguousPieceV2; // eax
  __int64 v30; // r8
  __int64 v31; // rax
  unsigned int v32; // r10d
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 *v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  unsigned int v38; // eax
  _QWORD *v39; // r10
  __int64 v40; // rcx
  __int64 v41; // rax
  __int128 *v42; // [rsp+20h] [rbp-E8h]
  unsigned int v43; // [rsp+28h] [rbp-E0h]
  char v44; // [rsp+28h] [rbp-E0h]
  char v45; // [rsp+28h] [rbp-E0h]
  char v46; // [rsp+30h] [rbp-D8h]
  char v47; // [rsp+30h] [rbp-D8h]
  bool v48; // [rsp+40h] [rbp-C8h]
  unsigned int v49; // [rsp+48h] [rbp-C0h]
  unsigned int v50; // [rsp+48h] [rbp-C0h]
  unsigned int v51; // [rsp+48h] [rbp-C0h]
  __int64 v52; // [rsp+48h] [rbp-C0h]
  __int64 v53; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v54; // [rsp+58h] [rbp-B0h]
  int *v55; // [rsp+78h] [rbp-90h]
  __int64 v56; // [rsp+90h] [rbp-78h]
  __int128 v57; // [rsp+98h] [rbp-70h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int8 v62; // [rsp+128h] [rbp+20h]

  v4 = *(__int64 **)(a4 + 8);
  v5 = (int *)(a4 + 48);
  v6 = *(_BYTE *)(a4 + 152);
  v7 = (__int64 *)(a4 + 64);
  v8 = *(_DWORD *)(a4 + 40);
  v9 = a1;
  v10 = *(_QWORD *)(a4 + 32);
  v11 = v8;
  v12 = *(_QWORD *)(a4 + 104);
  v13 = *(_QWORD *)(a4 + 144);
  *(_QWORD *)(a4 + 24) = a3;
  v62 = v6;
  *(_QWORD *)(a4 + 56) = a4;
  v14 = *((_DWORD *)v4 + 8) + *((_DWORD *)v4 + 10) + *((_DWORD *)v4 + 11) - v10;
  v56 = v12;
  v55 = (int *)(a4 + 48);
  if ( v8 )
  {
    while ( 1 )
    {
      v15 = (__int64 *)*v4;
      v16 = v8;
      if ( v14 <= v8 )
        v16 = v14;
      if ( v15 )
        v11 = v16;
      v17 = v8 - v16;
      v8 = 0;
      if ( v15 )
        v8 = v17;
      if ( v11 > 0 )
        break;
LABEL_21:
      v26 = (__int64 *)*v4;
      v4 = v26;
      if ( v26 )
      {
        v11 = v8;
        v10 = v26[4] + *((unsigned int *)v26 + 11);
        v14 = *((_DWORD *)v26 + 10);
        if ( v8 )
          continue;
      }
      v5 = v55;
      v9 = a1;
      v12 = v56;
      goto LABEL_24;
    }
    v18 = (int *)(v7 + 1);
    while ( 1 )
    {
      *v18 = v11;
      v19 = *(_DWORD *)(v13 + 520) == 3;
      v57 = 0LL;
      v58 = 0LL;
      *(_BYTE *)(v13 + 524) = 1;
      if ( v19 )
      {
        v38 = *(_DWORD *)(v13 + 252);
        if ( *v18 > v38 )
          *v18 = v38;
      }
      if ( !a3 )
      {
        v32 = *v18;
        v33 = ((unsigned __int64)(v10 - v4[4]) >> 12) + 6;
        v34 = v10 & 0xFFF;
        a4 = v4[v33];
        v35 = &v4[v33];
        v16 = 4096 - (unsigned int)(v10 & 0xFFF);
        v23 = v34 + (a4 << 12);
        if ( (unsigned int)v16 < *v18 )
        {
          while ( 1 )
          {
            v34 = v35[1];
            ++v35;
            if ( a4 + 1 != v34 )
              break;
            a4 ^= v34;
            if ( (a4 & 0xFFFFFFFFFFF00000uLL) == 0 )
            {
              v16 = (unsigned int)(v16 + 4096);
              a4 = v34;
              if ( (unsigned int)v16 < v32 )
                continue;
            }
            if ( (unsigned int)v16 >= v32 )
              goto LABEL_52;
            break;
          }
          *v18 = v16;
        }
LABEL_52:
        if ( !*(_BYTE *)(v13 + 445) )
        {
          LOBYTE(v43) = 0;
          LOBYTE(v42) = v62;
          HalpDmaFlushBuffer(v34, v4, v10, (unsigned int)*v18, (_DWORD)v42, v43);
        }
        goto LABEL_19;
      }
      if ( *(_DWORD *)(v13 + 156) == 2 )
      {
        v20 = (unsigned int)*v18;
        v49 = v20;
        memset(&LockHandle, 0, sizeof(LockHandle));
        if ( (_DWORD)v20 )
        {
          v48 = *(_BYTE *)(v13 + 441) != 0;
          v53 = *(_QWORD *)(a3 + 56);
          if ( !*(_BYTE *)(v13 + 442) )
          {
            ContiguousPiece = HalpDmaNextContiguousPiece(v13, (_DWORD)v4, 0, v10, v62, v20);
            a4 = v49;
            v16 = ContiguousPiece;
            v23 = (v10 & 0xFFF) + (v4[(unsigned int)((unsigned __int64)(v10 - v4[4]) >> 12) + 6] << 12);
            if ( ContiguousPiece == v49 && *(_QWORD *)(v13 + 144) >= v23 + (unsigned __int64)ContiguousPiece - 1 )
            {
              v24 = v62;
              if ( v62
                || *(_BYTE *)(v13 + 445)
                || (v22 = (unsigned int)HalpDmaGetAdapterCacheAlignment(v13) - 1, (v23 & v22) == 0) && (v37 & v22) == 0 )
              {
                LOBYTE(v43) = 0;
                LOBYTE(v42) = v24;
                HalpDmaFlushBuffer(v22, v4, v10, a4, (_DWORD)v42, v43);
                v24 = v62;
                goto LABEL_18;
              }
              v23 = *(_QWORD *)a3 + (v10 & 0xFFF);
LABEL_17:
              if ( *(_BYTE *)(v13 + 445) )
              {
LABEL_18:
                v50 = *v18;
                if ( !v48 )
                {
                  if ( !v24 && *(_BYTE *)(v13 + 444) )
                    HalpDmaZeroMapBuffers(v22, v53, v10 & 0xFFF, (unsigned int)*v18);
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v13 + 160) + 128LL), &LockHandle);
                  v43 = v50;
                  LODWORD(v42) = v23;
                  guard_dispatch_icall_no_overrides(*(_QWORD *)(v13 + 432), v4, v62);
                  KeReleaseInStackQueuedSpinLock(&LockHandle);
                }
                goto LABEL_19;
              }
              v47 = 1;
              v45 = 0;
            }
            else
            {
              v24 = v62;
              v23 = *(_QWORD *)a3 + (v10 & 0xFFF);
              if ( !v62 )
                goto LABEL_17;
              v47 = 0;
              v45 = v62;
            }
            LODWORD(v42) = *v18;
            HalpDmaSyncMapBuffers(v13, (_DWORD)v4, v10, a3, (size_t)v42, v45, v47, 0);
LABEL_35:
            v24 = v62;
            goto LABEL_18;
          }
          if ( (unsigned int)HalpDmaGetAdapterVersion(v13, v16, v20, a4) == 2 )
            ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(v13, (_DWORD)v4, a3, v10, v62, v28);
          else
            ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(v13, (_DWORD)v4, a3, v10, v62, v28);
          v24 = v62;
          v16 = ContiguousPieceV2;
          v30 = v10 & 0xFFF;
          *v18 = ContiguousPieceV2;
          v51 = ContiguousPieceV2;
          v23 = v30 + (v4[(unsigned int)((unsigned __int64)(v10 - v4[4]) >> 12) + 6] << 12);
          a4 = v23 + ContiguousPieceV2;
          if ( *(_QWORD *)(v13 + 144) < (unsigned __int64)(a4 - 1) )
          {
            a4 = *(_QWORD *)(a3 + 56);
            v23 = v30 + *(_QWORD *)a4;
            if ( v62 )
            {
              v46 = 0;
              v44 = v62;
              goto LABEL_30;
            }
LABEL_57:
            if ( !*(_BYTE *)(v13 + 445) )
            {
              v46 = 1;
              v44 = 0;
LABEL_30:
              LODWORD(v42) = v16;
              HalpDmaSyncMapBuffers(v13, (_DWORD)v4, v10, a4, (size_t)v42, v44, v46, 0);
              v16 = v51;
            }
            v31 = *(_QWORD *)(a3 + 56);
            v22 = v10 & 0xFFF;
            v16 = (v22 + v16 + 4095) >> 12;
            if ( (_DWORD)v16 )
            {
              v22 = (unsigned int)v16;
              do
              {
                v31 = *(_QWORD *)(v31 + 8);
                --v22;
              }
              while ( v22 );
            }
            *(_QWORD *)(a3 + 56) = v31;
            goto LABEL_35;
          }
          if ( !v62 )
          {
            if ( *(_BYTE *)(v13 + 445) )
              goto LABEL_18;
            v22 = (unsigned int)HalpDmaGetAdapterCacheAlignment(v13) - 1;
            if ( (v23 & v22) != 0 || (a4 & v22) != 0 )
            {
              a4 = *(_QWORD *)(a3 + 56);
              v16 = v51;
              v23 = v36 + *(_QWORD *)a4;
              goto LABEL_57;
            }
            v16 = v51;
          }
          if ( *(_BYTE *)(v13 + 445) )
            goto LABEL_18;
          LOBYTE(v43) = 0;
          LOBYTE(v42) = v24;
          HalpDmaFlushBuffer(v22, v4, v10, (unsigned int)v16, (_DWORD)v42, v43);
          goto LABEL_35;
        }
        v23 = 0LL;
      }
      else
      {
        v23 = HalpMapTransferV3(v13, (_DWORD)v4, a3, v10, (__int64)v18, v62, 0);
      }
LABEL_19:
      if ( *(_DWORD *)(v13 + 520) == 3 )
      {
        v39 = *(_QWORD **)(a3 + 24);
        v40 = v23 & 0xFFF;
        v52 = v40;
        v16 = ((unsigned int)*v18 + v40 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        v54 = v16;
        if ( *(_BYTE *)(a3 + 64) )
        {
          v41 = *(unsigned int *)(a3 + 16);
          v23 = *v39 + v40 + v41 + *(_QWORD *)(a3 + 32);
          *(_DWORD *)(a3 + 16) = v16 + v41;
        }
        else
        {
          v42 = &v57;
          guard_dispatch_icall_no_overrides(v39, *(_QWORD *)(a3 + 40), 3LL);
          *(_QWORD *)(a3 + 40) += v54;
          v23 = *(_QWORD *)v57 + *((_QWORD *)&v57 + 1) + v52;
        }
      }
      v25 = (unsigned int)*v18;
      v18 += 6;
      *v7 = v23;
      v11 -= v25;
      v10 += v25;
      v7 += 3;
      if ( v11 <= 0 )
        goto LABEL_21;
    }
  }
LABEL_24:
  *v5 = ((int)v7 - (int)v5 - 16) / 24;
  guard_dispatch_icall_no_overrides(v9, v12, v5);
  return 3LL;
}
