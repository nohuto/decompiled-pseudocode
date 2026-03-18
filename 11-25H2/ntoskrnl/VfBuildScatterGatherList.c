/*
 * XREFs of VfBuildScatterGatherList @ 0x140B75AD0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140B74C74 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140B74ED4 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140B74F60 (VF_ASSERT_IRQL.c)
 *     ViAllocateMapRegisterFile @ 0x140B77ECC (ViAllocateMapRegisterFile.c)
 *     ViCheckMdlLength @ 0x140B7844C (ViCheckMdlLength.c)
 *     ViFreeMapRegisterFile @ 0x140B78BBC (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140B78EB8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140B7923C (ViHalPreprocessOptions.c)
 *     ViMapDoubleBuffer @ 0x140B79670 (ViMapDoubleBuffer.c)
 *     ViSwap @ 0x140B79E84 (ViSwap.c)
 */

__int64 VfBuildScatterGatherList(int a1, __int64 a2, ...)
{
  PMDL v2; // r14
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 AdapterInformationInternal; // rax
  __int64 v7; // r13
  __int64 v8; // rsi
  PMDL v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  __int64 v14; // r15
  _QWORD *v15; // rax
  __int64 MapRegisterFile; // rax
  __int64 v17; // rbx
  __int128 v18; // xmm0
  _OWORD *v19; // rax
  int v20; // eax
  unsigned int v21; // ebx
  KIRQL v22; // al
  __int64 v23; // r9
  _QWORD *v24; // r8
  char v25; // [rsp+20h] [rbp-50h]
  __int64 v26; // [rsp+60h] [rbp-10h] BYREF
  __int64 RealDmaAdapter; // [rsp+68h] [rbp-8h]
  PMDL MemoryDescriptorList; // [rsp+C0h] [rbp+50h] BYREF
  va_list MemoryDescriptorLista; // [rsp+C0h] [rbp+50h]
  __int64 v30; // [rsp+C8h] [rbp+58h] BYREF
  va_list va1; // [rsp+C8h] [rbp+58h]
  __int64 v32; // [rsp+D0h] [rbp+60h]
  __int64 (__fastcall *v33)(); // [rsp+D8h] [rbp+68h]
  __int64 v34; // [rsp+E0h] [rbp+70h]
  __int64 v35; // [rsp+E8h] [rbp+78h]
  va_list va2; // [rsp+F0h] [rbp+80h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(MemoryDescriptorLista, a2);
  MemoryDescriptorList = va_arg(va1, PMDL);
  va_copy(va2, va1);
  v30 = va_arg(va2, _QWORD);
  v32 = va_arg(va2, _QWORD);
  v33 = va_arg(va2, __int64 (__fastcall *)());
  v34 = va_arg(va2, _QWORD);
  v35 = va_arg(va2, _QWORD);
  v2 = MemoryDescriptorList;
  v4 = 0LL;
  v5 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v7 = (unsigned int)v32;
  v8 = AdapterInformationInternal;
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    if ( !v2 )
      return 3221225485LL;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 196));
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 200));
    v10 = MemoryDescriptorList;
    VERIFY_BUFFER_LOCKED((ULONG_PTR)MemoryDescriptorList);
    if ( *(_DWORD *)(v8 + 224) == 3 )
    {
      v11 = ViCheckMdlLength(v10, 0LL, (unsigned int)v7);
      if ( v11 )
      {
        v12 = v11;
        ViHalPreprocessOptions(
          byte_140E0E768,
          "The provided MDL is not sufficient to satisfy the requested length",
          36LL,
          v11,
          0LL,
          0LL);
        VfReportIssueWithOptions(0xE6u, 0x24uLL, v12, 0LL, 0LL, byte_140E0E768);
      }
    }
    if ( ViDoubleBufferDma )
    {
      v13 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
      v4 = (__int64)v13;
      if ( v13 )
      {
        *v13 = v34;
        v13[1] = v33;
        v13[8] = 0LL;
        v14 = v30;
        v13[7] = v8;
        *((_DWORD *)v13 + 12) = (v7 + 4095 + (unsigned __int64)(v14 & 0xFFF)) >> 12;
        v15 = v13 + 9;
        v15[1] = v15;
        *v15 = v15;
        MapRegisterFile = ViAllocateMapRegisterFile(v8, *(unsigned int *)(v4 + 48));
        v26 = MapRegisterFile;
        v17 = MapRegisterFile;
        if ( !MapRegisterFile )
        {
LABEL_10:
          ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v4);
          v4 = 0LL;
          goto LABEL_13;
        }
        *(_BYTE *)(MapRegisterFile + 25) = 1;
        *(_QWORD *)(v4 + 96) = MapRegisterFile;
        *(_QWORD *)(v4 + 16) = v4 + 104;
        v25 = v35;
        *(_QWORD *)(v4 + 24) = v14;
        *(_DWORD *)(v4 + 32) = v7;
        if ( !(unsigned int)ViMapDoubleBuffer(MapRegisterFile, v10, v25) )
        {
          ViFreeMapRegisterFile(v8);
          goto LABEL_10;
        }
        v18 = *(_OWORD *)&v10->Next;
        v34 = v4;
        v33 = ViScatterGatherCallback;
        v19 = *(_OWORD **)(v4 + 16);
        *v19 = v18;
        v19[1] = *(_OWORD *)&v10->Process;
        v19[2] = *(_OWORD *)&v10->StartVa;
        ViSwap(&v26, (PMDL *)MemoryDescriptorLista, (__int64 *)va1);
        v5 = v17;
      }
    }
  }
LABEL_13:
  v20 = guard_dispatch_icall_no_overrides(RealDmaAdapter);
  v21 = v20;
  if ( v8 && v20 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v8);
    if ( v5 )
      ViFreeMapRegisterFile(v8);
    if ( v4 )
    {
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 104));
      v23 = *(_QWORD *)(v4 + 72);
      if ( *(_QWORD *)(v23 + 8) != v4 + 72 || (v24 = *(_QWORD **)(v4 + 80), *v24 != v4 + 72) )
        __fastfail(3u);
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 104), v22);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v4);
    }
  }
  return v21;
}
