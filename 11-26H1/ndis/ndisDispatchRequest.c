/*
 * XREFs of ndisDispatchRequest @ 0x14000C5E0
 * Callers:
 *     ndisDriverDispatch @ 0x14000AF80 (ndisDriverDispatch.c)
 * Callees:
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x14000A230 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     ?ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z @ 0x14000AAD0 (-ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x140022DF0 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048990 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x140048C90 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x14005F6A0 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x1400783E0 (-ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineExcep.c)
 *     ?AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x14008C430 (-AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z.c)
 *     ndisDriverSystemDispatch @ 0x1400A59D8 (ndisDriverSystemDispatch.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400D092C (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDispatchRequest(__int64 a1, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned int v4; // r13d
  _OWORD *Pool2; // rax
  _BYTE *v7; // rdi
  void *v8; // r8
  _QWORD *v9; // r15
  __int64 v10; // rbx
  char v11; // si
  KIRQL v12; // al
  struct _NDIS_M_DRIVER_BLOCK *v13; // rbp
  KIRQL v14; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rdi
  KIRQL v16; // r12
  void *v17; // rcx
  __int64 v18; // rbx
  char v19; // si
  KIRQL v20; // al
  struct _NDIS_M_DRIVER_BLOCK *v21; // rbp
  KIRQL v22; // al
  _NDIS_MINIPORT_BLOCK *v23; // rdi
  KIRQL v24; // r14
  KIRQL v25; // al
  __int64 v26; // rdi
  KIRQL v27; // al
  KIRQL v28; // si
  _QWORD **v29; // rdx
  void **v30; // rcx
  int v31; // edx
  __int64 v32; // rcx
  KIRQL v33; // al
  __int64 v34; // rdi
  KIRQL v35; // bp
  int v36; // eax
  bool v37; // r14
  unsigned __int8 v38; // r8
  __int64 v39; // rdx
  unsigned __int8 v40; // cl
  char v41; // cl
  bool v42; // al
  unsigned __int8 v43; // cl
  char v44; // r9
  unsigned __int8 v45; // al
  unsigned __int8 v46; // dl
  __int16 v47; // r8
  __int64 v48; // rax
  void (__fastcall *v49)(_QWORD, _QWORD); // r8
  _FILE_OBJECT *FileObject; // rax
  void *FsContext; // rcx
  unsigned int v52; // eax
  struct _GUID *v54; // [rsp+20h] [rbp-48h]
  char v55[8]; // [rsp+28h] [rbp-40h]
  __int64 v56; // [rsp+30h] [rbp-38h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  a2->IoStatus.Status = 259;
  a2->IoStatus.Information = 0LL;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  switch ( CurrentStackLocation->MajorFunction )
  {
    case 0u:
      Pool2 = (_OWORD *)ExAllocatePool2(64LL, 64LL, 1668236366LL);
      v7 = Pool2;
      if ( Pool2 )
      {
        v8 = ndisSecurityDescriptor;
        *Pool2 = 0LL;
        Pool2[1] = 0LL;
        Pool2[2] = 0LL;
        Pool2[3] = 0LL;
        *(_BYTE *)Pool2 = ndisCheckAccess(a2, CurrentStackLocation, v8);
        v7[1] = ndisCheckAccess(a2, CurrentStackLocation, &unk_1400FD9D0);
        v7[2] = ndisCheckAccess(a2, CurrentStackLocation, &unk_14011E800);
        CurrentStackLocation->FileObject->FsContext = v7;
        _InterlockedIncrement(&dword_14011EE60);
      }
      else
      {
        v4 = -1073741670;
      }
      goto LABEL_99;
    case 2u:
      FileObject = CurrentStackLocation->FileObject;
      FsContext = FileObject->FsContext;
      FileObject->FsContext = 0LL;
      if ( FsContext )
        ExFreePoolWithTag(FsContext, 0);
      _InterlockedDecrement(&dword_14011EE60);
      goto LABEL_99;
    case 0xEu:
      v52 = ndisHandlePnPRequest(a2);
      goto LABEL_96;
    case 0xFu:
      goto LABEL_99;
    case 0x12u:
      v9 = CurrentStackLocation->FileObject->FsContext;
      v10 = v9[4];
      if ( !*((_DWORD *)v9 + 6) || !v10 )
        goto LABEL_21;
      v11 = 0;
      v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v13 = ndisMiniDriverList;
      break;
    case 0x17u:
      v52 = ndisDriverSystemDispatch(a1, a2);
LABEL_96:
      v4 = v52;
      if ( v52 != 259 )
        goto LABEL_99;
      goto LABEL_100;
    default:
      v4 = -1073741822;
      goto LABEL_99;
  }
  while ( 2 )
  {
    if ( v13 )
    {
      KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
      v14 = KeAcquireSpinLockRaiseToDpc(&v13->Ref.SpinLock);
      MiniportQueue = v13->MiniportQueue;
      v16 = v14;
      do
      {
        if ( !MiniportQueue )
          break;
        if ( MiniportQueue == (_NDIS_MINIPORT_BLOCK *)v10 )
        {
          v11 = 1;
          if ( ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v10, MPREF_AOAC_CLEANUP) )
            goto LABEL_39;
          if ( (*(_DWORD *)(v10 + 120) & 0x80200020) != 0 )
          {
            KeReleaseSpinLock(&v13->Ref.SpinLock, v16);
            v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            goto LABEL_20;
          }
          if ( (*(_DWORD *)(v10 + 124) & 0x1084110) == 0
            && *(_DWORD *)(v10 + 1520) == 1
            && *(_DWORD *)(v10 + 3868) == 1
            && ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v10, MPREF_AOAC_CLEANUP) )
          {
LABEL_39:
            KeReleaseSpinLock(&v13->Ref.SpinLock, v16);
            v25 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            KeReleaseSpinLock(&ndisMiniDriverListLock, v25);
            v26 = *(_QWORD *)(v10 + 4456);
            v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v26);
            v28 = v27;
            if ( v9[4] )
            {
              v29 = (_QWORD **)v9[1];
              if ( v29[1] != v9 + 1 || (v30 = (void **)v9[2], *v30 != v9 + 1) )
                __fastfail(3u);
              *v30 = v29;
              v29[1] = v30;
              --*(_DWORD *)(v26 + 24);
              if ( *((int *)v9 + 7) > 0 )
              {
                ndisAoAcActiveRefSubtract(v26, *((unsigned int *)v9 + 6));
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qDL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v31,
                    14,
                    40,
                    (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
                    v10,
                    *((_DWORD *)v9 + 6),
                    *(_DWORD *)(v26 + 52));
                if ( (byte_14011D043 & 4) != 0 )
                {
                  LODWORD(v56) = *(_DWORD *)(v26 + 52);
                  *(_DWORD *)v55 = 0;
                  LODWORD(v54) = *((_DWORD *)v9 + 6);
                  McTemplateK0xqqq_EtwWriteTransfer(
                    v32,
                    (const EVENT_DESCRIPTOR *)"@(",
                    (const GUID *)(v10 + 4008),
                    *(_QWORD *)(v10 + 4024),
                    v54,
                    *(_QWORD *)v55,
                    v56);
                }
              }
              KeReleaseSpinLock((PKSPIN_LOCK)v26, v28);
              ndisNicQuietCheckRef((struct _NDIS_MINIPORT_BLOCK *)v10);
              ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v10, MPREF_AOAC_CLEANUP);
            }
            else
            {
              KeReleaseSpinLock((PKSPIN_LOCK)v26, v27);
              ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v10, MPREF_AOAC_CLEANUP);
            }
            goto LABEL_21;
          }
        }
        MiniportQueue = MiniportQueue->NextMiniport;
      }
      while ( !v11 );
      KeReleaseSpinLock(&v13->Ref.SpinLock, v16);
      v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v13 = v13->NextDriver;
      if ( !v11 )
        continue;
    }
    break;
  }
LABEL_20:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
LABEL_21:
  v17 = (void *)v9[6];
  if ( v17 )
  {
    ndisIfDereferenceCompartmentForUser(v17);
    v9[6] = 0LL;
  }
  v18 = v9[4];
  if ( !v18 )
    goto LABEL_99;
  v19 = 0;
  v20 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v21 = ndisMiniDriverList;
LABEL_25:
  if ( !v21 )
  {
LABEL_37:
    KeReleaseSpinLock(&ndisMiniDriverListLock, v20);
    goto LABEL_99;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v20);
  v22 = KeAcquireSpinLockRaiseToDpc(&v21->Ref.SpinLock);
  v23 = v21->MiniportQueue;
  v24 = v22;
  while ( 1 )
  {
    if ( !v23 )
    {
LABEL_36:
      KeReleaseSpinLock(&v21->Ref.SpinLock, v24);
      v20 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v21 = v21->NextDriver;
      if ( !v19 )
        goto LABEL_25;
      goto LABEL_37;
    }
    if ( v23 == (_NDIS_MINIPORT_BLOCK *)v18 )
    {
      v19 = 1;
      if ( ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v18, MPREF_AOAC_CLEANUP) )
        break;
      if ( (*(_DWORD *)(v18 + 120) & 0x80200020) != 0 )
      {
        KeReleaseSpinLock(&v21->Ref.SpinLock, v24);
        v20 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        goto LABEL_37;
      }
      if ( (*(_DWORD *)(v18 + 124) & 0x1084110) == 0
        && *(_DWORD *)(v18 + 1520) == 1
        && *(_DWORD *)(v18 + 3868) == 1
        && ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v18, MPREF_AOAC_CLEANUP) )
      {
        break;
      }
    }
    v23 = v23->NextMiniport;
    if ( v19 )
      goto LABEL_36;
  }
  KeReleaseSpinLock(&v21->Ref.SpinLock, v24);
  v33 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  KeReleaseSpinLock(&ndisMiniDriverListLock, v33);
  if ( (*(_DWORD *)(v18 + 120) & 0x80u) == 0 || (*(_DWORD *)(v18 + 120) & 0x100) != 0 )
    goto LABEL_90;
  v34 = **(_QWORD **)(v18 + 6088);
  v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v34 + 1000));
  *(_BYTE *)(v34 + 1009) = v35;
  v36 = *(_DWORD *)(v34 + 992);
  if ( v36 != 5 )
  {
    v37 = v36 == 1;
LABEL_60:
    switch ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v34 + 888) + 16LL) + 18LL) )
    {
      case 1:
        v42 = SmFx::StateMachineEngine::StateMachineEngineImpl::AddEventToEventQueue(
                (SmFx::StateMachineEngine::StateMachineEngineImpl *)v34,
                4u);
        goto LABEL_84;
      case 2:
        v43 = *(_BYTE *)(v34 + 978);
        v44 = 0;
        v45 = *(_BYTE *)(v34 + 979);
        v46 = v43;
        if ( v43 != v45 )
        {
          do
          {
            v47 = *(_WORD *)(v34 + 2LL * v43 + 832);
            if ( v47 == 4 )
            {
              v44 = 1;
            }
            else
            {
              v48 = v46;
              v46 = (v46 + 1) & 0xF;
              *(_WORD *)(v34 + 2 * v48 + 832) = v47;
            }
            v45 = *(_BYTE *)(v34 + 979);
            v43 = (v43 + 1) & 0xF;
          }
          while ( v43 != v45 );
          if ( v44 )
          {
            *(_WORD *)(v34 + 2LL * ((v45 - 1) & 0xF) + 832) = 4;
            goto LABEL_77;
          }
        }
        v41 = (v45 + 1) & 0xF;
        if ( v41 == *(_BYTE *)(v34 + 978) )
          goto LABEL_68;
        *(_WORD *)(v34 + 2LL * v45 + 832) = 4;
        break;
      case 3:
        v38 = *(_BYTE *)(v34 + 978);
        v39 = *(unsigned __int8 *)(v34 + 979);
        v40 = v38;
        if ( v38 != (_BYTE)v39 )
        {
          while ( *(_WORD *)(v34 + 2LL * v40 + 832) != 4 )
          {
            v40 = (v40 + 1) & 0xF;
            if ( v40 == (_BYTE)v39 )
              goto LABEL_67;
          }
          goto LABEL_77;
        }
LABEL_67:
        v41 = (v39 + 1) & 0xF;
        if ( v41 == v38 )
        {
LABEL_68:
          SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(
            (SmFx::StateMachineEngine::StateMachineEngineImpl *)v34,
            RequiresDedicatedThread,
            4u,
            0);
          v42 = 0;
LABEL_84:
          if ( !v42 )
            goto LABEL_90;
          if ( v37 )
            goto LABEL_86;
LABEL_77:
          KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 1000), *(_BYTE *)(v34 + 1009));
          ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v18, MPREF_AOAC_CLEANUP);
          goto LABEL_99;
        }
        *(_WORD *)(v34 + 2 * v39 + 832) = 4;
        break;
      default:
        KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 1000), v35);
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v18, MPREF_AOAC_CLEANUP);
        goto LABEL_99;
    }
    v49 = *(void (__fastcall **)(_QWORD, _QWORD))(v34 + 928);
    *(_BYTE *)(v34 + 979) = v41;
    if ( v49 )
      v49(*(_QWORD *)(v34 + 896), *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v34 + 888) + 16LL) + 16LL));
    v42 = 1;
    goto LABEL_84;
  }
  if ( *(_WORD *)(v34 + 880) != 4 )
  {
    v37 = 0;
    goto LABEL_60;
  }
  if ( *(_QWORD *)(v34 + 928) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(v34 + 928))(
      *(_QWORD *)(v34 + 896),
      *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v34 + 888) + 16LL) + 16LL));
  *(_WORD *)(v34 + 880) = 0;
LABEL_86:
  *(_BYTE *)(v34 + 983) = v35;
  *(_BYTE *)(v34 + 982) = 0;
  if ( v35 >= 2u )
    *(_DWORD *)(v34 + 984) = KeGetPcr()->Prcb.Number;
  else
    *(_QWORD *)(v34 + 984) = KeGetCurrentThread();
  SmFx::StateMachineEngine::StateMachineEngineImpl::ProcessEventQueue((SmFx::StateMachineEngine::StateMachineEngineImpl *)v34);
LABEL_90:
  ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v18, MPREF_AOAC_CLEANUP);
LABEL_99:
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 2);
LABEL_100:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
