/*
 * XREFs of StorPortNotification @ 0x14000DE70
 * Callers:
 *     StorPortNotificationVrfy @ 0x1401C24C0 (StorPortNotificationVrfy.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14000CD40 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterRequestComplete @ 0x14000E730 (RaidAdapterRequestComplete.c)
 *     RaidAdapterAcquireStartIoLock @ 0x14000ECB0 (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x14000EDE0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     RaidUnitSubmitIrpRequest @ 0x140021420 (RaidUnitSubmitIrpRequest.c)
 *     RaUnitFillIrpData @ 0x140021950 (RaUnitFillIrpData.c)
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaidAdapterRequestTimerDeferred @ 0x140029A14 (RaidAdapterRequestTimerDeferred.c)
 *     RaidQueueDeferredItem @ 0x140029A6C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     RaidAdapterRequestDirectComplete @ 0x14002E1A8 (RaidAdapterRequestDirectComplete.c)
 *     StorpGetExtendedTable @ 0x14003E1A4 (StorpGetExtendedTable.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x14004EE08 (StorEtwLogoRequestServiceTimeEventData.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x14004F378 (StorEtwIORequestServiceTimeEventData.c)
 *     RaidAllocateDeferredItem @ 0x140057E30 (RaidAllocateDeferredItem.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140059EFC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     RaidAdapterIrpComplete @ 0x140062C18 (RaidAdapterIrpComplete.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140078BD8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqquuuqpp_EtwWriteTransfer @ 0x140078D00 (McTemplateK0pqquuuqpp_EtwWriteTransfer.c)
 *     RaidpLinkDown @ 0x14007A75C (RaidpLinkDown.c)
 *     RaidpLinkUp @ 0x14007A7D8 (RaidpLinkUp.c)
 *     StorAsyncNotificationDeferred @ 0x14007A8A0 (StorAsyncNotificationDeferred.c)
 *     StorEnablePassiveInitialization @ 0x14007A900 (StorEnablePassiveInitialization.c)
 *     StorPortPause @ 0x14007BE90 (StorPortPause.c)
 *     StorpMarkDeviceFailed @ 0x14007CEEC (StorpMarkDeviceFailed.c)
 *     RaidHandleTraceNotifyType @ 0x14008DA68 (RaidHandleTraceNotifyType.c)
 *     RaProcessMFNDChildControllerEvent @ 0x140092038 (RaProcessMFNDChildControllerEvent.c)
 *     RaProcessStorageEventNotification @ 0x1400922D0 (RaProcessStorageEventNotification.c)
 *     StorLogNVMeErrorRecoveryInfo @ 0x140097B30 (StorLogNVMeErrorRecoveryInfo.c)
 *     RaidUnitProcessAsyncNotification @ 0x1400A8A68 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwIOIrpRequestServiceTimeEventData @ 0x1400B0A6C (StorEtwIOIrpRequestServiceTimeEventData.c)
 *     StorEtwLogoIrpRequestServiceTimeEventData @ 0x1400B0CE8 (StorEtwLogoIrpRequestServiceTimeEventData.c)
 *     NvmeAdapterProcessNvmeofNotification @ 0x1400DB140 (NvmeAdapterProcessNvmeofNotification.c)
 *     NvmeAdapterRequestComplete @ 0x1400DC454 (NvmeAdapterRequestComplete.c)
 *     NvmeAdapterRequestDirectComplete @ 0x1400DC60C (NvmeAdapterRequestDirectComplete.c)
 *     NvmeAdapterStorMQControllerStartInitialize @ 0x1400DF680 (NvmeAdapterStorMQControllerStartInitialize.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

void StorPortNotification(int a1, va_list a2, ...)
{
  PKDPC v2; // r8
  va_list v3; // r9
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned int **v7; // rax
  int v8; // ecx
  void **p_DeferredContext; // rdx
  void *v10; // rdx
  _DWORD *v11; // rdi
  PKDPC v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  PKDPC v17; // r15
  __int64 v18; // rdi
  struct _KTIMER *v19; // rcx
  __int64 v20; // rax
  _DWORD *v21; // r8
  unsigned int TargetInfoAsUlong; // ecx
  _SINGLE_LIST_ENTRY *p_DpcListEntry; // rcx
  void **v24; // rax
  __int64 v25; // rax
  _DWORD *v26; // r8
  int v27; // edx
  PKDEFERRED_ROUTINE v28; // r10
  _DWORD *v29; // rdi
  unsigned int v30; // ecx
  int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  char v34; // r12
  char v35; // r13
  PKDPC v36; // r15
  PKDEFERRED_ROUTINE v37; // rdi
  void **p_SystemArgument2; // rax
  PKDPC v39; // rdi
  struct _KDPC *v40; // rdi
  KDPC_IMPORTANCE v41; // r15d
  __int64 v42; // rdx
  int v43; // ecx
  int v44; // r8d
  unsigned int v45; // edi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  _BYTE *DeferredItem; // rax
  void **v50; // rax
  struct _KDPC *v51; // rdi
  char v52; // r15
  PKDEFERRED_ROUTINE v53; // r15
  __int64 v54; // r10
  __int64 v55; // r11
  int v56; // r8d
  int v57; // r12d
  _DWORD *v58; // rdi
  unsigned __int8 v59; // r13
  int v60; // ecx
  int v61; // edx
  int *v62; // r15
  unsigned int v63; // edi
  __int64 Unit; // rax
  __int64 v65; // r13
  int v66; // ecx
  char v67; // al
  int *v68; // rdi
  int v69; // ecx
  __int64 v70; // r13
  IRP *v71; // r15
  int DpcData; // edi
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  int v75; // eax
  PKDEFERRED_ROUTINE v76; // rdi
  PKDPC v77; // r12
  __int64 v78; // r15
  signed __int32 v79[8]; // [rsp+0h] [rbp-69h] BYREF
  char v80; // [rsp+60h] [rbp-9h]
  char v81; // [rsp+61h] [rbp-8h]
  va_list v82; // [rsp+68h] [rbp-1h]
  PKDEFERRED_ROUTINE v83; // [rsp+70h] [rbp+7h]
  __int64 v84; // [rsp+78h] [rbp+Fh]
  __int64 retaddr; // [rsp+C8h] [rbp+5Fh]
  va_list v86; // [rsp+D8h] [rbp+6Fh]
  PKDPC v87; // [rsp+E0h] [rbp+77h] BYREF
  va_list va; // [rsp+E0h] [rbp+77h]
  unsigned __int64 v89; // [rsp+E8h] [rbp+7Fh]
  _DWORD *v90; // [rsp+F0h] [rbp+87h] BYREF
  va_list va1; // [rsp+F0h] [rbp+87h]
  _DWORD *v92; // [rsp+F8h] [rbp+8Fh]
  __int64 v93; // [rsp+100h] [rbp+97h]
  _DWORD *v94; // [rsp+108h] [rbp+9Fh]
  __int64 v95; // [rsp+110h] [rbp+A7h]
  __int64 v96; // [rsp+118h] [rbp+AFh]
  int *v97; // [rsp+120h] [rbp+B7h]
  va_list va2; // [rsp+128h] [rbp+BFh] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v87 = va_arg(va1, PKDPC);
  v2 = v87;
  v89 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v90 = va_arg(va2, _DWORD *);
  v92 = va_arg(va2, _DWORD *);
  v93 = va_arg(va2, _QWORD);
  v94 = va_arg(va2, _DWORD *);
  v95 = va_arg(va2, _QWORD);
  v96 = va_arg(va2, _QWORD);
  v97 = va_arg(va2, int *);
  v86 = a2;
  v3 = a2;
  v82 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( !a2 )
    goto LABEL_16;
  v7 = (unsigned int **)*((_QWORD *)a2 - 2);
  if ( !v7 || !*v7 )
    goto LABEL_16;
  a2 = (va_list)**v7;
  if ( ((_DWORD)v7[31] & 1) != 0 )
  {
    if ( (_DWORD)a2 == 1314275652 )
      v6 = (__int64)*v7;
LABEL_16:
    if ( !a1 )
    {
      if ( v5 && v87 )
      {
        if ( LOBYTE(v87->Number) == 40 )
          p_DeferredContext = &v87[1].DeferredContext;
        else
          p_DeferredContext = &v87->SystemArgument2;
        v10 = *p_DeferredContext;
        if ( v10 )
          RaidAdapterRequestComplete(v5, v10, 0LL, v3);
        goto LABEL_27;
      }
      if ( v6 && v87 )
      {
        v24 = LOBYTE(v87->Number) == 40 ? &v87[1].DeferredContext : &v87->SystemArgument2;
        if ( *v24 )
          NvmeAdapterRequestComplete(v6, *v24, v2, v3);
      }
      goto LABEL_26;
    }
    if ( a1 == 4098 )
    {
      v11 = v92;
      if ( v87 )
        *v11 = KeInsertQueueDpc(v87, (PVOID)v89, v90);
      goto LABEL_26;
    }
    if ( a1 <= 4096 )
    {
      if ( a1 != 4096 )
      {
        switch ( a1 )
        {
          case 3:
            if ( !v5 )
              return;
            DbgLogRequest(v5, 39, v5, *(_DWORD *)(v5 + 56), retaddr, *(unsigned int *)(v5 + 600), 0LL);
            v45 = *(_DWORD *)(v5 + 600);
            if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
              McTemplateK0pqq_EtwWriteTransfer(
                v43,
                (unsigned int)&EventResetDetected,
                v44,
                (_DWORD)v86,
                *(_DWORD *)(v5 + 56),
                *(_DWORD *)(v5 + 600));
            if ( !v45 )
              goto LABEL_26;
            if ( v45 > 0x3D0900 )
              v45 = 4000000;
            v46 = v45 / 0xF4240 + 1;
            if ( v45 == 1000000 * (v45 / 0xF4240) )
              v46 = v45 / 0xF4240;
            StorPortPause(v86, v46);
            goto LABEL_27;
          case 6:
            v17 = v87;
            v18 = (unsigned int)v89;
            if ( !v5 )
              return;
            if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
              McTemplateK0pqq_EtwWriteTransfer(
                (unsigned int)va,
                (unsigned int)&EventRequestTimerCall,
                (_DWORD)v2,
                (_DWORD)v3,
                *(_DWORD *)(v5 + 56),
                v89);
            if ( KeGetCurrentIrql() > 2u )
            {
              RaidAdapterRequestTimerDeferred(v5, v17, (unsigned int)v18);
            }
            else
            {
              v19 = (struct _KTIMER *)(v5 + 1648);
              if ( (_DWORD)v18 )
              {
                *(_QWORD *)(v5 + 1904) = v17;
                KeSetCoalescableTimer(v19, (LARGE_INTEGER)(-10 * v18), 0, 0, (PKDPC)(v5 + 1584));
              }
              else
              {
                KeCancelTimer(v19);
              }
            }
            goto LABEL_27;
          case 7:
            if ( !v5 )
              return;
            DbgLogRequest(v5, 38, v5, *(_DWORD *)(v5 + 56), retaddr, *(unsigned int *)(v5 + 600), 0LL);
            if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
              McTemplateK0pq_EtwWriteTransfer(v47, &EventBusChangeDetected, v48, v86, *(_DWORD *)(v5 + 56));
            *(_WORD *)(v5 + 105) = 257;
            KeInsertQueueDpc((PRKDPC)(v5 + 1976), 0LL, 0LL);
            goto LABEL_27;
          case 8:
            v34 = v89;
            v35 = 0;
            v36 = v87;
            v80 = 0;
            if ( (_BYTE)v89 != 0xFF )
            {
              v35 = (char)v90;
              v80 = (char)v92;
            }
            if ( !v87 || v87->TargetInfoAsUlong > 0x80 )
              goto LABEL_26;
            if ( !v5 )
              return;
            DeferredItem = (_BYTE *)RaidAllocateDeferredItem(v5 + 1456, 0x140000000uLL, v2, v3);
            if ( !DeferredItem )
              goto LABEL_26;
            DeferredItem[32] = v34;
            if ( v34 != -1 )
            {
              DeferredItem[33] = v35;
              DeferredItem[34] = v80;
            }
            memmove(DeferredItem + 40, v36, v36->TargetInfoAsUlong);
            RaidQueueDeferredItem((PVOID)(v5 + 1456));
            break;
          case 10:
            if ( !v5 )
              return;
            RaidpLinkUp(v5, 0x140000000uLL, v2, v3);
            goto LABEL_27;
          case 11:
            if ( !v5 )
              return;
            RaidpLinkDown(v5, 0x140000000uLL, v2, v3);
            goto LABEL_27;
          case 12:
            *(_QWORD *)&v87->TargetInfoAsUlong = MEMORY[0xFFFFF78000000320];
            goto LABEL_26;
          case 13:
            KeBugCheckEx(0xF7u, 0LL, 0LL, 0LL, 0LL);
          case 14:
            RaidHandleTraceNotifyType((PKDPC *)va, (unsigned int)v87, v89, v3);
            goto LABEL_26;
          case 15:
            if ( !v6 )
              StorpGetExtendedTable(v5, v87, v2, v3);
            goto LABEL_26;
          default:
            goto LABEL_26;
        }
        goto LABEL_27;
      }
      v37 = (PKDEFERRED_ROUTINE)v89;
      *(_DWORD *)v37 = (unsigned __int8)StorEnablePassiveInitialization(v3, v87);
      goto LABEL_26;
    }
    if ( a1 <= 0x2000 )
    {
      if ( a1 != 0x2000 )
      {
        switch ( a1 )
        {
          case 4097:
            v39 = v87;
            if ( v87 && v89 )
            {
              KeInitializeDpc(v87, (PKDEFERRED_ROUTINE)v89, v3);
              KeInitializeSpinLock((PKSPIN_LOCK)&v39[1].TargetInfoAsUlong);
            }
            goto LABEL_26;
          case 4099:
            v25 = *((_QWORD *)v3 - 2);
            v26 = 0LL;
            v27 = (int)v87;
            v28 = (PKDEFERRED_ROUTINE)v89;
            v29 = v90;
            if ( v25 && *(_QWORD *)v25 && (*(_DWORD *)(v25 + 248) & 1) == 0 && **(_DWORD **)v25 == 1094997074 )
            {
              v26 = *(_DWORD **)v25;
            }
            else if ( (unsigned int)((_DWORD)v87 - 2) <= 1 )
            {
              goto LABEL_26;
            }
            if ( v90 )
            {
              *v90 = (_DWORD)v87;
              if ( v27 == 3 )
              {
                *((_BYTE *)v29 + 24) = RaidAdapterAcquireInterruptLock((__int64)v26);
              }
              else
              {
                v31 = v27 - 1;
                if ( v31 )
                {
                  if ( v31 == 1 )
                    RaidAdapterAcquireStartIoLock(v26, v29 + 2);
                  else
                    *v29 = 0;
                }
                else if ( v28 )
                {
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v28 + 8, (PKLOCK_QUEUE_HANDLE)(v29 + 2));
                }
              }
            }
            goto LABEL_26;
          case 4100:
            v20 = *((_QWORD *)v3 - 2);
            v21 = 0LL;
            if ( v20 && *(_QWORD *)v20 && (*(_DWORD *)(v20 + 248) & 1) == 0 && **(_DWORD **)v20 == 1094997074 )
              v21 = *(_DWORD **)v20;
            if ( !v87 )
              goto LABEL_26;
            TargetInfoAsUlong = v87->TargetInfoAsUlong;
            if ( !v87->TargetInfoAsUlong || !v21 && TargetInfoAsUlong - 2 <= 1 )
              goto LABEL_26;
            if ( TargetInfoAsUlong == 1 )
            {
              p_DpcListEntry = &v87->DpcListEntry;
            }
            else
            {
              v30 = TargetInfoAsUlong - 2;
              if ( v30 )
              {
                v32 = v30 - 1;
                if ( v32 )
                {
                  v33 = v32 - 1;
                  if ( v33 )
                  {
                    if ( v33 == 1 )
                      KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&v87->DpcListEntry);
                  }
                  else
                  {
                    KeReleaseInStackQueuedSpinLockForDpc((PKLOCK_QUEUE_HANDLE)&v87->DpcListEntry);
                  }
                }
                else
                {
                  RaidAdapterReleaseInterruptLock(v21, LOBYTE(v87->DeferredRoutine));
                }
                goto LABEL_26;
              }
              p_DpcListEntry = &v87->DpcListEntry;
              if ( !v21[222] )
              {
                RaidAdapterReleaseInterruptLock(v21, LOBYTE(p_DpcListEntry->Next));
                goto LABEL_26;
              }
            }
            KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)p_DpcListEntry);
            goto LABEL_26;
          case 4101:
            if ( !v5 )
              return;
            v53 = (PKDEFERRED_ROUTINE)v89;
            v54 = (__int64)v92;
            v55 = v93;
            v56 = (int)v90;
            v57 = (int)v87;
            v58 = v94;
            LODWORD(v82) = (_DWORD)v90;
            v83 = (PKDEFERRED_ROUTINE)v92;
            v84 = v93;
            if ( v89 && *(_WORD *)v89 == 1 )
            {
              v59 = *(_BYTE *)(v89 + 8);
              v60 = *(unsigned __int8 *)(v89 + 9);
              v61 = *(unsigned __int8 *)(v89 + 10);
            }
            else
            {
              v59 = -1;
              v60 = 255;
              v61 = 255;
            }
            v81 = v61;
            v80 = v60;
            if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
            {
              McTemplateK0pqquuuqpp_EtwWriteTransfer(
                v60,
                v61,
                0,
                (_DWORD)v3,
                *(_DWORD *)(v5 + 56),
                (char)v87,
                v59,
                v60,
                v61,
                (char)v90,
                (char)v92,
                v93);
              LOBYTE(v60) = v80;
              LOBYTE(v61) = v81;
              v56 = (int)v82;
              v54 = (__int64)v83;
              v55 = v84;
            }
            if ( v53
              && *(_WORD *)v53 == 1
              && v59 <= *(_BYTE *)(v5 + 456)
              && ((v57 & 3) == 0 || (unsigned __int8)v60 <= *(_BYTE *)(v5 + 481))
              && ((v57 & 1) == 0 || (unsigned __int8)v61 <= *(_BYTE *)(v5 + 530))
              && ((v57 & 6) != 0 || (v57 & 1) != 0) )
            {
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 4888), 1, 0) == 1 )
              {
                if ( v58 )
                  *v58 = -1056964607;
              }
              else
              {
                _InterlockedOr(v79, 0);
                *(_DWORD *)(v5 + 4892) = v57;
                *(_QWORD *)(v5 + 4904) = v53;
                *(_DWORD *)(v5 + 4896) = v56;
                *(_QWORD *)(v5 + 4912) = v54;
                *(_QWORD *)(v5 + 4920) = v55;
                _InterlockedOr(v79, 0);
                *(_BYTE *)(v5 + 104) |= 0x40u;
                *(_BYTE *)(v5 + 105) = 1;
                KeInsertQueueDpc((PRKDPC)(v5 + 1976), 0LL, 0LL);
                if ( !v58 )
                  goto LABEL_26;
                *v58 = 0;
              }
            }
            else if ( v58 )
            {
              *v58 = -1056964602;
            }
            goto LABEL_27;
          case 4102:
            if ( !v6 )
            {
              if ( StorEtwLoggingEnabled )
              {
                v12 = v87;
                va_copy(v82, va1);
                if ( v89 )
                {
                  v13 = 96LL;
                  v14 = 48LL;
                  if ( *(_BYTE *)(v89 + 2) != 40 )
                    v13 = 48LL;
                  v15 = *(_QWORD *)(v13 + v89);
                  if ( v15 )
                  {
                    if ( (byte_140173441 & 1) != 0 || (byte_140173443 & 2) != 0 )
                      *(_QWORD *)(v15 + 720) = v87;
                    if ( (byte_140173441 & 1) != 0 )
                    {
                      LOBYTE(v14) = 1;
                      StorEtwIORequestServiceTimeEventData(v15, v14, v12, v3);
                    }
                    v16 = *(_QWORD *)(v15 + 224);
                    if ( v16 && *(_DWORD *)(v16 + 1940) && (byte_140173443 & 2) != 0 )
                    {
                      LOBYTE(v14) = 1;
                      StorEtwLogoRequestServiceTimeEventData(v15, v14, v12, v3);
                    }
                  }
                }
              }
            }
            goto LABEL_26;
          case 4103:
            v62 = v90;
            v83 = (PKDEFERRED_ROUTINE)v89;
            LODWORD(v82) = 0;
            if ( v5 )
            {
              if ( !v87 || LOWORD(v87->TargetInfoAsUlong) != 1 || (v89 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
              {
                *v90 = -1056964602;
                goto LABEL_27;
              }
              LOWORD(v82) = v87->DpcListEntry.Next;
              BYTE2(v82) = BYTE2(v87->DpcListEntry.Next);
              v63 = (unsigned int)v82;
              Unit = RaidAdapterFindUnit(v5, (unsigned int)v82);
              v65 = Unit;
              if ( !Unit || (*(_DWORD *)(Unit + 1952) & 4) == 0 )
              {
                *v62 = -1056964601;
                goto LABEL_27;
              }
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 2008), 1, 0) == 1 )
              {
                *v62 = -1056964596;
                goto LABEL_27;
              }
              if ( KeGetCurrentIrql() > 2u )
              {
                v67 = StorAsyncNotificationDeferred(v5, v65, (unsigned int)v82, v83);
                v66 = -1056964596;
                if ( v67 )
                  v66 = 0;
              }
              else
              {
                *(_QWORD *)(v65 + 2000) = v83;
                v66 = RaidUnitProcessAsyncNotification(v5, v63, v65 + 1992);
              }
            }
            else
            {
              v66 = -1056964602;
            }
            *v62 = v66;
            goto LABEL_26;
          case 4104:
            if ( v5 && v87 )
            {
              if ( LOBYTE(v87->Number) == 40 )
                p_SystemArgument2 = &v87[1].DeferredContext;
              else
                p_SystemArgument2 = &v87->SystemArgument2;
              if ( *p_SystemArgument2 )
              {
                RaidAdapterRequestDirectComplete(v5, *p_SystemArgument2, v2, v3);
                goto LABEL_27;
              }
            }
            else if ( v6 && v87 )
            {
              v50 = LOBYTE(v87->Number) == 40 ? &v87[1].DeferredContext : &v87->SystemArgument2;
              if ( *v50 )
                NvmeAdapterRequestDirectComplete(v6, *v50, v2, v3);
            }
            goto LABEL_26;
          case 4105:
            v40 = v87;
            v41 = (int)v92;
            if ( v87 )
            {
              if ( v89 )
              {
                KeInitializeDpc(v87, (PKDEFERRED_ROUTINE)v89, v90);
                if ( v41 )
                  KeSetImportanceDpc(v40, v41);
              }
            }
            goto LABEL_26;
          case 4106:
            v51 = v87;
            v52 = (char)v92;
            if ( v87 )
            {
              if ( v89 )
              {
                KeInitializeThreadedDpc(v87, (PKDEFERRED_ROUTINE)v89, v90);
                if ( v52 )
                  KeSetImportanceDpc(v51, HighImportance);
              }
            }
            goto LABEL_26;
          case 4107:
            if ( v87 && v89 )
              KeSetTargetProcessorDpcEx(v87, (PPROCESSOR_NUMBER)v89);
            goto LABEL_26;
          case 4108:
            if ( !v5 )
              return;
            if ( !v90 )
              goto LABEL_26;
            StorpMarkDeviceFailed(v5, (_DWORD)v87, v89, 0xFFFF, (__int64)v90, 0, 0LL, 0, 0LL);
            goto LABEL_27;
          case 4109:
            v68 = v97;
            if ( v5 && (_WORD)v90 && v92 )
            {
              StorpMarkDeviceFailed(
                v5,
                (_DWORD)v87,
                v89,
                (unsigned __int16)v90,
                (__int64)v92,
                v93,
                (__int64)v94,
                v95,
                v96);
              v69 = 0;
            }
            else
            {
              v69 = -1056964602;
            }
            *v68 = v69;
            goto LABEL_26;
          case 4110:
            if ( !v6 )
            {
              if ( v5 )
                _InterlockedDecrement((volatile signed __int32 *)(v5 + 6080));
              PsTerminateSystemThread(0);
            }
            goto LABEL_26;
          case 4111:
            if ( v6 )
              NvmeAdapterProcessNvmeofNotification((PKDPC *)va, v87, v2, v3);
            goto LABEL_26;
          case 4112:
            if ( v6 && v87 )
              NvmeAdapterStorMQControllerStartInitialize((PKDPC *)va, v87, v2, v3);
            goto LABEL_26;
          default:
            goto LABEL_26;
        }
      }
      if ( !v5 )
        return;
      if ( !v87 )
        goto LABEL_26;
      v70 = *(_QWORD *)&v87[1].TargetInfoAsUlong;
      v71 = (IRP *)&v87[-2].DpcListEntry;
      LODWORD(v2) = HIDWORD(KeGetPcr()[1].LockArray);
      DpcData = (int)v87[-2].DpcData;
      if ( (_BYTE)v89 == 1 )
      {
        v73 = *(unsigned int *)(v70 + 8);
        if ( DpcData < 0 )
        {
          v74 = v71->IoStatus.Information + 0x40000;
          if ( v74 < v73 )
          {
            v71->IoStatus.Information = v74;
            LOBYTE(v2) = 1;
            RaidUnitSubmitIrpRequest(*(_QWORD *)(*(_QWORD *)(v70 + 40) + 64LL), v71, v2, v3);
            goto LABEL_27;
          }
        }
        v71->IoStatus.Information = v73;
        v71->IoStatus.Status = 0;
      }
      else
      {
        v75 = RaidSrbStatusToNtStatus((unsigned __int8)v89, a2, v2, v3);
        v71->IoStatus.Status = v75;
        v71->IoStatus.Information = 0LL;
        if ( v75 == -1073741790 && *(_BYTE *)v70 == 4 )
          v71->IoStatus.Status = -1073741662;
      }
      if ( ((_DWORD)v2 == (DpcData & 0x7FFFFFFF) || (*(_BYTE *)(v5 + 4435) & 2) != 0) && KeGetCurrentIrql() == 2 )
      {
        RaidUnitCompleteIrpRequest(v71);
      }
      else
      {
        *(_DWORD *)(v70 + 24) = DpcData;
        RaidAdapterIrpComplete(v5, v71, DpcData & 0x7FFFFFFF, v3);
      }
      goto LABEL_27;
    }
    if ( a1 == 8193 )
    {
      if ( !v5 )
        return;
      if ( !v87 || !v89 )
        goto LABEL_26;
      RaUnitFillIrpData(&v87[-2].DpcListEntry, v89, v2, v3);
    }
    else
    {
      v42 = (unsigned int)(a1 - 8194);
      if ( a1 == 8194 )
      {
        if ( !v6 )
        {
          if ( StorEtwLoggingEnabled )
          {
            v76 = (PKDEFERRED_ROUTINE)v89;
            v77 = v87;
            if ( v89 )
            {
              v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v89 + 64) + 40LL) + 64LL);
              if ( (byte_140173441 & 1) != 0 )
              {
                LOBYTE(v42) = 1;
                StorEtwIOIrpRequestServiceTimeEventData(v89 - 120, v42, v87, v3);
              }
              if ( v78 && *(_DWORD *)(v78 + 1940) && (byte_140173443 & 2) != 0 )
              {
                LOBYTE(v42) = 1;
                StorEtwLogoIrpRequestServiceTimeEventData((char *)v76 - 120, v42, v77, v3);
              }
            }
          }
        }
        goto LABEL_26;
      }
      if ( a1 == 0x8000 )
      {
        if ( !v5 )
          return;
        RaProcessMFNDChildControllerEvent(v5, v87, v2, v3);
        goto LABEL_27;
      }
      if ( a1 != 32769 )
      {
        if ( a1 == 32770 )
        {
          if ( !v5 )
            return;
          RaProcessStorageEventNotification(v5, v87, v2, v3);
          goto LABEL_27;
        }
        goto LABEL_26;
      }
      if ( !v5 )
        return;
      if ( !v87
        || LOWORD(v87->TargetInfoAsUlong) != 1
        || *((_DWORD *)&v87->0 + 1) < 0x210u
        || HIDWORD(v87->DpcListEntry.Next) < 0x200 )
      {
LABEL_26:
        if ( !v5 )
          return;
        goto LABEL_27;
      }
      StorLogNVMeErrorRecoveryInfo(v5, &v87->ProcessorHistory, v2, v3);
    }
LABEL_27:
    if ( !DisableExtensionDriver )
    {
      if ( EnableExtensionCalls )
      {
        _InterlockedIncrement(&ExtRefCount);
        ((void (__fastcall *)(int *, _QWORD, __int64, PKDPC *))ExtNotificationPost)(
          &dword_1401721E8,
          (unsigned int)a1,
          v5,
          (PKDPC *)va);
        _InterlockedDecrement(&ExtRefCount);
      }
    }
    return;
  }
  if ( (_DWORD)a2 != 1094997074 )
    goto LABEL_16;
  va_copy(a2, va);
  v5 = (__int64)*v7;
  v8 = -1073741822;
  if ( !DisableExtensionDriver )
  {
    if ( EnableExtensionCalls )
    {
      _InterlockedIncrement(&ExtRefCount);
      v8 = ((__int64 (__fastcall *)(int *, _QWORD, __int64, PKDPC *))ExtNotificationReplace)(
             &dword_1401721E8,
             (unsigned int)a1,
             v5,
             (PKDPC *)va);
      _InterlockedDecrement(&ExtRefCount);
    }
    v3 = v86;
  }
  v82 = 0LL;
  if ( v8 == -1073741822 )
  {
    if ( !DisableExtensionDriver )
    {
      if ( EnableExtensionCalls )
      {
        _InterlockedIncrement(&ExtRefCount);
        ((void (__fastcall *)(int *, _QWORD, __int64, PKDPC *))ExtNotificationPre)(
          &dword_1401721E8,
          (unsigned int)a1,
          v5,
          (PKDPC *)va);
        _InterlockedDecrement(&ExtRefCount);
      }
      v3 = v86;
    }
    v82 = 0LL;
    goto LABEL_16;
  }
}
