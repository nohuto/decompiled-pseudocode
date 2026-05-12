/*
 * XREFs of StorPortUnitIdleState @ 0x14002C7E0
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x140010118 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     RaMiniportIsFeatureSupported @ 0x14005073C (RaMiniportIsFeatureSupported.c)
 *     McTemplateK0pquuuqq_EtwWriteTransfer @ 0x1400584C4 (McTemplateK0pquuuqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall StorPortUnitIdleState(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r14
  int v6; // r8d
  __int64 v7; // r9
  __int64 *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // edx
  unsigned int v12; // edx
  __int64 *v13; // rdx
  unsigned int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // r8d
  __int64 v18; // rdi
  void *v19; // rdx
  __int64 v20; // rbp
  char v21; // r13
  char v22; // r15
  char v23; // r12
  __int64 v24; // rdi
  __int64 v25; // rdx
  int *v26; // rcx
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rcx
  __int64 v30; // rdx
  int *v31; // rcx
  int v32; // eax
  __int64 v33; // rbp
  char v34; // r13
  char v35; // r15
  char v36; // r12
  __int64 v37; // rdi
  __int64 v38; // rcx
  int *v39; // rdx
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // rdx
  __int64 v43; // rdx
  int *v44; // rcx
  int v45; // eax
  int v46; // eax
  _DWORD *v47; // rcx
  int v48; // eax
  _DWORD *v49; // rcx
  unsigned __int64 v50; // rdx
  _DWORD *v51; // rax
  __int64 v52; // r12
  __int64 v53; // r13
  __int64 v54; // r10
  __int64 v55; // r11
  _DWORD *v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r8
  int *v60; // rcx
  int v61; // eax
  _DWORD *v62; // rcx
  int v63; // eax
  int v64; // eax
  _DWORD *v65; // rcx
  __int64 v66; // rcx
  _DWORD *v67; // rax
  _DWORD *v68; // rdi
  __int64 v69; // rdi
  KSPIN_LOCK *v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  void (__fastcall *v73)(__int64, __int64, struct _KLOCK_QUEUE_HANDLE *); // rax
  __int64 v74; // rcx
  __int64 v75; // rcx
  unsigned int v76; // r9d
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  v4 = a2;
  if ( (*(_DWORD *)(a1 + 504) & 0x8000) != 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864)) )
  {
    if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
      McTemplateK0pquuuqq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitIdleStateStart,
        v6,
        **(_QWORD **)(a1 + 1872),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 104),
        *(_BYTE *)(a1 + 105),
        *(_BYTE *)(a1 + 106),
        v4,
        a3);
    v7 = 0LL;
    v8 = (__int64 *)(a1 + 1872);
    if ( a3 )
    {
      v10 = *v8;
      *(_QWORD *)(a1 + 2136) = MEMORY[0xFFFFF78000000008];
      v11 = *(_DWORD *)(v10 + 32);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 108LL) & 1) != 0 )
        v12 = v11 | 0x40;
      else
        v12 = v11 & 0xFFFFFFBF;
      *(_DWORD *)(v10 + 32) = v12;
      v7 = 0LL;
    }
    else
    {
      ++*(_DWORD *)(a1 + 2188);
      v9 = *(_QWORD *)(a1 + 2136);
      if ( v9 )
      {
        if ( (*(_DWORD *)(*v8 + 32) & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 108LL) & 1) != 0 )
        {
          v50 = (MEMORY[0xFFFFF78000000008] - v9) / 0x2710uLL;
          *(_QWORD *)(a1 + 2144) += v50;
          if ( v50 >= 0x2710 )
            ++*(_DWORD *)(a1 + 2196);
        }
        *(_QWORD *)(a1 + 2136) = 0LL;
      }
    }
    *(_DWORD *)(*v8 + 16) = a3;
    v13 = (__int64 *)(a1 + 24);
    if ( !*(_DWORD *)(a1 + 1040) || !a3 )
    {
LABEL_13:
      v14 = 1;
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 4) == 0 )
        goto LABEL_14;
      v51 = *(_DWORD **)(a1 + 24);
      v52 = 256LL;
      v53 = 264LL;
      v54 = 272LL;
      v55 = 280LL;
      if ( *v51 == 1094997074 )
      {
        v56 = v51 + 94;
        v57 = (__int64)(v51 + 158);
        v58 = (__int64)(v51 + 160);
        v59 = (__int64)(v51 + 162);
        v7 = (__int64)(v51 + 164);
      }
      else if ( *v51 == 1314275652 )
      {
        v56 = v51 + 42;
        v57 = (__int64)(v51 + 106);
        v58 = (__int64)(v51 + 108);
        v59 = (__int64)(v51 + 110);
        v7 = (__int64)(v51 + 112);
      }
      else
      {
        v56 = 0LL;
        v57 = 256LL;
        v58 = 264LL;
        v59 = 272LL;
        v7 = 280LL;
      }
      if ( **((_DWORD **)v56 + 29) != 208 )
        goto LABEL_14;
      if ( (v56[62] & 0x10) == 0 )
      {
        *(_QWORD *)v57 = 0LL;
        *(_QWORD *)v58 = 0LL;
        *(_QWORD *)v59 = 0LL;
        *(_QWORD *)v7 = 0LL;
        v56[63] = 12;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v56, 0LL) )
          v56[63] = 13;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v74, 1LL) )
          v56[63] = 14;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v77, 4LL) )
          v56[63] = 15;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v78, 11LL) )
          v56[72] = 16;
        if ( (*(_DWORD *)(*((_QWORD *)v56 + 29) + 184LL) & 0x20000) != 0 )
          v56[63] = 17;
        if ( (unsigned __int8)RaMiniportIsFeatureSupported(v79, 14LL) )
          v56[63] = 32;
        if ( (int)RaCallMiniportUnitControl(v80, 0LL, v56 + 63) < 0 )
          goto LABEL_14;
        v56[62] |= 0x10u;
        v54 = 272LL;
        v55 = 280LL;
      }
      if ( *((_BYTE *)v56 + 263) )
      {
        v60 = *(int **)(*(_QWORD *)(a1 + 1872) + 8LL);
        v61 = *v60;
        if ( *v60 == 1 )
        {
          if ( (unsigned int)v4 >= v60[2] )
            goto LABEL_152;
          v62 = v60 + 4;
        }
        else
        {
          if ( v61 != 2 && v61 != 3 || (unsigned int)v4 >= v60[2] )
            goto LABEL_152;
          v62 = v60 + 6;
        }
        v65 = &v62[16 * v4];
        if ( v65 && *v65 == 2 )
          v14 = v65[8];
LABEL_152:
        v66 = *(_QWORD *)(a1 + 24);
        v7 = 1LL;
        if ( (*(_BYTE *)(v66 + 112) & 0x40) != 0 )
          v14 = 1;
        if ( a3 <= v14
          && *(_QWORD *)(v66 + 5024)
          && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3616), 1, 0) )
        {
          v69 = *(_QWORD *)(a1 + 24);
          if ( (*(_BYTE *)(v69 + 108) & 1) != 0 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(v69 + 5344));
            if ( (*(_BYTE *)(v69 + 108) & 2) != 0 )
              _InterlockedIncrement64((volatile signed __int64 *)(v69 + 5352));
          }
          PoFxActivateComponent(**(_QWORD **)(v69 + 5024), 0LL, 0LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v69 + 5024) + 20LL) & 1) == 0 )
          {
            v70 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 24) + 80LL);
            memset(&LockHandle, 0, sizeof(LockHandle));
            KeAcquireInStackQueuedSpinLock(v70, &LockHandle);
            v71 = *(_QWORD *)(a1 + 24);
            if ( *(int *)(v71 + 348) > 1 )
            {
              *(_BYTE *)(a1 + 2040) = 1;
              *(_DWORD *)(a1 + 2044) = a3;
              ExpInterlockedPushEntrySList((PSLIST_HEADER)(v71 + 5008), (PSLIST_ENTRY)(a1 + 2064));
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              if ( !StorEtwLoggingEnabled || (byte_140173442 & 0x10) == 0 )
                goto LABEL_18;
              v19 = &EventUnitIdleStateQueued;
              goto LABEL_218;
            }
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
          v7 = 1LL;
          v55 = 280LL;
          v54 = 272LL;
        }
        v67 = *(_DWORD **)(a1 + 24);
        if ( *v67 == 1094997074 )
        {
          v68 = v67 + 94;
          v52 = (__int64)(v67 + 158);
          v53 = (__int64)(v67 + 160);
          v54 = (__int64)(v67 + 162);
          v55 = (__int64)(v67 + 164);
        }
        else if ( *v67 == 1314275652 )
        {
          v68 = v67 + 42;
          v52 = (__int64)(v67 + 106);
          v53 = (__int64)(v67 + 108);
          v54 = (__int64)(v67 + 110);
          v55 = (__int64)(v67 + 112);
        }
        else
        {
          v68 = 0LL;
        }
        if ( **((_DWORD **)v68 + 29) != 208 )
        {
LABEL_159:
          if ( a3 > v14 )
          {
            v16 = 0LL;
            if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 5024LL)
              || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3616), 0, 1) != 1 )
            {
LABEL_16:
              if ( !*(_DWORD *)(a1 + 1040) || a3 )
              {
LABEL_17:
                PoFxCompleteIdleState(**(_QWORD **)(a1 + 1872), (unsigned int)v4, v16, v7);
                if ( !StorEtwLoggingEnabled || (byte_140173442 & 0x10) == 0 )
                  goto LABEL_18;
                v19 = &EventUnitIdleStateStop;
LABEL_218:
                McTemplateK0pquuuqq_EtwWriteTransfer(
                  *(_QWORD *)(a1 + 24),
                  (_DWORD)v19,
                  v17,
                  **(_QWORD **)(a1 + 1872),
                  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
                  *(_BYTE *)(a1 + 104),
                  *(_BYTE *)(a1 + 105),
                  *(_BYTE *)(a1 + 106),
                  v4,
                  a3);
LABEL_18:
                ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
                return;
              }
              v20 = *(_QWORD *)(a1 + 24);
              v21 = 1;
              v22 = 1;
              v23 = 1;
              v24 = *(_QWORD *)(v20 + 5080);
              if ( *(char *)(v20 + 108) < 0 )
                goto LABEL_37;
              if ( *(_DWORD *)(v20 + 348) == 4 && !*(_DWORD *)(v20 + 100) )
              {
                v63 = *(_DWORD *)(v20 + 392);
                if ( v63 == 5 || v63 == 17 )
                  goto LABEL_37;
                if ( (*(_BYTE *)(v20 + 107) & 0x50) == 0x50 )
                {
                  v21 = 0;
                  goto LABEL_38;
                }
              }
              v25 = *(_QWORD *)(v20 + 5024);
              if ( !v25 )
                goto LABEL_44;
              v26 = *(int **)(v25 + 8);
              v27 = *v26;
              if ( *v26 == 1 )
              {
                v28 = v26[2];
                v29 = v26 + 4;
                if ( !v28 )
                  v29 = 0LL;
              }
              else
              {
                if ( v27 != 2 && v27 != 3 || !v26[2] )
                  goto LABEL_37;
                v29 = v26 + 6;
              }
              if ( v29 )
              {
                if ( *v29 < 2u )
                {
                  if ( *v29 == 1 && (*(_BYTE *)(v20 + 107) & 0x40) != 0 && *(_DWORD *)(v25 + 16) )
                  {
                    v21 = 0;
                    goto LABEL_38;
                  }
                }
                else if ( *(_DWORD *)(v25 + 16) > v29[9] )
                {
                  v21 = 0;
                  goto LABEL_38;
                }
LABEL_44:
                if ( !v24
                  || (*(_BYTE *)(v24 + 506) & 4) != 0
                  || *(_DWORD *)(v24 + 548) == 4 && !*(_DWORD *)(v24 + 1044) && (*(_BYTE *)(v24 + 505) & 0x44) == 0x44 )
                {
                  v22 = 0;
                  goto LABEL_38;
                }
                if ( (*(_DWORD *)(v24 + 504) & 0x8000) == 0
                  || !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v24 + 1864)) )
                {
LABEL_83:
                  *(_BYTE *)(v20 + 4957) = v21;
                  if ( v24 )
                  {
                    *(_BYTE *)(v24 + 1862) = v22;
                    *(_BYTE *)(v24 + 1863) = v23;
                  }
                  goto LABEL_17;
                }
                v30 = *(_QWORD *)(v24 + 1872);
                v31 = *(int **)(v30 + 8);
                v32 = *v31;
                if ( *v31 == 1 )
                {
                  v46 = v31[2];
                  v47 = v31 + 4;
                  if ( !v46 )
                    v47 = 0LL;
                }
                else
                {
                  if ( v32 != 2 && v32 != 3 || !v31[2] )
                    goto LABEL_52;
                  v47 = v31 + 6;
                }
                if ( v47 )
                {
                  if ( *v47 >= 2u )
                  {
                    if ( *(_DWORD *)(v30 + 16) > v47[9] )
                      v22 = 0;
                  }
                  else if ( *v47 == 1 && (*(_BYTE *)(v24 + 505) & 0x40) != 0 && *(_DWORD *)(v30 + 16) )
                  {
                    goto LABEL_52;
                  }
LABEL_82:
                  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v24 + 1864));
                  if ( v22 )
                    goto LABEL_83;
LABEL_38:
                  v23 = 0;
                  goto LABEL_83;
                }
LABEL_52:
                v22 = 0;
                goto LABEL_82;
              }
LABEL_37:
              v21 = 0;
              goto LABEL_38;
            }
            RaidAdapterPoFxIdleComponent(*(_QWORD *)(a1 + 24), 0LL, 0LL);
          }
LABEL_15:
          v16 = 0LL;
          goto LABEL_16;
        }
        if ( (v68[62] & 0x10) == 0 )
        {
          *(_QWORD *)v52 = 0LL;
          *(_QWORD *)v53 = 0LL;
          *(_QWORD *)v54 = 0LL;
          *(_QWORD *)v55 = 0LL;
          v68[63] = 12;
          if ( (unsigned __int8)RaMiniportIsFeatureSupported(v68, 0LL) )
            v68[63] = 13;
          if ( (unsigned __int8)RaMiniportIsFeatureSupported(v75, v76) )
            v68[63] = 14;
          if ( (unsigned __int8)RaMiniportIsFeatureSupported(v81, 4LL) )
            v68[63] = 15;
          if ( (unsigned __int8)RaMiniportIsFeatureSupported(v82, 11LL) )
            v68[72] = 16;
          if ( (*(_DWORD *)(*((_QWORD *)v68 + 29) + 184LL) & 0x20000) != 0 )
            v68[63] = 17;
          if ( (unsigned __int8)RaMiniportIsFeatureSupported(v83, 14LL) )
            v68[63] = 32;
          if ( (int)RaCallMiniportUnitControl(v84, 0LL, v68 + 63) < 0 )
            goto LABEL_159;
          v68[62] |= 0x10u;
          v7 = 1LL;
        }
        if ( *((_BYTE *)v68 + 263) )
        {
          v72 = *(_QWORD *)(a1 + 24);
          LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)0x1800000001LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
          *(_DWORD *)&LockHandle.OldIrql = v4;
          *((_DWORD *)&LockHandle.OldIrql + 1) = a3;
          v73 = *(void (__fastcall **)(__int64, __int64, struct _KLOCK_QUEUE_HANDLE *))(*(_QWORD *)(v72 + 608) + 200LL);
          if ( v73 )
          {
            v73(*(_QWORD *)(v72 + 616) + 16LL, 7LL, &LockHandle);
            Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline();
          }
        }
        goto LABEL_159;
      }
LABEL_14:
      v15 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v15 + 110) & 0x40) != 0
        && (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 0x1000) != 0
        && *(_QWORD *)(v15 + 5024) )
      {
        if ( a3 )
        {
          v16 = 0LL;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3616), 0, 1) != 1 )
            goto LABEL_16;
          PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 5024LL), 0LL, 0LL);
        }
        else if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3616), 1, 0) )
        {
          v18 = *(_QWORD *)(a1 + 24);
          if ( (*(_BYTE *)(v18 + 108) & 1) != 0 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(v18 + 5344));
            if ( (*(_BYTE *)(v18 + 108) & 2) != 0 )
              _InterlockedIncrement64((volatile signed __int64 *)(v18 + 5352));
          }
          PoFxActivateComponent(**(_QWORD **)(v18 + 5024), 0LL, 0LL);
        }
      }
      goto LABEL_15;
    }
    v33 = *v13;
    v34 = 1;
    v35 = 1;
    v36 = 1;
    v37 = *(_QWORD *)(*v13 + 5080);
    if ( *(char *)(*v13 + 108) < 0 )
      goto LABEL_60;
    if ( *(_DWORD *)(v33 + 348) == 4 && !*(_DWORD *)(v33 + 100) )
    {
      v64 = *(_DWORD *)(v33 + 392);
      if ( v64 == 5 || v64 == 17 )
        goto LABEL_60;
      if ( (*(_BYTE *)(v33 + 107) & 0x50) == 0x50 )
      {
        v34 = 0;
        goto LABEL_61;
      }
    }
    v38 = *(_QWORD *)(v33 + 5024);
    if ( !v38 )
      goto LABEL_67;
    v39 = *(int **)(v38 + 8);
    v40 = *v39;
    if ( *v39 == 1 )
    {
      v41 = v39[2];
      v42 = v39 + 4;
      if ( !v41 )
        v42 = 0LL;
    }
    else
    {
      if ( v40 != 2 && v40 != 3 || !v39[2] )
        goto LABEL_60;
      v42 = v39 + 6;
    }
    if ( v42 )
    {
      if ( *v42 < 2u )
      {
        if ( *v42 == 1 && (*(_BYTE *)(v33 + 107) & 0x40) != 0 && *(_DWORD *)(v38 + 16) )
        {
          v34 = 0;
          goto LABEL_61;
        }
      }
      else if ( *(_DWORD *)(v38 + 16) > v42[9] )
      {
        v34 = 0;
        goto LABEL_61;
      }
LABEL_67:
      if ( !v37
        || (*(_BYTE *)(v37 + 506) & 4) != 0
        || *(_DWORD *)(v37 + 548) == 4 && !*(_DWORD *)(v37 + 1044) && (*(_BYTE *)(v37 + 505) & 0x44) == 0x44 )
      {
        v35 = 0;
        goto LABEL_61;
      }
      if ( (*(_DWORD *)(v37 + 504) & 0x8000) == 0
        || !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v37 + 1864)) )
      {
LABEL_92:
        *(_BYTE *)(v33 + 4957) = v34;
        if ( v37 )
        {
          *(_BYTE *)(v37 + 1862) = v35;
          *(_BYTE *)(v37 + 1863) = v36;
        }
        goto LABEL_13;
      }
      v43 = *(_QWORD *)(v37 + 1872);
      v44 = *(int **)(v43 + 8);
      v45 = *v44;
      if ( *v44 == 1 )
      {
        v48 = v44[2];
        v49 = v44 + 4;
        if ( !v48 )
          v49 = 0LL;
      }
      else
      {
        if ( v45 != 2 && v45 != 3 || !v44[2] )
          goto LABEL_75;
        v49 = v44 + 6;
      }
      if ( v49 )
      {
        if ( *v49 >= 2u )
        {
          if ( *(_DWORD *)(v43 + 16) > v49[9] )
            v35 = 0;
        }
        else if ( *v49 == 1 && (*(_BYTE *)(v37 + 505) & 0x40) != 0 && *(_DWORD *)(v43 + 16) )
        {
          goto LABEL_75;
        }
LABEL_91:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v37 + 1864));
        if ( v35 )
          goto LABEL_92;
LABEL_61:
        v36 = 0;
        goto LABEL_92;
      }
LABEL_75:
      v35 = 0;
      goto LABEL_91;
    }
LABEL_60:
    v34 = 0;
    goto LABEL_61;
  }
}
