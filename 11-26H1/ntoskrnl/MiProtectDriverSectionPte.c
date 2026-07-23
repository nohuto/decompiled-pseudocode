/*
 * XREFs of MiProtectDriverSectionPte @ 0x1406EAA00
 * Callers:
 *     <none>
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiReacquireWalkLocks @ 0x1402E32A0 (MiReacquireWalkLocks.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiReleaseWalkLocks @ 0x140364CA0 (MiReleaseWalkLocks.c)
 *     MiMakeDriverPageStayResident @ 0x14038C448 (MiMakeDriverPageStayResident.c)
 *     MiCheckSlabPage @ 0x14038C61C (MiCheckSlabPage.c)
 *     MiMarkPfnVerified @ 0x14038E794 (MiMarkPfnVerified.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiWriteValidPteVolatile @ 0x140443050 (MiWriteValidPteVolatile.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x14049E30C (MiUnlockLoaderEntry.c)
 *     MiAcquireLoadLock @ 0x1404A507C (MiAcquireLoadLock.c)
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 *     MiLockLoaderEntry @ 0x1405208A8 (MiLockLoaderEntry.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     sub_1405C6088 @ 0x1405C6088 (sub_1405C6088.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiProtectDriverSectionPte(__int64 *a1, volatile signed __int64 *a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r13
  unsigned __int64 v9; // rsi
  char *v10; // r9
  int v11; // edi
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rdi
  int v17; // ecx
  __int64 v19; // r14
  int v20; // r9d
  unsigned int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // r9
  int PfnSlabType; // eax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  unsigned __int64 DemandZeroPte; // rax
  __int16 v30; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-A0h]
  __int64 v32; // [rsp+40h] [rbp-98h]
  __int64 v33; // [rsp+48h] [rbp-90h]
  __int64 v34; // [rsp+50h] [rbp-88h]
  __int64 v35; // [rsp+F8h] [rbp+20h] BYREF

  memset_0(&v30, 0, 0x78uLL);
  v35 = 0LL;
  if ( a3 )
    return 0LL;
  v6 = a1[23];
  v7 = *(_QWORD *)(v6 + 8);
  v8 = a1[7];
  v9 = (__int64)((_QWORD)a2 << 25) >> 16;
  while ( 1 )
  {
    v14 = *a2;
    if ( (*a2 & 1) != 0 )
      break;
    MiReleaseWalkLocks((__int64)a1);
    if ( *(_DWORD *)v6 == 1 )
    {
      if ( (*(_DWORD *)(v6 + 24) & 4) != 0 )
        MiUnlockLoaderEntry(v7, 0);
      MmReleaseLoadLock(0LL);
    }
    v10 = 0LL;
    if ( !*(_DWORD *)v6 )
    {
      v30 = 6;
      v10 = (char *)&v30 + 1;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      v34 = 0LL;
    }
    v11 = MmAccessFault(0LL, (__int64)((_QWORD)a2 << 25) >> 16, 0, (ULONG_PTR)v10);
    if ( *(_DWORD *)v6 == 1 )
    {
      MiAcquireLoadLock(0);
      if ( (*(_DWORD *)(v6 + 24) & 4) != 0 )
        MiLockLoaderEntry(v7, 0, v12, v13);
    }
    MiReacquireWalkLocks((__int64)a1, v8, 0LL);
    if ( v11 < 0 )
      return 5LL;
  }
  v15 = 48 * (((unsigned __int64)v14 >> 12) & 0xFFFFFFFFFFLL);
  v16 = v15 - 0x220000000000LL;
  v17 = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
  {
    if ( v14 >= 0 )
    {
      *(_DWORD *)(v6 + 24) |= 1u;
      return 5LL;
    }
    if ( *(__int64 *)(v16 + 40) >= 0 && (unsigned int)MiGetPagePrivilege((_QWORD *)(v15 - 0x220000000000LL), 0LL, 0LL) )
    {
      *(_DWORD *)(v6 + 24) |= 2u;
      return 5LL;
    }
    goto LABEL_37;
  }
  if ( v17 == 1 )
  {
    MiMakeDriverPageStayResident(v7, a1[4], (__int64)((_QWORD)a2 << 25) >> 16);
    goto LABEL_37;
  }
  if ( v17 != 2 )
  {
    if ( (int)KeSetPagePrivilege(v15 / 48, (__int64)((_QWORD)a2 << 25) >> 16, 0LL, 0x80u) < 0 )
      KeBugCheckEx(0x1Au, 0x902uLL, v15 - 0x220000000000LL, (__int64)((_QWORD)a2 << 25) >> 16, 0LL);
    MiWriteValidPteVolatile(a2, 1, 0);
    if ( (int)sub_1405C6088(v15 / 48, (__int64)((_QWORD)a2 << 25) >> 16) < 0 )
      KeBugCheckEx(0x1Au, 0x903uLL, (__int64)((_QWORD)a2 << 25) >> 16, 0LL, 0LL);
    MiMarkPfnVerified(v15 - 0x220000000000LL, 64);
    goto LABEL_37;
  }
  v19 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
  if ( (unsigned __int16)*(_DWORD *)(v16 + 32) != 1
    || (unsigned int)MiGetPfnSlabType(v15 - 0x220000000000LL) != 9
    && (unsigned int)MiCheckSlabPage(v15 - 0x220000000000LL, v20, 4) )
  {
LABEL_37:
    ++*(_QWORD *)(v6 + 16);
    return 0LL;
  }
  v21 = MI_PAGE_TO_FULL_COLOR(v15 / 48);
  if ( MiGetSlabPage(v19, 1, v21, 0x12u, &v35, 0) != -1 )
  {
    PfnSlabType = MiGetPfnSlabType(v15 - 0x220000000000LL);
    MiTradeActivePage(
      (const __m128i *)(v15 - 0x220000000000LL),
      (__m128i *)(48 * v25 - 0x220000000000LL),
      v9,
      2u,
      PfnSlabType != 9);
    *(_QWORD *)(v16 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v28 = *(_QWORD *)(v16 + 16);
    if ( v28 )
      DemandZeroPte = v28 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    else
      DemandZeroPte = MiMakeDemandZeroPte(4);
    *(_QWORD *)(v16 + 16) = DemandZeroPte;
    MiReleaseFreshPage(v15 - 0x220000000000LL, v26, v27);
    goto LABEL_37;
  }
  v22 = v35;
  if ( !v35 )
    return 5LL;
  MiReleaseWalkLocks((__int64)a1);
  MiReplenishSlabAllocator(v22, 1uLL, 0, v23);
  MiReacquireWalkLocks((__int64)a1, v8, 0LL);
  return 2LL;
}
