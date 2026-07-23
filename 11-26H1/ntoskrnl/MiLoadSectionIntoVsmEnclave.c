/*
 * XREFs of MiLoadSectionIntoVsmEnclave @ 0x14087CD6C
 * Callers:
 *     NtLoadEnclaveData @ 0x140AF16E0 (NtLoadEnclaveData.c)
 * Callees:
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     MiComputePageCommitment @ 0x140313D10 (MiComputePageCommitment.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     MiCommitExistingVad @ 0x1409982E0 (MiCommitExistingVad.c)
 *     MiDecommitRegion @ 0x140A0567C (MiDecommitRegion.c)
 *     MiPrefetchControlArea @ 0x140A58548 (MiPrefetchControlArea.c)
 *     VslLoadEnclaveModule @ 0x140B3597C (VslLoadEnclaveModule.c)
 *     MiUnmapImageForEnclaveUse @ 0x140B481A8 (MiUnmapImageForEnclaveUse.c)
 *     MiMapImageForEnclaveUse @ 0x140B61ED8 (MiMapImageForEnclaveUse.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadSectionIntoVsmEnclave(
        volatile signed __int32 *P,
        char a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  _DWORD *PoolMm; // rbx
  int EnclaveModule; // edi
  int CurrentProcessorColor; // eax
  __int64 v19; // r12
  unsigned __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // rax
  PVOID *v23; // rcx
  void *v24; // [rsp+30h] [rbp-40h]
  _WORD v25[2]; // [rsp+50h] [rbp-20h] BYREF
  int v26; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h] BYREF
  int v28[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v29; // [rsp+68h] [rbp-8h]
  char v30; // [rsp+A0h] [rbp+30h] BYREF

  v26 = 0;
  v25[0] = 0;
  *(_QWORD *)v28 = 0LL;
  *a7 = 0LL;
  v10 = *((_QWORD *)P + 10);
  CurrentThread = KeGetCurrentThread();
  v30 = 0;
  v29 = v10;
  MiUnlockVad((__int64)CurrentThread, (__int64)P);
  PoolMm = 0LL;
  v27 = 0LL;
  if ( a5 < 0x10 )
  {
    EnclaveModule = -1073741820;
LABEL_3:
    MiLockVad((__int64)CurrentThread, (__int64)P, v13, v14);
    goto LABEL_4;
  }
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = (_DWORD *)ExAllocatePoolMm(256LL, 0x30uLL, 1296395597, CurrentProcessorColor | 0x80000000);
  if ( !PoolMm )
  {
    EnclaveModule = -1073741670;
    goto LABEL_3;
  }
  LOBYTE(v13) = a2;
  EnclaveModule = MiMapImageForEnclaveUse(*a6, a3, v13, (unsigned int)&v27, (__int64)v28);
  if ( EnclaveModule < 0 )
    goto LABEL_3;
  v19 = *(_QWORD *)v28;
  v20 = (unsigned __int64)*(unsigned int *)(**(_QWORD **)v28 + 8LL) << 12;
  MiLockVad((__int64)CurrentThread, (__int64)P, v13, v14);
  if ( (unsigned int)MiVadDeleted((__int64)P) || MiComputePageCommitment(a4, v20 + a4 - 1, (__int64)P, 0LL, 0LL) )
  {
    EnclaveModule = -1073741800;
  }
  else
  {
    v21 = v19 + 128;
    v22 = *(_QWORD *)(v19 + 136);
    *(_QWORD *)v28 = v22;
    while ( v21 )
    {
      EnclaveModule = MiCommitExistingVad(
                        (_DWORD)P,
                        (unsigned int)a4 + (((*(_DWORD *)(v21 + 8) << 9) - ((_DWORD)v22 << 9)) & 0xFFFFF000),
                        *(_DWORD *)(v21 + 44) << 12,
                        4,
                        0LL,
                        0,
                        0,
                        0LL,
                        (__int64)&v26,
                        (__int64)v25);
      if ( EnclaveModule < 0 )
        goto LABEL_24;
      v21 = *(_QWORD *)(v21 + 16);
      LODWORD(v22) = v28[0];
    }
    MiPrefetchControlArea(v19, CLFS_LSN_NULL_EXT, 0, 1, 0, -1, v24);
    EnclaveModule = VslLoadEnclaveModule(
                      *(_QWORD *)(v29 + 24),
                      a4,
                      *(_QWORD *)((*(_QWORD *)(v19 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 64),
                      v27,
                      (__int64)a6,
                      a5,
                      (__int64)&v30,
                      (__int64)(PoolMm + 9),
                      (__int64)(PoolMm + 10));
    if ( EnclaveModule < 0 )
    {
LABEL_24:
      MiDecommitRegion(P, a4, v20 + a4 - 1);
      goto LABEL_4;
    }
    if ( v30 )
    {
      PoolMm[8] = 2;
      *((_QWORD *)PoolMm + 2) = a4;
      v23 = (PVOID *)*((_QWORD *)P + 12);
      if ( *v23 != P + 22 )
        __fastfail(3u);
      *(_QWORD *)PoolMm = P + 22;
      *((_QWORD *)PoolMm + 1) = v23;
      *v23 = PoolMm;
      *((_QWORD *)P + 12) = PoolMm;
      *a7 = PoolMm;
      PoolMm = 0LL;
    }
  }
LABEL_4:
  MiUnlockAndDereferenceVad(P);
  if ( v27 )
    MiUnmapImageForEnclaveUse();
  if ( PoolMm )
    ExFreePoolWithTag(PoolMm, 0);
  return (unsigned int)EnclaveModule;
}
