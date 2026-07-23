/*
 * XREFs of VfGetScatterGatherList @ 0x140C2AB90
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

__int64 VfGetScatterGatherList(int a1, __int64 a2, ...)
{
  __int64 v2; // r15
  _QWORD *v3; // rdi
  ULONG_PTR v4; // rbp
  __int64 AdapterInformationInternal; // rax
  unsigned int v7; // r14d
  __int64 v8; // rsi
  unsigned int v10; // eax
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  __int64 v13; // r13
  int v14; // r9d
  ULONG_PTR v15; // rcx
  _QWORD *v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // r10d
  int v19; // r11d
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 MapRegisterFile; // rax
  __int64 v24; // rbx
  _OWORD *v25; // rax
  int v26; // eax
  unsigned int v27; // ebx
  KIRQL v28; // al
  __int64 v29; // r9
  _QWORD *v30; // r8
  char v31; // [rsp+20h] [rbp-88h]
  __int64 v32; // [rsp+50h] [rbp-58h]
  __int64 v33; // [rsp+58h] [rbp-50h] BYREF
  __int64 RealDmaAdapter; // [rsp+60h] [rbp-48h]
  ULONG_PTR v36; // [rsp+C0h] [rbp+18h] BYREF
  va_list va; // [rsp+C0h] [rbp+18h]
  __int64 v38; // [rsp+C8h] [rbp+20h] BYREF
  va_list va1; // [rsp+C8h] [rbp+20h]
  __int64 v40; // [rsp+D0h] [rbp+28h]
  __int64 v41; // [rsp+D8h] [rbp+30h]
  __int64 v42; // [rsp+E0h] [rbp+38h]
  __int64 v43; // [rsp+E8h] [rbp+40h]
  va_list va2; // [rsp+F0h] [rbp+48h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v36 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v38 = va_arg(va2, _QWORD);
  v40 = va_arg(va2, _QWORD);
  v41 = va_arg(va2, _QWORD);
  v42 = va_arg(va2, _QWORD);
  v43 = va_arg(va2, _QWORD);
  v2 = v38;
  v3 = 0LL;
  v32 = 0LL;
  v4 = v36;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v7 = v40;
  v8 = AdapterInformationInternal;
  if ( !AdapterInformationInternal )
    goto LABEL_20;
  VF_ASSERT_IRQL(2u);
  if ( !v4 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 196));
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 200));
  VERIFY_BUFFER_LOCKED(v4);
  if ( *(_DWORD *)(v8 + 224) == 3 )
  {
    v10 = ViCheckMdlLength(v4, 0LL, v7);
    if ( v10 )
    {
      v11 = v10;
      ViHalPreprocessOptions(
        byte_140E0EAF8,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v10,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v11, 0LL, 0LL, byte_140E0EAF8);
    }
  }
  if ( !ViDoubleBufferDma )
    goto LABEL_20;
  v12 = ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion);
  v3 = v12;
  if ( !v12 )
    goto LABEL_20;
  v13 = v41;
  v12[8] = 0LL;
  v14 = v2 & 0xFFF;
  v15 = v4;
  *v12 = v42;
  v12[1] = v13;
  v16 = v12 + 9;
  v16[1] = v16;
  *v16 = v16;
  v17 = *(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 40) + *(_DWORD *)(v4 + 44) - v2;
  v18 = v17;
  v19 = 0;
  while ( v17 < v7 )
  {
    v15 = *(_QWORD *)v15;
    if ( !v15 )
      break;
    v20 = v14 + 4095;
    v14 = *(_DWORD *)(v15 + 44);
    v21 = v18 + v20;
    v18 = *(_DWORD *)(v15 + 40);
    v19 += v21 >> 12;
    v17 += v18;
  }
  if ( v17 + 4096 < v14 + v7 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v8);
    ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion, v3);
    return 3221225507LL;
  }
  v3[7] = v8;
  v22 = v19 + ((v7 + v14 + v18 - v17 + 4095) >> 12);
  *((_DWORD *)v3 + 12) = v22;
  MapRegisterFile = ViAllocateMapRegisterFile(v8, v22);
  v33 = MapRegisterFile;
  v24 = MapRegisterFile;
  if ( !MapRegisterFile )
    goto LABEL_16;
  *(_BYTE *)(MapRegisterFile + 25) = 1;
  v3[12] = MapRegisterFile;
  v3[2] = v3 + 13;
  v31 = v43;
  v3[3] = v2;
  *((_DWORD *)v3 + 8) = v7;
  if ( !(unsigned int)ViMapDoubleBuffer(MapRegisterFile, (PMDL)v4, v31) )
  {
    ViFreeMapRegisterFile(v8);
LABEL_16:
    ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion, v3);
    v3 = 0LL;
    goto LABEL_20;
  }
  v25 = (_OWORD *)v3[2];
  *v25 = *(_OWORD *)v4;
  v25[1] = *(_OWORD *)(v4 + 16);
  v25[2] = *(_OWORD *)(v4 + 32);
  ViSwap(&v33, (ULONG_PTR *)va, (__int64 *)va1);
  v32 = v24;
LABEL_20:
  v26 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  v27 = v26;
  if ( v8 && v26 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v8);
    if ( v32 )
      ViFreeMapRegisterFile(v8);
    if ( v3 )
    {
      v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 104));
      v29 = v3[9];
      if ( *(_QWORD **)(v29 + 8) != v3 + 9 || (v30 = (_QWORD *)v3[10], (_QWORD *)*v30 != v3 + 9) )
        __fastfail(3u);
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 104), v28);
      ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion, v3);
    }
  }
  return v27;
}
