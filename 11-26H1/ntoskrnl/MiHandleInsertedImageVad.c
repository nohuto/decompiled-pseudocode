/*
 * XREFs of MiHandleInsertedImageVad @ 0x14099EF84
 * Callers:
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiMapImageScpCfgPages @ 0x14036C1F0 (MiMapImageScpCfgPages.c)
 *     MiSoftFaultMappedView @ 0x1403C5480 (MiSoftFaultMappedView.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiReadVadFlags2 @ 0x1404739E0 (MiReadVadFlags2.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404E06A4 (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x14052A9E4 (MiRemoveVadEvent.c)
 *     MmUnsecureVirtualMemory @ 0x140992B70 (MmUnsecureVirtualMemory.c)
 *     MiUnmapVad @ 0x140994B10 (MiUnmapVad.c)
 *     MiCommitVadMetadataBits @ 0x140997DF4 (MiCommitVadMetadataBits.c)
 *     PsCallImageNotifyRoutines @ 0x1409E6750 (PsCallImageNotifyRoutines.c)
 *     MiAdvanceVadHint @ 0x140A026C0 (MiAdvanceVadHint.c)
 *     MiAddSecureEntry @ 0x140A03278 (MiAddSecureEntry.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x140A08E48 (MiDoesImageContainFunctionOverrideFixups.c)
 *     MiLogMapFileEvent @ 0x140AD3354 (MiLogMapFileEvent.c)
 *     MiSecureVad @ 0x140B51BA0 (MiSecureVad.c)
 *     MiLoadUserSymbols @ 0x140B560FC (MiLoadUserSymbols.c)
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
  int v20; // r8d
  int v21; // ebx
  __int64 v22; // rbx
  _QWORD *v23; // rax
  char v24; // al
  __int64 v25; // rdx
  unsigned int v26; // ecx
  void *v27; // rax
  int v28; // ecx
  int v29; // eax
  int v30; // r9d
  int v31; // eax
  __int16 v32; // cx
  PVOID v33; // rsi
  __int128 v34; // [rsp+30h] [rbp-40h] BYREF
  __int128 v35; // [rsp+40h] [rbp-30h]
  __int128 v36; // [rsp+50h] [rbp-20h]
  __int64 v37; // [rsp+60h] [rbp-10h]
  __int64 v38; // [rsp+B0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+48h]
  __int64 *v40; // [rsp+C0h] [rbp+50h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v37 = 0LL;
  v7 = *(__int64 **)(a1 + 32);
  v34 = 0LL;
  v40 = v7;
  v35 = 0LL;
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(a1 + 88) == 0x200000LL;
  v10 = *(_QWORD *)(v4 + 88);
  v38 = *v7;
  v11 = *(_QWORD *)(v38 + 56);
  Object = 0LL;
  if ( v9 )
  {
    MiLockVad((__int64)CurrentThread, v5, a3, a4);
    v21 = MiMapUserLargePages(v5, 0, 0, 0LL);
    if ( v21 < 0 )
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
      *(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32));
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
  if ( (PerfGlobalGroupMask & 0x8000) != 0 )
    MiLogMapFileEvent(v5, 1061LL);
  VadFlags2 = MiReadVadFlags2(v5);
  v15 = (__int64)v40;
  v16 = VadFlags2;
  if ( (VadFlags2 & 0x20) != 0 && (unsigned int)MiDoesImageContainFunctionOverrideFixups(v40) )
    MiMapImageScpCfgPages(v10, v5, v13);
  if ( (v16 & 0x10) != 0 )
    *(_DWORD *)(a1 + 56) |= 0x40u;
  v17 = *(_DWORD *)(a1 + 56);
  if ( (v17 & 0x800) == 0 )
  {
    if ( (NtGlobalFlag & 0x40000) != 0 )
    {
      v31 = *(_DWORD *)(a1 + 52);
      if ( v31 != 1073741827 && v31 != 1073741878 && v31 != 1073741838 && ((__int64)CurrentThread[1].Queue & 0x20) == 0 )
      {
        v32 = *(_WORD *)(v38 + 12);
        if ( (v32 & 0x800) == 0 && (*(_BYTE *)(v38 + 14) & 0x20) != 0 )
        {
          *(_WORD *)(v38 + 12) = v32 | 0x800;
          MiLoadUserSymbols(v15, *(_QWORD *)(a1 + 72), v10);
        }
      }
    }
    v24 = MiReadVadFlags2(v5);
    v17 = *(_DWORD *)(a1 + 56);
    if ( (v17 & 0x1000) != 0 )
    {
      BYTE8(v34) = 3;
      if ( (v24 & 8) != 0 )
      {
        v26 = DWORD2(v34) & 0xFFF80FFF;
      }
      else
      {
        v28 = *(unsigned __int8 *)(v25 + 15);
        v29 = DWORD2(v34) ^ (WORD4(v34) ^ (unsigned __int16)((_WORD)v28 << 12)) & 0xF000;
        v26 = v29 ^ (v29 ^ (v28 << 12)) & 0x70000;
      }
      DWORD2(v34) = v26 ^ (v26 ^ (*(_DWORD *)(a1 + 56) >> 2)) & 0x800;
      *(_QWORD *)&v35 = *(_QWORD *)(a1 + 72);
      *(_QWORD *)&v36 = *(_QWORD *)(v4 + 24);
      if ( *(_QWORD *)(v4 + 24) != _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 24), -1LL, -1LL) )
        DWORD2(v34) |= 0x80000u;
      DWORD2(v35) = 0;
      DWORD2(v36) = 0;
      v27 = (void *)MiReferenceControlAreaFile(v15);
      *(_DWORD *)(a1 + 56) |= 0x40u;
      v17 = *(_DWORD *)(a1 + 56);
      Object = v27;
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
    || (v20 = *(_DWORD *)(v4 + 120)) == 0
    || (v21 = MiCommitVadMetadataBits(v5, 0LL, v20), v21 >= 0) )
  {
    v22 = 0LL;
    v38 = 0LL;
    if ( *(_QWORD *)(v4 + 72) )
    {
      v30 = *(_DWORD *)(v4 + 64);
      if ( v30 != 1 && v30 != -2147483647 && v30 != 2 && v30 != 4 )
      {
        v21 = -1073741755;
        goto LABEL_30;
      }
      v21 = MiSecureVad(v5, *(_QWORD *)(a1 + 72), *(_QWORD *)(v4 + 24), v30, 0, (__int64)&v38);
      if ( v21 < 0 )
        goto LABEL_30;
      v22 = v38;
      **(_QWORD **)(v4 + 72) = qword_140E2D7C0 ^ v38;
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x1000) == 0
      || (v22 = MiAddSecureEntry(v5, *(_DWORD *)(v5 + 24) << 12, (*(_DWORD *)(v5 + 28) << 12) | 0xFFFu, -2147483647, 0)) != 0 )
    {
      if ( (*(_DWORD *)(v4 + 60) & 2) != 0 )
        MiSoftFaultMappedView(v5);
      MiUnlockVad((__int64)CurrentThread, v5);
      if ( (*(_DWORD *)(a1 + 56) & 0x1000) != 0 )
      {
        v33 = Object;
        PsCallImageNotifyRoutines((char *)Object + 88, v10, &v34, Object);
        ObfDereferenceObjectWithTag(v33, 0x63536D4Du);
      }
      if ( v22 )
        MmUnsecureVirtualMemory((HANDLE)(qword_140E2D7C0 ^ v22));
LABEL_12:
      if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v10);
        *(_DWORD *)(a1 + 56) &= ~0x20u;
      }
      return *(unsigned int *)(a1 + 52);
    }
    v21 = -1073741670;
  }
LABEL_30:
  MiReferenceVad(v5);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x63536D4Du);
  MiUnmapVad(v5);
  v23 = *(_QWORD **)(v4 + 72);
  if ( v23 )
    *v23 = 0LL;
  return (unsigned int)v21;
}
