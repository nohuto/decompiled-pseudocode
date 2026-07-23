/*
 * XREFs of ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x14024DB70
 * Callers:
 *     ?SmCompressCtxCompletePendingEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX@1@@Z @ 0x1404BBC7C (-SmCompressCtxCompletePendingEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX.c)
 * Callees:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x14021C100 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     rapidhash_internal @ 0x14024D090 (rapidhash_internal.c)
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

KIRQL __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompleteEntry(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rsi
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // r14
  unsigned __int8 *v8; // r12
  unsigned int v9; // r15d
  __int64 *v11; // r13
  ULONG_PTR v12; // r9
  __int64 v13; // r10
  ULONG_PTR v14; // rdx
  unsigned __int64 v15; // rcx
  __int16 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  _QWORD *v20; // rax
  ULONG_PTR v21; // rdx
  _DWORD *v22; // rcx
  int v23; // edx
  __int64 v24; // r8
  KIRQL result; // al
  unsigned __int64 v26; // rbx
  unsigned int v27; // r10d
  __int64 v28; // rax
  unsigned __int8 *v29; // rbx
  unsigned int v30; // eax
  bool v31; // zf
  unsigned int v32; // eax
  unsigned int v33; // [rsp+30h] [rbp-58h]
  unsigned int v34; // [rsp+38h] [rbp-50h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  __int64 v37; // [rsp+98h] [rbp+10h]
  unsigned int v38; // [rsp+98h] [rbp+10h]
  int v40; // [rsp+B0h] [rbp+28h]

  v5 = a1[1];
  v6 = a2 + 40;
  v7 = *(_QWORD *)(a2 + 16);
  v8 = (unsigned __int8 *)(a2 + 112);
  v9 = a3;
  v11 = a1;
  if ( a5 >= 0 )
  {
    *(_QWORD *)v6 = 0LL;
    *(_WORD *)(a2 + 50) = 0;
    *(_DWORD *)(a2 + 80) = a3;
    *(_DWORD *)(a2 + 84) = (unsigned __int16)v8 & 0xFFF;
    *(_WORD *)(a2 + 48) = 8 * (((((unsigned __int16)v8 & 0xFFF) + (unsigned __int64)a3 + 4095) >> 12) + 6);
    *(_QWORD *)(a2 + 72) = (unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL;
    MmBuildMdlForNonPagedPool((PMDL)v6);
  }
  else
  {
    v9 = 4096;
    v12 = *(_QWORD *)(v7 + 32) + *(unsigned int *)(v7 + 44);
    v13 = *(unsigned int *)(v7 + 40);
    v8 = *(unsigned __int8 **)(v7 + 24);
    v14 = v13 + v12;
    v15 = v13 + v12;
    if ( *(char *)(v7 + 10) >= 0 )
      v15 = (v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v12 >= v14 || v12 > v15 )
      KeBugCheckEx(0x12Eu, v7, v6, v12, 0LL);
    v16 = *(_WORD *)(v7 + 32) + *(_DWORD *)(v7 + 44);
    v17 = v12 & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(v7 + 16);
    *(_QWORD *)(v6 + 32) = v17;
    *(_DWORD *)(v6 + 40) = v13;
    *(_DWORD *)(v6 + 44) = v16 & 0xFFF;
    LODWORD(v17) = v17 - *(_DWORD *)(v7 + 32);
    *(_WORD *)(v6 + 10) &= 8u;
    v18 = (unsigned int)v17 >> 12;
    v19 = ((unsigned __int64)(v16 & 0xFFF) + v13 + 4095) >> 12;
    *(_WORD *)(v6 + 10) |= *(_WORD *)(v7 + 10) & 0x48C5 | 0x10;
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(v7 + 24);
    v20 = (_QWORD *)(v7 + 48 + 8 * v18);
    if ( v19 )
    {
      v21 = v6 - (_QWORD)v20;
      do
      {
        *(_QWORD *)((char *)v20 + v21 + 48) = *v20;
        ++v20;
        --v19;
      }
      while ( v19 );
    }
  }
  v22 = *(_DWORD **)(v6 + 64);
  if ( (*v22 & 0x200000) != 0 )
  {
    v23 = v22[544];
    v24 = 0LL;
    if ( !v23 || v9 == 4096 )
    {
      v24 = rapidhash_internal(v8, v9, 0LL);
    }
    else
    {
      v34 = (v23 == 2) + 1;
      v27 = 2 * (v23 == 2);
      v40 = v23 == 2;
      v33 = (4096 - ((unsigned __int16)v8 & 0xFFF) - v27) / v34;
      v28 = v27;
      v37 = v27;
      if ( v27 )
      {
        v24 = rapidhash_internal(v8, v27, 0LL);
        v28 = v37;
        v9 -= 2 * v40;
      }
      v29 = &v8[v28];
      v30 = 0;
      v38 = 0;
      do
      {
        v31 = v30 == v40;
        v32 = v9;
        if ( !v31 )
          v32 = *(unsigned __int16 *)v8;
        v9 -= v32;
        v24 = rapidhash_internal(v29, v32, v24);
        v29 += v33;
        v30 = v38 + 1;
        v8 += 2;
        v38 = v30;
      }
      while ( v30 < v34 );
      v6 = a2 + 40;
      v11 = a1;
    }
  }
  else
  {
    v24 = a4;
  }
  *(_QWORD *)(v6 + 56) = v24;
  *(_QWORD *)v6 = v7;
  *(_DWORD *)(a2 + 8) |= 0x40000000u;
  *(_QWORD *)(a2 + 16) = v6;
  result = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 136));
  v26 = result;
  *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(v5 + 128) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  **(_QWORD **)(v5 + 128) = a2 | **(_DWORD **)(v5 + 128) & 7;
  *(_QWORD *)(v5 + 128) = a2;
  if ( !*(_DWORD *)(v5 + 140) && (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8uLL) >= 0x80 )
  {
    *(_DWORD *)(v5 + 140) = 1;
    result = (unsigned __int8)SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(v5, *v11, result);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = PopHibernateInProgress, PopHibernateInProgress) )
    *(_DWORD *)(v5 + 136) = 0;
  else
    result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v5 + 136), retaddr);
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
  __writecr8(v26);
  return result;
}
