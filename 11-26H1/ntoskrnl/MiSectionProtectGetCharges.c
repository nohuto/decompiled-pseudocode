/*
 * XREFs of MiSectionProtectGetCharges @ 0x140997FC0
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402E6E60 (MiSetProtectionOnSection.c)
 * Callees:
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCountSharedPages @ 0x1402B2BD0 (MiCountSharedPages.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiComputePageCommitment @ 0x140313D10 (MiComputePageCommitment.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiReadVadFlags2 @ 0x1404739E0 (MiReadVadFlags2.c)
 *     MiCommitPageTablesForVad @ 0x140996FF8 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSectionProtectGetCharges(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  unsigned int v7; // r10d
  int ProtectionMask; // eax
  unsigned __int64 v9; // r11
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // r11
  __int64 v14; // rbp
  __int64 v15; // r12
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  ULONG *ProcessPartition; // r15
  __int64 v21; // rax
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  unsigned __int64 v24; // rax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int v27; // r13d
  __int64 PteAddress; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+38h] [rbp-40h] BYREF
  int v30; // [rsp+80h] [rbp+8h]
  unsigned int v31; // [rsp+80h] [rbp+8h]
  __int64 v32; // [rsp+80h] [rbp+8h]
  __int64 v34; // [rsp+98h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 32);
  if ( (MiReadVadFlags(v3) & 0x1C) == 8
    && (MiReadVadFlags2(v6) & 0x20) != 0
    && (unsigned int)(*(_DWORD *)(***(_QWORD ***)(v3 + 80) + 8LL) << 12)
     + ((*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12) <= a3 )
  {
    return 3221225541LL;
  }
  ProtectionMask = MiMakeProtectionMask(v7);
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  *(_DWORD *)(a1 + 56) = ProtectionMask;
  *(_DWORD *)(a1 + 60) = ProtectionMask;
  if ( (ProtectionMask & 5) == 5 )
  {
    *(_BYTE *)(a1 + 89) = 1;
    *(_DWORD *)(a1 + 60) = ProtectionMask & 0xFFFFFFFE;
  }
  v10 = 0LL;
  v11 = 0LL;
  PteAddress = MiGetPteAddress(v9);
  v12 = MiGetPteAddress(a3);
  v14 = *(_QWORD *)(a1 + 8);
  v15 = 0LL;
  v34 = v12;
  *(_QWORD *)(a1 + 48) = v12;
  LODWORD(v12) = *(_DWORD *)(a1 + 68);
  *(_QWORD *)(a1 + 40) = v16;
  *(_QWORD *)(a1 + 16) = v14 + 1024;
  v17 = *(_QWORD *)(v14 + 1040);
  v30 = v12;
  v29 = 0LL;
  if ( !*(_QWORD *)(v17 + 1192)
    || !(*(unsigned int *)(v3 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 32))
    || (MiComputePageCommitment(v13, a3, v3, &v29, 0LL), (v15 = v29) == 0)
    || (result = MiChargeFullProcessCommitment(v14, v29), (int)result >= 0) )
  {
    ProcessPartition = (ULONG *)MiGetProcessPartition(v14);
    *(_QWORD *)a1 = ProcessPartition;
    *(_QWORD *)(a1 + 72) = v15;
    if ( !*(_BYTE *)(a1 + 89) )
    {
LABEL_9:
      if ( MiVadPureReserve(v3)
        && (CurrentThread = KeGetCurrentThread(),
            *(_BYTE *)(a1 + 88) = 1,
            v32 = (__int64)CurrentThread,
            LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v14, v22, v23),
            v27 = MiCommitPageTablesForVad(v3, a2, a3, 1),
            v27 < 0) )
      {
        UNLOCK_PAGE_TABLE_COMMITMENT(v32, v14);
        if ( v11 )
        {
          MiReturnCommit((__int64)ProcessPartition, v10, 0);
        }
        else if ( v10 )
        {
          MiReturnFullProcessCommitment(v14, v10);
        }
        if ( v15 )
          MiReturnFullProcessCommitment(v14, v15);
        return (unsigned int)v27;
      }
      else
      {
        if ( v10 )
        {
          v24 = v10 + (((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 32) | *(unsigned int *)(v3 + 52));
          *(_DWORD *)(v3 + 52) += v10;
          *(_BYTE *)(v3 + 34) = BYTE4(v24);
        }
        *(_QWORD *)(a1 + 80) = v11;
        return 0LL;
      }
    }
    v21 = MiCountSharedPages(v3, v19, v18);
    v10 = v21;
    if ( !v30 )
    {
      if ( v21 )
      {
        result = MiChargeFullProcessCommitment(v14, v21);
        v31 = result;
        if ( (int)result < 0 )
        {
          if ( v15 )
          {
            MiReturnFullProcessCommitment(v14, v15);
            return v31;
          }
          return result;
        }
      }
      goto LABEL_9;
    }
    v11 = ((v34 - PteAddress) >> 3) - v21 + 1;
    if ( ((v34 - PteAddress) >> 3) - v21 == -1 || (unsigned int)MiChargeCommit(ProcessPartition, v11, 0) )
    {
      v10 = 0LL;
      goto LABEL_9;
    }
    if ( v15 )
      MiReturnFullProcessCommitment(v14, v15);
    return 3221225773LL;
  }
  return result;
}
