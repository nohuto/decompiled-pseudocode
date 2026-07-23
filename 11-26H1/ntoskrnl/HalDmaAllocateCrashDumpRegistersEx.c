/*
 * XREFs of HalDmaAllocateCrashDumpRegistersEx @ 0x14057C2D0
 * Callers:
 *     DifHalDmaAllocateCrashDumpRegistersExWrapper @ 0x140659910 (DifHalDmaAllocateCrashDumpRegistersExWrapper.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     HalpIsHvPresent @ 0x1404B2B68 (HalpIsHvPresent.c)
 *     HalpDmaExtractFromVerifierShadowAdapter @ 0x1404E95F4 (HalpDmaExtractFromVerifierShadowAdapter.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x14058B44C (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalDmaAllocateCrashDumpRegistersEx(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v5; // rsi
  KIRQL CurrentIrql; // r12
  __int64 *v8; // rbp
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // r8
  _QWORD *v12; // r9
  __int64 v13; // r10
  __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // ebp
  __int64 MapRegisters; // rax
  __int64 v18; // rbp
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // r9
  _QWORD *v24; // r8
  __int64 v25; // rcx
  unsigned int v26; // ecx
  __int64 MapRegistersAtHighLevel; // rax
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *i; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // rbx
  __int64 *j; // rcx
  _QWORD *v36; // rdx
  _QWORD *v37; // rax
  __int64 *v38; // [rsp+40h] [rbp-48h]
  int v39; // [rsp+90h] [rbp+8h]

  v5 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v8 = (__int64 *)a1;
  if ( *(_DWORD *)(a1 + 16) != 1634550870 )
    v8 = 0LL;
  v38 = v8;
  v9 = HalpDmaExtractFromVerifierShadowAdapter(a1);
  v14 = v9;
  if ( v9 && v10 && v12 && a5 && (unsigned int)v11 <= 1 )
  {
    if ( *(_BYTE *)(v9 + 440) == (_BYTE)v13 && *(_BYTE *)(v9 + 445) != (_BYTE)v13 )
    {
      *v12 = v13;
      *a5 = v5;
      v15 = (int)v11;
      *(_QWORD *)(v9 + 240) = v13;
      *(_DWORD *)(v9 + 248) = v13;
      *(_QWORD *)(v9 + 8LL * (int)v11 + 256) = v13;
      *(_DWORD *)(v9 + 4LL * (int)v11 + 272) = v13;
LABEL_44:
      if ( *(_QWORD *)a4 )
        *(_QWORD *)(*(_QWORD *)a4 + 56LL) = *(_QWORD *)a4;
      ++*(_DWORD *)(v14 + 4 * v15 + 280);
      if ( !CurrentIrql )
        CurrentIrql = KeAcquireSpinLockRaiseToDpc(&HalpDmaHibernateAdaptersLock);
      for ( i = (__int64 *)HalpDmaHibernateAdapters; i != &HalpDmaHibernateAdapters; i = (__int64 *)*i )
      {
        if ( i - 36 == (__int64 *)v14 )
          goto LABEL_54;
      }
      v33 = (_QWORD *)qword_140FBD588;
      v34 = (_QWORD *)(v14 + 288);
      if ( *(__int64 **)qword_140FBD588 == &HalpDmaHibernateAdapters )
      {
        *v34 = &HalpDmaHibernateAdapters;
        v34[1] = v33;
        *v33 = v34;
        qword_140FBD588 = (__int64)v34;
LABEL_54:
        if ( !CurrentIrql )
          KeReleaseSpinLock(&HalpDmaHibernateAdaptersLock, 0);
        if ( !v8 )
          return 0LL;
        if ( !CurrentIrql )
          CurrentIrql = KeAcquireSpinLockRaiseToDpc(&HalpDmaShadowDumpAdaptersLock);
        for ( j = (__int64 *)HalpDmaShadowDumpAdapters; j != &HalpDmaShadowDumpAdapters; j = (__int64 *)*j )
        {
          if ( j - 4 == v8 )
            goto LABEL_65;
        }
        v36 = (_QWORD *)qword_140FBD578;
        v37 = v8 + 4;
        if ( *(__int64 **)qword_140FBD578 == &HalpDmaShadowDumpAdapters )
        {
          *v37 = &HalpDmaShadowDumpAdapters;
          v8[5] = (__int64)v36;
          *v36 = v37;
          qword_140FBD578 = (__int64)(v8 + 4);
LABEL_65:
          if ( !CurrentIrql )
            KeReleaseSpinLock(&HalpDmaShadowDumpAdaptersLock, 0);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
    v15 = (int)v11;
    v16 = *(_DWORD *)(v9 + 4LL * (int)v11 + 272);
    if ( (unsigned int)v5 <= v16 )
    {
      *a5 = v5;
      *v12 = *(_QWORD *)(v9 + 8LL * (int)v11 + 256);
LABEL_43:
      v8 = v38;
      goto LABEL_44;
    }
    if ( (unsigned int)v5 <= *(_DWORD *)(v9 + 232) )
    {
      if ( KeGetCurrentIrql() )
      {
        if ( v9 == -272 || *(_BYTE *)(v9 + 442) != (_BYTE)v13 )
        {
          if ( HalpDmaHibernateRegisterPhase != 1 )
          {
            MapRegistersAtHighLevel = HalpDmaAllocateMapRegistersAtHighLevel(v9);
            v28 = MapRegistersAtHighLevel;
            if ( MapRegistersAtHighLevel )
            {
              if ( *(_QWORD *)(v14 + 8 * v15 + 256) )
              {
                _mm_lfence();
                v29 = *(_DWORD *)(v14 + 4 * v15 + 272);
                v30 = *(_QWORD *)(v14 + 8 * v15 + 256);
                if ( v29 > 1 )
                {
                  v31 = v29 - 1;
                  do
                  {
                    v30 = *(_QWORD *)(v30 + 8);
                    --v31;
                  }
                  while ( v31 );
                }
                *(_QWORD *)(v30 + 8) = v28;
                *(_DWORD *)(v14 + 4 * v15 + 272) += v5 - v16;
                *(_DWORD *)(v14 + 248) = v5;
              }
              else
              {
                *(_QWORD *)(v14 + 240) = MapRegistersAtHighLevel;
                *(_DWORD *)(v14 + 248) = v5;
                *(_QWORD *)(v14 + 8 * v15 + 256) = MapRegistersAtHighLevel;
                *(_DWORD *)(v14 + 4 * v15 + 272) = v5;
              }
              *(_QWORD *)a4 = *(_QWORD *)(v14 + 8 * v15 + 256);
              *a5 = v5;
              goto LABEL_43;
            }
            *(_QWORD *)a4 = 0LL;
            *a5 = v16;
            return 3221225626LL;
          }
          v26 = -1073741637;
        }
        else
        {
          v26 = -1073741670;
        }
        *v12 = v13;
        *a5 = *(_DWORD *)(v9 + 4LL * (int)v11 + 272);
        return v26;
      }
      MapRegisters = HalpDmaAllocateMapRegisters(v9, (unsigned int)v5, v11, (__int64)v12);
      v18 = MapRegisters;
      if ( !MapRegisters )
        return 3221225626LL;
      *(_QWORD *)(v14 + 8 * v15 + 256) = MapRegisters;
      *(_DWORD *)(v14 + 4 * v15 + 272) = v5;
      if ( *(_DWORD *)(v14 + 520) == 3 )
      {
        v39 = guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(v14 + 512) + 40LL), v5 << 12);
        if ( v39 < 0 )
        {
LABEL_24:
          HalpDmaFreeMapRegisters(v14, v18, v5);
          return (unsigned int)v39;
        }
        if ( HalpIsHvPresent() )
        {
          v21 = HalpMmAllocCtxAlloc(v20, 8 * v5);
          v22 = v21;
          if ( !v21 )
            goto LABEL_24;
          v23 = 0LL;
          v24 = (_QWORD *)v18;
          do
          {
            *(_QWORD *)(v21 + 8 * v23) = *v24 >> 12;
            v23 = (unsigned int)(v23 + 1);
            v24 = (_QWORD *)v24[1];
          }
          while ( v24 );
          v39 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v18 + 24), 0LL);
          HalpMmAllocCtxFree(v25, v22);
          if ( v39 < 0 )
            goto LABEL_24;
          *(_BYTE *)(v18 + 64) = 1;
        }
      }
      *a5 = v5;
      *(_QWORD *)a4 = *(_QWORD *)(v14 + 8 * v15 + 256);
      goto LABEL_43;
    }
  }
  return 3221225485LL;
}
