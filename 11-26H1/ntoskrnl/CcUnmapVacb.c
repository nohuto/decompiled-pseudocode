/*
 * XREFs of CcUnmapVacb @ 0x140AFCD38
 * Callers:
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14039CB54 (CcReferenceSharedCacheMapFileObject.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1404AD134 (CcUpdateSharedCacheMapFlag.c)
 *     PfCheckDeprioritizeFile @ 0x1409954E4 (PfCheckDeprioritizeFile.c)
 *     PfCheckDeprioritizeImage @ 0x140A98DA4 (PfCheckDeprioritizeImage.c)
 */

void __fastcall CcUnmapVacb(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // ebp
  char v5; // si
  int v8; // r8d
  unsigned int v9; // ecx
  _KPROCESS *Process; // r15
  bool v11; // zf
  ULONG_PTR v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // r9

  v4 = 0;
  v5 = a3;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
LABEL_9:
    v4 = 1;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a2 + 152) & 0x200000) != 0 && (*(_DWORD *)(a2 + 152) & 0x200) == 0 )
  {
    v9 = *(_DWORD *)(a2 + 520);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( HIDWORD(Process[1].CpuPartitionList.Blink) == v9 )
      v11 = (Process[1].DirectoryTableBase & 0x400000000000LL) == 0;
    else
      v11 = (unsigned int)PfCheckDeprioritizeImage(v9, a2, a3, a4) == 0;
    if ( !v11 )
    {
      v12 = CcReferenceSharedCacheMapFileObject(a2);
      v13 = *(_QWORD *)(v12 + 24);
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(a2 + 96), v12, 0x63536343u);
      v14 = (*(__int64 *)(a2 + 8) >> 12) + ((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0);
      if ( v14 >= ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64 )
        v14 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
      if ( v14 <= 1 )
        v14 = 1LL;
      if ( (unsigned int)PfCheckDeprioritizeFile(
                           (__int64)Process,
                           *(unsigned int *)(a2 + 520),
                           v13,
                           (struct _KLOCK_ENTRIES *)v14) )
        goto LABEL_9;
    }
    CcUpdateSharedCacheMapFlag(a2, 0x200000, 0);
  }
LABEL_3:
  v8 = v4 | 2;
  if ( (v5 & 2) == 0 )
    v8 = v4;
  MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 176), v8);
  if ( (v5 & 2) == 0 )
    *(_QWORD *)a1 = 0LL;
}
