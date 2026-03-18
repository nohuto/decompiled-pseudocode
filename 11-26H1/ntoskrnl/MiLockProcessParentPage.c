/*
 * XREFs of MiLockProcessParentPage @ 0x14050E464
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140961614 (MiCloneProcessAddressSpace.c)
 *     MiReturnCloneResources @ 0x1409620A4 (MiReturnCloneResources.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiAddLockedPageCharge @ 0x1402F5D30 (MiAddLockedPageCharge.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

$7A85BAF4F1FA08634C1C4A3E45B775B3 *__fastcall MiLockProcessParentPage(_KPROCESS *a1, int a2)
{
  __int64 p_Blink; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  char v6; // bp
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v12; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v13[3]; // [rsp+28h] [rbp-50h] BYREF

  p_Blink = (__int64)&a1[2].ReadyListHead.Blink;
  memset(v13, 0, sizeof(v13));
  KiStackAttachProcess(a1, 0, (__int64)v13);
  v6 = MiLockWorkingSetShared(p_Blink, v4, v5);
  MiLockPageTableInternal(p_Blink, 0xFFFFF6FB7DBEDF68uLL, 0);
  v9 = 48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  if ( a2 )
    MiAddLockedPageCharge(v9, 1, v7, v8);
  else
    MiRemoveLockedPageChargeAndDecRef(v9);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal(p_Blink, 0xFFFFF6FB7DBEDF68uLL);
  LOBYTE(v10) = v6;
  MiUnlockWorkingSetShared(p_Blink, v10);
  return KiUnstackDetachProcess((__int64)v13, 0);
}
