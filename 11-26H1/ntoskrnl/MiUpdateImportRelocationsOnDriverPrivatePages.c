/*
 * XREFs of MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14050DFD8
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140B3E5DC (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReferenceDriverPage @ 0x140295384 (MiReferenceDriverPage.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14047A5B0 (MiUpdateImagePfnImportRelocations.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiUpdateImportRelocationsOnDriverPrivatePages(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  ULONG_PTR *v7; // rbx
  __int64 v8; // rdx
  char v9; // r13
  __int64 v10; // rbp
  ULONG_PTR v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  int updated; // r12d
  __int64 CurrentIrql; // rcx
  unsigned __int64 v22; // rbx
  struct _KEVENT *v23; // r15
  int v24; // [rsp+80h] [rbp+8h] BYREF
  __int64 v25; // [rsp+88h] [rbp+10h]
  unsigned __int64 v26; // [rsp+90h] [rbp+18h]
  ULONG_PTR *v27; // [rsp+98h] [rbp+20h]

  v26 = a3;
  v25 = a2;
  v3 = a3;
  v4 = a2;
  v5 = 0LL;
  v6 = ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (ULONG_PTR *)(v6 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 64) >> 12));
  v27 = v7;
  v9 = MiLockWorkingSetShared((__int64)&unk_140E36F80, a2, a3);
  v10 = 0LL;
  while ( v6 < (unsigned __int64)v7 )
  {
    if ( !v5 )
      goto LABEL_6;
    if ( (v6 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal((__int64)&unk_140E36F80, v5);
LABEL_6:
      v5 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal((signed __int64)&unk_140E36F80, v5, 0);
    }
    v11 = *(_QWORD *)v6;
    if ( !*(_QWORD *)v6 )
      goto LABEL_8;
    if ( (v11 & 1) != 0 )
    {
      v16 = (v11 >> 12) & 0xFFFFFFFFFFLL;
      v17 = 48 * v16 - 0x220000000000LL;
      if ( *(__int64 *)(v17 + 40) >= 0 )
      {
        v24 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v24);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v16 - 0x220000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal((__int64)&unk_140E36F80, v5);
        LOBYTE(v18) = v9;
        v5 = 0LL;
        MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v18);
        updated = MiUpdateImagePfnImportRelocations(v4, v3, v10 >> 3, v16);
        CurrentIrql = KeGetCurrentIrql();
        if ( (_BYTE)CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v19) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v19);
        }
        v24 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v24);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        v22 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v23 = 0LL;
        if ( updated != 1 )
        {
          v22 = MiCaptureDirtyBitToPfn(v17);
          v23 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
        }
        MiRemoveLockedPageChargeAndDecRef(v17);
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v22 )
          MiReleasePageFileInfo(v23, v22, 1LL);
        MiLockWorkingSetSharedAtDpc((__int64)&unk_140E36F80);
        v3 = v26;
        v4 = v25;
      }
      v6 += 8LL;
      v10 += 8LL;
LABEL_32:
      v7 = v27;
    }
    else
    {
      if ( (v11 & 0x400) == 0 )
      {
        MiUnlockPageTableInternal((__int64)&unk_140E36F80, v5);
        LOBYTE(v12) = v9;
        v5 = 0LL;
        MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v12);
        v13 = MmAccessFault(0LL, (__int64)(v6 << 25) >> 16, 0, 0LL);
        if ( v13 < 0 )
          KeBugCheckEx(0x1Au, 0x1081uLL, (__int64)(v6 << 25) >> 16, v11, v13);
        MiLockWorkingSetShared((__int64)&unk_140E36F80, v14, v15);
        goto LABEL_32;
      }
LABEL_8:
      v7 = v27;
      v6 += 8LL;
      v10 += 8LL;
    }
  }
  if ( v5 )
    MiUnlockPageTableInternal((__int64)&unk_140E36F80, v5);
  LOBYTE(v8) = v9;
  MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v8);
}
