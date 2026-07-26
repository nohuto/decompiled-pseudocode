/*
 * XREFs of ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140014610
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
 *     ndisNsiGetInterfaceRosEnumObject @ 0x140152A60 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1401544F0 (ndisNsiGetInterfaceRosInformation.c)
 *     ndisNsiGetInterfaceRwInformation @ 0x140154950 (ndisNsiGetInterfaceRwInformation.c)
 *     ndisIsMacAddressHidden @ 0x14015C720 (ndisIsMacAddressHidden.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x14016F0D0 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x14016F790 (ndisNsiGetInterfaceRodInformation.c)
 */

__int64 __fastcall ndisNsiGetAllInterfaceInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  __int64 v1; // r14
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v2; // rsi
  __int64 CurrentProcess; // rax
  _LIST_ENTRY **v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  _LIST_ENTRY *v6; // rbx
  int *ThreadProperty; // rax
  int v8; // r15d
  int v9; // r12d
  unsigned int v10; // edi
  PACCESS_TOKEN v11; // rax
  void *v12; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v14; // edi
  struct _KTHREAD *v15; // rsi
  PACCESS_TOKEN v16; // rax
  void *v17; // r14
  unsigned int ThreadSessionId; // eax
  KIRQL v19; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v20; // rcx
  KIRQL v21; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rax
  KIRQL v23; // al
  int v24; // ecx
  _DEVICE_OBJECT *v25; // rax
  void **p_DeviceContext; // r13
  struct _NDIS_IF_BLOCK *v27; // rbx
  unsigned int v28; // esi
  void **v29; // r15
  struct _NDIS_IF_BLOCK *v30; // r14
  KIRQL v31; // di
  __int64 p_DeferredContext; // rbx
  KIRQL v33; // al
  ULONG_PTR v34; // r8
  KIRQL v35; // r13
  NTSTATUS v36; // edi
  NTSTATUS v37; // edi
  int v38; // ecx
  __int64 v39; // r9
  unsigned __int8 v40; // r10
  unsigned __int8 v41; // cl
  _BYTE *v42; // rdx
  char v43; // al
  ULONG_PTR v44; // r13
  unsigned int v45; // edx
  int v46; // ecx
  struct _NDIS_REFCOUNT_STACK_BLOCK *v47; // rax
  bool v48; // zf
  unsigned int v49; // ebx
  int v50; // edx
  int v51; // ecx
  _DEVICE_OBJECT *v52; // rax
  char *v53; // rcx
  __int64 v54; // r8
  struct _NDIS_IF_BLOCK *v55; // r15
  KIRQL v56; // al
  KIRQL v57; // di
  struct _NDIS_MINIPORT_BLOCK *v58; // rbx
  __int64 v59; // r8
  struct _NDIS_MINIPORT_BLOCK *v60; // rax
  struct _NDIS_MINIPORT_BLOCK *v61; // rbx
  _NDIS_FILTER_BLOCK *v62; // rdi
  struct _NDIS_IF_BLOCK *v63; // rdx
  struct _NDIS_MINIPORT_BLOCK *v64; // rax
  struct _NDIS_MINIPORT_BLOCK *v65; // rbx
  _NDIS_FILTER_BLOCK *HighestFilter; // rdi
  struct _NDIS_IF_BLOCK *IfBlock; // rdx
  KIRQL v68; // r15
  unsigned __int16 v69; // ax
  struct _NDIS_REFCOUNT_BLOCK *v70; // rcx
  KIRQL v71; // r14
  ULONG_PTR v72; // r8
  KIRQL v73; // r15
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v76; // r14
  ULONG_PTR NsiRefCountTracker; // r8
  ULONG_PTR v78; // rsi
  unsigned int v79; // edx
  int v80; // ecx
  KIRQL v81; // dl
  __int64 v82; // rax
  ULONG_PTR v83; // rsi
  unsigned int v84; // edx
  int v85; // ecx
  _BYTE *v86; // rdx
  int v87; // edi
  KIRQL v88; // al
  ULONG_PTR v89; // r8
  KIRQL v90; // di
  int v91; // ecx
  __int64 v92; // r9
  unsigned __int8 v93; // r11
  unsigned __int8 v94; // cl
  _BYTE *v95; // r10
  char v96; // al
  KIRQL v97; // r8
  void *v98; // rax
  struct _KEVENT *v99; // rcx
  int v100; // ecx
  __int64 v101; // r9
  unsigned __int8 v102; // r10
  unsigned __int8 v103; // cl
  _BYTE *v104; // rdx
  char v105; // al
  ULONG_PTR v106; // rsi
  unsigned int v107; // edx
  int v108; // ecx
  struct _KEVENT *v109; // rcx
  KIRQL v110; // al
  _BYTE *v111; // rdx
  ULONG_PTR v112; // r8
  KIRQL v113; // r15
  int v114; // ecx
  __int64 v115; // r9
  unsigned __int8 v116; // r10
  unsigned __int8 v117; // cl
  char v118; // al
  ULONG_PTR v119; // rsi
  unsigned int v120; // edx
  int v121; // ecx
  int v122; // edi
  int v123; // ecx
  __int64 v124; // r10
  unsigned __int8 v125; // r9
  unsigned __int8 v126; // cl
  _BYTE *v127; // rdx
  char v128; // al
  ULONG_PTR v129; // rsi
  unsigned int v130; // edx
  int v131; // ecx
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  KIRQL v133; // al
  ULONG_PTR v134; // r8
  KIRQL v135; // r15
  int v136; // ecx
  __int64 v137; // r10
  unsigned __int8 v138; // r9
  unsigned __int8 v139; // cl
  char v140; // al
  struct _KEVENT *v141; // rcx
  struct _KEVENT *RemoveReadyEvent; // rcx
  ULONG_PTR v143; // rsi
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v145; // rax
  struct _NDIS_REFCOUNT_BLOCK *v146; // rsi
  char *v147; // rcx
  __int64 v148; // rdx
  struct _NDIS_REFCOUNT_STACK_BLOCK *v149; // rbx
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel[2]; // [rsp+40h] [rbp-69h] BYREF
  struct _NDIS_IF_BLOCK *v152; // [rsp+48h] [rbp-61h]
  char v153[8]; // [rsp+50h] [rbp-59h]
  PVOID TokenInformation; // [rsp+58h] [rbp-51h] BYREF
  char v155[16]; // [rsp+60h] [rbp-49h] BYREF
  __int128 v156; // [rsp+70h] [rbp-39h]
  __int128 v157; // [rsp+80h] [rbp-29h]
  __int128 v158; // [rsp+90h] [rbp-19h]
  _OWORD v159[2]; // [rsp+A0h] [rbp-9h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+118h] [rbp+6Fh] BYREF
  BOOLEAN CopyOnOpen; // [rsp+120h] [rbp+77h] BYREF
  __int64 v163; // [rsp+128h] [rbp+7Fh]

  LODWORD(v1) = 0;
  v2 = a1;
  *(_QWORD *)v153 = 0LL;
  v152 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      26,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1);
  *(_OWORD *)v155 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  LOBYTE(v163) = ndisIsMacAddressHidden(CurrentProcess);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v2 + 6) != 8 )
  {
    v49 = -1073741808;
    v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    goto LABEL_69;
  }
  v4 = (_LIST_ENTRY **)*((_QWORD *)v2 + 2);
  CurrentThread = KeGetCurrentThread();
  v6 = *v4;
  memset(v159, 0, 24);
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( !ThreadProperty )
  {
    v8 = 0;
    goto LABEL_7;
  }
  v9 = *ThreadProperty;
  v8 = ThreadProperty[1];
  ObfDereferenceObject(ThreadProperty);
  v10 = v9;
  if ( !v9 )
  {
LABEL_7:
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel[0] = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    }
    else
    {
      v11 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, ImpersonationLevel);
      v12 = v11;
      if ( v11 )
      {
        v36 = SeQueryInformationToken(v11, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v12);
        if ( v36 >= 0 )
        {
          v14 = (unsigned int)TokenInformation;
          LODWORD(v1) = 0;
LABEL_11:
          if ( v14 == -1 )
          {
            v15 = KeGetCurrentThread();
            CopyOnOpen = 0;
            EffectiveOnly = 0;
            ImpersonationLevel[0] = SecurityAnonymous;
            TokenInformation = 0LL;
            if ( KeGetCurrentIrql() >= 2u )
            {
              ThreadSessionId = PsGetCurrentProcessSessionId();
            }
            else
            {
              v16 = PsReferenceImpersonationToken(v15, &CopyOnOpen, &EffectiveOnly, ImpersonationLevel);
              v17 = v16;
              if ( v16 )
              {
                v37 = SeQueryInformationToken(v16, TokenSessionId, &TokenInformation);
                PsDereferenceImpersonationToken(v17);
                if ( v37 >= 0 )
                {
                  v14 = (unsigned int)TokenInformation;
                  LODWORD(v1) = 0;
                  goto LABEL_16;
                }
              }
              ThreadSessionId = PsGetThreadSessionId(v15);
              LODWORD(v1) = 0;
            }
            v14 = ThreadSessionId;
          }
LABEL_16:
          if ( v14 < dword_14011E898 )
          {
            v9 = 0;
            v97 = KeAcquireSpinLockRaiseToDpc(&qword_14011E8E0);
            if ( v14 < dword_14011E898 )
              v9 = *((_DWORD *)qword_14011E8E8 + 6 * v14);
            KeReleaseSpinLock(&qword_14011E8E0, v97);
            if ( !v9 )
              v9 = 1;
          }
          else
          {
            v9 = 1;
          }
          v10 = v9;
          goto LABEL_19;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
      LODWORD(v1) = 0;
    }
    v14 = CurrentProcessSessionId;
    goto LABEL_11;
  }
LABEL_19:
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v20 = 0LL;
  v21 = v19;
  for ( i = qword_14011E9D8;
        i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8;
        i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
  {
    if ( *((_DWORD *)i + 4) == v10 )
    {
      v20 = i;
      break;
    }
    if ( *((_DWORD *)i + 4) > v10 )
      break;
  }
  *(_OWORD *)((char *)v159 + 8) = *(_OWORD *)((char *)v20 + 1684);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v21);
  v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v2 = a1;
  EffectiveOnly = v23;
  v24 = *((_DWORD *)a1 + 8);
  if ( !v24 )
  {
    v25 = *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize;
    p_DeviceContext = 0LL;
    *(_QWORD *)ImpersonationLevel = 0LL;
    while ( v25 != (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
    {
      if ( v25->Queue.ListEntry.Flink == v6 )
      {
        p_DeviceContext = &v25[-4].Queue.Wcb.DeviceContext;
        *(_QWORD *)ImpersonationLevel = (char *)v25 - 1232;
        break;
      }
      if ( v25->Queue.ListEntry.Flink > v6 )
        break;
      v25 = *(_DEVICE_OBJECT **)&v25->Type;
    }
    if ( !p_DeviceContext )
      goto LABEL_31;
    v147 = (char *)p_DeviceContext[172];
    if ( v9 != *((_DWORD *)v147 + 4) )
    {
      v148 = *((_QWORD *)&v159[0] + 1) - *(_QWORD *)(v147 + 1684);
      if ( *((_QWORD *)&v159[0] + 1) == *(_QWORD *)(v147 + 1684) )
        v148 = *(_QWORD *)&v159[1] - *(_QWORD *)(v147 + 1692);
      if ( v148 && ((*((_DWORD *)v147 + 420) & 2) != 0 || v9 != 1) )
      {
        p_DeviceContext = 0LL;
        *(_QWORD *)ImpersonationLevel = 0LL;
LABEL_31:
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, EffectiveOnly);
        v1 = 3221225524LL;
        if ( *((_DWORD *)a1 + 8) )
          v1 = 2147483674LL;
        goto LABEL_33;
      }
    }
LABEL_85:
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)p_DeviceContext[179], 3u);
    ++*((_DWORD *)p_DeviceContext + 326);
    v55 = 0LL;
    v48 = *((_BYTE *)p_DeviceContext + 1393) == 0;
    v152 = 0LL;
    if ( v48 )
    {
      v152 = 0LL;
      goto LABEL_123;
    }
    if ( *((_QWORD *)a1 + 1) > 1uLL )
    {
      v152 = 0LL;
      goto LABEL_123;
    }
    v56 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v57 = v56;
    if ( *((_BYTE *)p_DeviceContext + 1395) )
    {
      v58 = (struct _NDIS_MINIPORT_BLOCK *)p_DeviceContext[176];
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)p_DeviceContext[180], 3u);
      ++*((_DWORD *)p_DeviceContext + 349);
      KeReleaseSpinLock(&SpinLock, v57);
      if ( v58 )
      {
        v64 = ndisReferenceTopMiniportByNameForNsi(v58, 0, v59, 0, NSIREF_IFTOP, MPREF_IF_FINDTOP);
        v65 = v64;
        if ( v64 )
        {
          KeAcquireSpinLockAtDpcLevel(&v64->Lock);
          HighestFilter = v65->HighestFilter;
          for ( v65->MiniportThread = KeGetCurrentThread(); HighestFilter; HighestFilter = HighestFilter->LowerFilter )
          {
            v73 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
            if ( !HighestFilter->PnPRef.Closing )
            {
              ReferenceCount = HighestFilter->PnPRef.ReferenceCount;
              if ( ReferenceCount < 0xFFEBu )
              {
                RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)HighestFilter->PnPRef.RefCountTracker;
                HighestFilter->PnPRef.ReferenceCount = ReferenceCount + 1;
                NdisReferenceWithTag(RefCountTracker, 0xBu);
                KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v73);
                IfBlock = HighestFilter->IfBlock;
                goto LABEL_107;
              }
              ndisRefCountReferenceCountOverflow = 1;
            }
            KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v73);
          }
          IfBlock = v65->IfBlock;
LABEL_107:
          v152 = IfBlock;
          v65->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&v65->Lock);
          v76 = KeAcquireSpinLockRaiseToDpc(&v65->Lock);
          NsiRefCountTracker = (ULONG_PTR)v65->NsiRefCountTracker;
          v65->MiniportThread = KeGetCurrentThread();
          if ( NsiRefCountTracker != 2 && NsiRefCountTracker != 3 )
          {
            if ( NsiRefCountTracker < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, NsiRefCountTracker, 0LL);
            if ( *(_BYTE *)(NsiRefCountTracker + 2) <= 2u )
              ndisBugCheckEx(0x1EuLL, 2uLL, NsiRefCountTracker, 2uLL);
            v123 = *(unsigned __int8 *)(NsiRefCountTracker + 1);
            *(_QWORD *)ImpersonationLevel = p_DeviceContext;
            if ( v123 )
            {
              if ( v123 == 1 )
              {
                v129 = NsiRefCountTracker + 136;
                v130 = *(_DWORD *)(NsiRefCountTracker + 192);
                v131 = (unsigned __int16)v130 >> 1;
                if ( v130 >> 17 < 0x3FFE && v131 == (v130 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(NsiRefCountTracker + 136));
                  *(_DWORD *)(v129 + 56) &= 0x10001u;
                }
                else
                {
                  if ( v131 == 0 && (v130 & 1) == 0 )
                    ndisReportRefcountImbalance(NsiRefCountTracker, 2u);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(NsiRefCountTracker + 136), 0);
                }
                *(_QWORD *)ImpersonationLevel = p_DeviceContext;
              }
            }
            else
            {
              v124 = *(_QWORD *)(NsiRefCountTracker + 8);
              *(_QWORD *)ImpersonationLevel = p_DeviceContext;
              if ( v124 )
              {
                v125 = *(_BYTE *)(NsiRefCountTracker + 3);
                v126 = 0;
                *(_QWORD *)ImpersonationLevel = p_DeviceContext;
                while ( v126 < v125 )
                {
                  v127 = (_BYTE *)(v124 + 2LL * v126);
                  if ( *v127 == 2 )
                  {
                    v128 = v127[1];
                    if ( v128 )
                    {
                      v127[1] = v128 - 1;
                      goto LABEL_226;
                    }
                  }
                  ++v126;
                }
              }
              if ( !_bittestandreset((signed __int32 *)(NsiRefCountTracker + 16), 2u) )
                ndisReportRefcountImbalance(NsiRefCountTracker, 2u);
            }
          }
LABEL_226:
          v48 = v65->NsiOpenReferences-- == 1;
          if ( v48 )
          {
            NsiRequestsCompletedEvent = v65->NsiRequestsCompletedEvent;
            if ( NsiRequestsCompletedEvent )
              KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
          }
          v65->MiniportThread = 0LL;
          KeReleaseSpinLock(&v65->Lock, v76);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4,
              20,
              25,
              (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
              (char)v65);
          v133 = KeAcquireSpinLockRaiseToDpc(&v65->Ref.SpinLock);
          v134 = (ULONG_PTR)v65->RefCountTracker;
          v135 = v133;
          if ( v134 && v134 - 2 > 1 )
          {
            if ( v134 == 1 )
              ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
            if ( *(_BYTE *)(v134 + 2) <= 0x3Cu )
              ndisBugCheckEx(0x1EuLL, 2uLL, v134, 0x3CuLL);
            v136 = *(unsigned __int8 *)(v134 + 1);
            *(_QWORD *)ImpersonationLevel = p_DeviceContext;
            if ( v136 )
            {
              if ( v136 == 1 )
              {
                v83 = v134 + 3848;
                v84 = *(_DWORD *)(v134 + 3904);
                v85 = (unsigned __int16)v84 >> 1;
                if ( v84 >> 17 < 0x3FFE && v85 == (v84 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v134 + 3848));
                  *(_DWORD *)(v83 + 56) &= 0x10001u;
                }
                else
                {
                  if ( v85 == 0 && (v84 & 1) == 0 )
                    ndisReportRefcountImbalance(v134, 0x3Cu);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v134 + 3848), 0);
                }
                *(_QWORD *)ImpersonationLevel = p_DeviceContext;
              }
            }
            else
            {
              v137 = *(_QWORD *)(v134 + 8);
              *(_QWORD *)ImpersonationLevel = p_DeviceContext;
              if ( v137 )
              {
                v138 = *(_BYTE *)(v134 + 3);
                v139 = 0;
                *(_QWORD *)ImpersonationLevel = p_DeviceContext;
                while ( v139 < v138 )
                {
                  v86 = (_BYTE *)(v137 + 2LL * v139);
                  if ( *v86 == 60 )
                  {
                    v140 = v86[1];
                    if ( v140 )
                    {
                      v86[1] = v140 - 1;
                      goto LABEL_131;
                    }
                  }
                  ++v139;
                }
              }
              if ( !_bittestandreset((signed __int32 *)(v134 + 20), 0x1Cu) )
                ndisReportRefcountImbalance(v134, 0x3Cu);
            }
          }
LABEL_131:
          v87 = v65->Ref.ReferenceCount - 1;
          v65->Ref.ReferenceCount = v87;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v86) = 4;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v86,
              20,
              14,
              (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
              (char)v65,
              v87);
          }
          KeReleaseSpinLock(&v65->Ref.SpinLock, v135);
          if ( !v87 )
          {
            RemoveReadyEvent = v65->RemoveReadyEvent;
            if ( RemoveReadyEvent )
              KeSetEvent(RemoveReadyEvent, 0, 0);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4,
              20,
              26,
              (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
              (char)v65);
          v55 = v152;
          LODWORD(v1) = 0;
        }
        else
        {
          v152 = 0LL;
        }
        v88 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
        v89 = (ULONG_PTR)p_DeviceContext[180];
        v90 = v88;
        if ( v89 != 2 && v89 != 3 )
        {
          if ( v89 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v89, 0LL);
          if ( *(_BYTE *)(v89 + 2) <= 3u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v89, 3uLL);
          v91 = *(unsigned __int8 *)(v89 + 1);
          *(_QWORD *)ImpersonationLevel = p_DeviceContext;
          if ( v91 )
          {
            if ( v91 == 1 )
            {
              v78 = v89 + 200;
              v79 = *(_DWORD *)(v89 + 256);
              v80 = (unsigned __int16)v79 >> 1;
              if ( v79 >> 17 < 0x3FFE && v80 == (v79 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v89 + 200));
                *(_DWORD *)(v78 + 56) &= 0x10001u;
              }
              else
              {
                if ( v80 == 0 && (v79 & 1) == 0 )
                  ndisReportRefcountImbalance(v89, 3u);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v89 + 200), 0);
              }
              *(_QWORD *)ImpersonationLevel = p_DeviceContext;
            }
          }
          else
          {
            v92 = *(_QWORD *)(v89 + 8);
            *(_QWORD *)ImpersonationLevel = p_DeviceContext;
            if ( v92 )
            {
              v93 = *(_BYTE *)(v89 + 3);
              v94 = 0;
              *(_QWORD *)ImpersonationLevel = p_DeviceContext;
              while ( v94 < v93 )
              {
                v95 = (_BYTE *)(v92 + 2LL * v94);
                if ( *v95 == 3 )
                {
                  v96 = v95[1];
                  if ( v96 )
                  {
                    v95[1] = v96 - 1;
                    goto LABEL_118;
                  }
                }
                ++v94;
              }
            }
            if ( !_bittestandreset((signed __int32 *)(v89 + 16), 3u) )
              ndisReportRefcountImbalance(v89, 3u);
          }
        }
LABEL_118:
        v48 = (*((_DWORD *)p_DeviceContext + 349))-- == 1;
        if ( v48 )
        {
          v98 = p_DeviceContext[176];
          if ( v98 )
          {
            v99 = (struct _KEVENT *)*((_QWORD *)v98 + 506);
            if ( v99 )
              KeSetEvent(v99, 0, 0);
          }
        }
        KeReleaseSpinLock(&SpinLock, v90);
LABEL_120:
        if ( v55 )
        {
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v55->RefCountTracker, 4u);
          ++v55->Ref;
        }
        v2 = a1;
LABEL_123:
        v81 = EffectiveOnly;
        **((_QWORD **)v2 + 2) = p_DeviceContext[164];
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v81);
        v82 = *((_QWORD *)v2 + 1);
        DWORD1(v158) = 0;
        if ( !v82 )
        {
LABEL_124:
          *((_QWORD *)&v157 + 1) = *((_QWORD *)v2 + 5);
          LODWORD(v158) = *((_DWORD *)v2 + 12);
          LODWORD(v157) = 0;
          ndisNsiGetInterfaceRwInformation((char)p_DeviceContext, (char)v55, (char)v155);
          *((_DWORD *)v2 + 12) = v158;
          *((_QWORD *)&v157 + 1) = *((_QWORD *)v2 + 7);
          LODWORD(v158) = *((_DWORD *)v2 + 16);
          LODWORD(v157) = 1;
          ndisNsiGetInterfaceRodInformation((char)p_DeviceContext, (char)v55, (char)v155);
          *((_DWORD *)v2 + 16) = v158;
          *((_QWORD *)&v157 + 1) = *((_QWORD *)v2 + 9);
          LODWORD(v158) = *((_DWORD *)v2 + 20);
          LODWORD(v157) = 2;
          ndisNsiGetInterfaceRosInformation((struct _NDIS_IF_BLOCK *)p_DeviceContext);
          *((_DWORD *)v2 + 20) = v158;
          goto LABEL_34;
        }
        if ( v82 != 1 )
        {
          if ( v82 == 12 )
            goto LABEL_124;
          if ( v82 != 13 )
          {
            v1 = 3221225485LL;
LABEL_33:
            *(_QWORD *)v153 = v1;
LABEL_34:
            v27 = v152;
            v28 = v1;
            v29 = p_DeviceContext;
            v30 = v152;
            v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
            if ( v27 )
            {
              if ( v27->IsNdisFilter )
              {
                p_DeferredContext = (__int64)&v27->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
                v163 = p_DeferredContext;
                v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
                v34 = *(_QWORD *)(p_DeferredContext + 16);
                v35 = v33;
                EffectiveOnly = v33;
                if ( v34 != 2 && v34 != 3 )
                {
                  if ( v34 < 2 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, v34, 0LL);
                  if ( *(_BYTE *)(v34 + 2) <= 0xBu )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v34, 0xBuLL);
                  v38 = *(unsigned __int8 *)(v34 + 1);
                  *(_QWORD *)ImpersonationLevel = v29;
                  v152 = v30;
                  *(_DWORD *)v153 = v28;
                  if ( v38 )
                  {
                    if ( v38 == 1 )
                    {
                      v44 = v34 + 712;
                      v45 = *(_DWORD *)(v34 + 768);
                      v46 = (unsigned __int16)v45 >> 1;
                      if ( v45 >> 17 < 0x3FFE && v46 == (v45 >> 17) + 1 )
                      {
                        v47 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v44;
                        *(_QWORD *)ImpersonationLevel = v29;
                        v152 = v30;
                        *(_QWORD *)v153 = v28;
                        if ( v47 )
                        {
                          *(_QWORD *)ImpersonationLevel = v29;
                          v149 = v47;
                          v152 = v30;
                          *(_QWORD *)v153 = v28;
                          do
                          {
                            *(_QWORD *)v44 = v149->Next;
                            ndisFreeRefCountStacksInBlock(v149);
                            ExFreePoolWithTag(v149, 0);
                            v149 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v44;
                          }
                          while ( *(_QWORD *)v44 );
                          p_DeferredContext = v163;
                        }
                        ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v44);
                        *(_DWORD *)(v44 + 56) &= 0x10001u;
                      }
                      else
                      {
                        if ( v46 == 0 && (v45 & 1) == 0 )
                          ndisReportRefcountImbalance(v34, 0xBu);
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v34 + 712), 0);
                        *(_QWORD *)ImpersonationLevel = v29;
                        *(_QWORD *)v153 = v28;
                        v152 = v30;
                      }
                      v35 = EffectiveOnly;
                    }
                  }
                  else
                  {
                    v39 = *(_QWORD *)(v34 + 8);
                    *(_QWORD *)ImpersonationLevel = v29;
                    v152 = v30;
                    *(_DWORD *)v153 = v28;
                    if ( v39 )
                    {
                      v40 = *(_BYTE *)(v34 + 3);
                      *(_QWORD *)v153 = v28;
                      v41 = 0;
                      *(_QWORD *)ImpersonationLevel = v29;
                      v152 = v30;
                      while ( v41 < v40 )
                      {
                        v42 = (_BYTE *)(v39 + 2LL * v41);
                        if ( *v42 == 11 )
                        {
                          v43 = v42[1];
                          if ( v43 )
                          {
                            v42[1] = v43 - 1;
                            goto LABEL_63;
                          }
                        }
                        ++v41;
                      }
                    }
                    if ( !_bittestandreset((signed __int32 *)(v34 + 16), 0xBu) )
                      ndisReportRefcountImbalance(v34, 0xBu);
                  }
                }
LABEL_63:
                v48 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
                if ( v48 && !*(_BYTE *)(p_DeferredContext + 11) )
                {
                  v143 = *(_QWORD *)(p_DeferredContext + 16);
                  if ( v143 )
                  {
                    AnyActiveRefTag = ndisGetAnyActiveRefTag(*(struct NDIS_REFCOUNT_HANDLE__ **)(p_DeferredContext + 16));
                    if ( AnyActiveRefTag != -2 )
                      ndisBugCheckEx(0x1EuLL, 4uLL, v143, AnyActiveRefTag);
                    v145 = ndisRefCountBlockFromRefCountHandle(v143);
                    v146 = v145;
                    if ( v145 )
                    {
                      ndisFreeRefCountAuxiliaryMemory(v145);
                      ExFreePoolWithTag(v146, 0);
                    }
                  }
                  *(_QWORD *)(p_DeferredContext + 16) = 1LL;
                }
                KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v35);
                p_DeviceContext = *(void ***)ImpersonationLevel;
                v27 = v152;
              }
              IFBLOCK_DECREMENT_REF(v27, 4u);
            }
            if ( p_DeviceContext )
              IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)p_DeviceContext, 3u);
            LOBYTE(v2) = (_BYTE)a1;
            v49 = *(_DWORD *)v153;
            goto LABEL_69;
          }
        }
        *((_QWORD *)&v157 + 1) = *((_QWORD *)v2 + 7);
        LODWORD(v158) = *((_DWORD *)v2 + 16);
        LODWORD(v157) = 1;
        ndisNsiGetInterfaceRodEnumObject((char)p_DeviceContext);
        *((_DWORD *)v2 + 16) = v158;
        *((_QWORD *)&v157 + 1) = *((_QWORD *)v2 + 9);
        LODWORD(v158) = *((_DWORD *)v2 + 20);
        LODWORD(v157) = 2;
        ndisNsiGetInterfaceRosEnumObject((char)p_DeviceContext);
        *((_DWORD *)v2 + 20) = v158;
        goto LABEL_34;
      }
    }
    else
    {
      KeReleaseSpinLock(&SpinLock, v56);
    }
    if ( !*((_BYTE *)p_DeviceContext + 1394) )
      goto LABEL_123;
    v60 = ndisReferenceTopMiniportByNameForNsi(
            *((struct _NDIS_MINIPORT_BLOCK **)p_DeviceContext[176] + 4),
            0,
            v59,
            0,
            NSIREF_IFTOP,
            MPREF_IF_FINDTOP);
    v61 = v60;
    if ( v60 )
    {
      KeAcquireSpinLockAtDpcLevel(&v60->Lock);
      v62 = v61->HighestFilter;
      for ( v61->MiniportThread = KeGetCurrentThread(); v62; v62 = v62->LowerFilter )
      {
        v68 = KeAcquireSpinLockRaiseToDpc(&v62->PnPRef.SpinLock);
        if ( !v62->PnPRef.Closing )
        {
          v69 = v62->PnPRef.ReferenceCount;
          if ( v69 < 0xFFEBu )
          {
            v70 = (struct _NDIS_REFCOUNT_BLOCK *)v62->PnPRef.RefCountTracker;
            v62->PnPRef.ReferenceCount = v69 + 1;
            NdisReferenceWithTag(v70, 0xBu);
            KeReleaseSpinLock(&v62->PnPRef.SpinLock, v68);
            v63 = v62->IfBlock;
            goto LABEL_99;
          }
          ndisRefCountReferenceCountOverflow = 1;
        }
        KeReleaseSpinLock(&v62->PnPRef.SpinLock, v68);
      }
      v63 = v61->IfBlock;
LABEL_99:
      v152 = v63;
      v61->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v61->Lock);
      v71 = KeAcquireSpinLockRaiseToDpc(&v61->Lock);
      v72 = (ULONG_PTR)v61->NsiRefCountTracker;
      v61->MiniportThread = KeGetCurrentThread();
      if ( v72 != 2 && v72 != 3 )
      {
        if ( v72 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v72, 0LL);
        if ( *(_BYTE *)(v72 + 2) <= 2u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v72, 2uLL);
        v100 = *(unsigned __int8 *)(v72 + 1);
        *(_QWORD *)ImpersonationLevel = p_DeviceContext;
        if ( v100 )
        {
          if ( v100 == 1 )
          {
            v106 = v72 + 136;
            v107 = *(_DWORD *)(v72 + 192);
            v108 = (unsigned __int16)v107 >> 1;
            if ( v107 >> 17 < 0x3FFE && v108 == (v107 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v72 + 136));
              *(_DWORD *)(v106 + 56) &= 0x10001u;
            }
            else
            {
              if ( v108 == 0 && (v107 & 1) == 0 )
                ndisReportRefcountImbalance(v72, 2u);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v72 + 136), 0);
            }
            *(_QWORD *)ImpersonationLevel = p_DeviceContext;
          }
        }
        else
        {
          v101 = *(_QWORD *)(v72 + 8);
          *(_QWORD *)ImpersonationLevel = p_DeviceContext;
          if ( v101 )
          {
            v102 = *(_BYTE *)(v72 + 3);
            v103 = 0;
            *(_QWORD *)ImpersonationLevel = p_DeviceContext;
            while ( v103 < v102 )
            {
              v104 = (_BYTE *)(v101 + 2LL * v103);
              if ( *v104 == 2 )
              {
                v105 = v104[1];
                if ( v105 )
                {
                  v104[1] = v105 - 1;
                  goto LABEL_180;
                }
              }
              ++v103;
            }
          }
          if ( !_bittestandreset((signed __int32 *)(v72 + 16), 2u) )
            ndisReportRefcountImbalance(v72, 2u);
        }
      }
LABEL_180:
      v48 = v61->NsiOpenReferences-- == 1;
      if ( v48 )
      {
        v109 = v61->NsiRequestsCompletedEvent;
        if ( v109 )
          KeSetEvent(v109, 0, 0);
      }
      v61->MiniportThread = 0LL;
      KeReleaseSpinLock(&v61->Lock, v71);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          20,
          25,
          (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
          (char)v61);
      v110 = KeAcquireSpinLockRaiseToDpc(&v61->Ref.SpinLock);
      v112 = (ULONG_PTR)v61->RefCountTracker;
      v113 = v110;
      if ( v112 && v112 - 2 > 1 )
      {
        if ( v112 == 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
        if ( *(_BYTE *)(v112 + 2) <= 0x3Cu )
          ndisBugCheckEx(0x1EuLL, 2uLL, v112, 0x3CuLL);
        v114 = *(unsigned __int8 *)(v112 + 1);
        *(_QWORD *)ImpersonationLevel = p_DeviceContext;
        if ( v114 )
        {
          if ( v114 == 1 )
          {
            v119 = v112 + 3848;
            v120 = *(_DWORD *)(v112 + 3904);
            v121 = (unsigned __int16)v120 >> 1;
            if ( v120 >> 17 < 0x3FFE && v121 == (v120 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v112 + 3848));
              *(_DWORD *)(v119 + 56) &= 0x10001u;
            }
            else
            {
              if ( v121 == 0 && (v120 & 1) == 0 )
                ndisReportRefcountImbalance(v112, 0x3Cu);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v112 + 3848), 0);
            }
            *(_QWORD *)ImpersonationLevel = p_DeviceContext;
          }
        }
        else
        {
          v115 = *(_QWORD *)(v112 + 8);
          *(_QWORD *)ImpersonationLevel = p_DeviceContext;
          if ( v115 )
          {
            v116 = *(_BYTE *)(v112 + 3);
            v117 = 0;
            *(_QWORD *)ImpersonationLevel = p_DeviceContext;
            while ( v117 < v116 )
            {
              v111 = (_BYTE *)(v115 + 2LL * v117);
              if ( *v111 == 60 )
              {
                v118 = v111[1];
                if ( v118 )
                {
                  v111[1] = v118 - 1;
                  goto LABEL_205;
                }
              }
              ++v117;
            }
          }
          if ( !_bittestandreset((signed __int32 *)(v112 + 20), 0x1Cu) )
            ndisReportRefcountImbalance(v112, 0x3Cu);
        }
      }
LABEL_205:
      v122 = v61->Ref.ReferenceCount - 1;
      v61->Ref.ReferenceCount = v122;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v111) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v111,
          20,
          14,
          (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
          (char)v61,
          v122);
      }
      KeReleaseSpinLock(&v61->Ref.SpinLock, v113);
      if ( !v122 )
      {
        v141 = v61->RemoveReadyEvent;
        if ( v141 )
          KeSetEvent(v141, 0, 0);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          20,
          26,
          (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
          (char)v61);
      v55 = v152;
      LODWORD(v1) = 0;
    }
    else
    {
      v152 = 0LL;
    }
    goto LABEL_120;
  }
  v51 = v24 - 1;
  if ( !v51 )
  {
    v6 = 0LL;
LABEL_74:
    while ( 1 )
    {
      v52 = *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize;
      p_DeviceContext = 0LL;
      *(_QWORD *)ImpersonationLevel = 0LL;
      while ( v52 != (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
      {
        if ( v52->Queue.ListEntry.Flink > v6 )
        {
          p_DeviceContext = &v52[-4].Queue.Wcb.DeviceContext;
          *(_QWORD *)ImpersonationLevel = (char *)v52 - 1232;
          break;
        }
        v52 = *(_DEVICE_OBJECT **)&v52->Type;
      }
      if ( !p_DeviceContext )
        goto LABEL_31;
      v53 = (char *)p_DeviceContext[172];
      v6 = (_LIST_ENTRY *)p_DeviceContext[164];
      if ( v9 == *((_DWORD *)v53 + 4) )
        goto LABEL_85;
      if ( v8 == -1 )
      {
        v54 = *((_QWORD *)&v159[0] + 1) - *(_QWORD *)(v53 + 1684);
        if ( *((_QWORD *)&v159[0] + 1) == *(_QWORD *)(v53 + 1684) )
          v54 = *(_QWORD *)&v159[1] - *(_QWORD *)(v53 + 1692);
        if ( !v54 )
          goto LABEL_85;
      }
      if ( (*((_DWORD *)v53 + 420) & 2) == 0 && v9 == 1 )
        goto LABEL_85;
    }
  }
  if ( v51 == 1 )
    goto LABEL_74;
  v49 = -1073741811;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v23);
  v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
LABEL_69:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v31);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v50) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v50,
      22,
      27,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)v2,
      v49);
  }
  KeLeaveCriticalRegion();
  return v49;
}
