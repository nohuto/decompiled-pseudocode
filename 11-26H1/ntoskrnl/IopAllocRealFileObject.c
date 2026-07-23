/*
 * XREFs of IopAllocRealFileObject @ 0x14090F390
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PsReleaseSiloHardReference @ 0x1403DEE00 (PsReleaseSiloHardReference.c)
 *     IopCheckInitiatorHint @ 0x14044CEE0 (IopCheckInitiatorHint.c)
 *     IopGetSetSpecificExtension @ 0x14044D490 (IopGetSetSpecificExtension.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     IoGetSilo @ 0x140459220 (IoGetSilo.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IopAllocateFileObjectExtensionSlow @ 0x1404652C0 (IopAllocateFileObjectExtensionSlow.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     PsAcquireSiloHardReference @ 0x140488E40 (PsAcquireSiloHardReference.c)
 *     IopCheckStackForTransactionSupport @ 0x1404EC70C (IopCheckStackForTransactionSupport.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpRegisterObject @ 0x14077BE38 (ObpRegisterObject.c)
 *     IopRetrieveTransactionParameters @ 0x14090FE6C (IopRetrieveTransactionParameters.c)
 *     ObpAllocateObject @ 0x140910050 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14092DF60 (ObpCaptureObjectCreateInformation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocRealFileObject(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 *a7,
        char a8,
        unsigned int a9)
{
  POBJECT_TYPE *v9; // r13
  _QWORD *v10; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  _GENERAL_LOOKASIDE *P; // rsi
  int v13; // eax
  __int64 v14; // r14
  unsigned __int8 v15; // r12
  int Information; // esi
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  __int64 v19; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r15
  void *v22; // rdx
  LegacyAutoBoost *v23; // r13
  void *v24; // r12
  signed __int64 *p_Lock; // rsi
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _KPROCESS *v28; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v30; // rtt
  int v31; // ecx
  __int64 v32; // r8
  struct _KLOCK_ENTRIES *v33; // r9
  __int64 v34; // rbx
  _DWORD *v35; // rbx
  struct _KPRCB *v36; // rdx
  _GENERAL_LOOKASIDE *v37; // rcx
  _SLIST_ENTRY *v38; // r8
  struct _KPRCB *v39; // rdx
  _GENERAL_LOOKASIDE *v40; // rcx
  void *v41; // rcx
  struct _KPRCB *v42; // rdx
  _GENERAL_LOOKASIDE *v43; // rcx
  __int64 *v44; // r13
  __int64 v45; // rcx
  __int64 Silo; // rax
  __int64 *v47; // rax
  _DWORD *v48; // r14
  _QWORD *v49; // rdx
  int v50; // ecx
  _QWORD *v51; // rbx
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  void *v62; // r14
  __int64 *v63; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v64; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v65; // [rsp+50h] [rbp-B0h]
  PVOID v66; // [rsp+58h] [rbp-A8h]
  __int64 v67; // [rsp+60h] [rbp-A0h]
  PVOID Object; // [rsp+68h] [rbp-98h]
  __int64 v69; // [rsp+70h] [rbp-90h]
  int v70; // [rsp+78h] [rbp-88h]
  __int64 v71; // [rsp+80h] [rbp-80h] BYREF
  __int64 v72; // [rsp+88h] [rbp-78h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _KTHREAD *v74; // [rsp+A0h] [rbp-60h]
  struct _KTHREAD *v75; // [rsp+A8h] [rbp-58h]
  POBJECT_TYPE *v76; // [rsp+B0h] [rbp-50h]
  __int64 v77; // [rsp+B8h] [rbp-48h]
  _QWORD v78[3]; // [rsp+C8h] [rbp-38h] BYREF
  int v79; // [rsp+E0h] [rbp-20h]
  int v80; // [rsp+E4h] [rbp-1Ch]
  __int128 v81; // [rsp+E8h] [rbp-18h]
  int v82; // [rsp+F8h] [rbp-8h]
  int v83; // [rsp+FCh] [rbp-4h]
  __int64 v84; // [rsp+100h] [rbp+0h]
  int v85; // [rsp+108h] [rbp+8h]

  v9 = IoFileObjectType;
  v10 = a1;
  v80 = 0;
  v78[1] = 0LL;
  v78[2] = 0LL;
  v81 = 0LL;
  v78[0] = 48LL;
  v79 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v63 = a7;
  v65 = a1;
  v64 = 0;
  P = CurrentPrcb->PPLookasideList[4].P;
  v70 = a4;
  v77 = a3;
  v72 = a2;
  v13 = P->TotalAllocates + 1;
  LOBYTE(v64) = 1;
  P->TotalAllocates = v13;
  v76 = v9;
  *(_OWORD *)ListEntry = 0LL;
  v71 = 0LL;
  v14 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v14
    || (++P->AllocateMisses,
        L = CurrentPrcb->PPLookasideList[4].L,
        ++L->TotalAllocates,
        (v14 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0)
    || (++L->AllocateMisses, (v14 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size)) != 0) )
  {
    *(_DWORD *)v14 = CurrentPrcb->Number;
  }
  if ( v14 )
  {
    v15 = a5;
    Information = ObpCaptureObjectCreateInformation(0LL, a5, v78, ListEntry, v14, 0);
    if ( Information < 0 )
    {
      v36 = KeGetCurrentPrcb();
      v37 = v36->PPLookasideList[4].P;
      ++v37->TotalFrees;
      if ( LOWORD(v37->ListHead.Alignment) < v37->Depth
        || (++v37->FreeMisses,
            v37 = v36->PPLookasideList[4].L,
            ++v37->TotalFrees,
            LOWORD(v37->ListHead.Alignment) < v37->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v37->ListHead, (PSLIST_ENTRY)v14);
      }
      else
      {
        ++v37->FreeMisses;
        guard_dispatch_icall_no_overrides(v14, (__int64)v36);
      }
    }
    else
    {
      if ( (*(_DWORD *)v14 & (_DWORD)v9[9]) != 0 )
      {
        Information = -1073741811;
      }
      else
      {
        if ( (*(_DWORD *)v14 & 0x10) != 0 )
        {
          v19 = *(_QWORD *)&PspSiloMonitorLock.SystemCallNumber;
          v67 = 0LL;
          CurrentThread = KeGetCurrentThread();
          Process = (__int64)CurrentThread->ApcState.Process;
          v69 = *(_QWORD *)(Process + 464);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v75 = KeGetCurrentThread();
            v74 = (struct _KTHREAD *)((char *)CurrentThread + 1424);
            --v75->KernelApcDisable;
            v23 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v18);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(
                (signed __int64 *)&CurrentThread[1].WaitBlockList,
                0,
                v23,
                (struct _KTHREAD *)((char *)CurrentThread + 1424));
            if ( v23 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v23, v22);
              else
                *((_BYTE *)v23 + 10) = 1;
            }
            if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
            {
              v24 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
              ObfReferenceObjectWithTag(v24, 0x75536553u);
              LODWORD(v67) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
            }
            else
            {
              v24 = 0LL;
            }
            p_Lock = (signed __int64 *)&v74->Header.Lock;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v74->Header.Lock, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(p_Lock);
            KeAbPostRelease((unsigned __int64)p_Lock);
            KeLeaveCriticalRegionThread((__int64)v75);
            v9 = v76;
          }
          else
          {
            v24 = 0LL;
          }
          v66 = v24;
          v26 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v17, v18);
          Object = v26;
          if ( SeTokenLeakTracking )
          {
            if ( v26 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v26[143] + 284LL));
              if ( Object == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
                __debugbreak();
            }
            v27 = v66;
            if ( v66 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v66 + 143) + 284LL));
              v27 = v66;
              if ( v66 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
                __debugbreak();
            }
          }
          else
          {
            v27 = v66;
          }
          v82 = 1;
          v83 = 1;
          v84 = v19;
          v85 = 0;
          if ( SeTokenLeakTracking )
          {
            if ( Object )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Object + 143) + 284LL));
              if ( Object == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
                __debugbreak();
              v27 = v66;
            }
            if ( v27 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v27[143] + 284LL));
              if ( v66 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
                __debugbreak();
            }
          }
          v28 = KeGetCurrentThread()->ApcState.Process;
          _m_prefetchw(&v28[1].ActiveProcessors);
          ActiveProcessors = (signed __int64)v28[1].ActiveProcessors;
          do
          {
            if ( ((unsigned __int64)Object ^ ActiveProcessors) >= 0xF )
            {
              ObfDereferenceObjectWithTag(Object, 0x75536553u);
              goto LABEL_26;
            }
            v30 = ActiveProcessors;
            ActiveProcessors = _InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&v28[1].ActiveProcessors,
                                 ActiveProcessors + 1,
                                 ActiveProcessors);
          }
          while ( v30 != ActiveProcessors );
          if ( ObpTraceFlags )
            ObpPushStackInfo((__int64)Object - 48, -1, 0x75536553u);
LABEL_26:
          Object = 0LL;
          if ( v66 )
            ObfDereferenceObjectWithTag(v66, 0x75536553u);
          v15 = a5;
          v66 = 0LL;
        }
        v31 = *((_DWORD *)v9 + 27);
        *(_DWORD *)(v14 + 20) = *((_DWORD *)v9 + 26);
        *(_DWORD *)(v14 + 24) = v31;
        Information = ObpAllocateObject(
                        v14,
                        v15,
                        (_DWORD)v9,
                        (unsigned int)ListEntry,
                        216,
                        (__int64)&v71,
                        (__int64)&v64);
        if ( Information >= 0 )
        {
          v34 = v71;
          if ( ObpTraceFlags )
          {
            ObpRegisterObject(v71, 1, v32, v33);
            ObpPushStackInfo(v34, 1, 0x746C6644u);
          }
          v35 = (_DWORD *)(v34 + 48);
          memset_0(v35, 0, 0xD8uLL);
          if ( a8 )
          {
            v49 = v65;
            *((_QWORD *)v35 + 3) = *(_QWORD *)(*v65 + 24LL);
            *((_QWORD *)v35 + 4) = *(_QWORD *)(*v49 + 32LL);
            *((_WORD *)v35 + 44) = *(_WORD *)(*v49 + 88LL);
            *((_WORD *)v35 + 45) = *(_WORD *)(*v49 + 90LL);
            *((_QWORD *)v35 + 12) = *(_QWORD *)(*v49 + 96LL);
            v53 = *(_QWORD *)(*v49 + 208LL);
            if ( v53 )
              *((_QWORD *)v35 + 26) = v53;
            goto LABEL_78;
          }
          v44 = v63;
          if ( (*(_DWORD *)(a6 + 152) & 0x47) == 0 && PsIsHostSilo(v63[1]) )
          {
            v45 = *(_QWORD *)(a6 + 40);
            if ( !v45 )
              goto LABEL_70;
            Silo = IoGetSilo(v45);
            if ( PsIsHostSilo(Silo) )
              goto LABEL_70;
          }
          if ( (*(_DWORD *)(a6 + 152) & 2) != 0 )
          {
            v47 = (__int64 *)*((_QWORD *)v35 + 26);
            v63 = 0LL;
            if ( v47 )
            {
              if ( v47 == qword_1400137E0 )
              {
                Information = -1073741670;
                goto LABEL_69;
              }
            }
            else
            {
              Information = IopAllocateFileObjectExtensionSlow((__int64)v35, &v63, 0);
              if ( Information < 0 )
                goto LABEL_69;
              v47 = v63;
            }
            _InterlockedOr((volatile signed __int32 *)v47, 1u);
          }
          if ( (*(_DWORD *)(a6 + 152) & 1) != 0 )
          {
            v63 = 0LL;
            Information = IopGetSetSpecificExtension((__int64)v35, 1, 32LL, 1, (__int64 *)&v63, 0LL);
            if ( Information < 0 )
              goto LABEL_69;
            *v63 = *(_QWORD *)(a6 + 176);
          }
          Information = 0;
          if ( (*(_DWORD *)(a6 + 152) & 4) != 0 )
          {
            v63 = 0LL;
            if ( !IopCheckStackForTransactionSupport(v72)
              && (*(_DWORD *)(a6 + 88) != 1 || (*(_BYTE *)(a6 + 70) & 6) != 0 || (a9 & 0xFEEDFF56) != 0)
              && !*(_BYTE *)(a6 + 137) )
            {
              Information = -1072103361;
              goto LABEL_69;
            }
            v61 = *(_QWORD *)(a6 + 184);
            if ( !v61 || *(_WORD *)v61 != 16 || (v62 = *(void **)(v61 + 8)) == 0LL )
            {
              Information = -1073741811;
              goto LABEL_69;
            }
            Information = ObReferenceObjectByPointer(
                            *(PVOID *)(v61 + 8),
                            0x120037u,
                            (POBJECT_TYPE)TmTransactionObjectType,
                            0);
            if ( Information < 0 )
            {
LABEL_69:
              if ( Information < 0 )
              {
LABEL_77:
                v49 = v65;
LABEL_78:
                *v49 = v35;
                if ( !*(_BYTE *)(a6 + 138) && !*(_BYTE *)(a6 + 137) )
                {
                  if ( (*(_DWORD *)(a6 + 64) & 0x30) != 0 )
                  {
                    v50 = v35[20] | 2;
                    v35[20] = v50;
                    if ( (*(_DWORD *)(a6 + 64) & 0x10) != 0 )
                      v35[20] = v50 | 4;
                  }
                  if ( (v35[20] & 2) != 0 )
                  {
                    KeInitializeEvent((PRKEVENT)(v35 + 32), SynchronizationEvent, 0);
                    v35[28] = 0;
                    *((_QWORD *)v35 + 13) = 0LL;
                  }
                  if ( (*(_DWORD *)(a6 + 64) & 8) != 0 )
                    v35[20] |= 8u;
                  if ( (*(_DWORD *)(a6 + 64) & 2) != 0 )
                    v35[20] |= 0x10u;
                  if ( (*(_DWORD *)(a6 + 64) & 4) != 0 )
                    v35[20] |= 0x20u;
                  if ( (*(_DWORD *)(a6 + 64) & 0x800) != 0 )
                    v35[20] |= 0x100000u;
                  if ( (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
                    v35[20] |= 0x2000000u;
                }
                if ( (v70 & 0x40) == 0 )
                  v35[20] |= 0x20000u;
                *v35 = 14155781;
                *((_QWORD *)v35 + 8) = *(_QWORD *)(a6 + 40);
                *((_QWORD *)v35 + 1) = v77;
                *((_QWORD *)v35 + 23) = 0LL;
                v51 = v35 + 48;
                v51[1] = v51;
                *v51 = v51;
                return (unsigned int)Information;
              }
LABEL_70:
              if ( v15 )
              {
                if ( (*(_DWORD *)(a6 + 152) & 0x20) == 0
                  || (*(_DWORD *)(v72 + 48) & 0x40000) == 0
                  && (v54 = *(unsigned int *)(v72 + 72), (_DWORD)v54 != 8)
                  && ((unsigned int)v54 > 0x35 || (v55 = 0x20000100100008LL, !_bittest64(&v55, v54)))
                  || (Information = IopRetrieveTransactionParameters(v72, a6, a9, v35), Information >= 0) )
                {
                  if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
                    Information = IopCheckInitiatorHint((__int64)v35, *(_QWORD *)(a6 + 40));
                }
              }
              goto LABEL_77;
            }
            Information = IopGetSetSpecificExtension((__int64)v35, 0, 16LL, 1, (__int64 *)&v63, 0LL);
            if ( Information < 0 )
            {
              ObfDereferenceObject(v62);
              goto LABEL_69;
            }
            *(_OWORD *)v63 = *(_OWORD *)*(_QWORD *)(a6 + 184);
          }
          if ( (*(_DWORD *)(a6 + 152) & 0x40) != 0
            || !PsIsHostSilo(v44[1])
            || (v56 = *(_QWORD *)(a6 + 40)) != 0 && (v57 = IoGetSilo(v56), !PsIsHostSilo(v57)) )
          {
            Information = 0;
            v48 = (_DWORD *)v44[1];
            if ( *(_QWORD *)(a6 + 40) && PsIsServerSilo(v44[1]) )
              v48 = (_DWORD *)IoGetSilo(v60);
            if ( !PsIsHostSilo((__int64)v48) )
            {
              v63 = 0LL;
              Information = PsAcquireSiloHardReference(v48);
              if ( Information >= 0 )
              {
                Information = IopGetSetSpecificExtension((__int64)v35, 7, 16LL, 1, (__int64 *)&v63, 0LL);
                if ( Information < 0 )
                {
                  PsReleaseSiloHardReference(v48);
                }
                else
                {
                  v59 = v63;
                  *(_DWORD *)v63 = 16;
                  v59[1] = (__int64)v48;
                  *((_DWORD *)v59 + 1) |= 1u;
                  ObfReferenceObjectWithTag(v48, 0x70536F49u);
                }
              }
            }
          }
          goto LABEL_69;
        }
      }
      v38 = ListEntry[1];
      if ( ListEntry[1] )
      {
        if ( WORD1(ListEntry[0]) == 248 )
        {
          v39 = KeGetCurrentPrcb();
          v40 = v39->PPLookasideList[5].P;
          ++v40->TotalFrees;
          if ( LOWORD(v40->ListHead.Alignment) < v40->Depth
            || (++v40->FreeMisses,
                v40 = v39->PPLookasideList[5].L,
                ++v40->TotalFrees,
                LOWORD(v40->ListHead.Alignment) < v40->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v40->ListHead, v38);
          }
          else
          {
            ++v40->FreeMisses;
            guard_dispatch_icall_no_overrides((__int64)v38, (__int64)v39);
          }
        }
        else
        {
          ExFreePoolWithTag(ListEntry[1], 0);
        }
      }
      v41 = *(void **)(v14 + 32);
      if ( v41 )
      {
        if ( *(_BYTE *)(v14 + 16) <= 1u )
          ExFreePoolWithTag(v41, 0);
        *(_QWORD *)(v14 + 32) = 0LL;
      }
      v42 = KeGetCurrentPrcb();
      v43 = v42->PPLookasideList[4].P;
      ++v43->TotalFrees;
      if ( LOWORD(v43->ListHead.Alignment) < v43->Depth
        || (++v43->FreeMisses,
            v43 = v42->PPLookasideList[4].L,
            ++v43->TotalFrees,
            LOWORD(v43->ListHead.Alignment) < v43->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v43->ListHead, (PSLIST_ENTRY)v14);
      }
      else
      {
        ++v43->FreeMisses;
        guard_dispatch_icall_no_overrides(v14, (__int64)v42);
      }
    }
    v10 = v65;
  }
  else
  {
    Information = -1073741670;
  }
  if ( !a8 )
    *v10 = 0LL;
  return (unsigned int)Information;
}
