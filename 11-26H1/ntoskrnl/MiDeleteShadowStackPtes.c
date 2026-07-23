/*
 * XREFs of MiDeleteShadowStackPtes @ 0x140342874
 * Callers:
 *     MiDeleteKernelStackPages @ 0x14028DF2C (MiDeleteKernelStackPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x1402EB3D0 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiDecreaseUsedPtes @ 0x1403410A0 (MiDecreaseUsedPtes.c)
 *     MiValidateKernelShadowStackPage @ 0x140342C98 (MiValidateKernelShadowStackPage.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     VslFreeKernelShadowStack @ 0x140AE2A1C (VslFreeKernelShadowStack.c)
 */

__int64 __fastcall MiDeleteShadowStackPtes(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ULONG_PTR a5, _QWORD *a6)
{
  ULONG_PTR v7; // rsi
  unsigned int v9; // r14d
  unsigned __int64 v10; // rdi
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r12
  _QWORD *v16; // r13
  __int64 v17; // r15
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  _QWORD *v20; // rbp
  __int64 v21; // rbx
  int IsPfnFromChargedSlabAllocation; // esi
  __int64 v23; // rax
  volatile signed __int32 *v24; // rdi
  int v25; // eax
  unsigned __int8 v27; // [rsp+90h] [rbp+8h]

  v7 = a3;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a5 )
  {
    if ( _bittest64(&MiFlags, 0x2Bu) )
    {
      v12 = VslFreeKernelShadowStack();
      if ( v12 < 0 )
        KeBugCheckEx(0x1Au, 0x51541uLL, v7 - 1, v12, 0LL);
    }
  }
  if ( KeGetCurrentIrql() == 2 )
  {
    v27 = 17;
    MiLockWorkingSetSharedAtDpc(a2);
  }
  else
  {
    v27 = MiLockWorkingSetShared(a2, a2, a3);
  }
  v15 = 0LL;
  a5 = v7 + 8 * a4;
  if ( v7 < a5 )
  {
    v16 = a6;
    v17 = 0LL;
    while ( 1 )
    {
      if ( v10 )
      {
        if ( (v7 & 0xFFF) != 0 )
          goto LABEL_10;
        if ( v9 )
        {
          MiDecreaseUsedPtes(v14, v10, (_KPROCESS *)v9);
          v9 = 0;
        }
        MiUnlockPageTableInternal(a2, v10);
      }
      v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v10, 0);
LABEL_10:
      v18 = 6 * ((*(_QWORD *)v7 >> 12) & 0xFFFFFFFFFFLL);
      ++*v16;
      v19 = (_QWORD *)(8 * v18 - 0x220000000000LL);
      MiValidateKernelShadowStackPage(v7);
      ++v16[3];
      ++v17;
      ++v9;
      *v19 = v15;
      v15 = v19;
      *(_QWORD *)v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      v7 += 8LL;
      if ( v7 >= a5 )
      {
        v11 = 0LL;
        if ( v10 )
        {
          if ( v9 )
            MiDecreaseUsedPtes(v14, v10, (_KPROCESS *)v9);
          MiUnlockPageTableInternal(a2, v10);
        }
        break;
      }
    }
  }
  LOBYTE(v13) = 17;
  MiUnlockWorkingSetShared(a2, v13);
  v20 = a6;
  while ( 1 )
  {
    v21 = (__int64)v15;
    if ( !v15 )
      break;
    v15 = (_QWORD *)*v15;
    IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v21);
    LODWORD(a5) = 0;
    v23 = v11 + 1;
    v24 = (volatile signed __int32 *)(v21 + 24);
    if ( !IsPfnFromChargedSlabAllocation )
      v23 = v11;
    v11 = v23;
    while ( _interlockedbittestandset64(v24, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&a5);
      while ( *(__int64 *)v24 < 0 );
    }
    MiSetPfnIdentity(v21, 0LL);
    *(_QWORD *)(v21 + 24) &= 0xC000000000000000uLL;
    v25 = *(_DWORD *)(v21 + 32);
    *(_DWORD *)(v21 + 32) = v25 ^ (unsigned __int16)(v25 ^ (v25 - 2));
    if ( (_WORD)v25 == 2 )
    {
      MiInsertPageInFreeOrZeroedList((v21 + 0x220000000000LL) / 48);
    }
    else
    {
      *(_DWORD *)(v21 + 32) |= 0x70000u;
      *(_QWORD *)(v21 + 24) |= 0x4000000000000000uLL;
      if ( !IsPfnFromChargedSlabAllocation )
        ++v20[1];
    }
    _InterlockedAnd64((volatile signed __int64 *)v24, 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v27 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
    __writecr8(v27);
  }
  return v11;
}
