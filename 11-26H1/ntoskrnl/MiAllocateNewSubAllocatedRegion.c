/*
 * XREFs of MiAllocateNewSubAllocatedRegion @ 0x14099B400
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x140999F24 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiUpdateVadStartVpn @ 0x140494C34 (MiUpdateVadStartVpn.c)
 *     MiInsertVadEvent @ 0x140494C48 (MiInsertVadEvent.c)
 *     MiLocateExclusiveSecure @ 0x1404B25EC (MiLocateExclusiveSecure.c)
 *     MiWriteSecureFlags @ 0x1404C73A4 (MiWriteSecureFlags.c)
 *     MiInitializeQuotaTracker @ 0x140995B34 (MiInitializeQuotaTracker.c)
 *     MiSelectUserAddress @ 0x140995F80 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiGetUserReservationHighestAddress @ 0x14099C5B0 (MiGetUserReservationHighestAddress.c)
 *     MiCreateVadEvent @ 0x14099F5BC (MiCreateVadEvent.c)
 *     MiReleaseVadEventBlocks @ 0x140A01D8C (MiReleaseVadEventBlocks.c)
 *     MiAdvanceVadHint @ 0x140A026C0 (MiAdvanceVadHint.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateNewSubAllocatedRegion(__int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v3; // r12
  ULONG_PTR Process; // rbp
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  ULONG_PTR v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned __int64 UserReservationHighestAddress; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r13
  int VadEvent; // edi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r13
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned int v20; // eax
  _QWORD *v21; // r14
  unsigned __int8 VadFlags; // al
  __int64 v23; // rcx
  __int16 v24; // r8
  __int16 v25; // di
  int v26; // eax
  __int64 v27; // rax
  _QWORD *v28; // r9
  _KPROCESS *v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // r8
  struct _KLOCK_ENTRIES *v33; // r9
  struct _KLOCK_ENTRIES *v34; // r9
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v39; // rax
  bool v40; // cf
  unsigned __int64 v41; // [rsp+50h] [rbp-48h]
  unsigned __int64 v42; // [rsp+50h] [rbp-48h]
  __int64 v43; // [rsp+58h] [rbp-40h]
  unsigned __int64 v44; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v45; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v46; // [rsp+B8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v45 = 0LL;
  v3 = 512LL;
  v44 = 0LL;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  v43 = *(_QWORD *)(Process + 1040);
  if ( a2 > 0x10 )
    return 3221225495LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x48uLL, 1399087446, CurrentProcessorColor | 0x80000000);
  v7 = PoolMm;
  if ( !PoolMm )
    return 3221225495LL;
  MiInitializeQuotaTracker((_BYTE *)(PoolMm + 68), Process, 0);
  v9 = *(_DWORD *)(v8 + 48) & 0xFFFFFC9F;
  *(_QWORD *)(v8 + 16) = -2LL;
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_DWORD *)(v8 + 48) = v9 | 0x80080;
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, 0LL);
  v41 = UserReservationHighestAddress;
  v11 = 0x200000LL;
  while ( 1 )
  {
    v46 = 0LL;
    v12 = v11;
    VadEvent = MiSelectUserAddress(0, 0LL, UserReservationHighestAddress, v3 << 12, v11, 0LL, 4, 0x80000000, &v46, &v44);
    if ( VadEvent >= 0 )
      break;
    if ( v11 != 0x10000 )
      v11 = 0x10000LL;
    v39 = v3 >> 1;
    if ( v12 != 0x10000 )
      v39 = v3;
    v3 = v39;
    v40 = v39 < 0x10;
    UserReservationHighestAddress = v41;
    if ( v40 )
      goto LABEL_14;
  }
  v14 = v44;
  v15 = v44 >> 12;
  v16 = v44 >> 12;
  v44 = (v3 << 12) + v44 - 1;
  MiUpdateVadStartVpn(v7, v16);
  *(_DWORD *)(v7 + 28) = v17 >> 12;
  v42 = v17 >> 12;
  *(_BYTE *)(v7 + 33) = v17 >> 44;
  VadEvent = MiCreateVadEvent(
               (ULONG_PTR)KeGetCurrentThread()->ApcState.Process,
               (__int64)xHalTimerWatchdogStop,
               (__int64)&v45);
  if ( VadEvent < 0 )
    goto LABEL_14;
  v19 = v45;
  v20 = ExGenRandom(1, v18);
  v21 = (_QWORD *)(v19 + 40);
  *(_QWORD *)(v19 + 56) = v7;
  *(_DWORD *)(v19 + 68) = v3;
  *(_DWORD *)(v19 + 72) = 4 * (v20 % v3);
  *(_QWORD *)(v19 + 40) = 0LL;
  *(_QWORD *)(v19 + 48) = 0LL;
  *(_DWORD *)(v19 + 64) = 0;
  VadFlags = MiReadVadFlags(v7);
  v25 = v24 + 2;
  if ( (VadFlags & (unsigned __int8)(v24 + 2)) != 0 && MiLocateExclusiveSecure(v23)
    || (v26 = MmGetCurrentProcessorColor(),
        v27 = ExAllocatePoolMm(64LL, 0x68uLL, 1699966285, v26 | 0x80000000),
        (v28 = (_QWORD *)v27) == 0LL) )
  {
    VadEvent = -1073741670;
    goto LABEL_14;
  }
  *(_WORD *)(v27 + 8) = v25;
  v29 = KeGetCurrentThread()->ApcState.Process;
  *(_BYTE *)(v27 + 11) = (unsigned __int8)v29 >> 4;
  v30 = v44;
  v28[5] = v29;
  v28[4] = v30;
  v28[6] = v7;
  MiWriteSecureFlags(v28 + 3, v14 | 0xC);
  MiInsertVadEvent(v7, v31, 1);
  VadEvent = MiInsertVadCharges(v7, Process);
  if ( VadEvent < 0 )
  {
LABEL_14:
    MiReleaseVadEventBlocks(v7);
    ExFreePoolWithTag((PVOID)v7, 0);
    return (unsigned int)VadEvent;
  }
  MiLockVad((__int64)CurrentThread, v7, v32, v33);
  MiInsertVad(v7, Process, 0);
  MiUnlockVad((__int64)CurrentThread, v7);
  v35 = v46;
  if ( v46 )
    MiAdvanceVadHint(v15, v42);
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process, v35, v34);
  v36 = (_QWORD *)(v43 + 1160);
  v37 = *(_QWORD *)(v43 + 1160);
  if ( *(_QWORD *)(v37 + 8) != v43 + 1160 )
    __fastfail(3u);
  *v21 = v37;
  v21[1] = v36;
  *(_QWORD *)(v37 + 8) = v21;
  *v36 = v21;
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  return (unsigned int)VadEvent;
}
