/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400126D0
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

__int64 __fastcall ndisNsiGetInterfaceInformation(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  struct _NDIS_IF_BLOCK *IfBlock; // r13
  struct _NM_REQUEST_GET_PARAMETER *v2; // rdi
  __int64 CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rsi
  _LIST_ENTRY *Value; // rbx
  int *ThreadProperty; // rax
  int v7; // r12d
  int v8; // r15d
  unsigned int v9; // edi
  PACCESS_TOKEN v10; // rax
  void *v11; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v13; // edi
  struct _KTHREAD *v14; // rsi
  PACCESS_TOKEN v15; // rax
  void *v16; // r14
  unsigned int ThreadSessionId; // eax
  KIRQL v18; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v19; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v20; // rdx
  KIRQL v21; // al
  KIRQL v22; // si
  __int64 v23; // rdx
  _DEVICE_OBJECT *v24; // rax
  struct _NDIS_IF_BLOCK *p_DeviceContext; // r14
  unsigned int InterfaceRodInformation; // ebx
  struct _NDIS_IF_BLOCK *v27; // rdi
  struct _NDIS_IF_BLOCK *v28; // r12
  struct _NDIS_IF_BLOCK *v29; // r15
  KIRQL v30; // si
  KIRQL v31; // r13
  struct _NDIS_IF_BLOCK *v32; // rax
  void **v33; // rdi
  KIRQL v34; // al
  ULONG_PTR v35; // r8
  NTSTATUS v36; // edi
  NTSTATUS v37; // edi
  int v38; // ecx
  __int64 v39; // r9
  unsigned __int8 v40; // r10
  unsigned __int8 v41; // cl
  _BYTE *v42; // rdx
  char v43; // al
  struct _NDIS_REFCOUNT_STACK_BLOCK *v44; // r9
  unsigned int v45; // edx
  int v46; // ecx
  struct _NDIS_REFCOUNT_STACK_BLOCK *Next; // rax
  bool v48; // zf
  int v49; // edx
  KIRQL v50; // al
  _DEVICE_OBJECT *v51; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v52; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  KIRQL v54; // al
  __int64 v55; // rdx
  KIRQL v56; // di
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  __int64 v58; // r8
  struct _NDIS_MINIPORT_BLOCK *v59; // rax
  __int64 v60; // rdx
  struct _NDIS_MINIPORT_BLOCK *v61; // rbx
  _NDIS_FILTER_BLOCK *v62; // rsi
  struct _NDIS_MINIPORT_BLOCK *v63; // rax
  struct _NDIS_MINIPORT_BLOCK *v64; // rbx
  _NDIS_FILTER_BLOCK *HighestFilter; // rsi
  KIRQL v66; // al
  __int64 v67; // rdx
  KIRQL v68; // r15
  unsigned __int16 v69; // cx
  struct _NDIS_IF_BLOCK *v70; // rdi
  KIRQL v71; // r15
  ULONG_PTR v72; // r8
  KIRQL v73; // al
  __int64 v74; // rdx
  KIRQL v75; // r15
  unsigned __int16 ReferenceCount; // cx
  struct _NDIS_IF_BLOCK *v77; // rdi
  KIRQL v78; // r15
  ULONG_PTR NsiRefCountTracker; // r8
  ULONG_PTR v80; // rsi
  unsigned int v81; // edx
  int v82; // ecx
  _NET_LUID_LH *v83; // rcx
  _NET_LUID_LH v84; // rax
  __int64 v85; // rax
  int v86; // eax
  int v87; // edi
  KIRQL v88; // al
  ULONG_PTR MpRefCountTracker; // r8
  KIRQL v90; // di
  int v91; // ecx
  __int64 v92; // r9
  unsigned __int8 v93; // r11
  unsigned __int8 v94; // cl
  _BYTE *v95; // r10
  char v96; // al
  _NDIS_MINIPORT_BLOCK *v97; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  int v99; // ecx
  __int64 v100; // r9
  unsigned __int8 v101; // r10
  unsigned __int8 v102; // cl
  _BYTE *v103; // rdx
  char v104; // al
  ULONG_PTR v105; // rsi
  unsigned int v106; // edx
  int v107; // ecx
  struct _NDIS_REFCOUNT_STACK_BLOCK *v108; // r14
  struct _NDIS_IF_BLOCK *v109; // rdi
  struct _KEVENT *v110; // rcx
  KIRQL v111; // al
  _BYTE *v112; // rdx
  ULONG_PTR v113; // r8
  KIRQL v114; // r12
  int v115; // ecx
  __int64 v116; // r9
  unsigned __int8 v117; // r10
  unsigned __int8 v118; // cl
  char v119; // al
  int v120; // edi
  int v121; // ecx
  __int64 v122; // r10
  unsigned __int8 v123; // r9
  unsigned __int8 v124; // cl
  _BYTE *v125; // rdx
  char v126; // al
  ULONG_PTR v127; // rsi
  unsigned int v128; // edx
  int v129; // ecx
  struct _NDIS_REFCOUNT_STACK_BLOCK *v130; // r14
  struct _NDIS_IF_BLOCK *v131; // rdi
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  KIRQL v133; // al
  _BYTE *v134; // rdx
  ULONG_PTR RefCountTracker; // r8
  KIRQL v136; // r12
  int v137; // ecx
  __int64 v138; // r10
  unsigned __int8 v139; // r9
  unsigned __int8 v140; // cl
  char v141; // al
  struct _KEVENT *v142; // rcx
  struct _KEVENT *RemoveReadyEvent; // rcx
  ULONG_PTR v144; // r14
  unsigned int v145; // edx
  int v146; // ecx
  struct _NDIS_REFCOUNT_STACK_BLOCK *v147; // r15
  ULONG_PTR v148; // rsi
  unsigned int v149; // edx
  int v150; // ecx
  struct _NDIS_REFCOUNT_STACK_BLOCK *v151; // r14
  ULONG_PTR v152; // r14
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v154; // rax
  struct _NDIS_REFCOUNT_BLOCK *v155; // r14
  int v156; // eax
  struct _NDIS_REFCOUNT_STACK_BLOCK **v157; // rdi
  struct _NDIS_REFCOUNT_STACK_BLOCK *v158; // rsi
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel[2]; // [rsp+40h] [rbp-29h] BYREF
  struct _NDIS_IF_BLOCK *v161; // [rsp+48h] [rbp-21h]
  PVOID TokenInformation; // [rsp+50h] [rbp-19h] BYREF
  void **p_DeferredContext; // [rsp+58h] [rbp-11h]
  _OWORD v164[2]; // [rsp+60h] [rbp-9h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+D8h] [rbp+6Fh] BYREF
  BOOLEAN CopyOnOpen; // [rsp+E0h] [rbp+77h] BYREF
  ULONG_PTR v168; // [rsp+E8h] [rbp+7Fh]

  IfBlock = 0LL;
  v2 = a1;
  v161 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      24,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1);
  CurrentProcess = PsGetCurrentProcess();
  LOBYTE(v168) = ndisIsMacAddressHidden(CurrentProcess);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v2 + 6) != 8 || !*((_DWORD *)v2 + 12) || !*((_QWORD *)v2 + 5) )
  {
    InterfaceRodInformation = -1073741808;
    v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    goto LABEL_70;
  }
  CurrentThread = KeGetCurrentThread();
  Value = (_LIST_ENTRY *)**((_QWORD **)v2 + 2);
  memset(v164, 0, 24);
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v7 = 1;
  if ( !ThreadProperty )
  {
    v8 = 0;
    goto LABEL_10;
  }
  v7 = *ThreadProperty;
  v8 = ThreadProperty[1];
  ObfDereferenceObject(ThreadProperty);
  v9 = v7;
  if ( !v7 )
  {
    v7 = 1;
LABEL_10:
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
      v10 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, ImpersonationLevel);
      v11 = v10;
      if ( v10 )
      {
        v36 = SeQueryInformationToken(v10, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v11);
        if ( v36 >= 0 )
        {
          v13 = (unsigned int)TokenInformation;
LABEL_14:
          if ( v13 == -1 )
          {
            v14 = KeGetCurrentThread();
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
              v15 = PsReferenceImpersonationToken(v14, &CopyOnOpen, &EffectiveOnly, ImpersonationLevel);
              v16 = v15;
              if ( v15 )
              {
                v37 = SeQueryInformationToken(v15, TokenSessionId, &TokenInformation);
                PsDereferenceImpersonationToken(v16);
                if ( v37 >= 0 )
                {
                  v13 = (unsigned int)TokenInformation;
                  goto LABEL_19;
                }
              }
              ThreadSessionId = PsGetThreadSessionId(v14);
            }
            v13 = ThreadSessionId;
          }
LABEL_19:
          if ( v13 < dword_14011E898 )
          {
            v7 = 0;
            v50 = KeAcquireSpinLockRaiseToDpc(&qword_14011E8E0);
            if ( v13 < dword_14011E898 )
              v7 = *((_DWORD *)qword_14011E8E8 + 6 * v13);
            KeReleaseSpinLock(&qword_14011E8E0, v50);
            if ( !v7 )
              v7 = 1;
          }
          v9 = v7;
          goto LABEL_21;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v13 = CurrentProcessSessionId;
    goto LABEL_14;
  }
LABEL_21:
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v19 = qword_14011E9D8;
  v20 = 0LL;
  while ( v19 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
  {
    if ( *((_DWORD *)v19 + 4) == v9 )
    {
      v20 = v19;
      break;
    }
    if ( *((_DWORD *)v19 + 4) > v9 )
      break;
    v19 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v19;
  }
  *(_OWORD *)((char *)v164 + 8) = *(_OWORD *)((char *)v20 + 1684);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v18);
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  v2 = a1;
  v22 = v21;
  EffectiveOnly = v21;
  v23 = *((unsigned int *)a1 + 14);
  if ( !(_DWORD)v23 )
  {
    v24 = *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize;
    p_DeviceContext = 0LL;
    *(_QWORD *)ImpersonationLevel = 0LL;
    while ( v24 != (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
    {
      if ( v24->Queue.ListEntry.Flink == Value )
      {
        p_DeviceContext = (struct _NDIS_IF_BLOCK *)&v24[-4].Queue.Wcb.DeviceContext;
        *(_QWORD *)ImpersonationLevel = (char *)v24 - 1232;
        break;
      }
      if ( v24->Queue.ListEntry.Flink > Value )
        break;
      v24 = *(_DEVICE_OBJECT **)&v24->Type;
    }
    if ( !p_DeviceContext )
      goto LABEL_33;
    Compartment = p_DeviceContext->Compartment;
    if ( v7 != *((_DWORD *)Compartment + 4) )
    {
      v23 = *((_QWORD *)&v164[0] + 1) - *(_QWORD *)((char *)Compartment + 1684);
      if ( *((_QWORD *)&v164[0] + 1) == *(_QWORD *)((char *)Compartment + 1684) )
        v23 = *(_QWORD *)&v164[1] - *(_QWORD *)((char *)Compartment + 1692);
      if ( v23 && ((*((_DWORD *)Compartment + 420) & 2) != 0 || v7 != 1) )
      {
        *(_QWORD *)ImpersonationLevel = 0LL;
LABEL_33:
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v22);
        goto LABEL_34;
      }
    }
LABEL_100:
    LOBYTE(v23) = 1;
    NdisReferenceWithTag(p_DeviceContext->RefCountTracker, v23);
    ++p_DeviceContext->Ref;
    if ( !p_DeviceContext->bNdisIsProvider || *((_QWORD *)a1 + 1) > 1uLL )
    {
LABEL_138:
      v83 = (_NET_LUID_LH *)*((_QWORD *)v2 + 2);
      v84.Value = (ULONG64)p_DeviceContext->NetLuid;
      v161 = IfBlock;
      v83->Value = v84.Value;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v22);
      if ( !p_DeviceContext )
      {
LABEL_34:
        InterfaceRodInformation = -1073741772;
        if ( *((_DWORD *)v2 + 14) )
          InterfaceRodInformation = -2147483622;
        goto LABEL_36;
      }
      v85 = *((_QWORD *)v2 + 1);
      InterfaceRodInformation = -1073741811;
      if ( !v85 )
      {
LABEL_140:
        v86 = *((_DWORD *)v2 + 8);
        if ( v86 )
        {
          if ( v86 == 1 )
          {
            InterfaceRodInformation = ndisNsiGetInterfaceRodInformation((char)p_DeviceContext, (char)IfBlock, (char)v2);
          }
          else if ( v86 == 2 )
          {
            InterfaceRodInformation = ndisNsiGetInterfaceRosInformation(p_DeviceContext);
          }
        }
        else
        {
          InterfaceRodInformation = ndisNsiGetInterfaceRwInformation((char)p_DeviceContext, (char)IfBlock, (char)v2);
        }
        goto LABEL_36;
      }
      if ( v85 != 1 )
      {
        if ( v85 == 12 )
          goto LABEL_140;
        if ( v85 != 13 )
        {
LABEL_36:
          v27 = *(struct _NDIS_IF_BLOCK **)ImpersonationLevel;
          v28 = *(struct _NDIS_IF_BLOCK **)ImpersonationLevel;
          v29 = IfBlock;
          v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
          v31 = v30;
          v32 = v161;
          if ( v161 )
          {
            if ( v161->IsNdisFilter )
            {
              p_DeferredContext = &v161->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
              v33 = p_DeferredContext;
              v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
              v35 = (ULONG_PTR)v33[2];
              CopyOnOpen = v34;
              if ( v35 != 2 && v35 != 3 )
              {
                if ( v35 < 2 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, v35, 0LL);
                if ( *(_BYTE *)(v35 + 2) <= 0xBu )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v35, 0xBuLL);
                v38 = *(unsigned __int8 *)(v35 + 1);
                *(_QWORD *)ImpersonationLevel = v28;
                v161 = v29;
                if ( v38 )
                {
                  if ( v38 == 1 )
                  {
                    v44 = (struct _NDIS_REFCOUNT_STACK_BLOCK *)(v35 + 712);
                    v45 = *(_DWORD *)(v35 + 768);
                    v46 = (unsigned __int16)v45 >> 1;
                    v168 = v35 + 712;
                    if ( v45 >> 17 < 0x3FFE && v46 == (v45 >> 17) + 1 )
                    {
                      Next = v44->Next;
                      *(_QWORD *)ImpersonationLevel = v28;
                      v161 = v29;
                      if ( Next )
                      {
                        *(_QWORD *)ImpersonationLevel = v28;
                        v157 = (struct _NDIS_REFCOUNT_STACK_BLOCK **)(v35 + 712);
                        v161 = v29;
                        v158 = Next;
                        do
                        {
                          *v157 = v158->Next;
                          ndisFreeRefCountStacksInBlock(v158);
                          ExFreePoolWithTag(v158, 0);
                          v158 = *v157;
                        }
                        while ( *v157 );
                        v33 = p_DeferredContext;
                        v30 = v31;
                        v44 = (struct _NDIS_REFCOUNT_STACK_BLOCK *)v168;
                      }
                      ndisFreeRefCountStacksInBlock(v44);
                      *(_DWORD *)(v168 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( v46 == 0 && (v45 & 1) == 0 )
                        ndisReportRefcountImbalance(v35, 0xBu);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v35 + 712), 0);
                      *(_QWORD *)ImpersonationLevel = v28;
                      v161 = v29;
                    }
                  }
                }
                else
                {
                  v39 = *(_QWORD *)(v35 + 8);
                  *(_QWORD *)ImpersonationLevel = v28;
                  v161 = v29;
                  if ( v39 )
                  {
                    v40 = *(_BYTE *)(v35 + 3);
                    v41 = 0;
                    *(_QWORD *)ImpersonationLevel = v28;
                    v161 = v29;
                    while ( v41 < v40 )
                    {
                      v42 = (_BYTE *)(v39 + 2LL * v41);
                      if ( *v42 == 11 )
                      {
                        v43 = v42[1];
                        if ( v43 )
                        {
                          v42[1] = v43 - 1;
                          goto LABEL_64;
                        }
                      }
                      ++v41;
                    }
                  }
                  if ( !_bittestandreset((signed __int32 *)(v35 + 16), 0xBu) )
                    ndisReportRefcountImbalance(v35, 0xBu);
                }
              }
LABEL_64:
              v48 = (*((_WORD *)v33 + 4))-- == 1;
              if ( v48 && !*((_BYTE *)v33 + 11) )
              {
                v152 = (ULONG_PTR)v33[2];
                if ( v152 )
                {
                  AnyActiveRefTag = ndisGetAnyActiveRefTag((struct NDIS_REFCOUNT_HANDLE__ *)v33[2]);
                  if ( AnyActiveRefTag != -2 )
                    ndisBugCheckEx(0x1EuLL, 4uLL, v152, AnyActiveRefTag);
                  v154 = ndisRefCountBlockFromRefCountHandle(v152);
                  v155 = v154;
                  if ( v154 )
                  {
                    ndisFreeRefCountAuxiliaryMemory(v154);
                    ExFreePoolWithTag(v155, 0);
                  }
                }
                v33[2] = (void *)1;
              }
              KeReleaseSpinLock((PKSPIN_LOCK)v33, CopyOnOpen);
              v32 = v161;
              v27 = *(struct _NDIS_IF_BLOCK **)ImpersonationLevel;
            }
            IFBLOCK_DECREMENT_REF(v32, IFREF_TOPGETII);
          }
          if ( v27 )
            IFBLOCK_DECREMENT_REF(v27, IFREF_GETII);
          LOBYTE(v2) = (_BYTE)a1;
          goto LABEL_70;
        }
      }
      v156 = *((_DWORD *)v2 + 8);
      if ( v156 == 1 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRodEnumObject((char)p_DeviceContext);
      }
      else if ( v156 == 2 )
      {
        InterfaceRodInformation = ndisNsiGetInterfaceRosEnumObject((char)p_DeviceContext);
      }
      goto LABEL_36;
    }
    v54 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v56 = v54;
    if ( p_DeviceContext->MiniportAvailable )
    {
      LOBYTE(v55) = 3;
      Miniport = p_DeviceContext->Miniport;
      NdisReferenceWithTag(p_DeviceContext->MpRefCountTracker, v55);
      ++p_DeviceContext->MiniportLinkReference;
      KeReleaseSpinLock(&SpinLock, v56);
      if ( Miniport )
      {
        v63 = ndisReferenceTopMiniportByNameForNsi(Miniport, 0, v58, 0, NSIREF_IFTOP, MPREF_IF_FINDTOP);
        v64 = v63;
        if ( v63 )
        {
          KeAcquireSpinLockAtDpcLevel(&v63->Lock);
          HighestFilter = v64->HighestFilter;
          v64->MiniportThread = KeGetCurrentThread();
          if ( HighestFilter )
          {
            do
            {
              v73 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
              v75 = v73;
              if ( !HighestFilter->PnPRef.Closing )
              {
                ReferenceCount = HighestFilter->PnPRef.ReferenceCount;
                if ( ReferenceCount < 0xFFEBu )
                {
                  LOBYTE(v74) = 11;
                  HighestFilter->PnPRef.ReferenceCount = ReferenceCount + 1;
                  NdisReferenceWithTag(HighestFilter->PnPRef.RefCountTracker, v74);
                  KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v75);
                  p_DeviceContext = *(struct _NDIS_IF_BLOCK **)ImpersonationLevel;
                  IfBlock = HighestFilter->IfBlock;
                  goto LABEL_122;
                }
                ndisRefCountReferenceCountOverflow = 1;
              }
              KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v73);
              HighestFilter = HighestFilter->LowerFilter;
            }
            while ( HighestFilter );
            p_DeviceContext = *(struct _NDIS_IF_BLOCK **)ImpersonationLevel;
          }
          IfBlock = v64->IfBlock;
LABEL_122:
          v64->MiniportThread = 0LL;
          v77 = p_DeviceContext;
          KeReleaseSpinLockFromDpcLevel(&v64->Lock);
          v78 = KeAcquireSpinLockRaiseToDpc(&v64->Lock);
          NsiRefCountTracker = (ULONG_PTR)v64->NsiRefCountTracker;
          v64->MiniportThread = KeGetCurrentThread();
          if ( NsiRefCountTracker != 2 && NsiRefCountTracker != 3 )
          {
            if ( NsiRefCountTracker < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, NsiRefCountTracker, 0LL);
            if ( *(_BYTE *)(NsiRefCountTracker + 2) <= 2u )
              ndisBugCheckEx(0x1EuLL, 2uLL, NsiRefCountTracker, 2uLL);
            v121 = *(unsigned __int8 *)(NsiRefCountTracker + 1);
            *(_QWORD *)ImpersonationLevel = p_DeviceContext;
            if ( v121 )
            {
              if ( v121 == 1 )
              {
                v127 = NsiRefCountTracker + 136;
                v128 = *(_DWORD *)(NsiRefCountTracker + 192);
                v129 = (unsigned __int16)v128 >> 1;
                if ( v128 >> 17 < 0x3FFE && v129 == (v128 >> 17) + 1 )
                {
                  v130 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v127;
                  *(_QWORD *)ImpersonationLevel = v77;
                  if ( v130 )
                  {
                    *(_QWORD *)ImpersonationLevel = v77;
                    do
                    {
                      *(_QWORD *)v127 = v130->Next;
                      ndisFreeRefCountStacksInBlock(v130);
                      ExFreePoolWithTag(v130, 0);
                      v130 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v127;
                    }
                    while ( *(_QWORD *)v127 );
                  }
                  ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v127);
                  *(_DWORD *)(v127 + 56) &= 0x10001u;
                  p_DeviceContext = *(struct _NDIS_IF_BLOCK **)ImpersonationLevel;
                }
                else
                {
                  if ( v129 == 0 && (v128 & 1) == 0 )
                    ndisReportRefcountImbalance(NsiRefCountTracker, 2u);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(NsiRefCountTracker + 136), 0);
                  *(_QWORD *)ImpersonationLevel = p_DeviceContext;
                }
              }
            }
            else
            {
              v122 = *(_QWORD *)(NsiRefCountTracker + 8);
              *(_QWORD *)ImpersonationLevel = p_DeviceContext;
              if ( v122 )
              {
                v123 = *(_BYTE *)(NsiRefCountTracker + 3);
                v124 = 0;
                *(_QWORD *)ImpersonationLevel = p_DeviceContext;
                while ( v124 < v123 )
                {
                  v125 = (_BYTE *)(v122 + 2LL * v124);
                  if ( *v125 == 2 )
                  {
                    v126 = v125[1];
                    if ( v126 )
                    {
                      v125[1] = v126 - 1;
                      goto LABEL_223;
                    }
                  }
                  ++v124;
                }
              }
              if ( !_bittestandreset((signed __int32 *)(NsiRefCountTracker + 16), 2u) )
                ndisReportRefcountImbalance(NsiRefCountTracker, 2u);
            }
          }
LABEL_223:
          v48 = v64->NsiOpenReferences-- == 1;
          v131 = p_DeviceContext;
          if ( v48 )
          {
            NsiRequestsCompletedEvent = v64->NsiRequestsCompletedEvent;
            if ( NsiRequestsCompletedEvent )
              KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
          }
          v64->MiniportThread = 0LL;
          KeReleaseSpinLock(&v64->Lock, v78);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4,
              20,
              25,
              (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
              (char)v64);
          v133 = KeAcquireSpinLockRaiseToDpc(&v64->Ref.SpinLock);
          RefCountTracker = (ULONG_PTR)v64->RefCountTracker;
          v136 = v133;
          if ( RefCountTracker && RefCountTracker - 2 > 1 )
          {
            if ( RefCountTracker == 1 )
              ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
            if ( *(_BYTE *)(RefCountTracker + 2) <= 0x3Cu )
              ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 0x3CuLL);
            v137 = *(unsigned __int8 *)(RefCountTracker + 1);
            *(_QWORD *)ImpersonationLevel = p_DeviceContext;
            if ( v137 )
            {
              if ( v137 == 1 )
              {
                v148 = RefCountTracker + 3848;
                v149 = *(_DWORD *)(RefCountTracker + 3904);
                v150 = (unsigned __int16)v149 >> 1;
                if ( v149 >> 17 < 0x3FFE && v150 == (v149 >> 17) + 1 )
                {
                  v151 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v148;
                  *(_QWORD *)ImpersonationLevel = v131;
                  if ( v151 )
                  {
                    *(_QWORD *)ImpersonationLevel = v131;
                    do
                    {
                      *(_QWORD *)v148 = v151->Next;
                      ndisFreeRefCountStacksInBlock(v151);
                      ExFreePoolWithTag(v151, 0);
                      v151 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v148;
                    }
                    while ( *(_QWORD *)v148 );
                  }
                  ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v148);
                  *(_DWORD *)(v148 + 56) &= 0x10001u;
                  p_DeviceContext = *(struct _NDIS_IF_BLOCK **)ImpersonationLevel;
                }
                else
                {
                  if ( v150 == 0 && (v149 & 1) == 0 )
                    ndisReportRefcountImbalance(RefCountTracker, 0x3Cu);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 3848), 0);
                  *(_QWORD *)ImpersonationLevel = p_DeviceContext;
                }
              }
            }
            else
            {
              v138 = *(_QWORD *)(RefCountTracker + 8);
              *(_QWORD *)ImpersonationLevel = p_DeviceContext;
              if ( v138 )
              {
                v139 = *(_BYTE *)(RefCountTracker + 3);
                v140 = 0;
                *(_QWORD *)ImpersonationLevel = p_DeviceContext;
                while ( v140 < v139 )
                {
                  v134 = (_BYTE *)(v138 + 2LL * v140);
                  if ( *v134 == 60 )
                  {
                    v141 = v134[1];
                    if ( v141 )
                    {
                      v134[1] = v141 - 1;
                      goto LABEL_144;
                    }
                  }
                  ++v140;
                }
              }
              if ( !_bittestandreset((signed __int32 *)(RefCountTracker + 20), 0x1Cu) )
                ndisReportRefcountImbalance(RefCountTracker, 0x3Cu);
            }
          }
LABEL_144:
          v87 = v64->Ref.ReferenceCount - 1;
          v64->Ref.ReferenceCount = v87;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v134) = 4;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v134,
              20,
              14,
              (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
              (char)v64,
              v87);
          }
          KeReleaseSpinLock(&v64->Ref.SpinLock, v136);
          if ( !v87 )
          {
            RemoveReadyEvent = v64->RemoveReadyEvent;
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
              (char)v64);
        }
        v88 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
        MpRefCountTracker = (ULONG_PTR)p_DeviceContext->MpRefCountTracker;
        v90 = v88;
        if ( MpRefCountTracker != 2 && MpRefCountTracker != 3 )
        {
          if ( MpRefCountTracker < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, MpRefCountTracker, 0LL);
          if ( *(_BYTE *)(MpRefCountTracker + 2) <= 3u )
            ndisBugCheckEx(0x1EuLL, 2uLL, MpRefCountTracker, 3uLL);
          v91 = *(unsigned __int8 *)(MpRefCountTracker + 1);
          *(_QWORD *)ImpersonationLevel = p_DeviceContext;
          if ( v91 )
          {
            if ( v91 == 1 )
            {
              v80 = MpRefCountTracker + 200;
              v81 = *(_DWORD *)(MpRefCountTracker + 256);
              v82 = (unsigned __int16)v81 >> 1;
              if ( v81 >> 17 < 0x3FFE && v82 == (v81 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(MpRefCountTracker + 200));
                *(_DWORD *)(v80 + 56) &= 0x10001u;
              }
              else
              {
                if ( v82 == 0 && (v81 & 1) == 0 )
                  ndisReportRefcountImbalance(MpRefCountTracker, 3u);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 200), 0);
              }
              *(_QWORD *)ImpersonationLevel = p_DeviceContext;
            }
          }
          else
          {
            v92 = *(_QWORD *)(MpRefCountTracker + 8);
            *(_QWORD *)ImpersonationLevel = p_DeviceContext;
            if ( v92 )
            {
              v93 = *(_BYTE *)(MpRefCountTracker + 3);
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
                    goto LABEL_132;
                  }
                }
                ++v94;
              }
            }
            if ( !_bittestandreset((signed __int32 *)(MpRefCountTracker + 16), 3u) )
              ndisReportRefcountImbalance(MpRefCountTracker, 3u);
          }
        }
LABEL_132:
        v48 = p_DeviceContext->MiniportLinkReference-- == 1;
        if ( v48 )
        {
          v97 = p_DeviceContext->Miniport;
          if ( v97 )
          {
            IfBlockPointerRefZeroEvent = v97->IfBlockPointerRefZeroEvent;
            if ( IfBlockPointerRefZeroEvent )
              KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
          }
        }
        KeReleaseSpinLock(&SpinLock, v90);
        goto LABEL_134;
      }
    }
    else
    {
      KeReleaseSpinLock(&SpinLock, v54);
    }
    if ( !p_DeviceContext->IsNdisFilter )
    {
LABEL_137:
      v2 = a1;
      goto LABEL_138;
    }
    v59 = ndisReferenceTopMiniportByNameForNsi(
            *(struct _NDIS_MINIPORT_BLOCK **)&p_DeviceContext->Miniport->Reserved4.Length,
            0,
            v58,
            0,
            NSIREF_IFTOP,
            MPREF_IF_FINDTOP);
    v61 = v59;
    if ( v59 )
    {
      KeAcquireSpinLockAtDpcLevel(&v59->Lock);
      v62 = v61->HighestFilter;
      v61->MiniportThread = KeGetCurrentThread();
      if ( v62 )
      {
        do
        {
          v66 = KeAcquireSpinLockRaiseToDpc(&v62->PnPRef.SpinLock);
          v68 = v66;
          if ( !v62->PnPRef.Closing )
          {
            v69 = v62->PnPRef.ReferenceCount;
            if ( v69 < 0xFFEBu )
            {
              LOBYTE(v67) = 11;
              v62->PnPRef.ReferenceCount = v69 + 1;
              NdisReferenceWithTag(v62->PnPRef.RefCountTracker, v67);
              KeReleaseSpinLock(&v62->PnPRef.SpinLock, v68);
              p_DeviceContext = *(struct _NDIS_IF_BLOCK **)ImpersonationLevel;
              IfBlock = v62->IfBlock;
              goto LABEL_114;
            }
            ndisRefCountReferenceCountOverflow = 1;
          }
          KeReleaseSpinLock(&v62->PnPRef.SpinLock, v66);
          v62 = v62->LowerFilter;
        }
        while ( v62 );
        p_DeviceContext = *(struct _NDIS_IF_BLOCK **)ImpersonationLevel;
      }
      IfBlock = v61->IfBlock;
LABEL_114:
      v61->MiniportThread = 0LL;
      v70 = p_DeviceContext;
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
        v99 = *(unsigned __int8 *)(v72 + 1);
        *(_QWORD *)ImpersonationLevel = p_DeviceContext;
        if ( v99 )
        {
          if ( v99 == 1 )
          {
            v105 = v72 + 136;
            v106 = *(_DWORD *)(v72 + 192);
            v107 = (unsigned __int16)v106 >> 1;
            if ( v106 >> 17 < 0x3FFE && v107 == (v106 >> 17) + 1 )
            {
              v108 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v105;
              *(_QWORD *)ImpersonationLevel = v70;
              if ( v108 )
              {
                *(_QWORD *)ImpersonationLevel = v70;
                do
                {
                  *(_QWORD *)v105 = v108->Next;
                  ndisFreeRefCountStacksInBlock(v108);
                  ExFreePoolWithTag(v108, 0);
                  v108 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v105;
                }
                while ( *(_QWORD *)v105 );
              }
              ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v105);
              *(_DWORD *)(v105 + 56) &= 0x10001u;
              p_DeviceContext = *(struct _NDIS_IF_BLOCK **)ImpersonationLevel;
            }
            else
            {
              if ( v107 == 0 && (v106 & 1) == 0 )
                ndisReportRefcountImbalance(v72, 2u);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v72 + 136), 0);
              *(_QWORD *)ImpersonationLevel = p_DeviceContext;
            }
          }
        }
        else
        {
          v100 = *(_QWORD *)(v72 + 8);
          *(_QWORD *)ImpersonationLevel = p_DeviceContext;
          if ( v100 )
          {
            v101 = *(_BYTE *)(v72 + 3);
            v102 = 0;
            *(_QWORD *)ImpersonationLevel = p_DeviceContext;
            while ( v102 < v101 )
            {
              v103 = (_BYTE *)(v100 + 2LL * v102);
              if ( *v103 == 2 )
              {
                v104 = v103[1];
                if ( v104 )
                {
                  v103[1] = v104 - 1;
                  goto LABEL_182;
                }
              }
              ++v102;
            }
          }
          if ( !_bittestandreset((signed __int32 *)(v72 + 16), 2u) )
            ndisReportRefcountImbalance(v72, 2u);
        }
      }
LABEL_182:
      v48 = v61->NsiOpenReferences-- == 1;
      v109 = p_DeviceContext;
      if ( v48 )
      {
        v110 = v61->NsiRequestsCompletedEvent;
        if ( v110 )
          KeSetEvent(v110, 0, 0);
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
      v111 = KeAcquireSpinLockRaiseToDpc(&v61->Ref.SpinLock);
      v113 = (ULONG_PTR)v61->RefCountTracker;
      v114 = v111;
      if ( v113 && v113 - 2 > 1 )
      {
        if ( v113 == 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
        if ( *(_BYTE *)(v113 + 2) <= 0x3Cu )
          ndisBugCheckEx(0x1EuLL, 2uLL, v113, 0x3CuLL);
        v115 = *(unsigned __int8 *)(v113 + 1);
        *(_QWORD *)ImpersonationLevel = p_DeviceContext;
        if ( v115 )
        {
          if ( v115 == 1 )
          {
            v144 = v113 + 3848;
            v145 = *(_DWORD *)(v113 + 3904);
            v146 = (unsigned __int16)v145 >> 1;
            if ( v145 >> 17 < 0x3FFE && v146 == (v145 >> 17) + 1 )
            {
              v147 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v144;
              *(_QWORD *)ImpersonationLevel = v109;
              if ( v147 )
              {
                *(_QWORD *)ImpersonationLevel = v109;
                do
                {
                  *(_QWORD *)v144 = v147->Next;
                  ndisFreeRefCountStacksInBlock(v147);
                  ExFreePoolWithTag(v147, 0);
                  v147 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v144;
                }
                while ( *(_QWORD *)v144 );
              }
              ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v144);
              *(_DWORD *)(v144 + 56) &= 0x10001u;
            }
            else
            {
              if ( v146 == 0 && (v145 & 1) == 0 )
                ndisReportRefcountImbalance(v113, 0x3Cu);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v113 + 3848), 0);
              *(_QWORD *)ImpersonationLevel = v109;
            }
          }
        }
        else
        {
          v116 = *(_QWORD *)(v113 + 8);
          *(_QWORD *)ImpersonationLevel = p_DeviceContext;
          if ( v116 )
          {
            v117 = *(_BYTE *)(v113 + 3);
            v118 = 0;
            *(_QWORD *)ImpersonationLevel = p_DeviceContext;
            while ( v118 < v117 )
            {
              v112 = (_BYTE *)(v116 + 2LL * v118);
              if ( *v112 == 60 )
              {
                v119 = v112[1];
                if ( v119 )
                {
                  v112[1] = v119 - 1;
                  goto LABEL_202;
                }
              }
              ++v118;
            }
          }
          if ( !_bittestandreset((signed __int32 *)(v113 + 20), 0x1Cu) )
            ndisReportRefcountImbalance(v113, 0x3Cu);
        }
      }
LABEL_202:
      v120 = v61->Ref.ReferenceCount - 1;
      v61->Ref.ReferenceCount = v120;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v112) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v112,
          20,
          14,
          (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
          (char)v61,
          v120);
      }
      KeReleaseSpinLock(&v61->Ref.SpinLock, v114);
      if ( !v120 )
      {
        v142 = v61->RemoveReadyEvent;
        if ( v142 )
          KeSetEvent(v142, 0, 0);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          20,
          26,
          (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
          (char)v61);
      p_DeviceContext = *(struct _NDIS_IF_BLOCK **)ImpersonationLevel;
    }
LABEL_134:
    if ( IfBlock )
    {
      LOBYTE(v60) = 2;
      NdisReferenceWithTag(IfBlock->RefCountTracker, v60);
      ++IfBlock->Ref;
    }
    v22 = EffectiveOnly;
    goto LABEL_137;
  }
  v23 = (unsigned int)(v23 - 1);
  if ( !(_DWORD)v23 )
  {
    Value = 0LL;
LABEL_85:
    while ( 1 )
    {
      v51 = *(_DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize;
      p_DeviceContext = 0LL;
      *(_QWORD *)ImpersonationLevel = 0LL;
      while ( v51 != (_DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
      {
        if ( v51->Queue.ListEntry.Flink > Value )
        {
          p_DeviceContext = (struct _NDIS_IF_BLOCK *)&v51[-4].Queue.Wcb.DeviceContext;
          *(_QWORD *)ImpersonationLevel = (char *)v51 - 1232;
          break;
        }
        v51 = *(_DEVICE_OBJECT **)&v51->Type;
      }
      if ( !p_DeviceContext )
        goto LABEL_33;
      v52 = p_DeviceContext->Compartment;
      Value = (_LIST_ENTRY *)p_DeviceContext->NetLuid.Value;
      if ( v7 == *((_DWORD *)v52 + 4) )
        goto LABEL_100;
      if ( v8 == -1 )
      {
        v23 = *((_QWORD *)&v164[0] + 1) - *(_QWORD *)((char *)v52 + 1684);
        if ( *((_QWORD *)&v164[0] + 1) == *(_QWORD *)((char *)v52 + 1684) )
          v23 = *(_QWORD *)&v164[1] - *(_QWORD *)((char *)v52 + 1692);
        if ( !v23 )
          goto LABEL_100;
      }
      if ( (*((_DWORD *)v52 + 420) & 2) == 0 && v7 == 1 )
        goto LABEL_100;
    }
  }
  if ( (_DWORD)v23 == 1 )
    goto LABEL_85;
  InterfaceRodInformation = -1073741808;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v21);
  v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
LABEL_70:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v30);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v49) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v49,
      22,
      25,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)v2,
      InterfaceRodInformation);
  }
  KeLeaveCriticalRegion();
  return InterfaceRodInformation;
}
