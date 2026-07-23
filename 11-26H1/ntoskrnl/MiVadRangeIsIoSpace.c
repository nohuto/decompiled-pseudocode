/*
 * XREFs of MiVadRangeIsIoSpace @ 0x1404EE0D0
 * Callers:
 *     MiCopyVmLockVad @ 0x140A2BC40 (MiCopyVmLockVad.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiPageTableLockIsContended @ 0x1402E88A0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 */

unsigned __int64 __fastcall MiVadRangeIsIoSpace(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // r12
  __int64 v5; // rbx
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  struct _LIST_ENTRY **p_Blink; // rbp
  __int64 v10; // rdx
  KIRQL v11; // r15
  unsigned __int64 v12; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8

  v3 = a2;
  v4 = a3;
  v5 = 0LL;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((a2 + a3 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v11 = MiLockWorkingSetShared((__int64)p_Blink, 0x7FFFFFFFF8LL, a3);
  if ( v6 > v7 )
    goto LABEL_2;
  do
  {
    if ( v8 )
    {
      if ( (v6 & 0xFFF) != 0 )
        goto LABEL_10;
      MiUnlockPageTableInternal((__int64)p_Blink, v8);
    }
    v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v6, 0, v11, 0);
LABEL_10:
    v14 = (*(_QWORD *)v6 >> 12) & 0xFFFFFFFFFFLL;
    if ( v14 > qword_140E2D920 || ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      break;
    v6 += 8LL;
    if ( (v6 & 0x78) == 0
      && (MiWorkingSetIsContended((__int64)p_Blink, 0)
       || (unsigned int)MiPageTableLockIsContended((__int64)p_Blink, v8)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal((__int64)p_Blink, v8);
      LOBYTE(v15) = v11;
      MiUnlockWorkingSetShared((__int64)p_Blink, v15);
      v8 = 0LL;
      MiLockWorkingSetShared((__int64)p_Blink, v16, v17);
    }
  }
  while ( v6 <= v7 );
  v4 = a3;
  v3 = a2;
  if ( v8 )
    MiUnlockPageTableInternal((__int64)p_Blink, v8);
LABEL_2:
  LOBYTE(v10) = v11;
  MiUnlockWorkingSetShared((__int64)p_Blink, v10);
  v12 = (__int64)(v6 << 25) >> 16;
  if ( v12 >= v3 )
  {
    v5 = v12 - v3;
    if ( v12 - v3 > v4 )
      return v4;
  }
  return v5;
}
