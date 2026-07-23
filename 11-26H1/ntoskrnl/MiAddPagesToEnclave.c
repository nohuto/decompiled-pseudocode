/*
 * XREFs of MiAddPagesToEnclave @ 0x14034355C
 * Callers:
 *     MiCommitEnclavePages @ 0x140343308 (MiCommitEnclavePages.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiPageTableLockIsContended @ 0x1402E88A0 (MiPageTableLockIsContended.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiWriteEnclavePte @ 0x140342CF8 (MiWriteEnclavePte.c)
 *     MiGetPageForEnclave @ 0x140343950 (MiGetPageForEnclave.c)
 *     KeAddEnclavePage @ 0x1403439B0 (KeAddEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x140343B28 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x140343DD0 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x140343FC4 (MiReturnEnclavePage.c)
 *     MiReturnReservedEnclavePages @ 0x140C07FA8 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiAddPagesToEnclave(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, ULONG_PTR a4, unsigned int a5)
{
  int v5; // eax
  ULONG_PTR v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // r14
  struct _LIST_ENTRY **p_Blink; // rbp
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 result; // rax
  int v14; // r9d
  int v15; // r10d
  void *v16; // rcx
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rdx
  KIRQL v22; // r13
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  int v25; // r12d
  unsigned __int64 ValidPte; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-74h]
  __int64 v31; // [rsp+38h] [rbp-70h]
  __int64 PageForEnclave; // [rsp+40h] [rbp-68h]
  __int64 v33; // [rsp+48h] [rbp-60h]
  void *v34; // [rsp+50h] [rbp-58h]
  __int64 v35; // [rsp+58h] [rbp-50h]
  unsigned __int8 v36; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v37; // [rsp+B8h] [rbp+10h]

  v5 = *(_DWORD *)(a1 + 72);
  v6 = a3;
  v7 = a2;
  v29 = 0;
  if ( (v5 & 2) != 0 && (*(_DWORD *)(a1 + 80) & 1) == 0 )
    return 3221225496LL;
  v9 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v11 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *((unsigned __int16 *)p_Blink + 87));
  v12 = *(_QWORD *)(a1 + 120);
  v33 = v11;
  if ( a2 <= v12 || (v9 = a2 - v12, result = MiReserveEnclavePages(a1, v11, a2 - v12), (int)result >= 0) )
  {
    v14 = *(_DWORD *)(a1 + 72);
    v15 = 4;
    v16 = 0LL;
    if ( (v14 & 2) == 0 )
      v16 = qword_140E361A0;
    v34 = v16;
    v17 = (a5 >> 1) & 2 | 0x35;
    if ( (a5 & 2) == 0 )
      v17 = (a5 >> 1) & 2 | 0x31;
    if ( (v14 & 2) == 0 )
      v15 = a5;
    v30 = v15;
    v18 = v17 | 0x40;
    if ( (v14 & 2) == 0 )
      v18 = v17;
    v36 = v18;
    v19 = 0LL;
    v35 = (__int64)(*(_QWORD *)(a1 + 88) << 25) >> 16;
    v20 = (__int64)(v6 << 25) >> 16;
    v31 = v20;
    v22 = MiLockWorkingSetShared((__int64)p_Blink, v17, (a5 >> 1) & 2 | 0x31);
    while ( 1 )
    {
      if ( v6 > a4 )
      {
        if ( v19 )
          MiUnlockPageTableInternal((__int64)p_Blink, v19);
        v25 = 0;
LABEL_30:
        LOBYTE(v21) = v22;
        MiUnlockWorkingSetShared((__int64)p_Blink, v21);
        if ( v9 )
          MiReturnReservedEnclavePages(a1, v9);
        return (unsigned int)v25;
      }
      if ( (v6 & 0x78) != 0 || v6 == a3 )
        break;
      if ( MiWorkingSetIsContended((__int64)p_Blink, 0) || KeShouldYieldProcessor() )
      {
LABEL_45:
        if ( v19 )
          MiUnlockPageTableInternal((__int64)p_Blink, v19);
        LOBYTE(v21) = v22;
        MiUnlockWorkingSetShared((__int64)p_Blink, v21);
        MiLockWorkingSetShared((__int64)p_Blink, v27, v28);
        goto LABEL_16;
      }
      if ( v19 )
      {
        if ( (unsigned int)MiPageTableLockIsContended((__int64)p_Blink, v19) )
          goto LABEL_45;
LABEL_43:
        if ( (v6 & 0xFFF) != 0 )
          goto LABEL_17;
        MiUnlockPageTableInternal((__int64)p_Blink, v19);
      }
LABEL_16:
      v19 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v6, (*(_DWORD *)(a1 + 48) >> 10) & 0x7F, v22, 0);
LABEL_17:
      v23 = *(_QWORD *)v6;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
        LOBYTE(v23) = MiReadPteShadow(v6, *(_QWORD *)v6);
      if ( (v23 & 1) == 0 )
      {
        if ( v9 == v7 )
          --v9;
        v37 = v7 - 1;
        PageForEnclave = MiGetPageForEnclave(a1, v33);
        v24 = MiMapPageInHyperSpaceWorker(PageForEnclave, 0LL, 0x80000000);
        v25 = KeAddEnclavePage(v35, (_DWORD)v34, v24, v20, v36, (__int64)&v29);
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( v25 < 0 )
        {
          MiReturnEnclavePage(PageForEnclave);
          if ( v25 == -1073740657 )
            v25 = -1073741823;
          if ( v19 )
            MiUnlockPageTableInternal((__int64)p_Blink, v19);
          goto LABEL_30;
        }
        MiInitializeEnclavePfn(PageForEnclave, v6, v30, 1LL);
        ValidPte = MiMakeValidPte(v6, PageForEnclave, v30 | 0x80000000);
        MiWriteEnclavePte(v6, ValidPte, a1, 0, 0);
        v7 = v37;
        v20 = v31;
      }
      v6 += 8LL;
      v20 += 4096LL;
      v31 = v20;
    }
    if ( !v19 )
      goto LABEL_16;
    goto LABEL_43;
  }
  return result;
}
