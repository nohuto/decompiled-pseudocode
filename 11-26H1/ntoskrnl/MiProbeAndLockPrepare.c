/*
 * XREFs of MiProbeAndLockPrepare @ 0x1402C74B0
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1402D26F0 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1403A1040 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     MmLockPhysicalPagesByVa @ 0x1406EF4CC (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiInitializeProbePacketVm @ 0x1402C77CC (MiInitializeProbePacketVm.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPrepare(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  unsigned __int64 v7; // rdi
  __int128 v9; // xmm0
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  __int16 v15; // cx
  __int64 v16; // r8
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // ax
  unsigned __int64 v21; // rcx
  ULONG_PTR v22; // rax
  ULONG_PTR v23; // r15
  int v24; // edx
  int v25; // eax
  unsigned int v26; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  v26 = 0;
  v7 = a4;
  *(_QWORD *)(a1 + 80) = KeGetCurrentThread();
  v9 = *(_OWORD *)v5;
  v10 = a3 + a4;
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)a1 = a3;
  *(_OWORD *)(a1 + 96) = v9;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a3 + a4;
  if ( (*(_QWORD *)v5 & 1) != 0 && (!a4 || v10 > 0x7FFFFFFF0000LL || v10 <= a3) )
  {
    ++LODWORD(stru_140E2ED08.LastXStateSaveDebugInfo);
    return 3221225477LL;
  }
  v11 = v10 - 1;
  if ( (*(_QWORD *)v5 & 0x200000000000000LL) == 0 )
    v7 = (a3 & 0xFFF) + *(unsigned int *)(a2 + 40) + 4095LL;
  v12 = v7 >> 12;
  v13 = a2 + 48;
  if ( (*(_QWORD *)v5 & 0x200000000000000LL) != 0 )
    v13 = 0LL;
  *(_QWORD *)(a1 + 56) = v13;
  *(_QWORD *)(a1 + 24) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = *(_QWORD *)v5;
  *(_QWORD *)(a1 + 32) = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = *(_WORD *)(a2 + 10);
  v16 = v14 & 6;
  *(_QWORD *)(a1 + 152) = 0x3FFFFFFFFFLL;
  v17 = v15;
  *(_QWORD *)(a1 + 136) = 0LL;
  v18 = v15 | 0x80;
  *(_QWORD *)(a1 + 120) = 0LL;
  v19 = v17 & 0xFF7F;
  *(_QWORD *)(a1 + 128) = 0LL;
  if ( !v16 )
    v18 = v19;
  *(_WORD *)(a2 + 10) = v18 | 2;
  if ( a3 < 0x7FFFFFFF0000LL )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 184LL);
    *(_QWORD *)(a1 + 88) = v21;
    *(_QWORD *)(a2 + 16) = v21;
    if ( v16 != 6 )
      goto LABEL_14;
    v22 = MiObtainReferencedVadEx(a3, 0LL, (int *)&v26);
    v23 = v22;
    if ( v22 )
    {
      if ( (unsigned int)MiVadPureReserve(v22, *(unsigned int *)(v22 + 48))
        || (*(unsigned int *)(v23 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 34) << 32)) >= 0x7FFFFFFFDLL
        || (v25 = v24 & 0x1C, v25 == 4)
        || (v24 & 0x80000) == 0 && v25 != 8 )
      {
        MiUnlockAndDereferenceVad((volatile signed __int32 *)v23);
        return 3221225477LL;
      }
      if ( a3 < (*(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32)) << 12
        || a3 > (((*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) << 12) | 0xFFF)
        || v11 < (*(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32)) << 12
        || v11 > (((*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) << 12) | 0xFFF) )
      {
        MiUnlockAndDereferenceVad((volatile signed __int32 *)v23);
        return 3221225496LL;
      }
      v26 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 88), v12);
      if ( (v26 & 0x80000000) == 0 )
      {
        *(_QWORD *)(a1 + 136) = v23;
        *(_QWORD *)(a1 + 128) = v12;
LABEL_14:
        if ( (*(_BYTE *)(v5 + 7) & 1) != 0 )
        {
          LODWORD(v21) = KeGetPcr()->Prcb.Number;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 1040LL) + ((((v21 >> 1) & 3) + 9) << 6)),
            v12);
        }
        return MiInitializeProbePacketVm(a1);
      }
      MiUnlockAndDereferenceVad((volatile signed __int32 *)v23);
    }
    return v26;
  }
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  return MiInitializeProbePacketVm(a1);
}
