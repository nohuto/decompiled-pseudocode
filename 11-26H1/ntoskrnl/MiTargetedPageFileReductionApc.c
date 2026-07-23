/*
 * XREFs of MiTargetedPageFileReductionApc @ 0x1407124C8
 * Callers:
 *     MiAttemptPageFileReductionApc @ 0x1407121C0 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140444400 (MiCoalescePageFileBitmapsCache.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1404777E4 (MiInvalidatePageFileBitmapsCache.c)
 *     RtlFindLastBackwardRunClear @ 0x14047F400 (RtlFindLastBackwardRunClear.c)
 *     MiChangePagingFileMaximum @ 0x1406FD580 (MiChangePagingFileMaximum.c)
 *     MiPagefileMaximumChangePrepare @ 0x1406FDBD4 (MiPagefileMaximumChangePrepare.c)
 *     MiIncreaseCommitLimits @ 0x14070A538 (MiIncreaseCommitLimits.c)
 *     MiReduceCommitLimits @ 0x14070A82C (MiReduceCommitLimits.c)
 *     MiReleasePageHash @ 0x140714BDC (MiReleasePageHash.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiTargetedPageFileReductionApc(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v2; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r12
  unsigned int v6; // ebx
  __int16 v7; // ax
  int v8; // esi
  KIRQL v9; // r11
  __int64 v10; // rax
  __int64 v11; // r15
  _RTL_BITMAP *v12; // rdx
  __int64 v13; // rax
  int v14; // r10d
  ULONG v15; // r15d
  __int64 v16; // r8
  unsigned int v17; // r10d
  bool v18; // al
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  _DWORD *v21; // r15
  bool v22; // zf
  bool i; // zf
  bool v24; // al
  unsigned int *Buffer; // rdx
  unsigned int *v26; // r8
  unsigned int v27; // r15d
  unsigned int *v28; // rdx
  bool v29; // zf
  bool j; // zf
  int v31; // r8d
  __int64 v32; // r15
  unsigned __int64 v33; // r9
  char v34; // cl
  unsigned int *v35; // r10
  int v36; // ecx
  unsigned int v37; // eax
  unsigned __int64 v38; // rcx
  ULONG v39; // ebx
  ULONG LastBackwardRunClear; // eax
  ULONG v41; // eax
  __int64 v42; // rax
  int v43; // r8d
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  _RTL_BITMAP *v46; // rcx
  volatile LONG *v47; // rcx
  __int64 v48; // rsi
  PVOID v49; // rdi
  __int64 v50; // rcx
  __int64 v51; // rdx
  ULONG *v52; // rsi
  KIRQL v53; // dl
  __int64 v54; // rax
  volatile LONG *v55; // rcx
  __int64 v56; // rbx
  volatile LONG *v57; // rcx
  volatile LONG *v58; // rcx
  volatile LONG *v59; // rcx
  __int64 v60; // rcx
  PVOID v62; // [rsp+30h] [rbp-39h]
  _RTL_BITMAP *v63; // [rsp+38h] [rbp-31h]
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v65; // [rsp+48h] [rbp-21h] BYREF
  ULONG *v66; // [rsp+50h] [rbp-19h]
  PRTL_BITMAP v67; // [rsp+58h] [rbp-11h]
  _RTL_BITMAP BitMapHeader; // [rsp+60h] [rbp-9h] BYREF
  _RTL_BITMAP v69; // [rsp+70h] [rbp+7h] BYREF
  KIRQL OldIrql; // [rsp+D0h] [rbp+67h]
  KIRQL OldIrqla; // [rsp+D0h] [rbp+67h]
  unsigned int v72; // [rsp+D8h] [rbp+6Fh]
  ULONG StartingRunIndex; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v74; // [rsp+E8h] [rbp+7Fh]

  v1 = *(_QWORD *)a1;
  LODWORD(v2) = 0;
  v62 = 0LL;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  v4 = *(unsigned int *)(a1 + 24);
  LODWORD(v5) = 0;
  *(&v69.SizeOfBitMap + 1) = 0;
  v6 = 1;
  P = 0LL;
  v74 = 0LL;
  v65 = 0LL;
  v72 = 0;
  if ( v4 > *(_QWORD *)(a1 + 8) )
  {
    v6 = 0;
LABEL_111:
    v8 = -1073741800;
    goto LABEL_112;
  }
  v7 = *(_WORD *)(v1 + 172);
  if ( (v7 & 0x10) != 0 && *(_DWORD *)(a1 + 28) || (v7 & 0x40) != 0 )
  {
    v8 = -1073741637;
    goto LABEL_112;
  }
  if ( *(_DWORD *)(v1 + 12) < (unsigned int)v4 )
    goto LABEL_111;
  v66 = *(ULONG **)(v1 + 224);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 200));
  OldIrql = v9;
  v10 = *(_QWORD *)(v1 + 80);
  v11 = v10 + 8;
  v12 = (_RTL_BITMAP *)(v10 + 24);
  v67 = (PRTL_BITMAP)(v10 + 8);
  v13 = *(_QWORD *)(a1 + 40);
  v63 = v12;
  if ( v13 )
  {
    v5 = *(unsigned int *)(v13 + 40);
    v14 = *(_DWORD *)v1;
    v72 = *(_DWORD *)(v1 + 4) - v5;
    if ( (unsigned int)v5 >= *(_DWORD *)v1 )
    {
      v15 = 0;
      goto LABEL_64;
    }
    LODWORD(v2) = v14 - v5;
    if ( (unsigned int)v5 >= *(_DWORD *)v11 )
      goto LABEL_38;
    if ( (unsigned int)v2 > 1 )
    {
      if ( *(_DWORD *)v11 - (int)v5 < (unsigned int)v2 )
        goto LABEL_38;
      v19 = *(_QWORD *)(v11 + 8);
      v17 = v14 - 1;
      v16 = 4 * (v5 >> 5);
      v20 = (_DWORD *)(v19 + v16);
      v21 = (_DWORD *)(v19 + 4 * ((unsigned __int64)v17 >> 5));
      StartingRunIndex = *(_DWORD *)(v19 + v16);
      if ( (_DWORD *)(v19 + v16) != v21 )
      {
        for ( i = ((-1 << v5) & StartingRunIndex) == 0; i; i = *v20 == 0 )
        {
          if ( ++v20 == v21 )
          {
            v22 = ((0xFFFFFFFF >> ~(_BYTE)v17) & *v20) == 0;
            goto LABEL_23;
          }
        }
        goto LABEL_38;
      }
      v22 = ((0xFFFFFFFF >> (32 - v2) << v5) & StartingRunIndex) == 0;
LABEL_23:
      v12 = v63;
      v18 = v22;
    }
    else
    {
      if ( (_DWORD)v2 != 1 )
        goto LABEL_38;
      v16 = 4 * (v5 >> 5);
      v17 = v14 - 1;
      v18 = !_bittest((const signed __int32 *)(v16 + *(_QWORD *)(v11 + 8)), *(_DWORD *)(v13 + 40) & 0x1F);
    }
    if ( v18 && (unsigned int)v5 < v12->SizeOfBitMap )
    {
      if ( (unsigned int)v2 <= 1 )
      {
        v24 = !_bittest((const signed __int32 *)&v12->Buffer[(unsigned __int64)v16 / 4], v5 & 0x1F);
        goto LABEL_37;
      }
      if ( v12->SizeOfBitMap - (int)v5 >= (unsigned int)v2 )
      {
        Buffer = v12->Buffer;
        v26 = &Buffer[(unsigned __int64)v16 / 4];
        v27 = *v26;
        v28 = &Buffer[(unsigned __int64)v17 >> 5];
        if ( v26 == v28 )
        {
          v29 = ((0xFFFFFFFF >> (32 - v2) << v5) & v27) == 0;
LABEL_36:
          v24 = v29;
LABEL_37:
          if ( v24 )
            goto LABEL_50;
          goto LABEL_38;
        }
        for ( j = ((-1 << v5) & v27) == 0; j; j = *v26 == 0 )
        {
          if ( ++v26 == v28 )
          {
            v29 = ((0xFFFFFFFF >> ~(_BYTE)v17) & *v26) == 0;
            goto LABEL_36;
          }
        }
      }
    }
LABEL_38:
    LODWORD(v2) = 0;
    goto LABEL_50;
  }
  v31 = *(_DWORD *)v1;
  v32 = *(_QWORD *)(v11 + 8);
  v33 = (unsigned __int64)(unsigned int)(*(_DWORD *)v1 - 1) >> 3;
  v34 = (*(_DWORD *)v1 - 1) & 7;
  if ( ((*(char *)(v33 + v32) >> v34) & 1) != 0 )
    goto LABEL_108;
  v35 = v12->Buffer;
  if ( ((*((char *)v35 + v33) >> v34) & 1) != 0 )
    goto LABEL_108;
  v36 = *(_DWORD *)(v1 + 8);
  if ( v31 == v36 )
    goto LABEL_108;
  v2 = (unsigned int)(v31 - v36);
  if ( *(_QWORD *)(a1 + 8) < v2 )
    LODWORD(v2) = *(_DWORD *)(a1 + 8);
  v37 = (v31 - v2) & 0xFFFFFFE0;
  v38 = (unsigned __int64)v37 >> 5;
  BitMapHeader.SizeOfBitMap = v31 - v37;
  v69.SizeOfBitMap = v31 - v37;
  v39 = v31 - v37 - 1;
  BitMapHeader.Buffer = (unsigned int *)(v32 + 4 * v38);
  v69.Buffer = &v35[v38];
  LastBackwardRunClear = RtlFindLastBackwardRunClear(&BitMapHeader, v39, &StartingRunIndex);
  if ( LastBackwardRunClear <= (unsigned int)v2 )
    LODWORD(v2) = LastBackwardRunClear;
  v41 = RtlFindLastBackwardRunClear(&v69, v39, &StartingRunIndex);
  v9 = OldIrql;
  v6 = 1;
  if ( (unsigned int)v2 > v41 )
    LODWORD(v2) = v41;
  if ( !*(_DWORD *)(a1 + 32) )
    LODWORD(v2) = -*(_DWORD *)(a1 + 24) & v2;
LABEL_50:
  if ( !(_DWORD)v2 )
    goto LABEL_108;
  v42 = *(_QWORD *)(v1 + 216);
  v43 = *(_DWORD *)v1;
  v15 = *(_DWORD *)v1 - v2;
  if ( (v42 & 1) == 0 )
  {
    v44 = *(_QWORD *)(v1 + 216);
LABEL_55:
    if ( !v44 )
      goto LABEL_63;
    v45 = (*(_QWORD *)(v44 - 104) + (unsigned __int64)(unsigned int)(*(_DWORD *)(v44 - 16) - 4096)) >> 12;
    if ( !(_DWORD)v45 || v15 > (unsigned int)v45 )
      goto LABEL_63;
    if ( !(_DWORD)v5 )
    {
      v15 = v45 + 1;
      if ( (int)v45 + 1 >= (unsigned int)v45 )
      {
        LODWORD(v2) = v43 - v15;
        if ( !*(_DWORD *)(a1 + 32) )
        {
          LODWORD(v2) = -*(_DWORD *)(a1 + 24) & v2;
          v15 = v43 - v2;
        }
        if ( (_DWORD)v2 )
          goto LABEL_63;
      }
    }
LABEL_108:
    v59 = (volatile LONG *)(v1 + 200);
    if ( v9 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v59);
    else
      ExReleaseSpinLockExclusive(v59, v9);
    goto LABEL_111;
  }
  if ( v42 != 1 )
  {
    v44 = v42 ^ ((v1 + 208) | 1);
    goto LABEL_55;
  }
LABEL_63:
  v46 = v67;
  *(_DWORD *)(v1 + 12) -= v2;
  *(_DWORD *)(v1 + 20) -= v2;
  RtlSetBits(v46, v15, v2);
  RtlSetBits(v63, v15, v2);
  MiInvalidatePageFileBitmapsCache(v1, v15, v2, 0LL);
  v9 = OldIrql;
LABEL_64:
  v47 = (volatile LONG *)(v1 + 200);
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v47);
  else
    ExReleaseSpinLockExclusive(v47, v9);
  v48 = (unsigned int)v2;
  *(_QWORD *)(a1 + 8) -= (unsigned int)v2;
  if ( !(_DWORD)v5 )
  {
LABEL_73:
    if ( (*(_BYTE *)(v1 + 172) & 0x10) != 0 )
    {
      v52 = v66;
    }
    else
    {
      if ( (_DWORD)v2 && !(unsigned int)MiChargeCommit(v66, v48 + *(_QWORD *)(a1 + 16), 2u) )
      {
        v8 = -1073741523;
        goto LABEL_87;
      }
      v51 = v48;
      v52 = v66;
      MiReduceCommitLimits((__int64)v66, v51, v72);
      if ( (_DWORD)v2 )
        MiReturnCommit((__int64)v52, *(_QWORD *)(a1 + 16) + (unsigned int)v2, 0);
    }
    v53 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 200));
    v54 = *(_QWORD *)(a1 + 40);
    if ( (_DWORD)v2 )
    {
      if ( !v54 && *(_DWORD *)(v1 + 8) > v15 )
      {
        v55 = (volatile LONG *)(v1 + 200);
        if ( v53 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v55);
        else
          ExReleaseSpinLockExclusive(v55, v53);
        MiIncreaseCommitLimits((__int64)v52, (unsigned int)v2, v72, 0LL, 0, 0LL);
        v8 = -1073741800;
        goto LABEL_87;
      }
      *(_DWORD *)v1 = v15;
    }
    if ( v54 )
      *(_DWORD *)(v1 + 8) = *(_DWORD *)(v54 + 44);
    v58 = (volatile LONG *)(v1 + 200);
    if ( v53 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v58);
    else
      ExReleaseSpinLockExclusive(v58, v53);
    if ( (_DWORD)v5 )
    {
      MiChangePagingFileMaximum(v1, (__int64)v62, v74);
      v49 = 0LL;
      v74 = 0LL;
    }
    else
    {
      v49 = v62;
    }
    v8 = 0;
    **(_DWORD **)(a1 + 48) = v15;
    goto LABEL_103;
  }
  v8 = MiPagefileMaximumChangePrepare(v5, *(_QWORD *)(v1 + 184) != 0LL, (__int64 *)&v65, (__int64 *)&P);
  if ( v8 >= 0 )
  {
    v48 = (unsigned int)v2;
    v62 = P;
    v74 = v65;
    goto LABEL_73;
  }
  if ( (_DWORD)v2 )
  {
    v62 = P;
    v74 = v65;
LABEL_87:
    OldIrqla = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 200));
    *(_DWORD *)(v1 + 12) += v2;
    *(_DWORD *)(v1 + 20) += v2;
    v56 = *(_QWORD *)(v1 + 80);
    RtlClearBits((PRTL_BITMAP)(v56 + 8), v15, v2);
    RtlClearBits((PRTL_BITMAP)(v56 + 24), v15, v2);
    if ( v15 < *(_DWORD *)(v1 + 88) )
      *(_DWORD *)(v1 + 88) = v15;
    MiCoalescePageFileBitmapsCache(v1, 0, v15);
    v57 = (volatile LONG *)(v1 + 200);
    if ( OldIrqla == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v57);
    else
      ExReleaseSpinLockExclusive(v57, OldIrqla);
    v49 = v62;
    v6 = 1;
LABEL_103:
    v50 = v74;
    goto LABEL_104;
  }
  v49 = P;
  v50 = v65;
LABEL_104:
  if ( v50 )
    MiReleasePageHash(v50, (unsigned int)v5);
  if ( v49 )
    ExFreePoolWithTag(v49, 0);
LABEL_112:
  v60 = *(_QWORD *)(a1 + 40);
  if ( v60 )
    *(_DWORD *)(v60 + 48) = v8;
  return v6;
}
