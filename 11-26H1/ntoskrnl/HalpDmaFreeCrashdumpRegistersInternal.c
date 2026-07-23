/*
 * XREFs of HalpDmaFreeCrashdumpRegistersInternal @ 0x1404E9554
 * Callers:
 *     HalDmaFreeCrashDumpRegistersEx @ 0x1404E9530 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalpDmaFreeChildAdapter @ 0x140509940 (HalpDmaFreeChildAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaFreeCrashdumpRegistersInternal(__int64 a1, __int64 a2, unsigned int a3)
{
  KIRQL CurrentIrql; // r14
  __int64 v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  char v12; // al
  _DWORD *v13; // rdx
  __int64 v14; // r8
  char v15; // cl
  _QWORD *v17; // rbx
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 *v20; // rax
  __int64 *v21; // rcx
  __int64 **v22; // rdx

  CurrentIrql = KeGetCurrentIrql();
  if ( !a1 || (unsigned int)a2 > 1 )
    return 3221225485LL;
  v5 = (int)a2;
  v6 = *(_DWORD *)(a1 + 4LL * (int)a2 + 280);
  if ( v6 < a3 )
    return 3221225473LL;
  v7 = v6 - a3;
  *(_DWORD *)(a1 + 4LL * (int)a2 + 280) = v7;
  if ( !v7 )
  {
    if ( *(_DWORD *)(a1 + 4LL * (int)a2 + 272) )
    {
      v9 = *(_QWORD *)(a1 + 8LL * (int)a2 + 256);
      if ( v9 )
        *(_QWORD *)(v9 + 56) = v9;
      if ( *(_DWORD *)(a1 + 520) == 3 )
      {
        _mm_lfence();
        v10 = *(_QWORD *)(a1 + 8LL * (int)a2 + 256);
        guard_dispatch_icall_no_overrides(v10 + 24, a2);
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v10 + 24), v11);
        *(_BYTE *)(v10 + 64) = 0;
      }
      HalpDmaFreeMapRegisters(a1, *(_QWORD *)(a1 + 8 * v5 + 256), *(_DWORD *)(a1 + 4 * v5 + 272));
      *(_QWORD *)(a1 + 8 * v5 + 256) = 0LL;
      *(_DWORD *)(a1 + 4 * v5 + 272) = 0;
    }
    v12 = 1;
    v13 = (_DWORD *)(a1 + 280);
    v14 = 2LL;
    do
    {
      v15 = 0;
      if ( *v13++ == 0 )
        v15 = v12;
      v12 = v15;
      --v14;
    }
    while ( v14 );
    if ( v15 )
    {
      if ( !CurrentIrql )
        CurrentIrql = KeAcquireSpinLockRaiseToDpc(&HalpDmaHibernateAdaptersLock);
      v17 = (_QWORD *)(a1 + 288);
      v18 = *(_QWORD *)(a1 + 288);
      if ( *(_QWORD *)(v18 + 8) != a1 + 288 || (v19 = *(_QWORD **)(a1 + 296), (_QWORD *)*v19 != v17) )
LABEL_35:
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      if ( !CurrentIrql )
        KeReleaseSpinLock(&HalpDmaHibernateAdaptersLock, 0);
      *(_QWORD *)(a1 + 296) = a1 + 288;
      *v17 = v17;
      if ( !CurrentIrql )
        CurrentIrql = KeAcquireSpinLockRaiseToDpc(&HalpDmaShadowDumpAdaptersLock);
      v20 = (__int64 *)HalpDmaShadowDumpAdapters;
      while ( v20 != &HalpDmaShadowDumpAdapters )
      {
        v21 = v20;
        v20 = (__int64 *)*v20;
        if ( *(v21 - 1) == a1 )
        {
          if ( (__int64 *)v20[1] != v21 )
            goto LABEL_35;
          v22 = (__int64 **)v21[1];
          if ( *v22 != v21 )
            goto LABEL_35;
          *v22 = v20;
          v20[1] = (__int64)v22;
        }
      }
      if ( !CurrentIrql )
        KeReleaseSpinLock(&HalpDmaShadowDumpAdaptersLock, 0);
    }
  }
  return 0LL;
}
