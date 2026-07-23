/*
 * XREFs of HalpFlushMapBuffers @ 0x14058BDDC
 * Callers:
 *     HalpDmaSyncMapBuffers @ 0x14035DBE0 (HalpDmaSyncMapBuffers.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140439690 (HalpDmaGetAdapterCacheAlignment.c)
 *     KeFlushIoBuffers @ 0x140439C90 (KeFlushIoBuffers.c)
 */

void __fastcall HalpFlushMapBuffers(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, char a6)
{
  __int64 v7; // rsi
  int AdapterCacheAlignment; // eax
  __int16 v10; // r8
  unsigned int v11; // r8d
  __int64 v12; // r14
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  __int64 v15; // r11
  unsigned __int64 v16; // r9
  char v17; // bl
  unsigned __int8 CurrentIrql; // r15
  KIRQL v19; // r12
  unsigned int v20; // r10d
  unsigned __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 v26; // r9
  KSPIN_LOCK *v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // [rsp+68h] [rbp+10h]
  int v36; // [rsp+78h] [rbp+20h]

  v7 = a4;
  AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1);
  v11 = v10 & 0xFFF;
  v36 = AdapterCacheAlignment;
  v12 = v11;
  v14 = v13;
  v15 = a3;
  v16 = 0LL;
  v17 = 1;
  CurrentIrql = KeGetCurrentIrql();
  v19 = CurrentIrql;
  while ( v14 )
  {
    v20 = v14;
    if ( v14 >= 4096 - v11 )
      v20 = 4096 - v11;
    v21 = *(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFF000uLL;
    if ( v16 && v21 != v16 + 4096 )
    {
      v17 = 0;
      break;
    }
    v15 = *(_QWORD *)(v15 + 8);
    v16 = v21;
    v11 = 0;
    v14 -= v20;
  }
  if ( v17 )
  {
    v22 = v12 + (*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFF000uLL);
    if ( !a5 && !*(_BYTE *)(a1 + 445) )
    {
      v23 = (unsigned int)v22 - ((unsigned int)v22 & ~(AdapterCacheAlignment - 1));
      v22 -= v23;
      v7 = ~(v36 - 1) & (unsigned int)(v36 + v23 + v7 - 1);
    }
    if ( CurrentIrql <= 2u )
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 312));
    v24 = *(_QWORD *)(a1 + 304);
    *(_QWORD *)v24 = 0LL;
    *(_WORD *)(v24 + 10) = 0;
    *(_WORD *)(v24 + 8) = 8 * (((v7 + (unsigned __int64)(v22 & 0xFFF) + 4095) >> 12) + 6);
    *(_QWORD *)(v24 + 32) = v22 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v24 + 44) = v22 & 0xFFF;
    *(_DWORD *)(v24 + 40) = v7;
    MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 304));
    if ( !a6 )
    {
      LOBYTE(v25) = 1;
      KeFlushIoBuffers(*(_QWORD *)(a1 + 304), a5 == 0, v25, v26);
    }
    if ( CurrentIrql <= 2u )
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 312), v19);
  }
  else if ( (_DWORD)v7 )
  {
    v27 = (KSPIN_LOCK *)(a1 + 312);
    do
    {
      v28 = (unsigned int)v7;
      if ( (unsigned int)v7 >= 4096 - (int)v12 )
        v28 = (unsigned int)(4096 - v12);
      v29 = (unsigned int)v12;
      LODWORD(v12) = 0;
      v30 = v29 + (*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFF000uLL);
      v35 = v28;
      if ( !a5 && !*(_BYTE *)(a1 + 445) )
      {
        v31 = (unsigned int)v30 - ((unsigned int)v30 & ~(v36 - 1));
        v27 = (KSPIN_LOCK *)(a1 + 312);
        v30 -= v31;
        v28 = ~(v36 - 1) & (unsigned int)(v36 + v31 + v28 - 1);
      }
      if ( CurrentIrql <= 2u )
        v19 = KeAcquireSpinLockRaiseToDpc(v27);
      v32 = *(_QWORD *)(a1 + 304);
      *(_QWORD *)v32 = 0LL;
      *(_WORD *)(v32 + 10) = 0;
      *(_WORD *)(v32 + 8) = 8 * (((v28 + (unsigned __int64)(v30 & 0xFFF) + 4095) >> 12) + 6);
      *(_QWORD *)(v32 + 32) = v30 & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v32 + 44) = v30 & 0xFFF;
      *(_DWORD *)(v32 + 40) = v28;
      MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 304));
      if ( !a6 )
      {
        LOBYTE(v33) = 1;
        KeFlushIoBuffers(*(_QWORD *)(a1 + 304), a5 == 0, v33, v34);
      }
      if ( CurrentIrql <= 2u )
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 312), v19);
      v27 = (KSPIN_LOCK *)(a1 + 312);
      a3 = *(_QWORD *)(a3 + 8);
      LODWORD(v7) = v7 - v35;
    }
    while ( (_DWORD)v7 );
  }
}
