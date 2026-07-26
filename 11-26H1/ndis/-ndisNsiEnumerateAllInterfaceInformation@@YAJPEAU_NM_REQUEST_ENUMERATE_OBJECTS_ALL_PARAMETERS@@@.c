/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140010D10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400122F0 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x140014460 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140016770 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x140016830 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140016890 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1400178C0 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x140152A60 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisIsMacAddressHidden @ 0x14015C720 (ndisIsMacAddressHidden.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x14016F0D0 (ndisNsiGetInterfaceRodEnumObject.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(
        struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1,
        __int16 a2)
{
  unsigned int v2; // eax
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v3; // rsi
  int v4; // r14d
  __int64 CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  _SECURITY_IMPERSONATION_LEVEL *ThreadProperty; // rax
  _SECURITY_IMPERSONATION_LEVEL v8; // r12d
  int v9; // r15d
  _SECURITY_IMPERSONATION_LEVEL v10; // ebx
  PACCESS_TOKEN v11; // rax
  void *v12; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v14; // ebx
  struct _KTHREAD *v15; // rsi
  PACCESS_TOKEN v16; // rax
  void *v17; // rdi
  unsigned int ThreadSessionId; // eax
  KIRQL v19; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v20; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v21; // r8
  KIRQL v22; // al
  unsigned int v23; // ebx
  KIRQL v24; // di
  void *v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // r10d
  unsigned int v29; // r9d
  unsigned int v30; // r8d
  _DEVICE_OBJECT *v31; // r15
  unsigned int v32; // r8d
  _KDPC *BufferChainingDpc; // rcx
  void **p_DeviceContext; // r13
  struct _NDIS_IF_BLOCK *IfBlock; // r12
  struct _NDIS_MINIPORT_BLOCK *v36; // rbx
  __int64 v37; // rdx
  KIRQL v38; // di
  unsigned int v39; // r8d
  struct _NDIS_MINIPORT_BLOCK *v40; // rax
  __int64 v41; // rdx
  struct _NDIS_MINIPORT_BLOCK *v42; // rdi
  _NDIS_FILTER_BLOCK *v43; // rbx
  struct _NDIS_MINIPORT_BLOCK *v44; // rax
  struct _NDIS_MINIPORT_BLOCK *v45; // rsi
  _NDIS_FILTER_BLOCK *HighestFilter; // rbx
  __int64 v47; // rdx
  KIRQL v48; // r14
  unsigned __int16 v49; // cx
  KIRQL v50; // si
  ULONG_PTR v51; // r8
  __int64 v52; // rdx
  KIRQL v53; // r14
  unsigned __int16 ReferenceCount; // cx
  KIRQL v55; // di
  ULONG_PTR NsiRefCountTracker; // r8
  bool v57; // zf
  __int64 v58; // rbx
  char *v59; // rdi
  unsigned __int64 v60; // rbx
  __int64 v61; // rdi
  __int64 v62; // rbx
  __int64 v63; // rdi
  __int64 p_DeferredContext; // rbx
  KIRQL v65; // al
  ULONG_PTR v66; // r8
  KIRQL v67; // r14
  __int64 v68; // r9
  unsigned __int8 jj; // cl
  _BYTE *v70; // rdx
  char v71; // al
  unsigned int v72; // ebx
  int v73; // edx
  int v75; // ebx
  __int16 v76; // dx
  KIRQL v77; // al
  ULONG_PTR v78; // r8
  KIRQL v79; // di
  __int64 v80; // r9
  unsigned __int8 k; // cl
  _BYTE *v82; // rdx
  char v83; // al
  void *v84; // rax
  struct _KEVENT *v85; // rcx
  __int64 v86; // r9
  unsigned __int8 m; // cl
  _BYTE *v88; // rdx
  char v89; // al
  struct _KEVENT *v90; // rcx
  __int16 v91; // dx
  KIRQL v92; // al
  _BYTE *v93; // rdx
  ULONG_PTR v94; // r8
  KIRQL v95; // r14
  __int64 v96; // r9
  unsigned __int8 n; // cl
  char v98; // al
  int v99; // ebx
  __int64 v100; // r9
  unsigned __int8 i; // cl
  _BYTE *v102; // rdx
  char v103; // al
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  __int16 v105; // dx
  KIRQL v106; // al
  _BYTE *v107; // rdx
  ULONG_PTR RefCountTracker; // r8
  KIRQL v109; // r14
  __int64 v110; // r9
  unsigned __int8 j; // cl
  char v112; // al
  ULONG_PTR v113; // rdi
  unsigned int v114; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *ii; // rsi
  struct _KEVENT *v116; // rcx
  struct _KEVENT *RemoveReadyEvent; // rcx
  NTSTATUS v118; // ebx
  unsigned int v119; // r9d
  ULONG_PTR v120; // rbx
  NTSTATUS v121; // ebx
  unsigned int v122; // r9d
  ULONG_PTR v123; // rbx
  unsigned int v124; // r9d
  ULONG_PTR v125; // rbx
  unsigned int v126; // r9d
  ULONG_PTR v127; // rbx
  unsigned int v128; // r9d
  ULONG_PTR v129; // rbx
  _DEVICE_OBJECT *kk; // rcx
  _KDPC *v131; // rdx
  bool v132; // dl
  int v133; // eax
  unsigned __int64 v134; // r8
  KIRQL v135; // al
  ULONG_PTR v136; // rdi
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v138; // rax
  struct _NDIS_REFCOUNT_BLOCK *v139; // rdi
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+40h] [rbp-89h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-81h] BYREF
  int v142; // [rsp+50h] [rbp-79h]
  unsigned int v143; // [rsp+54h] [rbp-75h]
  unsigned int Size; // [rsp+58h] [rbp-71h]
  unsigned int Size_4; // [rsp+5Ch] [rbp-6Dh]
  unsigned int v146; // [rsp+60h] [rbp-69h]
  int v147; // [rsp+64h] [rbp-65h]
  void *v148; // [rsp+68h] [rbp-61h]
  unsigned __int64 v149; // [rsp+70h] [rbp-59h]
  __int64 v150; // [rsp+78h] [rbp-51h]
  _OWORD v151[4]; // [rsp+80h] [rbp-49h] BYREF
  __int128 v152; // [rsp+C0h] [rbp-9h]
  __int128 v153; // [rsp+D0h] [rbp+7h]
  BOOLEAN EffectiveOnly; // [rsp+138h] [rbp+6Fh] BYREF
  BOOLEAN CopyOnOpen; // [rsp+140h] [rbp+77h] BYREF
  __int64 v157; // [rsp+148h] [rbp+7Fh]

  v2 = *((_DWORD *)a1 + 22);
  memset(&v151[2], 0, 32);
  v3 = a1;
  v4 = 0;
  v143 = v2;
  v152 = 0LL;
  v153 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      14,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1);
  }
  CurrentProcess = PsGetCurrentProcess();
  LOBYTE(v157) = ndisIsMacAddressHidden(CurrentProcess);
  KeEnterCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  memset(v151, 0, 24);
  ThreadProperty = (_SECURITY_IMPERSONATION_LEVEL *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v8 = SecurityIdentification;
  if ( !ThreadProperty )
  {
    v9 = 0;
    v142 = 0;
    goto LABEL_7;
  }
  v9 = *((_DWORD *)ThreadProperty + 1);
  ImpersonationLevel = *ThreadProperty;
  v8 = ImpersonationLevel;
  v142 = v9;
  ObfDereferenceObject(ThreadProperty);
  v10 = ImpersonationLevel;
  if ( ImpersonationLevel == SecurityAnonymous )
  {
    v8 = SecurityIdentification;
LABEL_7:
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    }
    else
    {
      v11 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v12 = v11;
      if ( v11 )
      {
        v118 = SeQueryInformationToken(v11, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v12);
        if ( v118 >= 0 )
        {
          v14 = (unsigned int)TokenInformation;
LABEL_11:
          if ( v14 == -1 )
          {
            v15 = KeGetCurrentThread();
            CopyOnOpen = 0;
            EffectiveOnly = 0;
            ImpersonationLevel = SecurityAnonymous;
            TokenInformation = 0LL;
            if ( KeGetCurrentIrql() >= 2u )
            {
              ThreadSessionId = PsGetCurrentProcessSessionId();
            }
            else
            {
              v16 = PsReferenceImpersonationToken(v15, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
              v17 = v16;
              if ( v16 )
              {
                v121 = SeQueryInformationToken(v16, TokenSessionId, &TokenInformation);
                PsDereferenceImpersonationToken(v17);
                if ( v121 >= 0 )
                {
                  v14 = (unsigned int)TokenInformation;
                  goto LABEL_16;
                }
              }
              ThreadSessionId = PsGetThreadSessionId(v15);
            }
            v14 = ThreadSessionId;
          }
LABEL_16:
          if ( v14 < dword_14011E898 )
          {
            v8 = SecurityAnonymous;
            v135 = KeAcquireSpinLockRaiseToDpc(&qword_14011E8E0);
            if ( v14 < dword_14011E898 )
              v8 = *((_DWORD *)qword_14011E8E8 + 6 * v14);
            KeReleaseSpinLock(&qword_14011E8E0, v135);
            if ( v8 == SecurityAnonymous )
              v8 = SecurityIdentification;
          }
          v3 = a1;
          v10 = v8;
          ImpersonationLevel = v8;
          goto LABEL_18;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v14 = CurrentProcessSessionId;
    goto LABEL_11;
  }
LABEL_18:
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v20 = qword_14011E9D8;
  v21 = 0LL;
  while ( v20 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
  {
    if ( *((_DWORD *)v20 + 4) == v10 )
    {
      v21 = v20;
      break;
    }
    if ( *((_DWORD *)v20 + 4) > (unsigned int)v10 )
      break;
    v20 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v20;
  }
  *(_OWORD *)((char *)v151 + 8) = *(_OWORD *)((char *)v21 + 1684);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v19);
  v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v23 = v143;
  v24 = v22;
  EffectiveOnly = v22;
  if ( v143 )
  {
    v25 = (void *)*((_QWORD *)v3 + 2);
    v26 = *((_QWORD *)v3 + 7);
    v27 = *((_QWORD *)v3 + 9);
    v28 = *((_DWORD *)v3 + 6);
    v29 = *((_DWORD *)v3 + 16);
    v30 = *((_DWORD *)v3 + 20);
    Size = v28;
    Size_4 = v29;
    v146 = v30;
    v148 = v25;
    v149 = v26;
    v150 = v27;
    if ( v25 && v28 != 8 || *((_QWORD *)v3 + 5) || *((_DWORD *)v3 + 12) || v26 && v29 < 0x28C || v27 && v30 < 0x238 )
    {
      v72 = -1073741306;
      goto LABEL_94;
    }
    v31 = *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize;
    TokenInformation = *(PVOID *)&WPP_MAIN_CB.SectorSize;
    v32 = 0;
    if ( *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize == (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
    {
LABEL_93:
      *((_DWORD *)v3 + 22) = v32;
      v72 = v23 < v32 ? 0x105 : 0;
      goto LABEL_94;
    }
    while ( 1 )
    {
      BufferChainingDpc = v31->Queue.Wcb.BufferChainingDpc;
      p_DeviceContext = &v31[-4].Queue.Wcb.DeviceContext;
      if ( v8 == LODWORD(BufferChainingDpc->ProcessorHistory) )
        goto LABEL_30;
      if ( v142 == -1 )
      {
        v26 = *((_QWORD *)&v151[0] + 1) - *(unsigned __int64 *)((char *)&BufferChainingDpc[26].ProcessorHistory + 4);
        if ( *((_QWORD *)&v151[0] + 1) == *(unsigned __int64 *)((char *)&BufferChainingDpc[26].ProcessorHistory + 4) )
          v26 = *(_QWORD *)&v151[1] - *(unsigned __int64 *)((char *)&BufferChainingDpc[26].DeferredRoutine + 4);
        if ( !v26 )
          goto LABEL_30;
      }
      if ( (BufferChainingDpc[26].ProcessorHistory & 2) == 0 && v8 == SecurityIdentification )
      {
LABEL_30:
        v147 = ++v32;
        if ( v32 <= v23 )
        {
          LOBYTE(v26) = 6;
          NdisReferenceWithTag(p_DeviceContext[179], v26);
          ++*((_DWORD *)p_DeviceContext + 326);
          IfBlock = 0LL;
          if ( *((_BYTE *)p_DeviceContext + 1393) && *((_QWORD *)v3 + 1) <= 1uLL )
          {
            v36 = 0LL;
            v38 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
            if ( *((_BYTE *)p_DeviceContext + 1395) )
            {
              LOBYTE(v37) = 3;
              v36 = (struct _NDIS_MINIPORT_BLOCK *)p_DeviceContext[176];
              NdisReferenceWithTag(p_DeviceContext[180], v37);
              ++*((_DWORD *)p_DeviceContext + 349);
            }
            KeReleaseSpinLock(&SpinLock, v38);
            if ( v36 )
            {
              v44 = ndisReferenceTopMiniportByNameForNsi(v36, 0, v39, 0, NSIREF_IFTOP, MPREF_IF_FINDTOP);
              v45 = v44;
              if ( v44 )
              {
                KeAcquireSpinLockAtDpcLevel(&v44->Lock);
                HighestFilter = v45->HighestFilter;
                for ( v45->MiniportThread = KeGetCurrentThread(); HighestFilter; HighestFilter = HighestFilter->LowerFilter )
                {
                  v53 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
                  if ( !HighestFilter->PnPRef.Closing )
                  {
                    ReferenceCount = HighestFilter->PnPRef.ReferenceCount;
                    if ( ReferenceCount < 0xFFEBu )
                    {
                      LOBYTE(v52) = 11;
                      HighestFilter->PnPRef.ReferenceCount = ReferenceCount + 1;
                      NdisReferenceWithTag(HighestFilter->PnPRef.RefCountTracker, v52);
                      KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v53);
                      IfBlock = HighestFilter->IfBlock;
                      goto LABEL_54;
                    }
                    ndisRefCountReferenceCountOverflow = 1;
                  }
                  KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v53);
                }
                IfBlock = v45->IfBlock;
LABEL_54:
                v45->MiniportThread = 0LL;
                KeReleaseSpinLockFromDpcLevel(&v45->Lock);
                v55 = KeAcquireSpinLockRaiseToDpc(&v45->Lock);
                NsiRefCountTracker = (ULONG_PTR)v45->NsiRefCountTracker;
                v45->MiniportThread = KeGetCurrentThread();
                if ( NsiRefCountTracker != 2 && NsiRefCountTracker != 3 )
                {
                  if ( NsiRefCountTracker < 2 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, NsiRefCountTracker, 0LL);
                  if ( *(_BYTE *)(NsiRefCountTracker + 2) <= 2u )
                    ndisBugCheckEx(0x1EuLL, 2uLL, NsiRefCountTracker, 2uLL);
                  if ( *(_BYTE *)(NsiRefCountTracker + 1) )
                  {
                    if ( *(_BYTE *)(NsiRefCountTracker + 1) == 1 )
                    {
                      v126 = *(_DWORD *)(NsiRefCountTracker + 192);
                      v127 = NsiRefCountTracker + 136;
                      if ( v126 >> 17 < 0x3FFE && (unsigned __int16)v126 >> 1 == (v126 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(NsiRefCountTracker + 136));
                        *(_DWORD *)(v127 + 56) &= 0x10001u;
                      }
                      else
                      {
                        if ( (unsigned __int16)v126 >> 1 == 0 && (v126 & 1) == 0 )
                          ndisReportRefcountImbalance(NsiRefCountTracker, 2u);
                        ndisReferenceWithTagStackTrace(
                          (struct _NDIS_REFCOUNT_WITH_STACK *)(NsiRefCountTracker + 136),
                          0);
                      }
                    }
                  }
                  else
                  {
                    v100 = *(_QWORD *)(NsiRefCountTracker + 8);
                    if ( v100 )
                    {
                      for ( i = 0; i < *(_BYTE *)(NsiRefCountTracker + 3); ++i )
                      {
                        v102 = (_BYTE *)(v100 + 2LL * i);
                        if ( *v102 == 2 )
                        {
                          v103 = v102[1];
                          if ( v103 )
                          {
                            v102[1] = v103 - 1;
                            goto LABEL_174;
                          }
                        }
                      }
                    }
                    if ( !_bittestandreset((signed __int32 *)(NsiRefCountTracker + 16), 2u) )
                      ndisReportRefcountImbalance(NsiRefCountTracker, 2u);
                  }
                }
LABEL_174:
                v57 = v45->NsiOpenReferences-- == 1;
                if ( v57 )
                {
                  NsiRequestsCompletedEvent = v45->NsiRequestsCompletedEvent;
                  if ( NsiRequestsCompletedEvent )
                    KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
                }
                v45->MiniportThread = 0LL;
                KeReleaseSpinLock(&v45->Lock, v55);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v105) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v105,
                    20,
                    25,
                    (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
                    (char)v45);
                }
                v106 = KeAcquireSpinLockRaiseToDpc(&v45->Ref.SpinLock);
                RefCountTracker = (ULONG_PTR)v45->RefCountTracker;
                v109 = v106;
                if ( RefCountTracker && RefCountTracker - 2 > 1 )
                {
                  if ( RefCountTracker == 1 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                  if ( *(_BYTE *)(RefCountTracker + 2) <= 0x3Cu )
                    ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 0x3CuLL);
                  if ( *(_BYTE *)(RefCountTracker + 1) )
                  {
                    if ( *(_BYTE *)(RefCountTracker + 1) == 1 )
                    {
                      v128 = *(_DWORD *)(RefCountTracker + 3904);
                      v129 = RefCountTracker + 3848;
                      if ( v128 >> 17 < 0x3FFE && (unsigned __int16)v128 >> 1 == (v128 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 3848));
                        *(_DWORD *)(v129 + 56) &= 0x10001u;
                      }
                      else
                      {
                        if ( (unsigned __int16)v128 >> 1 == 0 && (v128 & 1) == 0 )
                          ndisReportRefcountImbalance((ULONG_PTR)v45->RefCountTracker, 0x3Cu);
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 3848), 0);
                      }
                    }
                  }
                  else
                  {
                    v110 = *(_QWORD *)(RefCountTracker + 8);
                    if ( v110 )
                    {
                      for ( j = 0; j < *(_BYTE *)(RefCountTracker + 3); ++j )
                      {
                        v107 = (_BYTE *)(v110 + 2LL * j);
                        if ( *v107 == 60 )
                        {
                          v112 = v107[1];
                          if ( v112 )
                          {
                            v107[1] = v112 - 1;
                            goto LABEL_97;
                          }
                        }
                      }
                    }
                    if ( !_bittestandreset((signed __int32 *)(RefCountTracker + 20), 0x1Cu) )
                      ndisReportRefcountImbalance(RefCountTracker, 0x3Cu);
                  }
                }
LABEL_97:
                v75 = v45->Ref.ReferenceCount - 1;
                v45->Ref.ReferenceCount = v75;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v107) = 4;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v107,
                    20,
                    14,
                    (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
                    (char)v45,
                    v75);
                }
                KeReleaseSpinLock(&v45->Ref.SpinLock, v109);
                if ( !v75 )
                {
                  RemoveReadyEvent = v45->RemoveReadyEvent;
                  if ( RemoveReadyEvent )
                    KeSetEvent(RemoveReadyEvent, 0, 0);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v76) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v76,
                    20,
                    26,
                    (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
                    (char)v45);
                }
                v31 = (_DEVICE_OBJECT *)TokenInformation;
              }
              v77 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
              v78 = (ULONG_PTR)p_DeviceContext[180];
              v79 = v77;
              if ( v78 != 2 && v78 != 3 )
              {
                if ( v78 < 2 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, v78, 0LL);
                if ( *(_BYTE *)(v78 + 2) <= 3u )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v78, 3uLL);
                if ( *(_BYTE *)(v78 + 1) )
                {
                  if ( *(_BYTE *)(v78 + 1) == 1 )
                  {
                    v119 = *(_DWORD *)(v78 + 256);
                    v120 = v78 + 200;
                    if ( v119 >> 17 < 0x3FFE && (unsigned __int16)v119 >> 1 == (v119 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v78 + 200));
                      *(_DWORD *)(v120 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( (unsigned __int16)v119 >> 1 == 0 && (v119 & 1) == 0 )
                        ndisReportRefcountImbalance((ULONG_PTR)p_DeviceContext[180], 3u);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v78 + 200), 0);
                    }
                  }
                }
                else
                {
                  v80 = *(_QWORD *)(v78 + 8);
                  if ( v80 )
                  {
                    for ( k = 0; k < *(_BYTE *)(v78 + 3); ++k )
                    {
                      v82 = (_BYTE *)(v80 + 2LL * k);
                      if ( *v82 == 3 )
                      {
                        v83 = v82[1];
                        if ( v83 )
                        {
                          v82[1] = v83 - 1;
                          goto LABEL_59;
                        }
                      }
                    }
                  }
                  if ( !_bittestandreset((signed __int32 *)(v78 + 16), 3u) )
                    ndisReportRefcountImbalance(v78, 3u);
                }
              }
LABEL_59:
              v57 = (*((_DWORD *)p_DeviceContext + 349))-- == 1;
              if ( v57 )
              {
                v84 = p_DeviceContext[176];
                if ( v84 )
                {
                  v85 = (struct _KEVENT *)*((_QWORD *)v84 + 506);
                  if ( v85 )
                    KeSetEvent(v85, 0, 0);
                }
              }
              KeReleaseSpinLock(&SpinLock, v79);
LABEL_61:
              if ( IfBlock )
              {
                LOBYTE(v41) = 7;
                NdisReferenceWithTag(IfBlock->RefCountTracker, v41);
                ++IfBlock->Ref;
              }
              v3 = a1;
            }
            else if ( *((_BYTE *)p_DeviceContext + 1394) )
            {
              v40 = ndisReferenceTopMiniportByNameForNsi(
                      *((struct _NDIS_MINIPORT_BLOCK **)p_DeviceContext[176] + 4),
                      0,
                      v39,
                      0,
                      NSIREF_IFTOP,
                      MPREF_IF_FINDTOP);
              v42 = v40;
              if ( v40 )
              {
                KeAcquireSpinLockAtDpcLevel(&v40->Lock);
                v43 = v42->HighestFilter;
                for ( v42->MiniportThread = KeGetCurrentThread(); v43; v43 = v43->LowerFilter )
                {
                  v48 = KeAcquireSpinLockRaiseToDpc(&v43->PnPRef.SpinLock);
                  if ( !v43->PnPRef.Closing )
                  {
                    v49 = v43->PnPRef.ReferenceCount;
                    if ( v49 < 0xFFEBu )
                    {
                      LOBYTE(v47) = 11;
                      v43->PnPRef.ReferenceCount = v49 + 1;
                      NdisReferenceWithTag(v43->PnPRef.RefCountTracker, v47);
                      KeReleaseSpinLock(&v43->PnPRef.SpinLock, v48);
                      IfBlock = v43->IfBlock;
                      goto LABEL_46;
                    }
                    ndisRefCountReferenceCountOverflow = 1;
                  }
                  KeReleaseSpinLock(&v43->PnPRef.SpinLock, v48);
                }
                IfBlock = v42->IfBlock;
LABEL_46:
                v42->MiniportThread = 0LL;
                KeReleaseSpinLockFromDpcLevel(&v42->Lock);
                v50 = KeAcquireSpinLockRaiseToDpc(&v42->Lock);
                v51 = (ULONG_PTR)v42->NsiRefCountTracker;
                v42->MiniportThread = KeGetCurrentThread();
                if ( v51 != 2 && v51 != 3 )
                {
                  if ( v51 < 2 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, v51, 0LL);
                  if ( *(_BYTE *)(v51 + 2) <= 2u )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v51, 2uLL);
                  if ( *(_BYTE *)(v51 + 1) )
                  {
                    if ( *(_BYTE *)(v51 + 1) == 1 )
                    {
                      v122 = *(_DWORD *)(v51 + 192);
                      v123 = v51 + 136;
                      if ( v122 >> 17 < 0x3FFE && (unsigned __int16)v122 >> 1 == (v122 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v51 + 136));
                        *(_DWORD *)(v123 + 56) &= 0x10001u;
                      }
                      else
                      {
                        if ( (unsigned __int16)v122 >> 1 == 0 && (v122 & 1) == 0 )
                          ndisReportRefcountImbalance(v51, 2u);
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v51 + 136), 0);
                      }
                    }
                  }
                  else
                  {
                    v86 = *(_QWORD *)(v51 + 8);
                    if ( v86 )
                    {
                      for ( m = 0; m < *(_BYTE *)(v51 + 3); ++m )
                      {
                        v88 = (_BYTE *)(v86 + 2LL * m);
                        if ( *v88 == 2 )
                        {
                          v89 = v88[1];
                          if ( v89 )
                          {
                            v88[1] = v89 - 1;
                            goto LABEL_138;
                          }
                        }
                      }
                    }
                    if ( !_bittestandreset((signed __int32 *)(v51 + 16), 2u) )
                      ndisReportRefcountImbalance(v51, 2u);
                  }
                }
LABEL_138:
                v57 = v42->NsiOpenReferences-- == 1;
                if ( v57 )
                {
                  v90 = v42->NsiRequestsCompletedEvent;
                  if ( v90 )
                    KeSetEvent(v90, 0, 0);
                }
                v42->MiniportThread = 0LL;
                KeReleaseSpinLock(&v42->Lock, v50);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v91) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v91,
                    20,
                    25,
                    (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
                    (char)v42);
                }
                v92 = KeAcquireSpinLockRaiseToDpc(&v42->Ref.SpinLock);
                v94 = (ULONG_PTR)v42->RefCountTracker;
                v95 = v92;
                if ( v94 && v94 - 2 > 1 )
                {
                  if ( v94 == 1 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                  if ( *(_BYTE *)(v94 + 2) <= 0x3Cu )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v94, 0x3CuLL);
                  if ( *(_BYTE *)(v94 + 1) )
                  {
                    if ( *(_BYTE *)(v94 + 1) == 1 )
                    {
                      v124 = *(_DWORD *)(v94 + 3904);
                      v125 = v94 + 3848;
                      if ( v124 >> 17 < 0x3FFE && (unsigned __int16)v124 >> 1 == (v124 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v94 + 3848));
                        *(_DWORD *)(v125 + 56) &= 0x10001u;
                      }
                      else
                      {
                        if ( (unsigned __int16)v124 >> 1 == 0 && (v124 & 1) == 0 )
                          ndisReportRefcountImbalance((ULONG_PTR)v42->RefCountTracker, 0x3Cu);
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v94 + 3848), 0);
                      }
                    }
                  }
                  else
                  {
                    v96 = *(_QWORD *)(v94 + 8);
                    if ( v96 )
                    {
                      for ( n = 0; n < *(_BYTE *)(v94 + 3); ++n )
                      {
                        v93 = (_BYTE *)(v96 + 2LL * n);
                        if ( *v93 == 60 )
                        {
                          v98 = v93[1];
                          if ( v98 )
                          {
                            v93[1] = v98 - 1;
                            goto LABEL_158;
                          }
                        }
                      }
                    }
                    if ( !_bittestandreset((signed __int32 *)(v94 + 20), 0x1Cu) )
                      ndisReportRefcountImbalance(v94, 0x3Cu);
                  }
                }
LABEL_158:
                v99 = v42->Ref.ReferenceCount - 1;
                v42->Ref.ReferenceCount = v99;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v93) = 4;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v93,
                    20,
                    14,
                    (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
                    (char)v42,
                    v99);
                }
                KeReleaseSpinLock(&v42->Ref.SpinLock, v95);
                if ( !v99 )
                {
                  v116 = v42->RemoveReadyEvent;
                  if ( v116 )
                    KeSetEvent(v116, 0, 0);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v41) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (unsigned __int16)v41,
                    20,
                    26,
                    (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
                    (char)v42);
                }
                v31 = (_DEVICE_OBJECT *)TokenInformation;
              }
              goto LABEL_61;
            }
            v24 = EffectiveOnly;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v24);
          if ( *((_QWORD *)v3 + 2) )
          {
            v58 = Size;
            v59 = (char *)v148;
            memmove(v148, p_DeviceContext + 164, Size);
            v148 = &v59[v58];
          }
          if ( *((_QWORD *)v3 + 7) )
          {
            v60 = v149;
            v61 = Size_4;
            LODWORD(v152) = 1;
            *((_QWORD *)&v152 + 1) = v149;
            LODWORD(v153) = Size_4;
            ndisNsiGetInterfaceRodEnumObject((char)p_DeviceContext);
            v149 = v61 + v60;
          }
          if ( *((_QWORD *)v3 + 9) )
          {
            v62 = v150;
            v63 = v146;
            *((_QWORD *)&v152 + 1) = v150;
            LODWORD(v153) = v146;
            LODWORD(v152) = 2;
            ndisNsiGetInterfaceRosEnumObject((char)p_DeviceContext);
            v150 = v63 + v62;
          }
          EffectiveOnly = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
          v24 = EffectiveOnly;
          if ( IfBlock )
          {
            if ( IfBlock->IsNdisFilter )
            {
              p_DeferredContext = (__int64)&IfBlock->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
              v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
              v66 = *(_QWORD *)(p_DeferredContext + 16);
              v67 = v65;
              if ( v66 != 2 && v66 != 3 )
              {
                if ( v66 < 2 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, v66, 0LL);
                if ( *(_BYTE *)(v66 + 2) <= 0xBu )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v66, 0xBuLL);
                if ( *(_BYTE *)(v66 + 1) )
                {
                  if ( *(_BYTE *)(v66 + 1) == 1 )
                  {
                    v113 = v66 + 712;
                    v114 = *(_DWORD *)(v66 + 768);
                    if ( v114 >> 17 < 0x3FFE && (unsigned __int16)v114 >> 1 == (v114 >> 17) + 1 )
                    {
                      for ( ii = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v113;
                            *(_QWORD *)v113;
                            ii = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v113 )
                      {
                        *(_QWORD *)v113 = ii->Next;
                        ndisFreeRefCountStacksInBlock(ii);
                        ExFreePoolWithTag(ii, 0);
                      }
                      ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v113);
                      *(_DWORD *)(v113 + 56) &= 0x10001u;
                      v3 = a1;
                    }
                    else
                    {
                      if ( (unsigned __int16)v114 >> 1 == 0 && (v114 & 1) == 0 )
                        ndisReportRefcountImbalance(*(_QWORD *)(p_DeferredContext + 16), 0xBu);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v66 + 712), 0);
                    }
                  }
                }
                else
                {
                  v68 = *(_QWORD *)(v66 + 8);
                  if ( v68 )
                  {
                    for ( jj = 0; jj < *(_BYTE *)(v66 + 3); ++jj )
                    {
                      v70 = (_BYTE *)(v68 + 2LL * jj);
                      if ( *v70 == 11 )
                      {
                        v71 = v70[1];
                        if ( v71 )
                        {
                          v70[1] = v71 - 1;
                          goto LABEL_88;
                        }
                      }
                    }
                  }
                  if ( !_bittestandreset((signed __int32 *)(v66 + 16), 0xBu) )
                    ndisReportRefcountImbalance(v66, 0xBu);
                }
              }
LABEL_88:
              v57 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
              if ( v57 && !*(_BYTE *)(p_DeferredContext + 11) )
              {
                v136 = *(_QWORD *)(p_DeferredContext + 16);
                if ( v136 )
                {
                  AnyActiveRefTag = ndisGetAnyActiveRefTag(*(struct NDIS_REFCOUNT_HANDLE__ **)(p_DeferredContext + 16));
                  if ( AnyActiveRefTag != -2 )
                    ndisBugCheckEx(0x1EuLL, 4uLL, v136, AnyActiveRefTag);
                  v138 = ndisRefCountBlockFromRefCountHandle(v136);
                  v139 = v138;
                  if ( v138 )
                  {
                    ndisFreeRefCountAuxiliaryMemory(v138);
                    ExFreePoolWithTag(v139, 0);
                  }
                }
                *(_QWORD *)(p_DeferredContext + 16) = 1LL;
              }
              KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v67);
              v24 = EffectiveOnly;
            }
            IFBLOCK_DECREMENT_REF(IfBlock, IFREF_TOPENUMALL);
          }
          v31 = *(_DEVICE_OBJECT **)&v31->Type;
          TokenInformation = v31;
          IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)p_DeviceContext, IFREF_ENUMALL);
          v32 = v147;
          v8 = ImpersonationLevel;
          v23 = v143;
          goto LABEL_92;
        }
        v31 = *(_DEVICE_OBJECT **)&v31->Type;
        TokenInformation = v31;
      }
      else
      {
        v31 = *(_DEVICE_OBJECT **)&v31->Type;
        TokenInformation = v31;
      }
LABEL_92:
      if ( v31 == (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
        goto LABEL_93;
    }
  }
  for ( kk = *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize; kk != (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize; v4 = v133 )
  {
    v131 = kk->Queue.Wcb.BufferChainingDpc;
    if ( v8 == LODWORD(v131->ProcessorHistory) )
    {
      v132 = 1;
    }
    else
    {
      if ( v9 != -1 )
        goto LABEL_248;
      v134 = *((_QWORD *)&v151[0] + 1) - *(unsigned __int64 *)((char *)&v131[26].ProcessorHistory + 4);
      if ( *((_QWORD *)&v151[0] + 1) == *(unsigned __int64 *)((char *)&v131[26].ProcessorHistory + 4) )
        v134 = *(_QWORD *)&v151[1] - *(unsigned __int64 *)((char *)&v131[26].DeferredRoutine + 4);
      if ( !v134 )
        v132 = 1;
      else
LABEL_248:
        v132 = (v131[26].ProcessorHistory & 2) == 0 && v8 == SecurityIdentification;
    }
    kk = *(_DEVICE_OBJECT **)&kk->Type;
    v133 = v4 + 1;
    if ( !v132 )
      v133 = v4;
  }
  *((_DWORD *)v3 + 22) = v4;
  v72 = v4 != 0 ? 0x105 : 0;
LABEL_94:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v24);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v73) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v73,
      22,
      15,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)v3,
      v72);
  }
  KeLeaveCriticalRegion();
  return v72;
}
