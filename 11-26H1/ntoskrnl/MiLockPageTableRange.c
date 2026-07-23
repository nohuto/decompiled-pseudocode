/*
 * XREFs of MiLockPageTableRange @ 0x1404AA38C
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x1409EE268 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableRange @ 0x140319250 (MiUnlockPageTableRange.c)
 *     MiLockPageTablePage @ 0x14031C910 (MiLockPageTablePage.c)
 */

__int64 __fastcall MiLockPageTableRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY **p_Blink; // rbp
  __int64 v5; // r12
  ULONG_PTR v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  KIRQL v9; // r15
  _QWORD *v11; // rdi
  int v12; // ebx
  __int64 v13; // r8

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = v5;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = MiLockWorkingSetShared((__int64)p_Blink, a2, a3);
  while ( 1 )
  {
    if ( v6 > v7 )
    {
      LOBYTE(v8) = v9;
      MiUnlockWorkingSetShared((__int64)p_Blink, v8);
      return 0LL;
    }
    v11 = (_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiMakeSystemAddressValid(v6, 0, v9, 0);
    v12 = MiLockPageTablePage(48 * ((*v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2LL);
    MiUnlockPageTableInternal((__int64)p_Blink, (unsigned __int64)v11);
    if ( !v12 )
      break;
    v6 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  }
  LOBYTE(v8) = v9;
  MiUnlockWorkingSetShared((__int64)p_Blink, v8);
  if ( v6 != v5 )
    MiUnlockPageTableRange(a1, (__int64)((v6 - 8) << 25) >> 16, v13);
  return 3221225626LL;
}
