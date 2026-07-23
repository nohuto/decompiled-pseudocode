/*
 * XREFs of MiUnlockPageTableRange @ 0x140319250
 * Callers:
 *     MiLockPageTableRange @ 0x1404AA38C (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x140AB9EA0 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableCharges @ 0x14031AF70 (MiUnlockPageTableCharges.c)
 */

void __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY **p_Blink; // rdi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  char v7; // bp

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v4 = (_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v5 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v7 = MiLockWorkingSetShared((__int64)p_Blink, 1073741816LL, a3);
  while ( (unsigned __int64)v4 <= v5 )
  {
    MiLockPageTableInternal((signed __int64)p_Blink, (unsigned __int64)v4, 0);
    MiUnlockPageTableCharges(48 * ((*v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    MiUnlockPageTableInternal((__int64)p_Blink, (unsigned __int64)v4++);
  }
  LOBYTE(v6) = v7;
  MiUnlockWorkingSetShared((__int64)p_Blink, v6);
}
