/*
 * XREFs of IopAllocRealFileObject @ 0x1409337E0
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216838 (PsIsServerSilo.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PsReleaseSiloHardReference @ 0x1403DBC10 (PsReleaseSiloHardReference.c)
 *     IopCheckInitiatorHint @ 0x140454DB0 (IopCheckInitiatorHint.c)
 *     IopGetSetSpecificExtension @ 0x140455360 (IopGetSetSpecificExtension.c)
 *     ObReferenceObjectByPointer @ 0x14045F750 (ObReferenceObjectByPointer.c)
 *     IoGetSilo @ 0x14045FAB0 (IoGetSilo.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     IopAllocateFileObjectExtensionSlow @ 0x14046BB40 (IopAllocateFileObjectExtensionSlow.c)
 *     PsIsHostSilo @ 0x14046E630 (PsIsHostSilo.c)
 *     PsAcquireSiloHardReference @ 0x14048F400 (PsAcquireSiloHardReference.c)
 *     IopCheckStackForTransactionSupport @ 0x1404F312C (IopCheckStackForTransactionSupport.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObpRegisterObject @ 0x140778F98 (ObpRegisterObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408FDFD0 (ObpCaptureObjectCreateInformation.c)
 *     IopRetrieveTransactionParameters @ 0x1409342BC (IopRetrieveTransactionParameters.c)
 *     ObpAllocateObject @ 0x1409344A0 (ObpAllocateObject.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocRealFileObject(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
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
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r15
  void *v22; // rdx
  LegacyAutoBoost *v23; // r13
  void *v24; // r12
  signed __int64 *p_Lock; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _KPROCESS *v30; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v32; // rtt
  int v33; // ecx
  __int64 v34; // r8
  struct _KLOCK_ENTRIES *v35; // r9
  __int64 v36; // rbx
  _DWORD *v37; // rbx
  struct _KPRCB *v38; // rdx
  _GENERAL_LOOKASIDE *v39; // rcx
  struct _SLIST_ENTRY *v40; // r8
  struct _KPRCB *v41; // rdx
  _GENERAL_LOOKASIDE *v42; // rcx
  void *v43; // rcx
  struct _KPRCB *v44; // rdx
  _GENERAL_LOOKASIDE *v45; // rcx
  __int64 *v46; // r13
  __int64 v47; // rcx
  __int64 Silo; // rax
  __int64 *v49; // rax
  _DWORD *v50; // r14
  _QWORD *v51; // rdx
  int v52; // ecx
  _QWORD *v53; // rbx
  __int64 v55; // rcx
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  void *v64; // r14
  __int64 *v65; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v66; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v67; // [rsp+50h] [rbp-B0h]
  PVOID v68; // [rsp+58h] [rbp-A8h]
  __int64 v69; // [rsp+60h] [rbp-A0h]
  PVOID Object; // [rsp+68h] [rbp-98h]
  __int64 v71; // [rsp+70h] [rbp-90h]
  int v72; // [rsp+78h] [rbp-88h]
  __int64 v73; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+88h] [rbp-78h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _KTHREAD *v76; // [rsp+A0h] [rbp-60h]
  struct _KTHREAD *v77; // [rsp+A8h] [rbp-58h]
  POBJECT_TYPE *v78; // [rsp+B0h] [rbp-50h]
  __int64 v79; // [rsp+B8h] [rbp-48h]
  _QWORD v80[3]; // [rsp+C8h] [rbp-38h] BYREF
  int v81; // [rsp+E0h] [rbp-20h]
  int v82; // [rsp+E4h] [rbp-1Ch]
  __int128 v83; // [rsp+E8h] [rbp-18h]
  int v84; // [rsp+F8h] [rbp-8h]
  int v85; // [rsp+FCh] [rbp-4h]
  _KSCHEDULING_GROUP *volatile v86; // [rsp+100h] [rbp+0h]
  int v87; // [rsp+108h] [rbp+8h]

  v9 = IoFileObjectType;
  v10 = a1;
  v82 = 0;
  v80[1] = 0LL;
  v80[2] = 0LL;
  v83 = 0LL;
  v80[0] = 48LL;
  v81 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v65 = a7;
  v67 = a1;
  v66 = 0;
  P = CurrentPrcb->PPLookasideList[4].P;
  v72 = a4;
  v79 = a3;
  v74 = a2;
  v13 = P->TotalAllocates + 1;
  LOBYTE(v66) = 1;
  P->TotalAllocates = v13;
  v78 = v9;
  *(_OWORD *)ListEntry = 0LL;
  v73 = 0LL;
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
    Information = ObpCaptureObjectCreateInformation(0, a5, v80, ListEntry, v14, 0);
    if ( Information < 0 )
    {
      v38 = KeGetCurrentPrcb();
      v39 = v38->PPLookasideList[4].P;
      ++v39->TotalFrees;
      if ( LOWORD(v39->ListHead.Alignment) < v39->Depth
        || (++v39->FreeMisses,
            v39 = v38->PPLookasideList[4].L,
            ++v39->TotalFrees,
            LOWORD(v39->ListHead.Alignment) < v39->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v39->ListHead, (PSLIST_ENTRY)v14);
      }
      else
      {
        ++v39->FreeMisses;
        guard_dispatch_icall_no_overrides(v14, (__int64)v38);
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
          SchedulingGroup = PspSiloMonitorLock.SchedulingGroup;
          v69 = 0LL;
          CurrentThread = KeGetCurrentThread();
          Process = (__int64)CurrentThread->ApcState.Process;
          v71 = *(_QWORD *)(Process + 464);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v77 = KeGetCurrentThread();
            v76 = (struct _KTHREAD *)((char *)CurrentThread + 1424);
            --v77->KernelApcDisable;
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
              LODWORD(v69) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
            }
            else
            {
              v24 = 0LL;
            }
            p_Lock = (signed __int64 *)&v76->Header.Lock;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v76->Header.Lock, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(p_Lock);
            KeAbPostRelease((unsigned __int64)p_Lock);
            KeLeaveCriticalRegionThread((__int64)v77, v26, v27);
            v9 = v78;
          }
          else
          {
            v24 = 0LL;
          }
          v68 = v24;
          v28 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v17, v18);
          Object = v28;
          if ( SeTokenLeakTracking )
          {
            if ( v28 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v28[143] + 284LL));
              if ( Object == RtlpBootStatHandleLock.TrapFrame )
                __debugbreak();
            }
            v29 = v68;
            if ( v68 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v68 + 143) + 284LL));
              v29 = v68;
              if ( v68 == RtlpBootStatHandleLock.TrapFrame )
                __debugbreak();
            }
          }
          else
          {
            v29 = v68;
          }
          v84 = 1;
          v85 = 1;
          v86 = SchedulingGroup;
          v87 = 0;
          if ( SeTokenLeakTracking )
          {
            if ( Object )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Object + 143) + 284LL));
              if ( Object == RtlpBootStatHandleLock.TrapFrame )
                __debugbreak();
              v29 = v68;
            }
            if ( v29 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v29[143] + 284LL));
              if ( v68 == RtlpBootStatHandleLock.TrapFrame )
                __debugbreak();
            }
          }
          v30 = KeGetCurrentThread()->ApcState.Process;
          _m_prefetchw(&v30[1].ActiveProcessors);
          ActiveProcessors = (signed __int64)v30[1].ActiveProcessors;
          do
          {
            if ( ((unsigned __int64)Object ^ ActiveProcessors) >= 0xF )
            {
              ObfDereferenceObjectWithTag(Object, 0x75536553u);
              goto LABEL_26;
            }
            v32 = ActiveProcessors;
            ActiveProcessors = _InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&v30[1].ActiveProcessors,
                                 ActiveProcessors + 1,
                                 ActiveProcessors);
          }
          while ( v32 != ActiveProcessors );
          if ( ObpTraceFlags )
            ObpPushStackInfo((__int64)Object - 48, -1, 0x75536553u);
LABEL_26:
          Object = 0LL;
          if ( v68 )
            ObfDereferenceObjectWithTag(v68, 0x75536553u);
          v15 = a5;
          v68 = 0LL;
        }
        v33 = *((_DWORD *)v9 + 27);
        *(_DWORD *)(v14 + 20) = *((_DWORD *)v9 + 26);
        *(_DWORD *)(v14 + 24) = v33;
        Information = ObpAllocateObject(
                        v14,
                        v15,
                        (_DWORD)v9,
                        (unsigned int)ListEntry,
                        216,
                        (__int64)&v73,
                        (__int64)&v66);
        if ( Information >= 0 )
        {
          v36 = v73;
          if ( ObpTraceFlags )
          {
            ObpRegisterObject(v73, 1, v34, v35);
            ObpPushStackInfo(v36, 1, 0x746C6644u);
          }
          v37 = (_DWORD *)(v36 + 48);
          memset_0(v37, 0, 0xD8uLL);
          if ( a8 )
          {
            v51 = v67;
            *((_QWORD *)v37 + 3) = *(_QWORD *)(*v67 + 24LL);
            *((_QWORD *)v37 + 4) = *(_QWORD *)(*v51 + 32LL);
            *((_WORD *)v37 + 44) = *(_WORD *)(*v51 + 88LL);
            *((_WORD *)v37 + 45) = *(_WORD *)(*v51 + 90LL);
            *((_QWORD *)v37 + 12) = *(_QWORD *)(*v51 + 96LL);
            v55 = *(_QWORD *)(*v51 + 208LL);
            if ( v55 )
              *((_QWORD *)v37 + 26) = v55;
            goto LABEL_78;
          }
          v46 = v65;
          if ( (*(_DWORD *)(a6 + 152) & 0x47) == 0 && PsIsHostSilo(v65[1]) )
          {
            v47 = *(_QWORD *)(a6 + 40);
            if ( !v47 )
              goto LABEL_70;
            Silo = IoGetSilo(v47);
            if ( PsIsHostSilo(Silo) )
              goto LABEL_70;
          }
          if ( (*(_DWORD *)(a6 + 152) & 2) != 0 )
          {
            v49 = (__int64 *)*((_QWORD *)v37 + 26);
            v65 = 0LL;
            if ( v49 )
            {
              if ( v49 == qword_140019060 )
              {
                Information = -1073741670;
                goto LABEL_69;
              }
            }
            else
            {
              Information = IopAllocateFileObjectExtensionSlow((__int64)v37, &v65, 0);
              if ( Information < 0 )
                goto LABEL_69;
              v49 = v65;
            }
            _InterlockedOr((volatile signed __int32 *)v49, 1u);
          }
          if ( (*(_DWORD *)(a6 + 152) & 1) != 0 )
          {
            v65 = 0LL;
            Information = IopGetSetSpecificExtension((__int64)v37, 1, 32LL, 1, (__int64 *)&v65, 0LL);
            if ( Information < 0 )
              goto LABEL_69;
            *v65 = *(_QWORD *)(a6 + 176);
          }
          Information = 0;
          if ( (*(_DWORD *)(a6 + 152) & 4) != 0 )
          {
            v65 = 0LL;
            if ( !IopCheckStackForTransactionSupport(v74)
              && (*(_DWORD *)(a6 + 88) != 1 || (*(_BYTE *)(a6 + 70) & 6) != 0 || (a9 & 0xFEEDFF56) != 0)
              && !*(_BYTE *)(a6 + 137) )
            {
              Information = -1072103361;
              goto LABEL_69;
            }
            v63 = *(_QWORD *)(a6 + 184);
            if ( !v63 || *(_WORD *)v63 != 16 || (v64 = *(void **)(v63 + 8)) == 0LL )
            {
              Information = -1073741811;
              goto LABEL_69;
            }
            Information = ObReferenceObjectByPointer(
                            *(PVOID *)(v63 + 8),
                            0x120037u,
                            (POBJECT_TYPE)TmTransactionObjectType,
                            0);
            if ( Information < 0 )
            {
LABEL_69:
              if ( Information < 0 )
              {
LABEL_77:
                v51 = v67;
LABEL_78:
                *v51 = v37;
                if ( !*(_BYTE *)(a6 + 138) && !*(_BYTE *)(a6 + 137) )
                {
                  if ( (*(_DWORD *)(a6 + 64) & 0x30) != 0 )
                  {
                    v52 = v37[20] | 2;
                    v37[20] = v52;
                    if ( (*(_DWORD *)(a6 + 64) & 0x10) != 0 )
                      v37[20] = v52 | 4;
                  }
                  if ( (v37[20] & 2) != 0 )
                  {
                    KeInitializeEvent((PRKEVENT)(v37 + 32), SynchronizationEvent, 0);
                    v37[28] = 0;
                    *((_QWORD *)v37 + 13) = 0LL;
                  }
                  if ( (*(_DWORD *)(a6 + 64) & 8) != 0 )
                    v37[20] |= 8u;
                  if ( (*(_DWORD *)(a6 + 64) & 2) != 0 )
                    v37[20] |= 0x10u;
                  if ( (*(_DWORD *)(a6 + 64) & 4) != 0 )
                    v37[20] |= 0x20u;
                  if ( (*(_DWORD *)(a6 + 64) & 0x800) != 0 )
                    v37[20] |= 0x100000u;
                  if ( (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
                    v37[20] |= 0x2000000u;
                }
                if ( (v72 & 0x40) == 0 )
                  v37[20] |= 0x20000u;
                *v37 = 14155781;
                *((_QWORD *)v37 + 8) = *(_QWORD *)(a6 + 40);
                *((_QWORD *)v37 + 1) = v79;
                *((_QWORD *)v37 + 23) = 0LL;
                v53 = v37 + 48;
                v53[1] = v53;
                *v53 = v53;
                return (unsigned int)Information;
              }
LABEL_70:
              if ( v15 )
              {
                if ( (*(_DWORD *)(a6 + 152) & 0x20) == 0
                  || (*(_DWORD *)(v74 + 48) & 0x40000) == 0
                  && (v56 = *(unsigned int *)(v74 + 72), (_DWORD)v56 != 8)
                  && ((unsigned int)v56 > 0x35 || (v57 = 0x20000100100008LL, !_bittest64(&v57, v56)))
                  || (Information = IopRetrieveTransactionParameters(v74, a6, a9, v37), Information >= 0) )
                {
                  if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
                    Information = IopCheckInitiatorHint((__int64)v37, *(_QWORD *)(a6 + 40));
                }
              }
              goto LABEL_77;
            }
            Information = IopGetSetSpecificExtension((__int64)v37, 0, 16LL, 1, (__int64 *)&v65, 0LL);
            if ( Information < 0 )
            {
              ObfDereferenceObject(v64);
              goto LABEL_69;
            }
            *(_OWORD *)v65 = *(_OWORD *)*(_QWORD *)(a6 + 184);
          }
          if ( (*(_DWORD *)(a6 + 152) & 0x40) != 0
            || !PsIsHostSilo(v46[1])
            || (v58 = *(_QWORD *)(a6 + 40)) != 0 && (v59 = IoGetSilo(v58), !PsIsHostSilo(v59)) )
          {
            Information = 0;
            v50 = (_DWORD *)v46[1];
            if ( *(_QWORD *)(a6 + 40) && PsIsServerSilo(v46[1]) )
              v50 = (_DWORD *)IoGetSilo(v62);
            if ( !PsIsHostSilo((__int64)v50) )
            {
              v65 = 0LL;
              Information = PsAcquireSiloHardReference(v50);
              if ( Information >= 0 )
              {
                Information = IopGetSetSpecificExtension((__int64)v37, 7, 16LL, 1, (__int64 *)&v65, 0LL);
                if ( Information < 0 )
                {
                  PsReleaseSiloHardReference(v50);
                }
                else
                {
                  v61 = v65;
                  *(_DWORD *)v65 = 16;
                  v61[1] = (__int64)v50;
                  *((_DWORD *)v61 + 1) |= 1u;
                  ObfReferenceObjectWithTag(v50, 0x70536F49u);
                }
              }
            }
          }
          goto LABEL_69;
        }
      }
      v40 = ListEntry[1];
      if ( ListEntry[1] )
      {
        if ( WORD1(ListEntry[0]) == 248 )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->PPLookasideList[5].P;
          ++v42->TotalFrees;
          if ( LOWORD(v42->ListHead.Alignment) < v42->Depth
            || (++v42->FreeMisses,
                v42 = v41->PPLookasideList[5].L,
                ++v42->TotalFrees,
                LOWORD(v42->ListHead.Alignment) < v42->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v42->ListHead, v40);
          }
          else
          {
            ++v42->FreeMisses;
            guard_dispatch_icall_no_overrides((__int64)v40, (__int64)v41);
          }
        }
        else
        {
          ExFreePoolWithTag(ListEntry[1], 0);
        }
      }
      v43 = *(void **)(v14 + 32);
      if ( v43 )
      {
        if ( *(_BYTE *)(v14 + 16) <= 1u )
          ExFreePoolWithTag(v43, 0);
        *(_QWORD *)(v14 + 32) = 0LL;
      }
      v44 = KeGetCurrentPrcb();
      v45 = v44->PPLookasideList[4].P;
      ++v45->TotalFrees;
      if ( LOWORD(v45->ListHead.Alignment) < v45->Depth
        || (++v45->FreeMisses,
            v45 = v44->PPLookasideList[4].L,
            ++v45->TotalFrees,
            LOWORD(v45->ListHead.Alignment) < v45->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v45->ListHead, (PSLIST_ENTRY)v14);
      }
      else
      {
        ++v45->FreeMisses;
        guard_dispatch_icall_no_overrides(v14, (__int64)v44);
      }
    }
    v10 = v67;
  }
  else
  {
    Information = -1073741670;
  }
  if ( !a8 )
    *v10 = 0LL;
  return (unsigned int)Information;
}
