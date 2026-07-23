/*
 * XREFs of ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14024CA30
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024D660 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x14021C100 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     SmStoreCompressBuffer @ 0x14024CEF0 (SmStoreCompressBuffer.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024D000 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     rapidhash_internal @ 0x14024D090 (rapidhash_internal.c)
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     ?SmCompressCtxCompletePendingEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX@1@@Z @ 0x1404BBC7C (-SmCompressCtxCompletePendingEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbp
  unsigned __int64 *v8; // r14
  __int64 *v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  unsigned int v12; // r13d
  unsigned __int64 *Descriptor; // rax
  int v14; // edx
  __int64 v15; // r15
  char *v16; // rbx
  __int64 v17; // rbp
  unsigned __int64 v18; // r12
  __int64 v19; // r14
  ULONG_PTR v20; // r9
  __int64 v21; // r10
  ULONG_PTR v22; // rdx
  unsigned __int64 v23; // rcx
  __int16 v24; // r8
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  unsigned __int64 v27; // r9
  char *v28; // rax
  signed __int64 v29; // rdx
  _DWORD *v30; // rcx
  int v31; // edx
  __int64 v32; // r8
  KIRQL v33; // al
  unsigned __int64 v34; // rbx
  __int64 result; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  _DWORD *v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned int v40; // r10d
  __int64 v41; // r13
  int v42; // edi
  char *v43; // rbx
  unsigned int v44; // r13d
  unsigned int v45; // eax
  __int64 v46; // rax
  unsigned int v47; // [rsp+30h] [rbp-58h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v50; // [rsp+98h] [rbp+10h] BYREF
  __int64 v51; // [rsp+A0h] [rbp+18h]
  unsigned int v52; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 80);
  v3 = a1;
  v50 = 0;
  v5 = *(_QWORD *)(v2 + 16);
  v6 = *(_QWORD *)(a1 + 8);
  v51 = v6;
  v7 = *(_QWORD *)(v5 + 24);
  if ( *(int *)(v2 + 8) < 0 )
  {
    memmove(*(void **)(a1 + 32), *(const void **)(v5 + 24), 0x1000uLL);
    v6 = v51;
    v7 = *(_QWORD *)(v3 + 32);
  }
  v8 = (unsigned __int64 *)(v3 + 56);
  while ( 1 )
  {
    v9 = *(__int64 **)(v3 + 64);
    if ( v9 != (__int64 *)v8 )
    {
      v10 = *v8;
      *v8 = *(_QWORD *)*v8 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( (__int64 *)v10 == v9 )
      {
        *(_QWORD *)(v3 + 64) = v3 + 56;
        *v8 = 0LL;
      }
      else
      {
        *v9 = *v9 & 7 | (8 * ((unsigned __int64)*v9 >> 3) - 8);
      }
      if ( v10 )
      {
        v11 = v3 + 40;
        goto LABEL_17;
      }
    }
    v11 = v3 + 40;
    v12 = 0;
    if ( *(_QWORD *)(v3 + 48) == v3 + 40 )
    {
      v11 = v3 + 40;
    }
    else
    {
      v12 = 6;
      if ( *(_DWORD *)(v3 + 72) < 8u )
        v12 = 2;
    }
    Descriptor = (unsigned __int64 *)SmHwAcceleratorPartitionMgrGetDescriptor(
                                       *(_QWORD *)(v3 + 16),
                                       v12,
                                       *(unsigned int *)(v6 + 168));
    v10 = (unsigned __int64)Descriptor;
    if ( Descriptor )
      break;
    if ( (v12 & 2) == 0 )
      goto LABEL_17;
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompletePendingEntry(v3);
    v6 = v51;
  }
  if ( (*(_DWORD *)Descriptor & 2) != 0 )
    ++*(_DWORD *)(v3 + 72);
LABEL_17:
  v14 = SmStoreCompressBuffer(
          *(unsigned int *)(*(_QWORD *)(a2 + 64) + 2176LL),
          v7,
          a2 + 72,
          *(_QWORD *)(v3 + 24),
          v10,
          &v50);
  if ( v14 == 259 )
  {
    *(_QWORD *)(v10 + 24) = v2;
    v36 = *(_DWORD *)v10 & 7;
    v37 = **(_QWORD **)(v11 + 8);
    if ( v7 == *(_QWORD *)(v3 + 32) )
    {
      *(_QWORD *)v10 = *(_QWORD *)v11 | v36;
      v39 = v37 >> 3;
      *(_QWORD *)v11 = v10;
      if ( *(_QWORD *)(v11 + 8) == v11 )
        *(_QWORD *)(v11 + 8) = v10;
      **(_QWORD **)(v11 + 8) = **(_DWORD **)(v11 + 8) & 7 | (8 * v39 + 8);
      return SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompletePendingEntry(v3);
    }
    else
    {
      *(_QWORD *)v10 = v36 | ((v37 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      v38 = *(_DWORD **)(v11 + 8);
      result = v10 | *v38 & 7;
      *(_QWORD *)v38 = result;
      *(_QWORD *)(v11 + 8) = v10;
    }
  }
  else
  {
    if ( v10 )
    {
      *(_QWORD *)v10 = *(_DWORD *)v10 & 7 | ((**(_QWORD **)(v3 + 64) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      **(_QWORD **)(v3 + 64) = v10 | **(_DWORD **)(v3 + 64) & 7;
      *(_QWORD *)(v3 + 64) = v10;
    }
    v15 = v50;
    v16 = (char *)(v2 + 40);
    v17 = *(_QWORD *)(v3 + 8);
    v18 = v2 + 112;
    v19 = *(_QWORD *)(v2 + 16);
    if ( v14 >= 0 )
    {
      *(_DWORD *)(v2 + 80) = v50;
      *(_QWORD *)v16 = 0LL;
      *(_WORD *)(v2 + 50) = 0;
      *(_WORD *)(v2 + 48) = 8 * ((((v18 & 0xFFF) + v15 + 4095) >> 12) + 6);
      *(_QWORD *)(v2 + 72) = v18 & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v2 + 84) = v18 & 0xFFF;
      MmBuildMdlForNonPagedPool((PMDL)(v2 + 40));
    }
    else
    {
      v20 = *(_QWORD *)(v19 + 32) + *(unsigned int *)(v19 + 44);
      LODWORD(v15) = 4096;
      v21 = *(unsigned int *)(v19 + 40);
      v18 = *(_QWORD *)(v19 + 24);
      v22 = v21 + v20;
      v23 = v21 + v20;
      if ( *(char *)(v19 + 10) >= 0 )
        v23 = (v22 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v20 >= v22 || v20 > v23 )
        KeBugCheckEx(0x12Eu, *(_QWORD *)(v2 + 16), v2 + 40, v20, 0LL);
      v24 = *(_WORD *)(v19 + 32) + *(_DWORD *)(v19 + 44);
      v25 = v20 & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(v2 + 56) = *(_QWORD *)(v19 + 16);
      *(_QWORD *)(v2 + 72) = v25;
      *(_DWORD *)(v2 + 80) = v21;
      *(_DWORD *)(v2 + 84) = v24 & 0xFFF;
      LODWORD(v25) = v25 - *(_DWORD *)(v19 + 32);
      *(_WORD *)(v2 + 50) &= 8u;
      v26 = (unsigned int)v25 >> 12;
      v27 = ((unsigned __int64)(v24 & 0xFFF) + v21 + 4095) >> 12;
      *(_WORD *)(v2 + 50) |= *(_WORD *)(v19 + 10) & 0x48C5 | 0x10;
      *(_QWORD *)(v2 + 64) = *(_QWORD *)(v19 + 24);
      v28 = (char *)(v19 + 48 + 8 * v26);
      if ( v27 )
      {
        v29 = v16 - v28;
        do
        {
          *(_QWORD *)&v28[v29 + 48] = *(_QWORD *)v28;
          v28 += 8;
          --v27;
        }
        while ( v27 );
      }
    }
    v30 = *(_DWORD **)(v2 + 104);
    if ( (*v30 & 0x200000) != 0 )
    {
      v31 = v30[544];
      v32 = 0LL;
      if ( !v31 || (_DWORD)v15 == 4096 )
      {
        v32 = rapidhash_internal(v18, (unsigned int)v15, 0LL);
      }
      else
      {
        v47 = (v31 == 2) + 1;
        v40 = 2 * (v31 == 2);
        LODWORD(v51) = v31 == 2;
        v41 = v40;
        v52 = (4096 - (v18 & 0xFFF) - v40) / v47;
        if ( v40 )
        {
          v32 = rapidhash_internal(v18, v40, 0LL);
          LODWORD(v15) = v15 - 2 * v51;
        }
        v42 = v51;
        v43 = (char *)(v18 + v41);
        v44 = 0;
        do
        {
          v45 = v15;
          if ( v44 != v42 )
            v45 = *(unsigned __int16 *)v18;
          LODWORD(v51) = v45;
          v46 = rapidhash_internal(v43, v45, v32);
          ++v44;
          LODWORD(v15) = v15 - v51;
          v43 += v52;
          v18 += 2LL;
          v32 = v46;
        }
        while ( v44 < v47 );
        v3 = a1;
        v16 = (char *)(v2 + 40);
      }
    }
    else
    {
      v32 = 0xFFFFFFFFLL;
    }
    *((_QWORD *)v16 + 7) = v32;
    *(_QWORD *)v16 = v19;
    *(_DWORD *)(v2 + 8) |= 0x40000000u;
    *(_QWORD *)(v2 + 16) = v16;
    v33 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v17 + 136));
    v34 = v33;
    *(_QWORD *)v2 = *(_DWORD *)v2 & 7 | ((**(_QWORD **)(v17 + 128) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
    **(_QWORD **)(v17 + 128) = v2 | **(_DWORD **)(v17 + 128) & 7;
    *(_QWORD *)(v17 + 128) = v2;
    if ( !*(_DWORD *)(v17 + 140) && (*(_QWORD *)v2 & 0xFFFFFFFFFFFFFFF8uLL) >= 0x80 )
    {
      *(_DWORD *)(v17 + 140) = 1;
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(v17, *(_QWORD *)v3, v33);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      result = 0LL;
      *(_DWORD *)(v17 + 136) = 0;
    }
    else
    {
      result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v17 + 136), retaddr);
    }
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v34);
    __writecr8(v34);
  }
  return result;
}
