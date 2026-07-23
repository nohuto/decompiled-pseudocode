/*
 * XREFs of MiGatherMappedPages @ 0x140490828
 * Callers:
 *     MiMappedPageWriter @ 0x140490470 (MiMappedPageWriter.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14026D554 (FsRtlAcquireFileForModWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14026D9C4 (IoAsynchronousPageWrite.c)
 *     FsRtlReleaseFileForModWrite @ 0x14026E3F4 (FsRtlReleaseFileForModWrite.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1402D6BD0 (MiReferencePageForModifiedWrite.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402EC1B0 (MiDereferenceControlAreaPfnList.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     CcNotifyOfMappedWrite @ 0x14038B5FC (CcNotifyOfMappedWrite.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140390AC0 (MiReferenceControlAreaFileWithTag.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MiBuildMappedCluster @ 0x14042A81C (MiBuildMappedCluster.c)
 *     MiClearPfnImageVerified @ 0x1404691E4 (MiClearPfnImageVerified.c)
 *     MiFlushFileOnlyMdl @ 0x140501964 (MiFlushFileOnlyMdl.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  _QWORD *v6; // rcx
  int v7; // r14d
  KIRQL v8; // al
  volatile LONG *v9; // rcx
  __int64 v10; // r14
  ULONG_PTR v11; // rdi
  __int64 v12; // rsi
  unsigned __int8 v13; // al
  unsigned __int64 v14; // r12
  __int64 v15; // r14
  _DWORD *v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // edx
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  void *v22; // rax
  char v23; // cl
  struct _FILE_OBJECT *v24; // r13
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  int v30; // edx
  struct _ERESOURCE **v31; // r12
  __int64 v32; // rdi
  __int64 v33; // rax
  int v34; // esi
  ULONG Characteristics; // ecx
  unsigned int v36; // eax
  int v37; // edx
  int v38; // eax
  __int64 v39; // rcx
  NTSTATUS v40; // edi
  int v41; // esi
  int v42; // eax
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v48; // rbp
  unsigned __int8 v49; // di
  __int64 v50; // [rsp+60h] [rbp-68h]
  struct _MDL *v51; // [rsp+68h] [rbp-60h]
  __int64 v52; // [rsp+70h] [rbp-58h] BYREF
  __int64 *SubsectionFromPte; // [rsp+78h] [rbp-50h]
  __int64 v54; // [rsp+80h] [rbp-48h]
  LARGE_INTEGER v55[8]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v56; // [rsp+E8h] [rbp+20h]
  unsigned int v57; // [rsp+E8h] [rbp+20h]

  v52 = 0LL;
  v4 = a2;
  if ( (unsigned int)a2 >= 0x10 )
  {
    v4 = 0;
    v6 = (_QWORD *)(a1 + 6016);
    do
    {
      if ( *v6 != 0x3FFFFFFFFFLL )
        goto LABEL_6;
      ++v4;
      v6 += 11;
    }
    while ( v4 < 0x10 );
    if ( v4 == 16 )
      return 0LL;
  }
LABEL_6:
  v7 = 0;
  if ( *(_BYTE *)(a1 + 1143) )
  {
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1136));
    if ( *(_BYTE *)(a1 + 1145) )
    {
      *(_BYTE *)(a1 + 1145) = 0;
      v7 = 1;
      *(_BYTE *)(a1 + 1143) = 0;
    }
    v9 = (volatile LONG *)(a1 + 1136);
    if ( v8 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    else
      ExReleaseSpinLockExclusive(v9, v8);
  }
  if ( *(_BYTE *)(a1 + 1176) || v7 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  v10 = 88LL * v4;
  v56 = v10;
  v11 = *(_QWORD *)(v10 + a1 + 6016);
  if ( v11 == 0x3FFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v12 = 48 * v11 - 0x220000000000LL;
    v13 = MiSafeLockPage(v11, a2, a3);
    v14 = v13;
    if ( v13 == 17 )
      goto LABEL_38;
    if ( v11 == *(_QWORD *)(v10 + a1 + 6016) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v13 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
LABEL_36:
      __writecr8(v14);
    }
LABEL_38:
    v11 = *(_QWORD *)(v10 + a1 + 6016);
    if ( v11 == 0x3FFFFFFFFFLL )
      return 0LL;
  }
  SubsectionFromPte = (__int64 *)MiGetSubsectionFromPte(*(_QWORD *)(v12 + 16));
  v15 = *SubsectionFromPte;
  if ( (*(_DWORD *)(*SubsectionFromPte + 56) & 0x20) != 0 )
  {
    MiUnlinkPageFromListEx(48 * v11 - 0x220000000000LL, 0);
    if ( *(__int64 *)(v12 + 40) < 0 && (*(_QWORD *)(v12 + 16) & 0x400000000000400LL) == 0x400 )
    {
      v16 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v12 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)v16 + 56LL) & 0x820) == 0x20 && (v16[8] & 0x20000) == 0 )
        KeBugCheckEx(0x1Au, 0x8840uLL, 48 * v11 - 0x220000000000LL, 0LL, 0LL);
    }
    v17 = (*(_QWORD *)(v12 + 16) >> 5) & 0x1FLL;
    if ( ((*(_QWORD *)(v12 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v12, 4LL);
    *(_QWORD *)(v12 + 16) = MiMakeDemandZeroPte(v17);
    MiDereferenceControlAreaPfnList(v15, 0LL, 1LL, 3);
    v18 = 8;
    goto LABEL_32;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
  if ( (*(_DWORD *)(v15 + 56) & 0x20) == 0 && (*(_DWORD *)(v15 + 56) & 8) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
    MiUnlinkPageFromListEx(v12, 0);
    v18 = 16;
LABEL_32:
    MiInsertPageInList(v12, v18);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v14 >= 2u )
    {
      v10 = v56;
      goto LABEL_38;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    v10 = v56;
    goto LABEL_36;
  }
  v20 = *(_QWORD *)(v15 + 120);
  ++*(_DWORD *)(v15 + 76);
  v21 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
  v50 = v21;
  if ( v21 && _InterlockedIncrement64((volatile signed __int64 *)(v21 + 32)) <= 1 )
    __fastfail(0xEu);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 72));
  MiReferencePageForModifiedWrite(v12, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v14 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    __writecr8(v14);
  }
  v22 = MiReferenceControlAreaFileWithTag(v15, 0x63536D4Du, 0);
  v23 = *(_BYTE *)(a1 + 1143);
  v24 = (struct _FILE_OBJECT *)v22;
  v25 = *((_QWORD *)v22 + 5);
  v54 = v25;
  if ( v23 )
    v26 = 0;
  else
    v26 = CcNotifyOfMappedWrite(v25, 0LL, 0);
  v27 = MiBuildMappedCluster(v12, a3 + 104, v26);
  *(_QWORD *)(a3 + 96) = v27;
  v28 = v27;
  *(_QWORD *)(a3 + 72) = v15;
  v51 = (struct _MDL *)v27;
  v29 = MiStartingOffset(
          SubsectionFromPte,
          *(_QWORD *)(48LL * *(_QWORD *)(v27 + 48) - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL,
          0xFFFFFFFF);
  v30 = *(_DWORD *)(a3 + 40);
  v31 = (struct _ERESOURCE **)(a3 + 80);
  v32 = v29;
  v55[0].QuadPart = v29;
  LODWORD(v29) = *(_DWORD *)(v28 + 40);
  *(_DWORD *)(a3 + 44) = v29;
  v57 = (unsigned int)v29 >> 12;
  *(_DWORD *)(a3 + 48) = ((unsigned int)v29 >> 12) - 1;
  v33 = *(unsigned int *)(v28 + 40);
  v34 = 2;
  *(_QWORD *)(a3 + 80) = 0LL;
  v52 = v32 + v33;
  Characteristics = v24->DeviceObject->Characteristics;
  v36 = v30 & 0xFFFFFFFD;
  *(_QWORD *)(a3 + 64) = 0LL;
  v37 = v30 | 2;
  if ( (Characteristics & 0x10) == 0 )
    v37 = v36;
  *(_DWORD *)(a3 + 40) = v37;
  v38 = *(_DWORD *)(v15 + 56);
  if ( (v38 & 4) != 0 )
  {
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v15 + 64), (ULONG_PTR)v24, 0x63536D4Du);
    v40 = -1073741740;
    v41 = 1;
    goto LABEL_77;
  }
  if ( (v38 & 0x10) != 0 )
  {
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v15 + 64), (ULONG_PTR)v24, 0x63536D4Du);
    v40 = -1073741672;
    v41 = 1;
    goto LABEL_77;
  }
  *(_QWORD *)(a3 + 64) = v24;
  if ( (int)FsRtlAcquireFileForModWriteEx(v24, (__int64)&v52, a3 + 80) < 0 )
  {
    v40 = -1073741740;
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v15 + 64), (ULONG_PTR)v24, 0x63536D4Du);
    v41 = 0;
    goto LABEL_76;
  }
  v42 = CcNotifyOfMappedWrite(v54, v32, v51->ByteCount);
  if ( v42 )
  {
    if ( v42 == 1 )
      *v31 = (struct _ERESOURCE *)((unsigned __int64)*v31 | 1);
    *(_QWORD *)(a3 + 88) = v32;
    v43 = *(_QWORD *)(a1 + 22464);
    v44 = *(unsigned int *)(a1 + 816);
    if ( (_DWORD)v44 )
    {
      v44 = (unsigned int)(v44 - 1);
      *(_DWORD *)(a1 + 816) = v43 < 0x420 ? v44 : 0;
      v34 = v43 < 0x420 ? 4 : 2;
    }
    else if ( v43 < 0x120 )
    {
      v34 = 4;
      *(_DWORD *)(a1 + 816) = v43 < 0x32 ? 32 : 8;
    }
    __incgsdword(0x2EB4u);
    __addgsdword(0x2EB0u, v57);
    if ( (*(_DWORD *)(v15 + 56) & 0x30000000) != 0 )
    {
      MiFlushFileOnlyMdl(v44, v51, v32);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 1 )
        __writecr8(1uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v45) = 1;
        LOBYTE(v46) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v46, v45);
      }
      MiWriteComplete((_QWORD *)a3, (int *)(a3 + 24), 0);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v48 = v50;
    }
    else
    {
      v48 = v50;
      v40 = IoAsynchronousPageWrite(
              v24,
              v51,
              v55,
              (LARGE_INTEGER)MiWriteComplete,
              (void *)a3,
              v34,
              0,
              0,
              v50,
              (struct _IO_STATUS_BLOCK *)(a3 + 24),
              (IRP **)(a3 + 16));
      v39 = v40 & 0xC0000000;
      if ( (_DWORD)v39 == -1073741824 )
      {
        v41 = 0;
        goto LABEL_78;
      }
    }
  }
  else
  {
    FsRtlReleaseFileForModWrite(v24, *v31);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v15 + 64), (ULONG_PTR)v24, 0x63536D4Du);
    v40 = -1073741740;
    v41 = 1;
LABEL_76:
    *v31 = 0LL;
    *(_QWORD *)(a3 + 64) = 0LL;
LABEL_77:
    v48 = v50;
LABEL_78:
    *(_DWORD *)(a3 + 24) = v40;
    *(_QWORD *)(a3 + 32) = 0LL;
    v49 = KeGetCurrentIrql();
    if ( v49 != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v39) = v49;
      KiRaiseIrqlProcessIrqlFlags(v39, 1LL);
    }
    MiWriteComplete((_QWORD *)a3, (int *)(a3 + 24), v41);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v49);
    __writecr8(v49);
  }
  if ( v48 )
    IoDiskIoAttributionDereference(v48);
  return 1LL;
}
