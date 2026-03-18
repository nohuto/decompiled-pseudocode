/*
 * XREFs of MiHandleInsertedImageVad @ 0x1409CDFA4
 * Callers:
 *     MiMapViewOfImageSection @ 0x1409CD37C (MiMapViewOfImageSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiReferenceVad @ 0x14027E890 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027EBC0 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027F670 (MiUnlockVad.c)
 *     MiMapUserLargePages @ 0x14030FD60 (MiMapUserLargePages.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140315540 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiMapImageScpCfgPages @ 0x14036A450 (MiMapImageScpCfgPages.c)
 *     MiSoftFaultMappedView @ 0x1403BB610 (MiSoftFaultMappedView.c)
 *     MiReferenceControlAreaFile @ 0x140448EB0 (MiReferenceControlAreaFile.c)
 *     MiReadVadFlags2 @ 0x14047A070 (MiReadVadFlags2.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404E72E8 (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x140528374 (MiRemoveVadEvent.c)
 *     MiAdvanceVadHint @ 0x14095CE00 (MiAdvanceVadHint.c)
 *     MiAddSecureEntry @ 0x14095D9B8 (MiAddSecureEntry.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x140962FC0 (MiDoesImageContainFunctionOverrideFixups.c)
 *     MmUnsecureVirtualMemory @ 0x1409C1B90 (MmUnsecureVirtualMemory.c)
 *     MiUnmapVad @ 0x1409C3B30 (MiUnmapVad.c)
 *     MiCommitVadMetadataBits @ 0x1409C6E14 (MiCommitVadMetadataBits.c)
 *     PsCallImageNotifyRoutines @ 0x140A791A4 (PsCallImageNotifyRoutines.c)
 *     MiLogMapFileEvent @ 0x140AD6354 (MiLogMapFileEvent.c)
 *     MiSecureVad @ 0x140B4F310 (MiSecureVad.c)
 *     MiLoadUserSymbols @ 0x140B5385C (MiLoadUserSymbols.c)
 */

__int64 __fastcall MiHandleInsertedImageVad(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r14
  ULONG_PTR v5; // rsi
  __int64 *v7; // rax
  struct _KTHREAD *CurrentThread; // r13
  bool v9; // zf
  __int64 v10; // r12
  __int64 v11; // r15
  char VadFlags2; // al
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  __int64 v15; // r15
  char v16; // bl
  int v17; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // r8d
  int v22; // ebx
  __int64 v23; // rbx
  _QWORD *v24; // rax
  char v25; // al
  __int64 v26; // rdx
  unsigned int v27; // ecx
  void *v28; // rax
  int v29; // ecx
  int v30; // eax
  int v31; // r9d
  int v32; // eax
  __int16 v33; // cx
  PVOID v34; // rsi
  __int128 v35; // [rsp+30h] [rbp-40h] BYREF
  __int128 v36; // [rsp+40h] [rbp-30h]
  __int128 v37; // [rsp+50h] [rbp-20h]
  __int64 v38; // [rsp+60h] [rbp-10h]
  __int64 v39; // [rsp+B0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+48h]
  __int64 *v41; // [rsp+C0h] [rbp+50h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v38 = 0LL;
  v7 = *(__int64 **)(a1 + 32);
  v35 = 0LL;
  v41 = v7;
  v36 = 0LL;
  v37 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(a1 + 88) == 0x200000LL;
  v10 = *(_QWORD *)(v4 + 88);
  v39 = *v7;
  v11 = *(_QWORD *)(v39 + 56);
  Object = 0LL;
  if ( v9 )
  {
    MiLockVad((__int64)CurrentThread, v5, a3, a4);
    v22 = MiMapUserLargePages(v5, 0, 0, 0LL);
    if ( v22 < 0 )
    {
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v10);
      *(_DWORD *)(a1 + 56) &= ~0x20u;
      goto LABEL_30;
    }
    MiUnlockVad((__int64)CurrentThread, v5);
  }
  if ( *(_QWORD *)(a1 + 112) )
    MiAdvanceVadHint(
      *(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32),
      *(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32),
      *(_QWORD **)(a1 + 112));
  *(_QWORD *)(a1 + 72) += *(_QWORD *)(a1 + 104) << 16;
  if ( *(_BYTE *)(v11 + 50) && *(_WORD *)(a1 + 98) != *(_WORD *)(a1 + 96) )
  {
    v19 = *(_DWORD *)(a1 + 56) | 0x2000;
    *(_DWORD *)(a1 + 56) = v19;
    if ( *(_QWORD *)(v10 + 784) && *(_WORD *)(v11 + 48) == 0x8664 )
    {
      v19 &= ~0x2000u;
      *(_DWORD *)(a1 + 56) = v19;
    }
    if ( (v19 & 0x2000) != 0 )
      *(_DWORD *)(a1 + 52) = 1073741838;
  }
  if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 )
    MiLogMapFileEvent(v5, 1061LL);
  VadFlags2 = MiReadVadFlags2(v5);
  v15 = (__int64)v41;
  v16 = VadFlags2;
  if ( (VadFlags2 & 0x20) != 0 )
  {
    LOBYTE(v20) = MiDoesImageContainFunctionOverrideFixups((__int64)v41);
    if ( v20 )
      MiMapImageScpCfgPages(v10, v5, v13);
  }
  if ( (v16 & 0x10) != 0 )
    *(_DWORD *)(a1 + 56) |= 0x40u;
  v17 = *(_DWORD *)(a1 + 56);
  if ( (v17 & 0x800) == 0 )
  {
    if ( (NtGlobalFlag & 0x40000) != 0 )
    {
      v32 = *(_DWORD *)(a1 + 52);
      if ( v32 != 1073741827 && v32 != 1073741878 && v32 != 1073741838 && ((__int64)CurrentThread[1].Queue & 0x20) == 0 )
      {
        v33 = *(_WORD *)(v39 + 12);
        if ( (v33 & 0x800) == 0 && (*(_BYTE *)(v39 + 14) & 0x20) != 0 )
        {
          *(_WORD *)(v39 + 12) = v33 | 0x800;
          MiLoadUserSymbols(v15, *(_QWORD *)(a1 + 72), v10);
        }
      }
    }
    v25 = MiReadVadFlags2(v5);
    v17 = *(_DWORD *)(a1 + 56);
    if ( (v17 & 0x1000) != 0 )
    {
      BYTE8(v35) = 3;
      if ( (v25 & 8) != 0 )
      {
        v27 = DWORD2(v35) & 0xFFF80FFF;
      }
      else
      {
        v29 = *(unsigned __int8 *)(v26 + 15);
        v30 = DWORD2(v35) ^ (WORD4(v35) ^ (unsigned __int16)((_WORD)v29 << 12)) & 0xF000;
        v27 = v30 ^ (v30 ^ (v29 << 12)) & 0x70000;
      }
      DWORD2(v35) = v27 ^ (v27 ^ (*(_DWORD *)(a1 + 56) >> 2)) & 0x800;
      *(_QWORD *)&v36 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)&v37 = *(_QWORD *)(v4 + 24);
      if ( *(_QWORD *)(v4 + 24) != _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 24), -1LL, -1LL) )
        DWORD2(v35) |= 0x80000u;
      DWORD2(v36) = 0;
      DWORD2(v37) = 0;
      v28 = (void *)MiReferenceControlAreaFile(v15);
      *(_DWORD *)(a1 + 56) |= 0x40u;
      v17 = *(_DWORD *)(a1 + 56);
      Object = v28;
    }
    if ( *(_DWORD *)(v4 + 120) || *(_QWORD *)(v4 + 72) || (*(_DWORD *)(v4 + 60) & 2) != 0 )
    {
      v17 |= 0x40u;
      *(_DWORD *)(a1 + 56) = v17;
    }
  }
  if ( (v17 & 0x40) == 0 )
    goto LABEL_12;
  MiLockVad((__int64)CurrentThread, v5, v13, v14);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v10);
  *(_DWORD *)(a1 + 56) &= ~0x20u;
  if ( (MiReadVadFlags2(v5) & 0x10) != 0 )
  {
    MiUpdatePrivateDemandZeroView(v10, v5, 1);
    MiRemoveVadEvent(v5, (_QWORD *)(a1 + 128));
    *(_DWORD *)(a1 + 56) &= ~0x80u;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x800) != 0
    || (v21 = *(_DWORD *)(v4 + 120)) == 0
    || (v22 = MiCommitVadMetadataBits(v5, 0LL, v21), v22 >= 0) )
  {
    v23 = 0LL;
    v39 = 0LL;
    if ( *(_QWORD *)(v4 + 72) )
    {
      v31 = *(_DWORD *)(v4 + 64);
      if ( v31 != 1 && v31 != -2147483647 && v31 != 2 && v31 != 4 )
      {
        v22 = -1073741755;
        goto LABEL_30;
      }
      v22 = MiSecureVad(v5, *(_QWORD *)(a1 + 72), *(_QWORD *)(v4 + 24), v31, 0, (__int64)&v39);
      if ( v22 < 0 )
        goto LABEL_30;
      v23 = v39;
      **(_QWORD **)(v4 + 72) = qword_140E2D640 ^ v39;
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x1000) == 0
      || (v23 = MiAddSecureEntry(
                  v5,
                  (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12,
                  ((*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) << 12) | 0xFFF,
                  -2147483647,
                  0)) != 0 )
    {
      if ( (*(_DWORD *)(v4 + 60) & 2) != 0 )
        MiSoftFaultMappedView(v5);
      MiUnlockVad((__int64)CurrentThread, v5);
      if ( (*(_DWORD *)(a1 + 56) & 0x1000) != 0 )
      {
        v34 = Object;
        PsCallImageNotifyRoutines((char *)Object + 88, v10, &v35, Object);
        ObfDereferenceObjectWithTag(v34, 0x63536D4Du);
      }
      if ( v23 )
        MmUnsecureVirtualMemory((HANDLE)(qword_140E2D640 ^ v23));
LABEL_12:
      if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v10);
        *(_DWORD *)(a1 + 56) &= ~0x20u;
      }
      return *(unsigned int *)(a1 + 52);
    }
    v22 = -1073741670;
  }
LABEL_30:
  MiReferenceVad(v5);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x63536D4Du);
  MiUnmapVad(v5, 0LL, 0);
  v24 = *(_QWORD **)(v4 + 72);
  if ( v24 )
    *v24 = 0LL;
  return (unsigned int)v22;
}
