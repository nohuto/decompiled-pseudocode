/*
 * XREFs of MmAssignProcessToJob @ 0x14096022C
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140984FA8 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140AC5D48 (PspAssignProcessToJob.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027F6FC (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140316ED0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140960360 (PspChangeJobMemoryUsageByProcess.c)
 *     MiUnlockVadRange @ 0x140960890 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140960DAC (MiLockVadRange.c)
 */

__int64 __fastcall MmAssignProcessToJob(__int64 a1, __int64 a2, int a3)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rbp
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  unsigned __int8 v10; // di
  _OWORD v12[3]; // [rsp+20h] [rbp-68h] BYREF

  v3 = 0;
  memset(v12, 0, sizeof(v12));
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)a1 )
  {
    v3 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v12);
  }
  v7 = MiLockVadRange(a1, -1LL, -1LL, 0LL);
  if ( v7 || (*(_DWORD *)(a1 + 1532) & 1) != 0 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1, v8, v9);
    *(_QWORD *)(a1 + 632) = *(_QWORD *)(a1 + 672);
    v10 = PspChangeJobMemoryUsageByProcess(a3 | 3u, *(_QWORD *)(a1 + 984), a1);
    _InterlockedOr((volatile signed __int32 *)(a1 + 496), 0x10u);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
  }
  else
  {
    v10 = 0;
  }
  MiUnlockVadRange(a1, -1LL, v7, 0LL);
  if ( v3 )
    KiUnstackDetachProcess((__int64)v12, 0);
  return v10;
}
