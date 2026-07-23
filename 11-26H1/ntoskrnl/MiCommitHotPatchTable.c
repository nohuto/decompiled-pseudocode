/*
 * XREFs of MiCommitHotPatchTable @ 0x140700C9C
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x14087994C (MiPrepareToHotPatchImage.c)
 *     MmCommitHotPatchTable @ 0x14087AD88 (MmCommitHotPatchTable.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitHotPatchTable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // r12
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  __int64 p_Blink; // r12
  unsigned int v10; // r15d
  __int64 v11; // rax
  int v12; // ebx
  unsigned __int64 DemandZeroPte; // rdi
  unsigned __int64 v14; // rsi
  ULONG_PTR v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+20h] [rbp-58h]
  unsigned __int64 v23; // [rsp+28h] [rbp-50h]
  ULONG_PTR v24; // [rsp+30h] [rbp-48h]
  KIRQL v26; // [rsp+98h] [rbp+20h]

  Process = KeGetCurrentThread()->ApcState.Process;
  result = MiChargeFullProcessCommitment(Process, a3);
  if ( (int)result >= 0 )
  {
    v8 = 0LL;
    p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
    v10 = 0;
    v23 = a2;
    v11 = a3 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32) | *(unsigned int *)(a1 + 52));
    *(_DWORD *)(a1 + 52) += a3;
    *(_BYTE *)(a1 + 34) = BYTE4(v11);
    v12 = (*(_DWORD *)(a1 + 48) >> 10) & 0x7F;
    DemandZeroPte = MiMakeDemandZeroPte(1);
    v14 = MiMakeDemandZeroPte(3);
    v22 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = v22;
    v24 = v22 + 8 * (a3 - 1);
    v26 = MiLockWorkingSetShared(p_Blink, v16, v17);
    if ( v22 <= v24 )
    {
      v19 = v23;
      v18 = v22;
      do
      {
        if ( v19 == a2 || (v15 & 0xFFF) == 0 )
        {
          if ( v10 )
          {
            MiIncreaseUsedPtes(v18, v8, v10, 2);
            v10 = 0;
          }
          if ( v8 )
            MiUnlockPageTableInternal(p_Blink, v8);
          v8 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiMakeSystemAddressValid(v15, v12, v26, 0);
          v18 = v22;
        }
        v20 = DemandZeroPte;
        if ( (((_BYTE)v15 - (_BYTE)v18) & 8) == 0 )
          v20 = v14;
        ++v10;
        *(_QWORD *)v15 = v20;
        v19 += 4096LL;
        v15 += 8LL;
      }
      while ( v15 <= v24 );
    }
    MiIncreaseUsedPtes(v18, v8, v10, 2);
    MiUnlockPageTableInternal(p_Blink, v8);
    LOBYTE(v21) = v26;
    MiUnlockWorkingSetShared(p_Blink, v21);
    return 0LL;
  }
  return result;
}
