/*
 * XREFs of HalpDmaMarkHiberAdapter @ 0x140506200
 * Callers:
 *     HaliLocateHiberRanges @ 0x140C0E620 (HaliLocateHiberRanges.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeTestSpinLock @ 0x140441C80 (KeTestSpinLock.c)
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     HalpIommuDomainMarkHiberLogicalRange @ 0x140590044 (HalpIommuDomainMarkHiberLogicalRange.c)
 */

void __fastcall HalpDmaMarkHiberAdapter(PVOID MemoryMap)
{
  unsigned int v1; // r13d
  unsigned int i; // ebx
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // r15
  KIRQL v7; // al
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int *v10; // rdi
  __int64 *v11; // r14
  __int64 v12; // rbp
  unsigned int j; // ebx
  unsigned int v14; // ecx
  _QWORD *v15; // rdi
  __int64 v16; // r14
  unsigned int *v17; // r8
  __int64 *k; // rbx
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 *v21; // r14
  _QWORD *v22; // r12
  unsigned int *v23; // r8
  __int64 *m; // rbx
  __int64 n; // rbx
  unsigned int ii; // edi
  __int64 v27; // rax
  __int64 v28; // rcx
  void *v29; // r8
  KIRQL v30; // [rsp+60h] [rbp+8h]
  __int64 v31; // [rsp+60h] [rbp+8h]
  __int64 v32; // [rsp+68h] [rbp+10h]

  v1 = 0;
  if ( MemoryMap )
  {
    if ( HalpDmaHibernateAdapter )
    {
      for ( i = 0; i < HalpDmaHibernateRegisterSetIndex; ++i )
      {
        v4 = *((_QWORD *)&HalpDmaHibernateRegisterSets + 2 * i);
        v5 = *((unsigned int *)&HalpDmaHibernateRegisterSets + 4 * i + 2);
        if ( *((_DWORD *)HalpDmaHibernateAdapter + 130) )
          HalpIommuDomainMarkHiberLogicalRange(
            MemoryMap,
            *(_QWORD *)(*((_QWORD *)HalpDmaHibernateAdapter + 64) + 40LL),
            **(_QWORD **)(v4 + 24),
            (unsigned int)v5);
        v6 = v5;
        if ( (_DWORD)v5 )
        {
          do
          {
            PoSetHiberRange(MemoryMap, 2u, (PVOID)v4, 0x48uLL, 0x446C6148u);
            v4 = *(_QWORD *)(v4 + 8);
            --v6;
          }
          while ( v6 );
        }
      }
    }
    v7 = KeAcquireSpinLockRaiseToDpc(&HalpDmaHibernateAdaptersLock);
    v8 = HalpDmaHibernateAdapters;
    v30 = v7;
    if ( (__int64 *)HalpDmaHibernateAdapters != &HalpDmaHibernateAdapters )
    {
      do
      {
        v9 = 2LL;
        v10 = (unsigned int *)(v8 - 16);
        v32 = 2LL;
        v11 = (__int64 *)(v8 - 32);
        do
        {
          v12 = *v11;
          if ( *(_DWORD *)(v8 + 232) )
          {
            HalpIommuDomainMarkHiberLogicalRange(
              MemoryMap,
              *(_QWORD *)(*(_QWORD *)(v8 + 224) + 40LL),
              **(_QWORD **)(v12 + 24),
              *v10);
            v9 = v32;
          }
          if ( *v10 )
          {
            do
            {
              PoSetHiberRange(MemoryMap, 2u, (PVOID)v12, 0x48uLL, 0x446C6148u);
              v12 = *(_QWORD *)(v12 + 8);
              ++v1;
            }
            while ( v1 < *v10 );
            v9 = v32;
          }
          ++v11;
          ++v10;
          --v9;
          v1 = 0;
          v32 = v9;
        }
        while ( v9 );
        v8 = *(_QWORD *)v8;
      }
      while ( (__int64 *)v8 != &HalpDmaHibernateAdapters );
      v7 = v30;
    }
    KeReleaseSpinLock(&HalpDmaHibernateAdaptersLock, v7);
  }
  else
  {
    if ( HalpDmaHibernateAdapter )
    {
      PoSetHiberRange(0LL, 0x10000u, HalpDmaHibernateAdapter, 0x290uLL, 0);
      for ( j = 0; j < HalpDmaHibernateRegisterSetIndex; ++j )
      {
        v14 = *((_DWORD *)&HalpDmaHibernateRegisterSets + 4 * j + 2);
        v15 = (_QWORD *)*((_QWORD *)&HalpDmaHibernateRegisterSets + 2 * j);
        if ( v14 )
        {
          v16 = v14;
          do
          {
            PoSetHiberRange(0LL, 0x14000u, (PVOID)(*v15 >> 12), 1uLL, 0x446C6148u);
            v15 = (_QWORD *)v15[1];
            --v16;
          }
          while ( v16 );
        }
      }
      v17 = (unsigned int *)*((_QWORD *)HalpDmaHibernateAdapter + 38);
      if ( v17 )
        PoSetHiberRange(0LL, 0x10000u, v17, 8 * (((unsigned __int64)v17[10] + 4095) >> 12) + 48, 0x446C6148u);
    }
    PoSetHiberRange(0LL, 0x10000u, &HalpDmaHibernateAdapters, 0x10uLL, 0);
    PoSetHiberRange(0LL, 0x10000u, &HalpDmaHibernateAdaptersLock, 8uLL, 0);
    KeTestSpinLock(&HalpDmaHibernateAdaptersLock);
    for ( k = (__int64 *)HalpDmaHibernateAdapters; k != &HalpDmaHibernateAdapters; k = (__int64 *)*k )
    {
      PoSetHiberRange(0LL, 0x10000u, k - 36, 0x290uLL, 0);
      v19 = 2LL;
      v20 = k - 2;
      v31 = 2LL;
      v21 = k - 4;
      do
      {
        v22 = (_QWORD *)*v21;
        if ( *(_DWORD *)v20 )
        {
          do
          {
            PoSetHiberRange(0LL, 0x14000u, (PVOID)(*v22 >> 12), 1uLL, 0x446C6148u);
            v22 = (_QWORD *)v22[1];
            ++v1;
          }
          while ( v1 < *(_DWORD *)v20 );
          v19 = v31;
        }
        ++v21;
        v20 = (__int64 *)((char *)v20 + 4);
        --v19;
        v1 = 0;
        v31 = v19;
      }
      while ( v19 );
      v23 = (unsigned int *)k[2];
      if ( v23 )
        PoSetHiberRange(0LL, 0x10000u, v23, 8 * (((unsigned __int64)v23[10] + 4095) >> 12) + 48, 0x446C6148u);
    }
    PoSetHiberRange(0LL, 0x10000u, &HalpDmaShadowDumpAdapters, 0x10uLL, 0);
    PoSetHiberRange(0LL, 0x10000u, &HalpDmaShadowDumpAdaptersLock, 8uLL, 0);
    KeTestSpinLock(&HalpDmaShadowDumpAdaptersLock);
    for ( m = (__int64 *)HalpDmaShadowDumpAdapters; m != &HalpDmaShadowDumpAdapters; m = (__int64 *)*m )
      PoSetHiberRange(0LL, 0x10000u, m - 4, 0x30uLL, 0);
    for ( n = HalpDmaControllers; (__int64 *)n != &HalpDmaControllers; n = *(_QWORD *)n )
    {
      for ( ii = 0; ii < *(_DWORD *)(n + 44); ++ii )
      {
        v27 = *(_QWORD *)(n + 56);
        v28 = 160LL * ii;
        v29 = *(void **)(v28 + v27 + 128);
        if ( v29 )
          PoSetHiberRange(0LL, 0x10000u, v29, *(unsigned int *)(v28 + v27 + 120), 0x446C6148u);
      }
    }
  }
}
