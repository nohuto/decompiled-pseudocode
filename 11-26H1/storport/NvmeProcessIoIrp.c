/*
 * XREFs of NvmeProcessIoIrp @ 0x140020090
 * Callers:
 *     NvmeNamespaceIoIrp @ 0x14001F8E0 (NvmeNamespaceIoIrp.c)
 *     RaDriverIoIrp @ 0x14001F950 (RaDriverIoIrp.c)
 * Callees:
 *     NvmeSplitIoParallel @ 0x14001EFF0 (NvmeSplitIoParallel.c)
 *     NvmeSubmitIoToSQ @ 0x140020590 (NvmeSubmitIoToSQ.c)
 *     NvmeNamespaceQueueIo @ 0x1400210B0 (NvmeNamespaceQueueIo.c)
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     StorPushRequestToDeviceQueue @ 0x140057990 (StorPushRequestToDeviceQueue.c)
 *     AllocateNewNVMePrpListBufferEntry @ 0x140058120 (AllocateNewNVMePrpListBufferEntry.c)
 *     FreeNVMeSGLBufferContext @ 0x140119DA0 (FreeNVMeSGLBufferContext.c)
 *     GetNVMeSGLBufferContext @ 0x140119E00 (GetNVMeSGLBufferContext.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeProcessIoIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v5; // esi
  __int64 CurrentProcessorNumber; // r14
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbp
  PSLIST_ENTRY v9; // r9
  __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned int v16; // r12d
  unsigned int v17; // r10d
  unsigned __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 NewNVMePrpListBufferEntry; // rax
  bool v24; // di
  __int64 v25; // rbp
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v28; // rcx
  __int64 v29; // rbp
  __int64 v30; // rcx
  __int64 v31; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v32; // rcx
  __int64 v33; // r8
  char v34; // cl
  int v35; // edx
  unsigned int v36; // eax
  __int64 NVMeSGLBufferContext; // rax
  __int64 v38; // rdx
  char v39; // di
  char v40; // al
  __int64 v41; // rax
  __int64 v42; // r13
  int v43; // edi
  __int64 v44; // rsi
  KIRQL v45; // r12
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rcx
  unsigned __int8 *v50; // rax
  __int64 v51; // rbx
  int v52; // [rsp+38h] [rbp-B0h]
  char v53; // [rsp+60h] [rbp-88h]
  unsigned __int64 v54; // [rsp+68h] [rbp-80h]
  __int64 v55; // [rsp+68h] [rbp-80h]
  __int64 v56; // [rsp+70h] [rbp-78h] BYREF
  __int64 v57; // [rsp+78h] [rbp-70h]
  __int128 v58; // [rsp+80h] [rbp-68h] BYREF
  __int128 v59; // [rsp+90h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v5 = 259;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v7 = *(_QWORD *)(a1 + 128);
  if ( *(_BYTE *)v7
    || _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v7 + 24) + 8 * CurrentProcessorNumber)) != 1 )
  {
    goto LABEL_3;
  }
  if ( KeGetCurrentIrql() < 2u && (*(_DWORD *)(*(_QWORD *)(a1 + 128) + 80LL) & 6) == 0 )
  {
    v24 = 1;
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
    v26 = *(_QWORD *)(v25 + 160);
    if ( *(_BYTE *)v26 == 1 )
    {
      PoFxActivateComponent(**(_QWORD **)(v26 + 8), 0LL, 1LL);
      v24 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 160) + 8LL) + 64LL) == 1;
    }
    v27 = *(_QWORD *)(a1 + 128);
    if ( !v27 )
      goto LABEL_34;
    if ( !*(_QWORD *)(v27 + 8) )
      goto LABEL_34;
    v28 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v27 + 40);
    if ( !v28 || !ExAcquireRundownProtectionCacheAware(v28) )
      goto LABEL_34;
    v33 = 5LL;
    if ( !*(_DWORD *)(a1 + 264) )
      v33 = 1LL;
LABEL_60:
    PoFxActivateComponent(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), 0LL, v33);
    v39 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 64LL);
    NvmeNamespaceReleasePoFx(a1);
    v24 = v39 == 1;
    goto LABEL_34;
  }
  v24 = 1;
  v29 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
  v30 = *(_QWORD *)(v29 + 160);
  if ( *(_BYTE *)v30 == 1 )
  {
    PoFxActivateComponent(**(_QWORD **)(v30 + 8), 0LL, 2LL);
    v24 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v29 + 160) + 8LL) + 64LL) == 1;
  }
  v31 = *(_QWORD *)(a1 + 128);
  if ( v31 )
  {
    if ( *(_QWORD *)(v31 + 8) )
    {
      v32 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v31 + 40);
      if ( v32 )
      {
        if ( ExAcquireRundownProtectionCacheAware(v32) )
        {
          v33 = 2LL;
          goto LABEL_60;
        }
      }
    }
  }
LABEL_34:
  if ( !v24 )
  {
    NvmeNamespaceProcessIoForDeviceIdle(a1, a2, (unsigned int)CurrentProcessorNumber);
    return v5;
  }
LABEL_3:
  v8 = *(volatile signed __int32 **)(a1 + 256);
  LODWORD(v9) = 0;
  v10 = *(_QWORD *)(a1 + 16);
  v56 = 0LL;
  if ( !*v8 && !**(_DWORD **)&v8[2 * CurrentProcessorNumber + 6] )
  {
    if ( !*(_DWORD *)(v10 + 948) )
    {
      v11 = *(unsigned int *)(v2 + 8);
      v12 = *(_QWORD *)(v2 + 24);
      v53 = *(_BYTE *)v2 == 3;
      v54 = v12;
      if ( (_DWORD)v11 )
      {
        v13 = *(unsigned int *)(a1 + 64);
        if ( (unsigned int)v11 % (unsigned int)v13
          || (v14 = v12 / v13, v12 % v13)
          || (v15 = *(_QWORD *)(a1 + 424), v16 = (unsigned int)v11 / (unsigned int)v13, v14 >= v15)
          || v15 - v14 < (unsigned int)v11 / (unsigned int)v13 )
        {
          v5 = -1073741811;
        }
        else
        {
          v17 = *(_DWORD *)(*(_QWORD *)(v10 + 128) + 200LL);
          if ( (unsigned int)v11 > v17 )
            goto LABEL_56;
          v18 = *(unsigned int *)(a1 + 420);
          if ( (_DWORD)v18 )
          {
            if ( (unsigned int)v11 > (unsigned int)v18
              || ((v34 = *(_BYTE *)(a1 + 419), v56 = *(unsigned int *)(a1 + 420), !v34)
                ? (v13 = v11 / v18,
                   v36 = v11 / v18 + ((unsigned int)(v11 % v18) + v18 + (unsigned int)(v12 % v18) - 1LL) / v18)
                : (v35 = v18 - 1,
                   v13 = ((unsigned int)v11 & v35) - 1LL,
                   v36 = (v11 >> v34) + ((v13 + ((unsigned int)v12 & v35) + v56) >> v34)),
                  LODWORD(v9) = 0,
                  v36 > 1) )
            {
LABEL_56:
              v21 = NvmeSplitIoParallel(a1, a2, v53, v11, v12, v17, CurrentProcessorNumber, 0LL, 0LL, 0LL);
              goto LABEL_20;
            }
          }
          if ( _bittest64((const signed __int64 *)(v10 + 136), 0x20u) )
          {
            if ( ((v11
                 + 4095
                 + ((*(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) + *(_DWORD *)(*(_QWORD *)(a2 + 8) + 44LL)) & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL) > 0x2000 )
            {
              v9 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v10 + 880) + 8 * CurrentProcessorNumber));
              if ( !v9 )
              {
                NewNVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(
                                              *(_QWORD *)(a1 + 16),
                                              (unsigned int)CurrentProcessorNumber);
                LODWORD(v9) = NewNVMePrpListBufferEntry;
                if ( !NewNVMePrpListBufferEntry )
                {
                  NvmeNamespaceQueueIo(a1, a2, (unsigned int)CurrentProcessorNumber);
                  v5 = -2147483631;
                  goto LABEL_21;
                }
              }
              v12 = v54;
            }
            v19 = *(_QWORD *)(a1 + 16);
            if ( (*(_BYTE *)(v19 + 136) & 2) != 0 )
              v20 = *(_QWORD *)(v19 + 728) + 192 * CurrentProcessorNumber;
            else
              LODWORD(v20) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v19 + 872) + 2 * CurrentProcessorNumber)
                           + *(_DWORD *)(v19 + 728)
                           - 192;
            v21 = NvmeSubmitIoToSQ(a1, a2, v20, (_DWORD)v9, CurrentProcessorNumber, 0, v11, v12, v14, v16, v53, 0LL);
LABEL_20:
            v5 = v21;
LABEL_21:
            if ( v5 == -2147483631 )
              return 259;
            if ( v5 == 259 )
              return v5;
            goto LABEL_70;
          }
          NVMeSGLBufferContext = GetNVMeSGLBufferContext(v10, (unsigned int)CurrentProcessorNumber, v13);
          v56 = NVMeSGLBufferContext;
          v38 = NVMeSGLBufferContext;
          if ( NVMeSGLBufferContext )
          {
            *(_QWORD *)(NVMeSGLBufferContext + 40) = a2;
            v40 = *(_BYTE *)(NVMeSGLBufferContext + 126);
            *(_QWORD *)(v38 + 104) = v14;
            *(_BYTE *)(v38 + 126) = v53 | v40 & 0xFE;
            *(_QWORD *)(v38 + 96) = v54;
            *(_QWORD *)(v38 + 32) = a1;
            *(_DWORD *)(v38 + 112) = v16;
            *(_DWORD *)(v38 + 116) = v11;
            *(_QWORD *)(v38 + 64) = 0LL;
            *(_QWORD *)(v38 + 72) = 0LL;
            *(_QWORD *)(v38 + 56) = *(_QWORD *)(v2 + 24);
            v41 = *(_QWORD *)(v2 + 8);
            *(_QWORD *)(v2 + 24) = v38;
            *(_QWORD *)(v38 + 48) = v41;
            *(_QWORD *)(v38 + 80) = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL)
                                  + *(unsigned int *)(*(_QWORD *)(a2 + 8) + 44LL);
            *(_QWORD *)(v2 + 8) = 0xFEDCBA9000000000uLL;
            v42 = *(_QWORD *)(a2 + 8);
            v43 = *(unsigned __int16 *)(v38 + 124);
            v44 = *(_QWORD *)(v38 + 16);
            v55 = *(_QWORD *)(v38 + 80);
            v57 = *(_QWORD *)(a1 + 16);
            v45 = KfRaiseIrql(2u);
            v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _DWORD, __int64 (__fastcall *)(), __int64, _BYTE, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v57 + 128) + 1160LL) + 8LL) + 112LL))(
                   *(_QWORD *)(*(_QWORD *)(v57 + 128) + 1160LL),
                   *(_QWORD *)(*(_QWORD *)(v57 + 128) + 8LL),
                   v42,
                   v55,
                   v11,
                   NvmeContinueScatterGatherProcessIO,
                   v56,
                   v53 ^ 1u,
                   v44,
                   v43);
            if ( v5 == -1073741789 )
            {
              LOBYTE(v52) = v53 ^ 1;
              v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _DWORD, __int64 (__fastcall *)(), __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v57 + 128) + 1160LL) + 8LL) + 88LL))(
                     *(_QWORD *)(*(_QWORD *)(v57 + 128) + 1160LL),
                     *(_QWORD *)(*(_QWORD *)(v57 + 128) + 8LL),
                     v42,
                     v55,
                     v11,
                     NvmeContinueScatterGatherProcessIO,
                     v56,
                     v52);
            }
            if ( v45 < 2u )
              KeLowerIrql(v45);
            if ( (v5 & 0x80000000) == 0 )
              return 259;
            LOBYTE(v46) = 1;
            FreeNVMeSGLBufferContext(*(_QWORD *)(a1 + 16), v56, v46);
            goto LABEL_21;
          }
          v5 = -1073741670;
        }
      }
      else
      {
        v5 = 0;
      }
LABEL_70:
      v47 = *(_QWORD *)(a1 + 128);
      if ( !*(_BYTE *)v47
        && _InterlockedExchangeAdd(
             *(volatile signed __int32 **)(*(_QWORD *)(v47 + 24) + 8 * CurrentProcessorNumber),
             0xFFFFFFFF) == 1 )
      {
        v48 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
        if ( (unsigned __int8)NvmeNamespaceCheckAndAcquirePoFx(a1) )
        {
          PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), 0LL, 2LL);
          NvmeNamespaceReleasePoFx(a1);
        }
        v49 = *(_QWORD *)(v48 + 160);
        if ( *(_BYTE *)v49 == 1 )
          PoFxIdleComponent(**(_QWORD **)(v49 + 8), 0LL, 2LL);
      }
      return v5;
    }
    _interlockedbittestandset(v8, 2u);
  }
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( (int)IoGetIoAttributionHandle(a2, &v56) >= 0 )
  {
    v50 = *(unsigned __int8 **)(a2 + 184);
    v51 = v56;
    v58 = 0LL;
    LODWORD(v58) = 1;
    v59 = 0LL;
    DWORD1(v58) = *v50 | 0x300;
    *((_QWORD *)&v59 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v59 + 1);
    IoRecordIoAttribution(v51, &v58);
  }
  StorPushRequestToDeviceQueue(v8, (unsigned int)CurrentProcessorNumber, a2);
  if ( !_InterlockedCompareExchange(*(volatile signed __int32 **)&v8[2 * CurrentProcessorNumber + 6], 1, 0) )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 952));
  return v5;
}
