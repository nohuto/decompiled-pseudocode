/*
 * XREFs of VidSchiSendToExecutionQueue @ 0x1400224B0
 * Callers:
 *     VidSchiSendToExecutionQueueWithWait @ 0x1400EA9F0 (VidSchiSendToExecutionQueueWithWait.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     VidSchiFillSubmitCommandDataVirtual @ 0x140020D50 (VidSchiFillSubmitCommandDataVirtual.c)
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x14002B678 (McTemplateK0piixqq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiFillSubmitCommandData @ 0x14003ECB8 (VidSchiFillSubmitCommandData.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x14004992C (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     ?ValidateMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x14004CFF0 (-ValidateMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchIsVSyncEnabled @ 0x1400FDD40 (VidSchIsVSyncEnabled.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiSendToExecutionQueue(__int64 a1, char a2)
{
  __int64 v2; // r13
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r14
  _BYTE *v9; // rbx
  const char *v10; // rdx
  __int64 v11; // rax
  _BYTE *v12; // rcx
  char v13; // al
  int v14; // ecx
  KIRQL v15; // r12
  __int64 v16; // rbx
  LARGE_INTEGER PerformanceCounter; // r8
  LARGE_INTEGER v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  LARGE_INTEGER *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  signed __int32 v31; // r14d
  __int64 v32; // rcx
  __int64 v33; // rax
  char v34; // r14
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r8
  bool v38; // al
  __int64 v39; // rcx
  const char *ProcessImageFileName; // rax
  unsigned int j; // r12d
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned int v60; // r14d
  unsigned int i; // r8d
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // ecx
  int v65; // r8d
  __int64 v66; // r8
  KIRQL v67; // [rsp+50h] [rbp-B0h] BYREF
  char v68; // [rsp+51h] [rbp-AFh]
  int v69; // [rsp+54h] [rbp-ACh]
  __int64 v70; // [rsp+58h] [rbp-A8h]
  __int64 v71; // [rsp+60h] [rbp-A0h]
  __int64 v72; // [rsp+68h] [rbp-98h]
  _DWORD v73[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v74; // [rsp+78h] [rbp-88h]
  __int64 v75; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-78h] BYREF
  __int128 v77; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v78; // [rsp+B0h] [rbp-50h]
  __int128 v79; // [rsp+C0h] [rbp-40h]
  __int128 v80; // [rsp+D0h] [rbp-30h]
  __int128 v81; // [rsp+E0h] [rbp-20h]
  __int128 v82; // [rsp+F0h] [rbp-10h]
  _QWORD v83[16]; // [rsp+100h] [rbp+0h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v68 = a2;
  v4 = *(_QWORD *)(v2 + 104);
  v5 = *(_QWORD *)(v2 + 96);
  v70 = v4;
  v6 = *(_QWORD *)(v5 + 24);
  v72 = *(_QWORD *)(v4 + 48);
  v77 = 0LL;
  v69 = 0;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v7 = 56LL * *(unsigned int *)(v5 + 512);
  v71 = *(unsigned int *)(v5 + 512);
  v8 = v5 + v7;
  v9 = (_BYTE *)(v8 + 528);
  if ( v4 == *(_QWORD *)(*(_QWORD *)(v4 + 40) + 264LL) )
  {
    v10 = "System";
  }
  else
  {
    v39 = *(_QWORD *)(v4 + 48);
    if ( v39 && *(_QWORD *)(v39 + 8) )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v39 + 2656));
      v10 = ProcessImageFileName;
      if ( !ProcessImageFileName || !*ProcessImageFileName )
      {
        *v9 = 0;
        goto LABEL_10;
      }
    }
    else
    {
      v10 = "Unknown";
    }
  }
  v11 = 16LL;
  do
  {
    if ( v11 == -2147483630 )
      break;
    if ( !*v10 )
      break;
    *v9++ = *v10++;
    --v11;
  }
  while ( v11 );
  v12 = v9 - 1;
  if ( v11 )
    v12 = v9;
  *v12 = 0;
LABEL_10:
  v13 = v71 + 1;
  *(_OWORD *)(v8 + 544) = *(_OWORD *)(a1 + 72);
  *(_OWORD *)(v8 + 560) = *(_OWORD *)(a1 + 88);
  *(_QWORD *)(v8 + 576) = *(_QWORD *)(a1 + 104);
  *(_DWORD *)(v5 + 512) = v13 & 0xF;
  v14 = *(_DWORD *)(a1 + 92);
  if ( (v14 & 4) != 0 )
  {
    v56 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v56 + 72) & 0x4000) != 0
      && ((*(_DWORD *)(v4 + 56) & 2) != 0 || *(int *)(v56 + 400) >= 4 || *(_BYTE *)(v6 + 164)) )
    {
      *(_DWORD *)(a1 + 92) = v14 | 0x200;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 876));
      VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v6, *(_DWORD *)(*(_QWORD *)(a1 + 56) + 168LL));
    }
  }
  v67 = KfRaiseIrql(2u);
  v15 = v67;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 2016), &LockHandle);
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 && (*(_DWORD *)(v16 + 64) & 0x80u) != 0 )
    goto LABEL_104;
  while ( 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 3020));
    *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(a1 + 72) = 9;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 792));
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v18 = PerformanceCounter;
    v16 = *(_QWORD *)(v5 + 184) + 112LL * *(unsigned int *)(v5 + 196);
    *(_OWORD *)v16 = 0LL;
    *(_OWORD *)(v16 + 16) = 0LL;
    *(_OWORD *)(v16 + 32) = 0LL;
    *(_OWORD *)(v16 + 48) = 0LL;
    *(_OWORD *)(v16 + 64) = 0LL;
    *(_OWORD *)(v16 + 80) = 0LL;
    *(_OWORD *)(v16 + 96) = 0LL;
    *(_DWORD *)(v5 + 196) = (*(_DWORD *)(v5 + 196) + 1) & (*(_DWORD *)(v5 + 192) - 1);
    if ( !PerformanceCounter.QuadPart )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)(v16 + 8) = PerformanceCounter;
    if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 3016)) == 1 )
    {
      v19 = *(unsigned int *)(v2 + 412);
      v20 = gulPriorityToYieldPriorityBand[v19];
      if ( gulPriorityToYieldPriorityBand[v19] )
      {
        v21 = (LARGE_INTEGER *)(v5 + 2056 + 8 * v20);
        do
        {
          if ( v21[-4].QuadPart )
            *v21 = v18;
          --v21;
          --v20;
        }
        while ( v20 );
      }
    }
    if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 796)) == 1 )
    {
      if ( v70 == *(_QWORD *)(v6 + 264) )
        VidSchiUpdateContextStatus(v2, 1, 6813LL);
      *(_DWORD *)(v2 + 192) |= 2u;
      v36 = *(unsigned int *)(v2 + 412);
      if ( ++*(_DWORD *)(v5 + 4 * v36 + 1896) == 1 )
        *(_DWORD *)(v5 + 1892) |= 1 << *(_DWORD *)(v2 + 412);
      v69 = 1;
    }
    if ( *(_DWORD *)(a1 + 88) == 3 )
      break;
    v22 = *(_QWORD *)(a1 + 56);
    LOBYTE(v23) = 0;
    if ( !v22 )
      goto LABEL_28;
    VidSchiProfilePerformanceTick(6, v6, 0, 0, 0LL, v22, 0LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 9;
    if ( (*(_DWORD *)(a1 + 92) & 0x10) == 0
      || (v57 = *(_QWORD *)(a1 + 56),
          v58 = *(unsigned int *)(v57 + 168),
          v59 = *(int *)(*(_QWORD *)(v6 + 8 * v58 + 3448) + 4LL),
          (_DWORD)v59 != 3)
      && (_DWORD)v59 != 5 )
    {
      v24 = *(_QWORD *)(a1 + 56);
      v25 = *(_QWORD *)(v24 + 88);
      v26 = *(_QWORD *)(v25 + 168);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v24 + 112);
        if ( v27 <= v26 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 1792LL, v27, v26, 0LL);
          WdLogGlobalForLineNumber = 916;
          goto LABEL_109;
        }
      }
      *(_QWORD *)(v25 + 160) = *(_QWORD *)(v24 + 112);
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) |= 8u;
LABEL_28:
      if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
        VidSchiFillSubmitCommandDataVirtual(a1, (__int64)&v77);
      else
        VidSchiFillSubmitCommandData(a1, &v77);
      _InterlockedExchange64((volatile __int64 *)(v5 + 152), *(_QWORD *)(a1 + 104));
      v28 = *(_QWORD *)(a1 + 56);
      if ( v28 )
        v29 = *(_QWORD *)(v28 + 112);
      else
        v29 = 0LL;
      WdLogSingleEntry5(4LL, a1, *(_QWORD *)(a1 + 104), v28, *(int *)(a1 + 88), v29);
      WdLogGlobalForLineNumber = 7024;
      goto LABEL_33;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 3072LL, v57, v58, v59);
    WdLogGlobalForLineNumber = 916;
LABEL_104:
    v60 = *(_DWORD *)(v16 + 480);
    memset(v83, 0, sizeof(v83));
    for ( i = 0; i < v60; v83[v62] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * v62 + 488) + 96LL) + 48LL) )
    {
      if ( i >= 0x10 )
        break;
      v62 = i++;
    }
    v73[0] = v60;
    v73[1] = 0;
    v74 = v83;
    v63 = *(_QWORD *)(v6 + 16);
    v75 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 104) + 48LL) + 8LL);
    DXGADAPTER::ValidateMockDriverState(v63, 1LL, v73);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 3028));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 3032));
  for ( j = *(_DWORD *)(v5 + 1576); j != *(_DWORD *)(v5 + 1568); j = ((_BYTE)j + 1) & 0xF )
  {
    v55 = *(_QWORD *)(v5 + 8LL * j + 1584);
    v71 = v55;
    if ( (*(_DWORD *)(v55 + 192) & 8) == 0 )
    {
      VidSchiUpdateContextStatus(v55, 2, 6874LL);
      if ( j == *(_DWORD *)(v5 + 1576) && !*(_QWORD *)(v71 + 512) )
        *(LARGE_INTEGER *)(v71 + 512) = v18;
    }
  }
  *(_QWORD *)(v5 + 392) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)(v5 + 352));
  v42 = *(unsigned __int16 *)(v5 + 4);
  v43 = *(_QWORD *)(v6 + 696);
  if ( (unsigned int)v42 < *(_DWORD *)(v6 + 768) )
    v43 += 8 * v42;
  ++*(_QWORD *)(*(_QWORD *)v43 + 104LL);
  v44 = (__int64 *)(*(_QWORD *)(v6 + 696) + 8 * v42);
  if ( (unsigned int)v42 >= *(_DWORD *)(v6 + 768) )
    v44 = *(__int64 **)(v6 + 696);
  v45 = *v44;
  v46 = *(_QWORD *)(a1 + 48);
  v47 = *(_QWORD *)(v45 + 104);
  *(_QWORD *)(a1 + 104) = v47;
  v48 = *(_QWORD *)(v46 + 96);
  v49 = *(_QWORD *)(v48 + 24);
  LODWORD(v77) = v47;
  v50 = *(unsigned __int16 *)(v48 + 4);
  v51 = *(_QWORD *)(v49 + 696);
  if ( (unsigned int)v50 < *(_DWORD *)(v49 + 768) )
    v51 += 8 * v50;
  DWORD1(v77) = *(unsigned __int16 *)(*(_QWORD *)v51 + 8LL);
  v52 = *(unsigned __int16 *)(v48 + 4);
  v53 = *(_QWORD *)(v49 + 696);
  if ( (unsigned int)v52 < *(_DWORD *)(v49 + 768) )
    v53 += 8 * v52;
  DWORD2(v77) = *(unsigned __int16 *)(*(_QWORD *)v53 + 6LL);
  _InterlockedExchange((volatile __int32 *)(v5 + 160), v47);
  RtlClearBitEx(v6 + 552, *(unsigned __int16 *)(v5 + 4));
  v15 = v67;
LABEL_33:
  v23 = *(unsigned int *)(v5 + 1568);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8 * v23 + 1584), v2, 0LL) )
    goto LABEL_34;
LABEL_109:
  WdLogSingleEntry2(1LL, v6, a1);
  WdLogGlobalForLineNumber = 7053;
  DxgkLogInternalTriageEvent(v64, 0x40000, v65, (unsigned int)L"Context queue is inconsistant", v6, a1, 0LL, 0LL);
LABEL_34:
  _InterlockedExchange((volatile __int32 *)(v5 + 1568), ((_BYTE)v23 + 1) & 0xF);
  if ( v69 )
  {
    v30 = *(_QWORD *)(v2 + 96);
    v67 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v30 + 24) + 32LL),
      VidSchiStartContextRunningTimeAtISR,
      v2,
      *(unsigned int *)(*(_QWORD *)(v30 + 24) + 40LL),
      &v67);
  }
  else if ( bTracingEnabled && (byte_14008A201 & 2) != 0 )
  {
    v54 = *(_QWORD *)(v2 + 56);
    if ( !v54 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v54) = v2;
    McTemplateK0piixqq_EtwWriteTransfer(
      *(_DWORD *)(v2 + 444),
      *(_QWORD *)(v5 + 2136),
      *(_QWORD *)(v2 + 448),
      v54,
      *(_QWORD *)(v2 + 456),
      *(_QWORD *)(v2 + 448),
      *(_QWORD *)(v5 + 2136),
      *(_DWORD *)(v2 + 444),
      3);
  }
  v31 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 444), 1, 0);
  VidSchiProfilePerformanceTick(7, v6, v5, 0, 0LL, 0LL, a1, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v32 = *(unsigned int *)(v5 + 1424);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 1440 + 8 * v32), a1, 0LL) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2048LL, v32, v5 + 1440 + 8 * v32, a1);
    WdLogGlobalForLineNumber = 916;
  }
  else
  {
    v2 = v70;
    v31 = 0;
    _InterlockedExchange((volatile __int32 *)(v5 + 1424), ((_BYTE)v32 + 1) & 0xF);
    if ( *(_DWORD *)(v6 + 3260) )
      goto LABEL_54;
    if ( !*(_BYTE *)(v2 + 212) && !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 208), 0, 0) )
      goto LABEL_40;
  }
  if ( !*(_DWORD *)(a1 + 88) )
    goto LABEL_54;
LABEL_40:
  v33 = *(_QWORD *)(a1 + 56);
  if ( v33 && (*(_DWORD *)(v33 + 76) & 0x80u) != 0 )
  {
LABEL_54:
    KeLowerIrql(v15);
    *(_DWORD *)v16 = 7;
    *(_QWORD *)(v16 + 16) = *(_QWORD *)(v5 + 152);
    *(_BYTE *)(v16 + 24) = *(_BYTE *)(v6 + 3284) & 1;
    *(_BYTE *)(v16 + 25) = *(_DWORD *)(v6 + 3260) != 0;
    v38 = *(_BYTE *)(v2 + 212) || _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 208), v31, 0);
    *(_BYTE *)(v16 + 26) = v38;
    if ( (*(_BYTE *)(v6 + 3284) & 1) != 0 )
      goto LABEL_57;
    goto LABEL_116;
  }
  *(_DWORD *)(a1 + 92) |= 0x20u;
  v34 = 1;
  ++*(_QWORD *)(v72 + 2840);
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    if ( *(_BYTE *)(v6 + 57) )
    {
      KeLowerIrql(v15);
      v34 = 0;
    }
    _InterlockedExchange((volatile __int32 *)(v5 + 504), 1);
    *(_DWORD *)(v5 + 176) = v77;
    *(_DWORD *)v16 = 3;
    *(_OWORD *)(v16 + 16) = v77;
    v35 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[31])(*(_QWORD *)(v6 + 8), &v77);
  }
  else
  {
    *(_QWORD *)(v5 + 168) = *(_QWORD *)(a1 + 104);
    if ( (*(_DWORD *)(a1 + 92) & 0x2000) != 0 )
    {
      KeLowerIrql(v15);
      v34 = 0;
      v35 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[56])(*(_QWORD *)(v6 + 8), &v77);
      *(_DWORD *)v16 = 2;
      *(_OWORD *)(v16 + 16) = v77;
      *(_OWORD *)(v16 + 32) = v78;
      *(_OWORD *)(v16 + 48) = v79;
      *(_OWORD *)(v16 + 64) = v80;
      *(_DWORD *)(v16 + 80) = v35;
    }
    else
    {
      v35 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[30])(*(_QWORD *)(v6 + 8), &v77);
      *(_DWORD *)v16 = 1;
      *(_OWORD *)(v16 + 16) = v77;
      *(_OWORD *)(v16 + 32) = v78;
      *(_OWORD *)(v16 + 48) = v79;
      *(_OWORD *)(v16 + 64) = v80;
      *(_OWORD *)(v16 + 80) = v81;
      *(_OWORD *)(v16 + 96) = v82;
    }
  }
  if ( !v35 )
    goto LABEL_46;
  if ( !v68 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2LL, v35, &v77, a1);
    WdLogGlobalForLineNumber = 916;
LABEL_116:
    if ( !*(_DWORD *)(v6 + 3260) )
    {
      LOBYTE(v37) = 1;
      goto LABEL_58;
    }
LABEL_57:
    v37 = 0LL;
LABEL_58:
    VidSchiCompletePendingCommandInNodeHwQueue(v5, *(_QWORD *)(v5 + 152), v37);
    return;
  }
  VidSchMarkDeviceAsError(v2, 19);
  LOBYTE(v66) = 1;
  VidSchiCompletePendingCommandInNodeHwQueue(v5, *(_QWORD *)(v5 + 152), v66);
  *(_QWORD *)(v5 + 72) = *(_QWORD *)(v5 + 152);
LABEL_46:
  ++*(_QWORD *)(v6 + 488);
  if ( v34 )
    KeLowerIrql(v15);
}
