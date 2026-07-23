/*
 * XREFs of MiAllocateEnclaveVad @ 0x140B6C330
 * Callers:
 *     MiCreateEnclave @ 0x14087C3B8 (MiCreateEnclave.c)
 * Callees:
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiUpdateVadStartVpn @ 0x140494C34 (MiUpdateVadStartVpn.c)
 *     MiSelectUserAddress @ 0x140995F80 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiGetUserReservationHighestAddress @ 0x14099C5B0 (MiGetUserReservationHighestAddress.c)
 *     MiIsVaRangeAvailable @ 0x14099F404 (MiIsVaRangeAvailable.c)
 *     MiAdvanceVadHint @ 0x140A026C0 (MiAdvanceVadHint.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateEnclaveVad(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v6; // r12
  unsigned __int64 v7; // rsi
  ULONG_PTR Process; // r14
  BOOL v10; // ebx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rdi
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  unsigned __int64 v19; // rax
  int inserted; // ebx
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // eax
  void *v24; // rcx
  unsigned __int64 *v25; // rdx
  unsigned __int64 UserReservationHighestAddress; // rax
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rbp
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _KLOCK_ENTRIES *v32; // r9
  _QWORD *v33; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+20h]

  v36 = a4;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v7 = a3;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  v10 = (unsigned int)(a1 - 16) <= 1;
  if ( a2 >= 0xFFFFFFFFFFFFF000uLL || a2 == 0 )
    return 3221225485LL;
  if ( (unsigned int)(a1 - 16) > 1 )
  {
    v12 = a2 - 1;
    v13 = a2;
    if ( (v12 & a2) != 0 )
      v13 = a2 & ~v12;
    v11 = 0x10000LL;
    if ( v13 >= 0x10000 )
    {
      v11 = v13;
      if ( v13 >= 0x7FFFFFFF0000LL )
        return 3221225485LL;
    }
  }
  else
  {
    v11 = 0x200000LL;
  }
  if ( a2 >= 0x7FFFFFFF0000LL
    || a3 && (a3 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFF0000LL - a3 < a2 || ((v11 - 1) & a3) != 0 || a4) )
  {
    return 3221225485LL;
  }
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x98uLL, 1164206422, CurrentProcessorColor | 0x80000000);
  if ( !PoolMm )
    return 3221225626LL;
  *(_BYTE *)(PoolMm + 68) = (unsigned __int8)Process >> 4;
  *(_QWORD *)(PoolMm + 16) = -2LL;
  if ( !v10 )
  {
    *(_DWORD *)(PoolMm + 72) |= 1u;
    v19 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 1u, v16, (unsigned __int64)v17);
    *(_QWORD *)(PoolMm + 88) = v19;
    if ( !v19
      || a1 == 2
      && (*(_DWORD *)(PoolMm + 80) |= 1u,
          v21 = MmGetCurrentProcessorColor(),
          v22 = ExAllocatePoolMm(64LL, 0x1000uLL, 1850042701, v21 | 0x80000000),
          (*(_QWORD *)(PoolMm + 96) = v22) == 0LL) )
    {
      inserted = -1073741670;
LABEL_25:
      if ( (*(_DWORD *)(PoolMm + 72) & 1) != 0 )
      {
        v24 = *(void **)(PoolMm + 96);
        if ( v24 )
          ExFreePoolWithTag(v24, 0);
        v25 = *(unsigned __int64 **)(PoolMm + 88);
        if ( v25 )
          MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, v25, 1u);
      }
      ExFreePoolWithTag((PVOID)PoolMm, 0);
      return (unsigned int)inserted;
    }
    *(_DWORD *)(PoolMm + 48) = *(_DWORD *)(PoolMm + 48) & 0xFFFFFFE3 | 0xC;
    *(_QWORD *)(PoolMm + 136) = 0LL;
  }
  v23 = *(_DWORD *)(PoolMm + 48) & 0xFFFFFC9F;
  *(_QWORD *)(PoolMm + 40) = 0LL;
  *(_DWORD *)(PoolMm + 48) = v23 | 0x880080;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, v16, v17);
  if ( (*(_DWORD *)(Process + 500) & 0x20) != 0 )
  {
    inserted = -1073741558;
LABEL_24:
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    goto LABEL_25;
  }
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, v36);
  if ( v7 )
  {
    v27 = (v7 + a2 - 1) | 0xFFF;
    if ( !MiIsVaRangeAvailable(Process, v7, v27 - v7 + 1, 0LL, UserReservationHighestAddress) )
    {
      inserted = -1073741800;
      goto LABEL_24;
    }
  }
  else
  {
    inserted = MiSelectUserAddress(0, 0LL, UserReservationHighestAddress, a2, v11, 0LL, 6, 0, &v33, &v35);
    if ( inserted < 0 )
      goto LABEL_24;
    v7 = v35;
    v6 = v33;
    v27 = a2 + v35 - 1;
  }
  v28 = v7 >> 12;
  v29 = v27 >> 12;
  MiUpdateVadStartVpn(PoolMm, v28);
  *(_DWORD *)(PoolMm + 28) = v27 >> 12;
  *(_BYTE *)(PoolMm + 33) = v27 >> 44;
  inserted = MiInsertVadCharges(v30, Process);
  if ( inserted < 0 )
    goto LABEL_24;
  MiLockVad((__int64)CurrentThread, PoolMm, v31, v32);
  MiInsertVad(PoolMm, Process, 0);
  if ( v6 )
    MiAdvanceVadHint(v28, v29, v6);
  MiReferenceVad(PoolMm);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
  *a5 = PoolMm;
  return 0LL;
}
