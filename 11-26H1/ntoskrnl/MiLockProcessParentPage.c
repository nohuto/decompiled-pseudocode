/*
 * XREFs of MiLockProcessParentPage @ 0x140507ED4
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 *     MiReturnCloneResources @ 0x140A07D98 (MiReturnCloneResources.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

$241382875694CED3D471BC5892DE3337 *__fastcall MiLockProcessParentPage(_KPROCESS *a1, int a2)
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
