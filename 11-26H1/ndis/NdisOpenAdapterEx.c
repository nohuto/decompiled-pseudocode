/*
 * XREFs of NdisOpenAdapterEx @ 0x1401758D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14001E380 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140034420 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140049260 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1400563F0 (-ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140058680 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x14005B870 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x14005C6F0 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qZZ @ 0x140062AC0 (WPP_RECORDER_SF_qZZ.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140066100 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14007E9C0 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14007EB20 (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140094C44 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14009ECC4 (-ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisRegisterCommonOpenTriageData @ 0x1400BB678 (ndisRegisterCommonOpenTriageData.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x140144E40 (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x140163390 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisPktMonOpenRegister @ 0x140164380 (ndisPktMonOpenRegister.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140164950 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x140169740 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisFindRootDevice @ 0x140179510 (ndisFindRootDevice.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181D90 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisOpenAdapterEx(
        NDIS_HANDLE NdisProtocolHandle,
        NDIS_HANDLE ProtocolBindingContext,
        PNDIS_OPEN_PARAMETERS OpenParameters,
        NDIS_HANDLE BindContext,
        PNDIS_HANDLE NdisBindingHandle)
{
  NDIS_STATUS v6; // edi
  struct _NDIS_OPEN_BLOCK *v8; // r14
  __int64 v9; // rsi
  _NDIS_MEDIUM *MediumArray; // r9
  int v11; // edx
  __int64 v13; // rdi
  __int64 v14; // rbx
  char v15; // r12
  int v16; // eax
  struct PNDIS_PER_PROCESSOR_SLOT__ *OpenBlock; // rax
  __int64 v18; // rdx
  TriageData *v19; // r8
  int v20; // eax
  PNDIS_HANDLE v21; // r10
  unsigned int MediumArraySize; // edx
  __int64 v23; // rcx
  unsigned int FrameTypeArraySize; // eax
  __int64 v25; // r8
  KIRQL v26; // al
  int v27; // r13d
  unsigned int *v28; // rcx
  int v29; // edx
  struct _NDIS_OPEN_BLOCK **v30; // rdx
  KIRQL v31; // dl
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  __int64 v33; // rcx
  struct _NDIS_OPEN_BLOCK **v34; // rbx
  KIRQL v35; // dl
  int v36; // [rsp+20h] [rbp-60h]
  char v37[8]; // [rsp+30h] [rbp-50h]
  char v38; // [rsp+50h] [rbp-30h]
  char v39; // [rsp+51h] [rbp-2Fh]
  int v40; // [rsp+58h] [rbp-28h] BYREF
  int v41; // [rsp+5Ch] [rbp-24h]
  struct _NDIS_OPEN_BLOCK **Pool2; // [rsp+60h] [rbp-20h]
  __int64 v43; // [rsp+68h] [rbp-18h] BYREF
  __int64 v44; // [rsp+70h] [rbp-10h]
  __int64 v45; // [rsp+78h] [rbp-8h]
  KIRQL NewIrql; // [rsp+C0h] [rbp+40h] BYREF
  NDIS_HANDLE v47; // [rsp+C8h] [rbp+48h]
  _QWORD *v48; // [rsp+D8h] [rbp+58h]

  v48 = BindContext;
  v47 = ProtocolBindingContext;
  v6 = -1073741823;
  v40 = -1073741823;
  v43 = 0LL;
  v8 = 0LL;
  Pool2 = 0LL;
  v9 = 0LL;
  v45 = 0LL;
  NewIrql = 0;
  *NdisBindingHandle = 0LL;
  v38 = 0;
  LOBYTE(v41) = 0;
  v39 = 0;
  if ( !NdisProtocolHandle )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(ProtocolBindingContext) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)ProtocolBindingContext,
        6,
        63,
        (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids);
    }
    return v6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)ProtocolBindingContext,
      (__int64)OpenParameters,
      0x40u,
      v36,
      (char)NdisProtocolHandle,
      (unsigned __int16 *)NdisProtocolHandle + 36,
      &OpenParameters->AdapterName->Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) != KeGetCurrentThread() )
  {
    v15 = 0;
    goto LABEL_94;
  }
  if ( ndisReferenceProtocol((struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 9u) )
  {
    v13 = *((_QWORD *)NdisProtocolHandle + 54);
    v44 = v13;
    if ( v13 )
    {
      v14 = *((_QWORD *)NdisProtocolHandle + 55);
      v15 = 1;
      v9 = *((_QWORD *)NdisProtocolHandle + 57);
    }
    else
    {
      ndisFindRootDevice((__int64)OpenParameters->AdapterName, (__int64)&v43, 45);
      v9 = v43;
      v15 = 1;
      v13 = v44;
      v14 = v45;
      v16 = (unsigned __int8)v41;
      if ( v43 )
        v16 = 1;
      v41 = v16;
    }
    *((_QWORD *)NdisProtocolHandle + 54) = 0LL;
    if ( !v9 )
    {
      v6 = -1073676282;
      *NdisBindingHandle = 0LL;
      goto LABEL_95;
    }
    OpenBlock = ndisAllocateOpenBlock(
                  (struct _NDIS_MINIPORT_BLOCK *)v9,
                  (struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle,
                  1);
    v8 = (struct _NDIS_OPEN_BLOCK *)OpenBlock;
    if ( !OpenBlock )
    {
      v6 = -1073741670;
LABEL_23:
      *NdisBindingHandle = 0LL;
      goto LABEL_95;
    }
    if ( (*(_DWORD *)(v9 + 124) & 0x100) != 0
      || !*(_BYTE *)(v9 + 1995) && *(_DWORD *)(v9 + 2248) != 6 && *(_BYTE *)(v9 + 32) >= 6u )
    {
      v6 = -1073676282;
      goto LABEL_23;
    }
    if ( !*(_BYTE *)(v9 + 1994) )
      *(_BYTE *)(v9 + 1994) = 1;
    *((_QWORD *)OpenBlock + 51) = v13;
    *((_QWORD *)OpenBlock + 52) = v14;
    *((_QWORD *)OpenBlock + 2) = v9;
    *((_QWORD *)OpenBlock + 3) = NdisProtocolHandle;
    *((_QWORD *)OpenBlock + 4) = v47;
    if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline() )
    {
      v20 = ndisRegisterCommonOpenTriageData((__int64)v8, v18, v19);
      v40 = v20;
      v6 = v20;
      if ( v20 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v37 = v20;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            6u,
            0x41u,
            (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
            (char)v8,
            *(_QWORD *)v37);
        }
        goto LABEL_91;
      }
    }
    v21 = NdisBindingHandle;
    *NdisBindingHandle = v8;
    MediumArraySize = OpenParameters->MediumArraySize;
    if ( (*(_DWORD *)(v9 + 568) & 0x80000001) == 0x80000001 )
    {
      v23 = 0LL;
      if ( MediumArraySize )
      {
        while ( OpenParameters->MediumArray[v23] != NdisMediumWan )
        {
          v23 = (unsigned int)(v23 + 1);
          if ( (unsigned int)v23 >= MediumArraySize )
            goto LABEL_44;
        }
        goto LABEL_47;
      }
    }
    else
    {
      v23 = 0LL;
      if ( MediumArraySize )
      {
        MediumArray = OpenParameters->MediumArray;
        while ( MediumArray[v23] != *(_DWORD *)(v9 + 464) )
        {
          v23 = (unsigned int)(v23 + 1);
          if ( (unsigned int)v23 >= MediumArraySize )
            goto LABEL_44;
        }
        goto LABEL_47;
      }
    }
LABEL_44:
    if ( (_DWORD)v23 == MediumArraySize )
    {
      v6 = -1073676263;
LABEL_46:
      *v21 = 0LL;
      goto LABEL_95;
    }
LABEL_47:
    *OpenParameters->SelectedMediumIndex = v23;
    FrameTypeArraySize = OpenParameters->FrameTypeArraySize;
    if ( FrameTypeArraySize > 4 )
    {
      v6 = -1073741670;
      goto LABEL_46;
    }
    v25 = 0LL;
    for ( v8->FrameTypeArraySize = FrameTypeArraySize;
          (unsigned int)v25 < OpenParameters->FrameTypeArraySize;
          v25 = (unsigned int)(v25 + 1) )
    {
      v8->FrameTypeArray[v25] = __ROR2__(OpenParameters->FrameTypeArray[v25], 8);
    }
    if ( ndisDatapathVerifierMode == 1 )
    {
      if ( !MmIsDriverVerifyingByAddress(*((PVOID *)NdisProtocolHandle + 13)) || !ndisDriverVerifierNdisFlagEnabled() )
      {
LABEL_57:
        if ( *(_BYTE *)(v9 + 32) < 6u )
          goto LABEL_64;
        if ( ndisNblContextVerifierMode == 1 )
        {
          if ( !MmIsDriverVerifyingByAddress(*((PVOID *)NdisProtocolHandle + 13))
            || !ndisDriverVerifierNdisFlagEnabled() )
          {
LABEL_64:
            v26 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
            v8->NextGlobalOpen = ndisGlobalOpenList;
            NewIrql = v26;
            ndisGlobalOpenList = v8;
            v38 = 1;
            KeReleaseSpinLock(&ndisGlobalOpenListLock, v26);
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v9, &NewIrql);
            if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)(v9 + 120)) & 0x40000) == 0 )
            {
              while ( *(_BYTE *)(v9 + 89) )
              {
                *(_QWORD *)(v9 + 520) = 0LL;
                KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v9 + 96));
                KeStallExecutionProcessor(1u);
                NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC((struct _NDIS_MINIPORT_BLOCK *)v9);
              }
              *(_BYTE *)(v9 + 89) = 1;
              *(_QWORD *)(v9 + 1864) = KeGetCurrentThread();
            }
            ndisMOpenAdapter(&v40, v8, (struct _NDIS_MINIPORT_BLOCK *)v9);
            v27 = v40;
            if ( !v40 )
            {
              v39 = 1;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  v40 + 6,
                  v40 + 66,
                  (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
                  (char)v8,
                  (char)NdisProtocolHandle,
                  v9);
              if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)(v9 + 120)) & 0x20000000) == 0
                && (mem::ReadNoFence<unsigned long,void>(v28) & 0x20000) == 0 )
              {
                ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v9, 2u);
              }
              if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)(v9 + 120)) & 0x20000) != 0
                && *((_QWORD *)NdisProtocolHandle + 25) )
              {
                Pool2 = (struct _NDIS_OPEN_BLOCK **)ExAllocatePool2(64LL, 40LL, 1769423950LL);
                if ( Pool2 )
                {
                  ndisMReferenceOpen((__int64)v8, 0);
                  _InterlockedAdd(&v8->PendingAfNotifications, 1u);
                  v30 = Pool2;
                  *Pool2 = v8;
                  v30[3] = (struct _NDIS_OPEN_BLOCK *)ndisMFinishQueuedPendingOpen;
                  v30[4] = (struct _NDIS_OPEN_BLOCK *)v30;
                  v30[1] = 0LL;
                }
                else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v29) = 2;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v29,
                    19,
                    67,
                    (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
                    (char)v8);
                }
              }
            }
            if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)(v9 + 120)) & 0x40000) == 0 )
            {
              *(_BYTE *)(v9 + 89) = 0;
              *(_QWORD *)(v9 + 1864) = 0LL;
            }
            v31 = NewIrql;
            *(_QWORD *)(v9 + 520) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 96), v31);
            Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v9 + 5120));
            CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(v9 + 5120));
            v8->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
            if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, v8) )
              v27 = -1073741670;
            v6 = v27;
            Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v9 + 5120));
            if ( !v27 )
            {
              if ( (*(_DWORD *)(v9 + 124) & 0x2000) != 0 )
              {
                v33 = *(_QWORD *)(v9 + 3984);
                if ( v33 )
                  (*(void (__fastcall **)(_QWORD))(v33 + 32))(*(_QWORD *)(v33 + 8));
              }
              ndisPktMonOpenRegister((__int64)v8);
              v34 = Pool2;
              v48[2] = v8;
              if ( !v34 )
                goto LABEL_9;
              (*((void (__fastcall **)(void *, _QWORD))NdisProtocolHandle + 14))(v8->ProtocolBindingContext, 0LL);
              ndisUpdateCheckForLoopbackFlag((struct _NDIS_MINIPORT_BLOCK *)v9);
              ndisQueueWorkitem((struct _WORK_QUEUE_ITEM *)(v34 + 1));
              v6 = 259;
            }
LABEL_91:
            if ( v6 == 259 )
              goto LABEL_9;
LABEL_94:
            *NdisBindingHandle = 0LL;
            if ( !v15 )
            {
LABEL_96:
              if ( v38 )
                ndisRemoveOpenFromGlobalList(v8);
              if ( v8 )
              {
                if ( v39 )
                {
                  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v9, &NewIrql);
                  ndisMDereferenceOpenFromFailedCreationLocked(v8);
                  v35 = NewIrql;
                  *(_QWORD *)(v9 + 520) = 0LL;
                  KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 96), v35);
                }
                ndisFreeOpenBlock(v8);
                LOBYTE(v8) = 0;
              }
              goto LABEL_9;
            }
LABEL_95:
            ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 0, 9u, (int)MediumArray);
            goto LABEL_96;
          }
        }
        else if ( ndisNblContextVerifierMode != 2 )
        {
          goto LABEL_64;
        }
        v8->OpenFlags |= 0x80000000;
        goto LABEL_64;
      }
    }
    else if ( ndisDatapathVerifierMode != 2 )
    {
      goto LABEL_57;
    }
    v8->OpenFlags |= 1u;
    goto LABEL_57;
  }
  v6 = -1073676286;
  *NdisBindingHandle = 0LL;
LABEL_9:
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( (_BYTE)v41 )
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v9, 0x2Du);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      6u,
      0x44u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)NdisProtocolHandle,
      v9,
      (char)v8,
      v6);
  return v6;
}
