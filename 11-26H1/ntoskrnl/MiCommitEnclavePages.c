/*
 * XREFs of MiCommitEnclavePages @ 0x140343308
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiPageTableLockIsContended @ 0x1402E88A0 (MiPageTableLockIsContended.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 */

__int64 __fastcall MiCommitEnclavePages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned int v6; // r15d
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r13
  unsigned int v9; // ebx
  ULONG_PTR v10; // rsi
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  struct _LIST_ENTRY **p_Blink; // rbp
  KIRQL v14; // al
  __int64 v15; // rdx
  KIRQL v16; // r15
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  KIRQL v24; // [rsp+80h] [rbp+28h]

  if ( a5 != 4096 )
    return 3221225715LL;
  v6 = a6;
  if ( (a6 & 7) == 0 || a6 > 7 || (a6 & 5) == 5 )
    return 3221225714LL;
  v7 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0;
  v10 = v7;
  v11 = 0LL;
  v12 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v14 = MiLockWorkingSetShared((__int64)p_Blink, 0x7FFFFFFFF8LL, a3);
  v24 = v14;
  if ( v7 > v8 )
    goto LABEL_17;
  v16 = v14;
  do
  {
    if ( (v10 & 0x78) != 0 || v10 == v7 )
    {
      if ( !v12 )
        goto LABEL_9;
      goto LABEL_20;
    }
    if ( MiWorkingSetIsContended((__int64)p_Blink, 0) || KeShouldYieldProcessor() )
    {
LABEL_32:
      if ( v12 )
        MiUnlockPageTableInternal((__int64)p_Blink, v12);
      LOBYTE(v15) = v16;
      MiUnlockWorkingSetShared((__int64)p_Blink, v15);
      MiLockWorkingSetShared((__int64)p_Blink, v21, v22);
      goto LABEL_9;
    }
    if ( v12 )
    {
      if ( (unsigned int)MiPageTableLockIsContended((__int64)p_Blink, v12) )
        goto LABEL_32;
LABEL_20:
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_10;
      MiUnlockPageTableInternal((__int64)p_Blink, v12);
    }
LABEL_9:
    v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v10, (*(_DWORD *)(a2 + 48) >> 10) & 0x7F, v16, 0);
LABEL_10:
    v17 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v17) = MiReadPteShadow(v10, *(_QWORD *)v10);
    v18 = (v17 & 1) == 0;
    v19 = v11 + 1;
    if ( !v18 )
      v19 = v11;
    v10 += 8LL;
    v11 = v19;
  }
  while ( v10 <= v8 );
  v6 = a6;
  if ( v12 )
    MiUnlockPageTableInternal((__int64)p_Blink, v12);
  v14 = v24;
LABEL_17:
  LOBYTE(v15) = v14;
  MiUnlockWorkingSetShared((__int64)p_Blink, v15);
  if ( v11 )
    return (unsigned int)MiAddPagesToEnclave(a2, v11, v7, v8, v6);
  return v9;
}
