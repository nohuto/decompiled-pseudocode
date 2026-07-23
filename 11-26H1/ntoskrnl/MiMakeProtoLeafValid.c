/*
 * XREFs of MiMakeProtoLeafValid @ 0x1404B9358
 * Callers:
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiSectionProtectAllPtes @ 0x1402E5F80 (MiSectionProtectAllPtes.c)
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 */

__int64 __fastcall MiMakeProtoLeafValid(ULONG_PTR BugCheckParameter4, int a2, KIRQL a3)
{
  struct _LIST_ENTRY **p_Blink; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v7 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    while ( 1 )
    {
      do
      {
        if ( (*(_QWORD *)BugCheckParameter4 & 1) != 0 )
          return 0LL;
        MiUnlockPageTableInternal((__int64)p_Blink, v7);
        LOBYTE(v8) = a3;
        MiUnlockWorkingSetShared((__int64)p_Blink, v8);
        v9 = MmAccessFault(0LL, (__int64)(BugCheckParameter4 << 25) >> 16, 1, 0LL);
        a3 = MiLockWorkingSetShared((__int64)p_Blink, v10, v11);
        MiMakeSystemAddressValid(BugCheckParameter4, 0, a3, 0);
      }
      while ( v9 >= 0 );
      if ( v9 != -1073741819 )
        break;
      if ( a2 == 24 )
        return 3221225477LL;
      if ( (*(_QWORD *)BugCheckParameter4 & 1) != 0 )
        return 0LL;
      *(_QWORD *)BugCheckParameter4 |= 8uLL;
    }
  }
  while ( v9 != -1073741818 );
  return 3221225478LL;
}
