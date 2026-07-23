/*
 * XREFs of MiQueryVadForVaAttributes @ 0x1402E7CD4
 * Callers:
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiGetAweVadPartition @ 0x1403C5FF4 (MiGetAweVadPartition.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiGetImageProtoProtection @ 0x14042EA80 (MiGetImageProtoProtection.c)
 *     MiSkipEntirePagefileRegions @ 0x140470110 (MiSkipEntirePagefileRegions.c)
 *     MiSkipFractionalPagefileRegion @ 0x14049F590 (MiSkipFractionalPagefileRegion.c)
 *     MiQueryStateMatches @ 0x1404D0AA8 (MiQueryStateMatches.c)
 */

char __fastcall MiQueryVadForVaAttributes(__int64 a1, int *a2)
{
  unsigned __int64 v2; // r12
  _QWORD *i; // rdi
  __int64 v6; // r13
  __int64 v7; // r14
  unsigned int v8; // ebx
  __int64 AweVadPartition; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int64 ProtoPteAddress; // rax
  unsigned __int64 v13; // r8
  int v14; // r11d
  signed __int64 v15; // r15
  unsigned int *v16; // r12
  _BYTE *v17; // rdx
  _QWORD *v18; // r9
  int v19; // r10d
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r11
  __int64 v33; // rcx
  int v34; // ecx
  _WORD **v35; // r8
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  unsigned int *v40; // [rsp+80h] [rbp+18h] BYREF
  __int64 v41; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 32);
  i = *(_QWORD **)(a1 + 56);
  v40 = 0LL;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = *(_DWORD *)(v6 + 48);
  LODWORD(AweVadPartition) = v8 & 0x1C;
  if ( (_DWORD)AweVadPartition == 12 )
  {
    AweVadPartition = MiGetAweVadPartition(v6);
    *((_WORD *)a2 + 2) = *(_WORD *)AweVadPartition;
    return AweVadPartition;
  }
  if ( (_DWORD)AweVadPartition == 4 )
    return AweVadPartition;
  if ( (v8 & 0x80000) != 0 )
  {
    if ( (v8 & 0x400000) != 0 )
    {
      *a2 = 4096;
      LODWORD(AweVadPartition) = (v8 >> 5) & 0x1F;
      a2[2] = AweVadPartition;
    }
    if ( (v8 & 0x200000) != 0 )
    {
      AweVadPartition = MiLocateLockedVadEvent(v6, 16LL);
      if ( AweVadPartition )
      {
        if ( *(_QWORD *)(AweVadPartition + 56) )
        {
          LOBYTE(AweVadPartition) = PsReferencePartitionSafe(*(_QWORD *)(AweVadPartition + 56));
          if ( (_BYTE)AweVadPartition )
          {
            *((_WORD *)a2 + 2) = **v35;
            LOBYTE(AweVadPartition) = PsDereferencePartition(v35, 1968270669LL);
          }
        }
      }
    }
    return AweVadPartition;
  }
  v10 = *(_QWORD *)(v6 + 80);
  v11 = v2 >> 12;
  v41 = v11;
  *((_WORD *)a2 + 2) = **(_WORD **)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)v10 + 60LL) & 0x3FF));
  ProtoPteAddress = MiGetProtoPteAddress(v6, v11, 0xCu, &v40);
  v14 = 0;
  v15 = ProtoPteAddress;
  if ( ProtoPteAddress )
  {
    v16 = v40;
    if ( *(_BYTE *)(a1 + 96) )
    {
      v21 = ((*(_QWORD *)(a1 + 72) - v7) >> 3) + 1;
      if ( v21 > 32 )
        v21 = 32LL;
      v13 = *((_QWORD *)v40 + 1) + 8LL * (v40[11] - v40[13]);
      if ( (v40[8] & 0x20000) != 0 || ProtoPteAddress < *((_QWORD *)v40 + 1) || ProtoPteAddress >= v13 )
      {
        v21 = 0LL;
      }
      else if ( ProtoPteAddress + 8 * v21 > v13 )
      {
        v21 = (__int64)(v13 - ProtoPteAddress) >> 3;
      }
      for ( i = (_QWORD *)(v7 + 8); (unsigned __int64)i <= v7 - 8 + 8 * v21 && !*i; ++i )
        ;
      v17 = (_BYTE *)(a1 + 97);
    }
    else
    {
      v17 = (_BYTE *)(a1 + 97);
      if ( *(_BYTE *)(a1 + 97) )
        goto LABEL_11;
      v38 = ((__int64)i - v7) >> 3;
      v13 = *((_QWORD *)v40 + 1) + 8LL * (v40[11] - v40[13]);
      if ( (v40[8] & 0x20000) != 0 || ProtoPteAddress < *((_QWORD *)v40 + 1) || ProtoPteAddress >= v13 )
      {
        v38 = 1LL;
      }
      else if ( ProtoPteAddress + 8 * v38 > v13 )
      {
        v38 = (__int64)(v13 - ProtoPteAddress) >> 3;
      }
      i = (_QWORD *)(v7 + 8 * v38);
    }
    if ( !*v17 )
    {
      if ( (unsigned int)MiVadPureReserve(v6, v17) )
      {
        v22 = MiSkipFractionalPagefileRegion(v15, v16, ((__int64)i - v7) >> 3);
        if ( v22 != v15 )
        {
          AweVadPartition = v7 + 8 * ((v22 - v15) >> 3);
          goto LABEL_55;
        }
      }
    }
LABEL_11:
    v18 = *(_QWORD **)(v6 + 128);
    *(_QWORD *)(a1 + 56) = i;
    if ( (__int64)v18 < 0 )
    {
      v19 = 1;
      v20 = (unsigned __int64)(*v18 - 1LL) >> 12;
    }
    else
    {
      v19 = v14;
      v20 = -1LL;
    }
    if ( (v8 & 0x1C) == 8 )
    {
      LODWORD(AweVadPartition) = MiGetImageProtoProtection(v6, v15, v13, v20);
      a2[2] = AweVadPartition;
      if ( (_DWORD)AweVadPartition )
        *a2 = 4096;
      return AweVadPartition;
    }
    if ( !*(_QWORD *)(*(_QWORD *)v16 + 64LL) && (*(_DWORD *)(*(_QWORD *)v16 + 56LL) & 0x2000) == 0 )
    {
      v23 = *(_QWORD *)(a1 + 16);
      if ( v23 )
      {
        MiUnlockPageTableInternal(*(_QWORD *)a1, v23);
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      LOBYTE(v23) = *(_BYTE *)(a1 + 8);
      MiUnlockWorkingSetShared(*(_QWORD *)a1, v23);
      v24 = *(_QWORD *)(a1 + 88);
      v25 = ((__int64)i - v7) >> 3;
      v26 = (*((_QWORD *)v16 + 1) + 8LL * (v16[11] - v16[13]) - v15) >> 3;
      if ( v26 > v25 )
        v26 = v25;
      if ( *(_QWORD *)v15 )
      {
        *a2 = 4096;
        a2[2] = (*(_DWORD *)(v6 + 48) >> 5) & 0x1F;
      }
      v27 = *(_QWORD *)(a1 + 104);
      if ( v27 && !(unsigned int)MiQueryStateMatches(a2) )
      {
        *(_BYTE *)(a1 + 98) = 1;
        v24 = 0LL;
        goto LABEL_46;
      }
      if ( v26 )
      {
        v27 = 512LL;
LABEL_42:
        if ( !*(_QWORD *)v15 )
        {
          if ( *a2 == 4096 )
            goto LABEL_46;
LABEL_44:
          ++v24;
          --v26;
          v15 += 8LL;
          while ( v26 )
          {
            if ( (v15 & 0xFFF) != 0 )
              goto LABEL_42;
            v34 = *a2;
            if ( (*(_QWORD *)((((unsigned __int64)v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0x3E1LL) != 0 )
            {
              if ( v34 == 4096 )
                goto LABEL_42;
              goto LABEL_46;
            }
            if ( v34 == 4096 )
              goto LABEL_46;
            if ( v26 <= 0x200 )
            {
              v24 += v26;
              goto LABEL_46;
            }
            v24 += 512LL;
            v15 += 4096LL;
            v26 -= 512LL;
          }
          goto LABEL_46;
        }
        if ( *a2 == 4096 )
          goto LABEL_44;
      }
LABEL_46:
      v28 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 56) = v7 + 8 * v24;
      *(_QWORD *)(a1 + 88) = v24;
      LOBYTE(AweVadPartition) = MiLockWorkingSetShared(v28, v27, v24);
      return AweVadPartition;
    }
    v29 = ((__int64)i - v7) >> 3;
    v30 = (*((_QWORD *)v16 + 1) + 8LL * (v16[11] - v16[13]) - v15) >> 3;
    if ( v30 > v29 )
      v30 = v29;
    if ( v19 )
    {
      v36 = *(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32);
      if ( v41 - v36 <= v20 )
      {
        v19 = v14;
        v37 = v20 - (v41 - v36) + 1;
        if ( v30 <= v37 )
          v37 = v30;
        v30 = v37;
      }
    }
    AweVadPartition = v7 + 8 * v30;
    if ( !v19 )
    {
      *a2 = 4096;
      a2[2] = (v8 >> 5) & 0x1F;
    }
    *(_QWORD *)(a1 + 88) = v30;
LABEL_55:
    *(_QWORD *)(a1 + 56) = AweVadPartition;
    return AweVadPartition;
  }
  v31 = *(_QWORD *)(a1 + 104);
  if ( !v31 || (LODWORD(AweVadPartition) = MiQueryStateMatches(a2), (_DWORD)AweVadPartition) )
  {
    LODWORD(AweVadPartition) = MiVadPureReserve(v6, v31);
    if ( (_DWORD)AweVadPartition && (LOBYTE(AweVadPartition) = (_BYTE)v40, v40) && *((_QWORD *)v40 + 1) == v32 )
    {
      AweVadPartition = MiSkipEntirePagefileRegions(v6, v11, v7, (_DWORD)i, (__int64)v40);
      v33 = v7;
      v7 += 8LL;
      if ( AweVadPartition != v33 )
        v7 = AweVadPartition;
    }
    else
    {
      v7 += 8LL;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 98) = 1;
  }
  *(_QWORD *)(a1 + 56) = v7;
  return AweVadPartition;
}
