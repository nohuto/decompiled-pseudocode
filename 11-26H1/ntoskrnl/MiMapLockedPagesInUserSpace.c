/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x14095D148
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MiReferenceVad @ 0x14027E890 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027EBC0 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     MiDoubleLockMdlPage @ 0x1402E5914 (MiDoubleLockMdlPage.c)
 *     MiReferenceIoPages @ 0x1402EFF98 (MiReferenceIoPages.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402F09B0 (MiLegitimatePageForDriversToMap.c)
 *     MiUpdateProtectionMask @ 0x140303850 (MiUpdateProtectionMask.c)
 *     MiDereferenceIoPages @ 0x1403132CC (MiDereferenceIoPages.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140315540 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403155B4 (LOCK_ADDRESS_SPACE.c)
 *     MiInsertVad @ 0x140316000 (MiInsertVad.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14036672C (MiMapLockedPagesInUserSpaceHelper.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiIsPfn @ 0x14042D9E0 (MiIsPfn.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiDoubleUnlockMdlPage @ 0x14047C1F4 (MiDoubleUnlockMdlPage.c)
 *     MiUpdateVadStartVpn @ 0x14049B0E4 (MiUpdateVadStartVpn.c)
 *     MiSanitizePage @ 0x1404A096C (MiSanitizePage.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiAdvanceVadHint @ 0x14095CE00 (MiAdvanceVadHint.c)
 *     MiAddSecureEntry @ 0x14095D9B8 (MiAddSecureEntry.c)
 *     MiInitializeQuotaTracker @ 0x1409C4B54 (MiInitializeQuotaTracker.c)
 *     MiSelectUserAddress @ 0x1409C4FA0 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x1409C5DC0 (MiInsertVadCharges.c)
 *     MiIsVaRangeAvailable @ 0x1409CE424 (MiIsVaRangeAvailable.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapLockedPagesInUserSpace(
        _QWORD *a1,
        __int64 a2,
        __int16 a3,
        int a4,
        unsigned __int64 a5,
        int a6,
        int a7)
{
  unsigned __int64 v7; // rsi
  __int64 *v8; // r14
  unsigned __int64 *v9; // r12
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  ULONG_PTR v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // r9
  int updated; // eax
  int v21; // ecx
  struct _KLOCK_ENTRIES *v22; // r9
  __int64 v23; // r8
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rbp
  int inserted; // edi
  unsigned __int64 v27; // rax
  int v28; // r8d
  unsigned __int64 v29; // rax
  unsigned __int64 *v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rax
  struct _KLOCK_ENTRIES *v35; // r9
  struct _KLOCK_ENTRIES *v36; // r8
  __int64 v37; // r12
  int v38; // edi
  int v39; // r9d
  int v41; // [rsp+50h] [rbp-78h]
  struct _KLOCK_ENTRIES *v42; // [rsp+58h] [rbp-70h]
  __int64 v43; // [rsp+58h] [rbp-70h]
  struct _KLOCK_ENTRIES *v44; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-60h]
  struct _KTHREAD *v46; // [rsp+70h] [rbp-58h]
  unsigned __int64 v47; // [rsp+78h] [rbp-50h]
  unsigned __int64 v48; // [rsp+80h] [rbp-48h]

  v7 = a5;
  *a1 = 0LL;
  if ( (v7 & 0xFFF) != 0 )
    return 3221225793LL;
  v8 = (__int64 *)(a2 + 48);
  v9 = (unsigned __int64 *)(a2 + 48);
  v10 = ((a3 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a2 + 40)) >> 12;
  v11 = v10;
  v41 = a6 & 0x20000000;
  if ( (a6 & 0x20000000) != 0 )
  {
    if ( v7 )
      return 3221225485LL;
    v11 = v10 + 2;
    if ( v10 + 2 < v10 )
      return 3221225626LL;
  }
  CurrentThread = KeGetCurrentThread();
  v46 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x48uLL, 1399087446, CurrentProcessorColor | 0x80000000);
  v16 = PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  v17 = MiInitializeQuotaTracker(PoolMm + 68, Process, 0LL);
  v18 = (a6 >> 31) & 0xFFFFFFFD;
  *(_QWORD *)(v17 + 16) = -2LL;
  *(_QWORD *)(v17 + 40) = v19;
  updated = MiUpdateProtectionMask(v18 + 4, a4);
  v21 = *(_DWORD *)(v16 + 48);
  a7 = updated;
  v44 = v22;
  v42 = v22;
  *(_DWORD *)(v16 + 48) = (v21 & 0xFFFFFC1F ^ (32 * (updated & 0x1F))) & 0xFDF7FFE3 | 0x2080004;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, v23, v22);
  if ( (*(_DWORD *)(Process + 500) & 0x20) != 0 )
  {
    inserted = -1073741558;
  }
  else
  {
    v24 = *(_QWORD *)(Process + 872) - 1LL;
    if ( v24 >= 0x7FFFFFFEFFFFLL )
      v24 = 0x7FFFFFFEFFFFLL;
    v25 = v11 << 12;
    if ( v7 )
    {
      if ( (unsigned int)MiIsVaRangeAvailable(Process, v7, v25, 0, v24) )
      {
LABEL_10:
        v48 = v7 >> 12;
        v45 = v7 + v25 - 1;
        v47 = v45 >> 12;
        MiUpdateVadStartVpn(v16, v7 >> 12);
        *(_DWORD *)(v16 + 28) = v28;
        *(_BYTE *)(v16 + 33) = v27 >> 44;
        v29 = 0LL;
        v30 = 0LL;
        while ( 1 )
        {
          a5 = v29;
          if ( v29 >= v10 )
            break;
          if ( MiIsPfn(*v9) )
          {
            v43 = 48 * *v9 - 0x220000000000LL;
            inserted = MiLegitimatePageForDriversToMap(v43, v31, v32);
            if ( inserted < 0 )
              goto LABEL_29;
            if ( !(unsigned int)MiDoubleLockMdlPage(v43, v33) )
            {
              inserted = -1073741663;
              goto LABEL_29;
            }
          }
          else
          {
            v34 = MiSanitizePage(*v9);
            inserted = MiReferenceIoPages(1u, v34, 1LL, a4, 0LL, 0LL);
            if ( inserted < 0 )
              goto LABEL_29;
          }
          v30 = v9;
          v29 = a5 + 1;
          ++v9;
        }
        inserted = MiInsertVadCharges(v16, Process);
        if ( inserted < 0 )
          goto LABEL_29;
        v36 = v44;
        if ( v44 )
          MiAdvanceVadHint(v48, v47, v44);
        v37 = (__int64)v46;
        MiLockVad((__int64)v46, v16, (__int64)v36, v35);
        v38 = v45;
        if ( v41 )
        {
          v7 += 4096LL;
          v38 = v45 - 4096;
        }
        MiInsertVad(v16, Process, 0);
        MiMapLockedPagesInUserSpaceHelper(v7, (__int64)v8, 0LL, a4, v10, v16, a6);
        UNLOCK_ADDRESS_SPACE_UNORDERED(v37, Process);
        MiReferenceVad(v16);
        v39 = 2;
        if ( a7 != 1 )
          v39 = 4;
        if ( MiAddSecureEntry(v16, v7, v38, v39, 0) )
        {
          MiUnlockAndDereferenceVad((volatile signed __int32 *)v16);
          *a1 = v7 + *(unsigned int *)(a2 + 44);
          return 0LL;
        }
        MiDeleteVad(v16, 0LL, 0);
        return 3221225626LL;
      }
      inserted = -1073741800;
    }
    else
    {
      inserted = MiSelectUserAddress(0, 0, v24, v25, 0x10000LL, 0LL, a7, 0, (__int64)&v44, (__int64)&a5);
      if ( inserted >= 0 )
      {
        v7 = a5;
        goto LABEL_10;
      }
    }
  }
  v30 = (unsigned __int64 *)v42;
LABEL_29:
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)v46, Process);
  if ( v30 && v8 <= (__int64 *)v30 )
  {
    do
    {
      if ( MiIsPfn(*v8) )
        MiDoubleUnlockMdlPage(48 * *v8 - 0x220000000000LL, 0LL);
      else
        MiDereferenceIoPages(1LL, *v8, 1uLL);
      ++v8;
    }
    while ( v8 <= (__int64 *)v30 );
  }
  ExFreePoolWithTag((PVOID)v16, 0);
  return (unsigned int)inserted;
}
