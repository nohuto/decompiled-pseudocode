/*
 * XREFs of MiMapViewOfPhysicalSection @ 0x140A0228C
 * Callers:
 *     MiMapViewOfSection @ 0x1409941C8 (MiMapViewOfSection.c)
 * Callees:
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x1403152FC (MiDereferenceIoPages.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     MiInsertViewOfPhysicalSection @ 0x140317984 (MiInsertViewOfPhysicalSection.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiIsPfn @ 0x14041A8F0 (MiIsPfn.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiUpdateVadStartVpn @ 0x140494C34 (MiUpdateVadStartVpn.c)
 *     MiSanitizePage @ 0x14049A4BC (MiSanitizePage.c)
 *     MiInitializeQuotaTracker @ 0x140995B34 (MiInitializeQuotaTracker.c)
 *     MiSelectUserAddress @ 0x140995F80 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiCommitVadMetadataBits @ 0x140997DF4 (MiCommitVadMetadataBits.c)
 *     MiIsVaRangeAvailable @ 0x14099F404 (MiIsVaRangeAvailable.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiAdvanceVadHint @ 0x140A026C0 (MiAdvanceVadHint.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfPhysicalSection(__int64 a1, unsigned __int64 *a2, _QWORD *a3, unsigned int a4)
{
  int v4; // eax
  ULONG_PTR v9; // r14
  struct _KTHREAD *CurrentThread; // r13
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  ULONG_PTR v13; // rbx
  __int64 v14; // rax
  int v15; // ecx
  unsigned __int64 v16; // rsi
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  __int64 v19; // rcx
  int inserted; // ebp
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r15
  int v23; // r8d
  unsigned __int64 v24; // rdx
  __int64 v25; // r12
  unsigned __int64 i; // rbp
  __int64 v27; // rax
  struct _KLOCK_ENTRIES *v28; // r9
  struct _KLOCK_ENTRIES *v29; // r9
  __int64 v30; // r8
  unsigned __int64 v32; // rax
  __int64 v33; // r14
  ULONG_PTR v34; // rdi
  int v35; // edi
  __int64 v36; // rax
  __int64 v37; // [rsp+50h] [rbp-78h]
  unsigned __int64 v38; // [rsp+58h] [rbp-70h]
  unsigned __int64 v39; // [rsp+60h] [rbp-68h]
  unsigned __int64 v40; // [rsp+60h] [rbp-68h]
  unsigned __int64 v41; // [rsp+68h] [rbp-60h]
  __int64 v42; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-50h]
  unsigned __int64 v44; // [rsp+80h] [rbp-48h]
  __int64 v45; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 *v46; // [rsp+D8h] [rbp+10h]
  _DWORD *v47; // [rsp+E0h] [rbp+18h]

  v47 = a3;
  v46 = a2;
  v4 = *(_DWORD *)(a1 + 60);
  v45 = 0LL;
  if ( (v4 & 2) != 0 || *(_QWORD *)(a1 + 72) )
    return 3221225485LL;
  v9 = *(_QWORD *)(a1 + 88);
  if ( (a4 & 0xFFFFFFF8) == 0x10 || (a4 & 5) == 5 || a4 == 24 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v42 = 0LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x48uLL, 1399087446, CurrentProcessorColor | 0x80000000);
  v13 = PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  MiInitializeQuotaTracker((_BYTE *)(PoolMm + 68), v9, 0);
  v15 = *(_DWORD *)(v14 + 48);
  *(_QWORD *)(v14 + 16) = -2LL;
  *(_QWORD *)(v13 + 40) = 0LL;
  *(_DWORD *)(v13 + 48) = (v15 & 0xFFFFFFE3 | 4) ^ ((v15 & 0xFFE3 | 4) ^ (unsigned __int16)(32 * a4)) & 0x3E0 | 0x80000;
  v41 = -1LL;
  v16 = MiSanitizePage(*a3 >> 12);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, v9, v17, v18);
  if ( (*(_DWORD *)(v9 + 500) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_24;
  }
  v19 = (unsigned __int16)*(_DWORD *)a3;
  if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
  {
    v22 = v19 + *a2;
    v21 = v22 + *(_QWORD *)(a1 + 24) - 1LL;
    if ( !MiIsVaRangeAvailable(v9, v22, *(_QWORD *)(a1 + 24), *(_QWORD *)a1, *(_QWORD *)(a1 + 8)) )
    {
      inserted = -1073741800;
      goto LABEL_24;
    }
  }
  else
  {
    v39 = *(_QWORD *)(a1 + 24) + v19;
    inserted = MiSelectUserAddress(
                 *(_DWORD *)(a1 + 40),
                 *(_QWORD *)a1,
                 *(_QWORD *)(a1 + 8),
                 v39,
                 *(_QWORD *)(a1 + 16),
                 0LL,
                 a4,
                 0,
                 &v42,
                 &v45);
    if ( inserted < 0 )
      goto LABEL_24;
    v21 = v45 + v39 - 1;
    v22 = (unsigned __int16)*v47 + v45;
  }
  v44 = v22 >> 12;
  v43 = v21 >> 12;
  MiUpdateVadStartVpn(v13, v22 >> 12);
  *(_DWORD *)(v13 + 28) = v23;
  *(_BYTE *)(v13 + 33) = v21 >> 44;
  v40 = v16
      + (*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32))
      - (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32));
  LODWORD(v45) = MiProtectionToCacheAttribute(a4);
  v25 = 0LL;
  v37 = -1LL;
  for ( i = v16; ; ++i )
  {
    v38 = i;
    if ( i > v24 )
      break;
    if ( MiIsPfn(i) )
    {
      v27 = v37;
    }
    else
    {
      v27 = i;
      if ( v25 )
        v27 = v37;
      ++v25;
      v37 = v27;
      if ( i != v40 )
        goto LABEL_16;
    }
    if ( v25 )
    {
      inserted = MiReferenceIoPages(1u, v27, v25, v45, 0LL, 0LL);
      if ( inserted < 0 )
        goto LABEL_24;
      i = v38;
      v32 = v25 + v37 - 1;
      v37 = -1LL;
      v41 = v32;
      v25 = 0LL;
    }
LABEL_16:
    v24 = v40;
  }
  inserted = MiInsertVadCharges(v13, v9);
  if ( inserted < 0 )
  {
LABEL_24:
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v9);
    if ( v41 != -1LL )
    {
      v33 = -1LL;
      v34 = 0LL;
      while ( v16 <= v41 )
      {
        if ( MiIsPfn(v16) )
          goto LABEL_44;
        v36 = v16;
        if ( v34 )
          v36 = v33;
        ++v34;
        v33 = v36;
        if ( v16 == v41 )
        {
LABEL_44:
          if ( v34 )
          {
            MiDereferenceIoPages(1LL, v33, v34);
            v34 = 0LL;
            v33 = -1LL;
          }
        }
        ++v16;
      }
    }
    ExFreePoolWithTag((PVOID)v13, 0);
    return (unsigned int)inserted;
  }
  MiInsertViewOfPhysicalSection(v9, v13, v16, v28);
  v30 = v42;
  if ( v42 )
    MiAdvanceVadHint(v44, v43);
  if ( !*(_DWORD *)(a1 + 120) )
  {
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v9);
    goto LABEL_22;
  }
  MiLockVad((__int64)CurrentThread, v13, v30, v29);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v9);
  v35 = MiCommitVadMetadataBits(v13, 0LL, *(_DWORD *)(a1 + 120));
  if ( v35 >= 0 )
  {
    MiUnlockVad((__int64)CurrentThread, v13);
LABEL_22:
    *v46 = v22;
    return 0LL;
  }
  else
  {
    MiReferenceVad(v13);
    MiDeleteVad(v13, 0LL, 0);
    return (unsigned int)v35;
  }
}
