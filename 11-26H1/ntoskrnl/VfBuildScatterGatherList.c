/*
 * XREFs of VfBuildScatterGatherList @ 0x140C29A20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140C28BAC (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140C28E20 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140C28EAC (VF_ASSERT_IRQL.c)
 *     ViAllocateMapRegisterFile @ 0x140C2BF88 (ViAllocateMapRegisterFile.c)
 *     ViCheckMdlLength @ 0x140C2C528 (ViCheckMdlLength.c)
 *     ViFreeMapRegisterFile @ 0x140C2CCA0 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 *     ViMapDoubleBuffer @ 0x140C2D778 (ViMapDoubleBuffer.c)
 *     ViSwap @ 0x140C2DF9C (ViSwap.c)
 */

__int64 VfBuildScatterGatherList(int a1, __int64 a2, ...)
{
  PVOID *v2; // r13
  PVOID **v3; // rdi
  __int64 v4; // r14
  ULONG_PTR v5; // rbp
  __int64 AdapterInformationInternal; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  PVOID **v12; // rax
  __int64 v13; // r12
  __int64 MapRegisterFile; // rax
  __int64 v15; // rbx
  char v16; // cl
  int v17; // ecx
  int v18; // eax
  PVOID *v19; // rax
  int v20; // eax
  unsigned int v21; // ebx
  KIRQL v22; // al
  char **v23; // r9
  PVOID *v24; // r8
  char v25; // [rsp+20h] [rbp-88h]
  __int64 v26; // [rsp+60h] [rbp-48h] BYREF
  __int64 RealDmaAdapter; // [rsp+68h] [rbp-40h]
  ULONG_PTR v29; // [rsp+C0h] [rbp+18h] BYREF
  va_list va; // [rsp+C0h] [rbp+18h]
  PVOID *v31; // [rsp+C8h] [rbp+20h] BYREF
  va_list va1; // [rsp+C8h] [rbp+20h]
  __int64 v33; // [rsp+D0h] [rbp+28h]
  __int64 v34; // [rsp+D8h] [rbp+30h]
  PVOID *v35; // [rsp+E0h] [rbp+38h]
  __int64 v36; // [rsp+E8h] [rbp+40h]
  va_list va2; // [rsp+F0h] [rbp+48h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v29 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v31 = va_arg(va2, PVOID *);
  v33 = va_arg(va2, _QWORD);
  v34 = va_arg(va2, _QWORD);
  v35 = va_arg(va2, PVOID *);
  v36 = va_arg(va2, _QWORD);
  v2 = v31;
  v3 = 0LL;
  v4 = 0LL;
  v5 = v29;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    if ( !v5 )
      return 3221225485LL;
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 196));
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 200));
    VERIFY_BUFFER_LOCKED(v5);
    v9 = v33;
    if ( *(_DWORD *)(AdapterInformationInternal + 224) == 3 )
    {
      v10 = ViCheckMdlLength(v5, 0LL, (unsigned int)v33);
      if ( v10 )
      {
        v11 = v10;
        ViHalPreprocessOptions(
          byte_140E0EAFC,
          "The provided MDL is not sufficient to satisfy the requested length",
          36LL,
          v10,
          0LL,
          0LL);
        VfReportIssueWithOptions(0xE6u, 0x24uLL, v11, 0LL, 0LL, byte_140E0EAFC);
        v9 = v33;
      }
    }
    if ( ViDoubleBufferDma )
    {
      v12 = (PVOID **)ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion);
      v3 = v12;
      if ( v12 )
      {
        v13 = v34;
        v12[8] = 0LL;
        *v12 = v35;
        v12[1] = (PVOID *)v13;
        v12[7] = (PVOID *)AdapterInformationInternal;
        *((_DWORD *)v12 + 12) = (v9 + (unsigned __int64)((unsigned __int16)v2 & 0xFFF) + 4095) >> 12;
        v12[10] = (PVOID *)(v12 + 9);
        v12[9] = (PVOID *)(v12 + 9);
        MapRegisterFile = ViAllocateMapRegisterFile(AdapterInformationInternal, *((unsigned int *)v12 + 12));
        v26 = MapRegisterFile;
        v15 = MapRegisterFile;
        if ( !MapRegisterFile )
        {
LABEL_10:
          ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion, v3);
          v3 = 0LL;
          goto LABEL_14;
        }
        v16 = v36;
        *(_BYTE *)(MapRegisterFile + 25) = 1;
        v25 = v16;
        v3[2] = (PVOID *)(v3 + 13);
        v17 = MapRegisterFile;
        v18 = v33;
        v3[12] = (PVOID *)v15;
        v3[3] = v2;
        *((_DWORD *)v3 + 8) = v18;
        if ( !(unsigned int)ViMapDoubleBuffer(v17, (PMDL)v5, v25) )
        {
          ViFreeMapRegisterFile(AdapterInformationInternal);
          goto LABEL_10;
        }
        v19 = v3[2];
        *(_OWORD *)v19 = *(_OWORD *)v5;
        *((_OWORD *)v19 + 1) = *(_OWORD *)(v5 + 16);
        *((_OWORD *)v19 + 2) = *(_OWORD *)(v5 + 32);
        ViSwap(&v26, (ULONG_PTR *)va, (PVOID **)va1);
        v4 = v15;
      }
    }
  }
LABEL_14:
  v20 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  v21 = v20;
  if ( AdapterInformationInternal && v20 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
    if ( v4 )
      ViFreeMapRegisterFile(AdapterInformationInternal);
    if ( v3 )
    {
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 104));
      v23 = (char **)v3[9];
      if ( v23[1] != (char *)(v3 + 9) || (v24 = v3[10], *v24 != v3 + 9) )
        __fastfail(3u);
      *v24 = v23;
      v23[1] = (char *)v24;
      KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 104), v22);
      ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion, v3);
    }
  }
  return v21;
}
