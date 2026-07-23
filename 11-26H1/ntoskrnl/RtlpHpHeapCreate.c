/*
 * XREFs of RtlpHpHeapCreate @ 0x14063B29C
 * Callers:
 *     RtlpHpMetadataHeapCreate @ 0x14063B9A0 (RtlpHpMetadataHeapCreate.c)
 *     ExCreateHeap @ 0x1406D6934 (ExCreateHeap.c)
 *     ExpPoolHeapCreate @ 0x14084C84C (ExpPoolHeapCreate.c)
 * Callees:
 *     RtlpHpInitializeLock @ 0x14034D510 (RtlpHpInitializeLock.c)
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     RtlpHpVsContextInitialize @ 0x1404FB028 (RtlpHpVsContextInitialize.c)
 *     RtlpHpVsContextStart @ 0x1404FE720 (RtlpHpVsContextStart.c)
 *     RtlpLogHeapCreateEvent @ 0x140628E64 (RtlpLogHeapCreateEvent.c)
 *     RtlpHpHeapAllocate @ 0x14063B058 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x14063B6F8 (RtlpHpHeapDestroy.c)
 *     RtlpHpRegisterEnvironment @ 0x14063B9E0 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegContextInitialize @ 0x14063C194 (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegContextReserve @ 0x14063C2D4 (RtlpHpSegContextReserve.c)
 *     RtlpHpLfhContextEnable @ 0x14063C6BC (RtlpHpLfhContextEnable.c)
 *     RtlpHpLfhContextInitialize @ 0x14063C740 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpPgContextInitialize @ 0x14063D7D8 (RtlpHpPgContextInitialize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmSiRWLockInitialize @ 0x140B63600 (CmSiRWLockInitialize.c)
 */

__int64 __fastcall RtlpHpHeapCreate(int a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v6; // rbx
  unsigned __int32 KernelStack; // r14d
  signed __int32 v8; // eax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int128 v11; // xmm0
  int v12; // ecx
  int v13; // edi
  char v14; // r8
  int v15; // edx
  unsigned __int16 v16; // r8
  unsigned __int16 i; // ax
  unsigned __int16 v18; // cx
  size_t v19; // rdi
  void *v20; // rax
  __int64 v22; // [rsp+50h] [rbp-21h]
  __int128 v23; // [rsp+58h] [rbp-19h] BYREF
  __int128 v24; // [rsp+68h] [rbp-9h] BYREF
  __int64 (__fastcall *v25)(__int64, __int64, unsigned int, _DWORD *); // [rsp+78h] [rbp+7h]
  __int64 (__fastcall *v26)(__int64, __int64, unsigned int); // [rsp+80h] [rbp+Fh]
  __int64 (__fastcall *v27)(__int64); // [rsp+88h] [rbp+17h]
  __int64 (__fastcall *v28)(); // [rsp+90h] [rbp+1Fh]
  __int64 (__fastcall *v29)(int, int, int, int, int); // [rsp+98h] [rbp+27h]

  v6 = 0LL;
  if ( (int)RtlpHpRegisterEnvironment(a4, 1LL) >= 0 )
  {
    KernelStack = (unsigned __int32)RtlpBootStatHandleLock.KernelStack;
    if ( !LODWORD(RtlpBootStatHandleLock.KernelStack) )
    {
      KernelStack = HalQueryMaximumProcessorCount();
      if ( !KernelStack )
        KernelStack = 1;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)&RtlpBootStatHandleLock.KernelStack, KernelStack, 0);
      if ( v8 )
        KernelStack = v8;
    }
    if ( (a1 & 0x2000000) != 0 )
      KernelStack = 1;
    v23 = *a4;
    v9 = RtlpHpHeapAllocate(a1, KernelStack, &v23);
    v10 = v9;
    if ( v9 )
    {
      v11 = *a4;
      *(_DWORD *)(v9 + 16) = -571548178;
      v12 = 0;
      *(_DWORD *)(v9 + 20) = a1;
      *(_OWORD *)v9 = v11;
      if ( BYTE1(*(_QWORD *)a4) >= 2u && BYTE1(*(_QWORD *)a4) < 5u )
        v12 = 16;
      v13 = v12 | 4;
      if ( (a1 & 0x4000000) == 0 )
        v13 = v12;
      v23 = v11;
      RtlpHpSegContextInitialize(
        v9 + 320,
        0x100000,
        v9,
        v9 + 896,
        v9 + 704,
        v9 + 808,
        v9 + 128,
        v9 + 168,
        (__int64)&v23,
        v13);
      LODWORD(v22) = v13;
      v23 = *a4;
      RtlpHpSegContextInitialize(v10 + 512, 0x1000000, v10, 0, 0LL, 0LL, v10 + 128, v10 + 184, (__int64)&v23, v22);
      RtlpHpInitializeLock((_QWORD *)(v10 + 64), *(_DWORD *)a4 & 1);
      v15 = (unsigned __int8)(v14 & *(_DWORD *)a4);
      *(_QWORD *)(v10 + 72) = 0LL;
      *(_QWORD *)(v10 + 80) = 0LL;
      RtlpHpInitializeLock((_QWORD *)(v10 + 232), v15);
      if ( (*(_DWORD *)(v10 + 20) & 0x20000000) != 0 )
      {
        for ( i = 0; i < v16; i = v18 )
        {
          v18 = v16 + i;
          v16 = 1;
          if ( *((__int64 (**)())&CLFS_LSN_NULL_EXT + i) == HalSystemVectorDispatchEntry )
            goto LABEL_21;
        }
        v18 = 0;
LABEL_21:
        *(_DWORD *)(v10 + 24) = v18;
        if ( v18 )
          _InterlockedOr((volatile signed __int32 *)(v10 + 20), 0x20u);
        else
          _InterlockedAnd((volatile signed __int32 *)(v10 + 20), 0xFFFFFFDF);
      }
      *(_QWORD *)&v24 = RtlpHpSegVsAllocate;
      v28 = 0LL;
      *((_QWORD *)&v24 + 1) = RtlpHpSegSuballocatorFree;
      v29 = 0LL;
      v25 = RtlpHpSegSuballocatorCommit;
      v27 = RtlpHpSegLfhExtendContext;
      v26 = RtlpHpSegSuballocatorDecommit;
      RtlpHpVsContextInitialize(
        v10 + 704,
        v10 + 320,
        &v24,
        v16 & *(_DWORD *)a4,
        KernelStack,
        0,
        &unk_140E6BF5C,
        v10 + 128);
      *(_QWORD *)&v24 = RtlpHpSegLfhAllocate;
      v29 = 0LL;
      *((_QWORD *)&v24 + 1) = RtlpHpSegSuballocatorFree;
      v27 = RtlpHpSegLfhExtendContext;
      v25 = RtlpHpSegSuballocatorCommit;
      v26 = RtlpHpSegSuballocatorDecommit;
      v28 = RtlpHpSegTlsCleanup;
      RtlpHpLfhContextInitialize(v10 + 896, v10 + 320, KernelStack, *(_DWORD *)a4 & 1, (__int64)&v24, v10 + 128);
      *(_QWORD *)&v24 = RtlpHpSegPgAllocate;
      *((_QWORD *)&v24 + 1) = RtlpHpSegSuballocatorFree;
      v27 = 0LL;
      v25 = RtlpHpSegSuballocatorCommit;
      v28 = 0LL;
      v26 = RtlpHpSegSuballocatorDecommit;
      v29 = RtlpHpSegSuballocatorAccessState;
      RtlpHpPgContextInitialize(
        v10 + 808,
        v10 + 320,
        (unsigned int)&v24,
        v10,
        *(unsigned int *)(v10 + 336),
        BYTE1(*(_QWORD *)a4),
        (__int64)&unk_140E6BF5D);
      CmSiRWLockInitialize((PRTL_RUN_ONCE)(v10 + 112));
      v19 = (unsigned __int64)*(unsigned __int8 *)(v10 + 968) << 8;
      v20 = (void *)guard_dispatch_icall_no_overrides(*(_QWORD *)(v10 + 896), v19);
      if ( v20
        && (memset_0(v20, 0, v19), (int)RtlpHpVsContextStart(v10 + 704) >= 0)
        && ((a1 & 0x400000) != 0 || (int)RtlpHpLfhContextEnable(v10 + 896, &unk_140E6BF58) >= 0)
        && (int)RtlpHpSegContextReserve(v10 + 320, 0LL, 0LL) >= 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v10 + 20), 0xFFFFFF7F);
        if ( (*(_DWORD *)(v10 + 20) & 0x80u) != 0 )
          RtlpLogHeapCreateEvent(v10, a1, *(_QWORD *)(v10 + 256) - v10, *(_QWORD *)(v10 + 248) - v10);
        return v10;
      }
      else
      {
        v6 = 0LL;
        RtlpHpHeapDestroy(v10);
      }
    }
    else
    {
      RtlpHpRegisterEnvironment(a4, 0LL);
    }
  }
  return v6;
}
