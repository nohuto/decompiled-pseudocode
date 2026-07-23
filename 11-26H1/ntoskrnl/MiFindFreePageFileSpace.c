/*
 * XREFs of MiFindFreePageFileSpace @ 0x1403FEF30
 * Callers:
 *     MiReservePageFileSpace @ 0x140368E88 (MiReservePageFileSpace.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1403FDB00 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiGetKernelStackSwapSupport @ 0x1403FEB9C (MiGetKernelStackSwapSupport.c)
 *     MiFindPageFileWriteCluster @ 0x1403FEDBC (MiFindPageFileWriteCluster.c)
 *     MiModwriterConfirmMdl @ 0x140401828 (MiModwriterConfirmMdl.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140AC3D0C (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     MiSetPageFileAllocationBits @ 0x1403FDBF4 (MiSetPageFileAllocationBits.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403FEA88 (MiPageFileLargestBitmapsRun.c)
 *     MiRescanPagefileBitmaps @ 0x1404441FC (MiRescanPagefileBitmaps.c)
 *     MiFindFreePageFileSpaceForward @ 0x1404442BC (MiFindFreePageFileSpaceForward.c)
 *     MiCheckHintedPageFileSpace @ 0x14046ABBC (MiCheckHintedPageFileSpace.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1404777E4 (MiInvalidatePageFileBitmapsCache.c)
 */

__int64 __fastcall MiFindFreePageFileSpace(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // r12d
  unsigned __int64 *v6; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  unsigned int v12; // r14d
  unsigned int v13; // esi
  __int64 *v14; // r15
  __int64 i; // r14
  __int64 v16; // rdi
  _BYTE *v17; // rcx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  volatile LONG *v21; // rdi
  unsigned __int64 v22; // r15
  int v23; // r13d
  unsigned __int8 CurrentIrql; // cl
  KIRQL v25; // r14
  KIRQL v26; // al
  unsigned __int64 v27; // r10
  ULONG v28; // eax
  ULONG v29; // edi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned int v37; // eax
  volatile LONG *v38; // rcx
  volatile LONG *v39; // rcx
  ULONG FreePageFileSpaceForward; // eax
  int v41; // esi
  volatile LONG *v42; // rcx
  int v44[18]; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v45; // [rsp+88h] [rbp+10h]

  v45 = (__int64 *)a2;
  v4 = a4;
  v6 = (unsigned __int64 *)a2;
  if ( a3 >= 0xFFFFFFFF )
    return 0LL;
  LODWORD(v8) = -1;
  if ( (a4 & 0x10) != 0 )
    goto LABEL_17;
  v9 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    LOWORD(v9) = MiReadPteShadow(a2, *(_QWORD *)a2);
  v10 = *(_QWORD *)(a1 + 8LL * ((unsigned __int16)v9 >> 12) + 22304);
  if ( (v4 & 0x65) == 1 && (unsigned int)MiPageFileLargestBitmapsRun(v10) < a3 )
  {
    v4 |= 0x10u;
  }
  else
  {
    v11 = *v6;
    if ( qword_140E2D8C0 && (v11 & 0x10) == 0 )
      v11 &= qword_140E2D8C8;
    v8 = HIDWORD(v11);
  }
  if ( (v4 & 0x10) != 0 )
  {
LABEL_17:
    v10 = *(_QWORD *)(a1 + 22304);
    v12 = *(_DWORD *)(a1 + 22296);
    v13 = (*(_BYTE *)(v10 + 172) & 0x40) != 0 ? 0 : MiPageFileLargestBitmapsRun(*(_QWORD *)(a1 + 22304));
    if ( v12 > 1 )
    {
      v14 = (__int64 *)(a1 + 22312);
      for ( i = v12 - 1; i; --i )
      {
        v16 = *v14;
        a2 = *(unsigned __int16 *)(v10 + 172);
        v17 = (_BYTE *)(*v14 + 172);
        if ( (a2 & 0x10) != 0 && (*v17 & 0x10) == 0 || (a2 & 0x20) != 0 && (*v17 & 0x20) == 0 )
        {
          v10 = *v14;
          v18 = MiPageFileLargestBitmapsRun(*v14);
        }
        else
        {
          if ( (*v17 & 0x30) != 0 )
            goto LABEL_28;
          v18 = MiPageFileLargestBitmapsRun(*v14);
          if ( v18 <= v13 )
            goto LABEL_28;
          v10 = v16;
        }
        v13 = v18;
LABEL_28:
        ++v14;
      }
    }
  }
  v19 = 0;
  v20 = v4 & 4;
  v21 = (volatile LONG *)(v10 + 200);
  v44[0] = v20;
  while ( 1 )
  {
    v22 = 0LL;
    v23 = 0;
    if ( v20 )
    {
      v25 = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (v4 & 3) != 0 || v19 )
      {
        if ( CurrentIrql == 2 )
        {
          v25 = 17;
          ExAcquireSpinLockExclusiveAtDpcLevel(v21);
          goto LABEL_41;
        }
        v26 = ExAcquireSpinLockExclusive(v21);
      }
      else
      {
        v23 = 1;
        if ( CurrentIrql == 2 )
        {
          v25 = 17;
          ExAcquireSpinLockSharedAtDpcLevel(v21);
          goto LABEL_41;
        }
        v26 = ExAcquireSpinLockShared(v21);
      }
      v25 = v26;
    }
LABEL_41:
    if ( (*(_BYTE *)(v10 + 175) & 1) != 0 )
      goto LABEL_93;
    if ( (_DWORD)v8 == -1 )
      goto LABEL_45;
    if ( (unsigned int)v8 >= *(_DWORD *)(*(_QWORD *)(v10 + 80) + 24LL) )
    {
      if ( (v4 & 0x48) != 0 )
        goto LABEL_93;
LABEL_45:
      v27 = a3;
      goto LABEL_48;
    }
    v28 = MiCheckHintedPageFileSpace(v10, (unsigned int)v8, (unsigned int)a3, v4);
    v27 = a3;
    v29 = v28;
    if ( v28 == a3 || (v4 & 0x40) != 0 )
      goto LABEL_108;
LABEL_48:
    if ( (v4 & 8) != 0 )
    {
      v44[0] = v8;
      FreePageFileSpaceForward = MiFindFreePageFileSpaceForward(v10, v44, (unsigned int)v27, v4);
      LODWORD(v8) = v44[0];
      v29 = FreePageFileSpaceForward;
      goto LABEL_108;
    }
LABEL_49:
    v30 = *(_QWORD *)(v10 + 112);
    if ( (*(_BYTE *)(v10 + 120) & 1) != 0 && v30 )
      v30 ^= v10 + 112;
    v22 = 0LL;
    while ( 1 )
    {
      if ( !v30 )
        goto LABEL_81;
      if ( (unsigned int)v27 < *(_DWORD *)(v30 + 52) )
        goto LABEL_56;
      if ( (unsigned int)v27 <= *(_DWORD *)(v30 + 52) )
        break;
      v31 = *(_QWORD *)(v30 + 8);
LABEL_57:
      if ( (*(_BYTE *)(v10 + 120) & 1) != 0 && v31 )
        v30 ^= v31;
      else
        v30 = v31;
    }
    if ( *(_DWORD *)(v30 + 48) )
    {
LABEL_56:
      v31 = *(_QWORD *)v30;
      v22 = v30;
      goto LABEL_57;
    }
    v32 = *(_QWORD *)v30;
    v22 = v30;
    if ( (*(_BYTE *)(v10 + 120) & 1) != 0 && v32 )
      v32 ^= v30;
    a2 = 0LL;
    if ( v32 )
    {
      while ( 1 )
      {
        if ( (unsigned int)v27 < *(_DWORD *)(v32 + 52) )
          goto LABEL_72;
        if ( (unsigned int)v27 <= *(_DWORD *)(v32 + 52) )
          break;
        v33 = *(_QWORD *)(v32 + 8);
LABEL_73:
        if ( (*(_BYTE *)(v10 + 120) & 1) != 0 && v33 )
          v32 ^= v33;
        else
          v32 = v33;
        if ( !v32 )
        {
          if ( a2 )
            v22 = a2;
          goto LABEL_81;
        }
      }
      if ( !*(_DWORD *)(v32 + 48) )
        a2 = v32;
LABEL_72:
      v33 = *(_QWORD *)v32;
      goto LABEL_73;
    }
LABEL_81:
    if ( *(_DWORD *)(v22 + 52) != -1 )
      goto LABEL_106;
    v34 = *(unsigned int *)(v10 + 108);
    if ( v34 < v27 || (unsigned int)v34 < 0x20 )
      break;
LABEL_99:
    if ( !v23 )
    {
      MiRescanPagefileBitmaps(v10, a2, *(_BYTE *)(v10 + 120) & 1);
      v27 = a3;
      goto LABEL_49;
    }
    v21 = (volatile LONG *)(v10 + 200);
    v39 = (volatile LONG *)(v10 + 200);
    if ( v25 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v39);
    else
      ExReleaseSpinLockShared(v39, v25);
    v20 = v44[0];
    v19 = 1;
  }
  if ( (v4 & 0x80u) != 0 )
    goto LABEL_93;
  v35 = *(_QWORD *)v22;
  v36 = v22;
  if ( *(_QWORD *)v22 )
  {
    do
    {
      v22 = v35;
      v35 = *(_QWORD *)(v35 + 8);
    }
    while ( v35 );
  }
  else
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v22 || *(_QWORD *)(v22 + 8) == v36 )
        break;
      v36 = v22;
    }
  }
  v37 = *(_DWORD *)(v10 + 108);
  if ( !v22 )
  {
    if ( v37 < 0x20 )
      goto LABEL_93;
    goto LABEL_99;
  }
  if ( v37 > *(_DWORD *)(v22 + 52) && v37 >= 0x20 )
    goto LABEL_99;
  LODWORD(v27) = *(_DWORD *)(v22 + 52);
LABEL_106:
  LODWORD(v8) = *(_DWORD *)(v22 + 48);
  v29 = v27;
LABEL_108:
  if ( !v29 )
  {
LABEL_93:
    if ( (v4 & 4) == 0 )
    {
      v38 = (volatile LONG *)(v10 + 200);
      if ( v23 )
      {
        if ( v25 == 17 )
          ExReleaseSpinLockSharedFromDpcLevel(v38);
        else
          ExReleaseSpinLockShared(v38, v25);
      }
      else if ( v25 == 17 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v38);
      }
      else
      {
        ExReleaseSpinLockExclusive(v38, v25);
      }
    }
    return 0LL;
  }
  v41 = 0;
  if ( (v4 & 1) != 0 )
  {
    v41 = 2;
    RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v10 + 80) + 24LL), v8, v29);
    *(_DWORD *)(v10 + 20) -= v29;
  }
  if ( (v4 & 2) != 0 )
  {
    v41 |= 1u;
    MiSetPageFileAllocationBits(v10, v8, v29);
  }
  if ( v41 )
    MiInvalidatePageFileBitmapsCache(v10, (unsigned int)v8, v29, v22);
  if ( (v4 & 4) == 0 )
  {
    v42 = (volatile LONG *)(v10 + 200);
    if ( v23 )
    {
      if ( v25 == 17 )
        ExReleaseSpinLockSharedFromDpcLevel(v42);
      else
        ExReleaseSpinLockShared(v42, v25);
    }
    else if ( v25 == 17 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v42);
    }
    else
    {
      ExReleaseSpinLockExclusive(v42, v25);
    }
  }
  *v45 = MiTransferSoftwarePte(*v45, v10, v8, v41);
  return v29;
}
