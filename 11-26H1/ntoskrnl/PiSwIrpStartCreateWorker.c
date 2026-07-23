/*
 * XREFs of PiSwIrpStartCreateWorker @ 0x140A8CB08
 * Callers:
 *     PiSwStartCreate @ 0x1407B375C (PiSwStartCreate.c)
 *     PiSwIrpStartCreate @ 0x140A8C99C (PiSwIrpStartCreate.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403C27C0 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     PsGetCurrentThreadProcessId @ 0x14044EE20 (PsGetCurrentThreadProcessId.c)
 *     RtlStringCbLengthW @ 0x140478794 (RtlStringCbLengthW.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140498338 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     IoInvalidateDeviceRelations @ 0x1404CC3D0 (IoInvalidateDeviceRelations.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405278A0 (McTemplateK0zz_EtwWriteTransfer.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     McTemplateK0zztt_EtwWriteTransfer @ 0x1405DEAEC (McTemplateK0zztt_EtwWriteTransfer.c)
 *     McTemplateK0zzzdzzq_EtwWriteTransfer @ 0x1405DEE08 (McTemplateK0zzzdzzq_EtwWriteTransfer.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1407B3648 (PiSwQueuedCreateInfoCreate.c)
 *     PnpFreeDevPropertyArray @ 0x1409516F0 (PnpFreeDevPropertyArray.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwLock @ 0x1409AFD6C (PiSwLock.c)
 *     PiSwPropertySet @ 0x140A17FD4 (PiSwPropertySet.c)
 *     PiSwQueuedCreateInfoFree @ 0x140A8BFD0 (PiSwQueuedCreateInfoFree.c)
 *     PiSwIrpCleanup @ 0x140A8C048 (PiSwIrpCleanup.c)
 *     PiSwBusRelationRemove @ 0x140A8C348 (PiSwBusRelationRemove.c)
 *     PiSwFindPdoAssociation @ 0x140A8C4E8 (PiSwFindPdoAssociation.c)
 *     PiSwDeviceDereference @ 0x140A8C538 (PiSwDeviceDereference.c)
 *     PiSwPnPInfoFree @ 0x140A8C830 (PiSwPnPInfoFree.c)
 *     PiSwFreeInterfaceList @ 0x140A8C8D4 (PiSwFreeInterfaceList.c)
 *     PiSwDeviceCreate @ 0x140A8CFFC (PiSwDeviceCreate.c)
 *     PiSwValidateCreateData @ 0x140A8D068 (PiSwValidateCreateData.c)
 *     PiSwPnPInfoInit @ 0x140A8D384 (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x140A8D448 (PiSwInstanceInfoInit.c)
 *     PiSwBusRelationAdd @ 0x140A8D51C (PiSwBusRelationAdd.c)
 *     PnpCopyDevPropertyArray @ 0x140A8D6D0 (PnpCopyDevPropertyArray.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140B3E494 (PiSwDoesCreateChangesRequireReEnum.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpStartCreateWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  struct _DEVICE_OBJECT *v3; // r14
  struct _DEVICE_OBJECT *v4; // r12
  char v5; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  int Data; // ebx
  __int64 v11; // r8
  PVOID *inserted; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r8
  BOOLEAN v16; // bl
  void *v17; // r11
  const wchar_t **v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 Pool2; // rax
  PVOID v23; // r8
  NTSTATUS v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  _DWORD *v28; // rcx
  PVOID *v29; // rdx
  char *v30; // rcx
  struct _DEVICE_OBJECT *v31; // rax
  _QWORD *v32; // rbx
  void *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  PVOID v39; // rcx
  PVOID *v40; // rdx
  int v41; // r8d
  void *v42; // rcx
  int CurrentThreadProcessId; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  char *Buffer; // [rsp+50h] [rbp-30h] BYREF
  __int64 v47; // [rsp+58h] [rbp-28h] BYREF
  size_t pcbLength; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  BOOLEAN NewElement; // [rsp+C8h] [rbp+48h] BYREF
  int v51; // [rsp+D0h] [rbp+50h] BYREF
  PVOID P; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  Buffer = 0LL;
  P = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  NewElement = 0;
  v5 = 0;
  pcbLength = 0LL;
  DestinationString = 0LL;
  Data = PiSwValidateCreateData();
  if ( Data < 0 )
    goto LABEL_7;
  if ( (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zzzdzzq_EtwWriteTransfer(
      v9,
      v8,
      v11,
      *(const wchar_t **)a1,
      *(const wchar_t **)(a1 + 16),
      *(const wchar_t **)(a1 + 8),
      *(_DWORD *)(a1 + 64),
      *(const wchar_t **)(a1 + 72),
      *(const wchar_t **)(a1 + 80),
      *(_DWORD *)(a1 + 104));
  PiSwLock();
  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 184);
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL) )
    {
      Data = -1073741637;
      goto LABEL_6;
    }
  }
  Data = PiSwDeviceCreate(&Buffer);
  if ( Data >= 0 )
  {
    Data = PiSwInstanceInfoInit(Buffer + 8, a1);
    if ( Data >= 0 )
    {
      inserted = (PVOID *)RtlInsertElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer, 8u, &NewElement);
      v16 = NewElement;
      LOBYTE(v17) = 0;
      if ( !inserted )
        goto LABEL_61;
      v18 = (const wchar_t **)*inserted;
      P = *inserted;
      if ( (byte_140EF412C & 0x40) != 0 )
      {
        McTemplateK0zzd_EtwWriteTransfer(
          (__int64)v18,
          (__int64)KMPnPEvt_SwDevice_InstanceTable_Add,
          v15,
          v18[1],
          v18[2],
          NewElement == 0);
        v18 = (const wchar_t **)P;
      }
      if ( v16 )
      {
        Buffer = 0LL;
        _InterlockedIncrement((volatile signed __int32 *)v18);
        v19 = PiSwPnPInfoInit((char *)P + 24, a1);
        LOBYTE(v17) = 0;
        Data = v19;
        if ( v19 < 0 )
          goto LABEL_62;
        *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
        if ( !*(_QWORD *)(a1 + 96) )
          goto LABEL_35;
        Pool2 = ExAllocatePool2(0x100uLL);
        LOBYTE(v17) = 0;
        *((_QWORD *)P + 19) = Pool2;
        v14 = (_QWORD *)*((_QWORD *)P + 19);
        if ( v14 )
        {
          memmove(v14, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
LABEL_35:
          v20 = PnpCopyDevPropertyArray(
                  *(_DWORD *)(a1 + 104),
                  *(_QWORD *)(a1 + 112),
                  v15,
                  (int)P + 176,
                  (__int64)P + 168);
          LOBYTE(v17) = 0;
          Data = v20;
          if ( v20 < 0 )
            goto LABEL_62;
          v21 = PiSwBusRelationAdd(*(_QWORD *)(a1 + 8));
          LOBYTE(v17) = 0;
          Data = v21;
          if ( v21 < 0 )
            goto LABEL_62;
          *((_DWORD *)P + 41) = PsGetCurrentThreadProcessId();
LABEL_38:
          v3 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)P + 14), 0x746C6644u);
LABEL_39:
          v5 = 1;
LABEL_40:
          v17 = 0LL;
          goto LABEL_41;
        }
LABEL_61:
        Data = -1073741670;
        goto LABEL_62;
      }
      _InterlockedIncrement((volatile signed __int32 *)v18);
      v23 = P;
      if ( (*((_DWORD *)P + 1) & 1) != 0 )
      {
        Data = -1073741771;
        goto LABEL_6;
      }
      if ( (byte_140EF412C & 0x40) != 0 )
      {
        McTemplateK0zztt_EtwWriteTransfer(
          (*((_DWORD *)P + 1) >> 1) & 1,
          (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_EnumerationStatus,
          (__int64)P,
          *((const wchar_t **)P + 1),
          *((const wchar_t **)P + 2),
          (*((_DWORD *)P + 1) & 2) != 0,
          *((_QWORD *)P + 15) != 0LL);
        v23 = P;
      }
      if ( (*((_DWORD *)v23 + 1) & 2) == 0 )
      {
        v25 = *((_QWORD *)v23 + 15);
        if ( v25 )
        {
          v26 = *(unsigned int *)(*(_QWORD *)(v25 + 64) + 8LL);
          if ( (v26 & 2) == 0 )
          {
            if ( !(unsigned __int8)PiSwDoesCreateChangesRequireReEnum(v23, a1) )
            {
              v51 = 0;
              v47 = 0LL;
              if ( (byte_140EF412C & 0x40) != 0 )
                McTemplateK0zz_EtwWriteTransfer(
                  v26,
                  (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_PropertyUpdate,
                  v27,
                  *((const wchar_t **)P + 1),
                  *((const wchar_t **)P + 2));
              Data = PnpCopyDevPropertyArray(
                       *(_DWORD *)(a1 + 104),
                       *(_QWORD *)(a1 + 112),
                       v27,
                       (unsigned int)&v51,
                       (__int64)&v47);
              if ( Data < 0 )
                goto LABEL_6;
              v28 = P;
              v29 = (PVOID *)*((_QWORD *)P + 21);
              if ( v29 )
              {
                PnpFreeDevPropertyArray(*((_DWORD *)P + 44), v29, 0x57706E50u);
                v28 = P;
              }
              v28[44] = v51;
              v14 = P;
              *((_QWORD *)P + 21) = v47;
              goto LABEL_40;
            }
            v23 = P;
          }
          if ( (byte_140EF412C & 0x40) != 0 )
          {
            McTemplateK0zz_EtwWriteTransfer(
              v26,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_QueueCreate,
              (__int64)v23,
              *((const wchar_t **)v23 + 1),
              *((const wchar_t **)v23 + 2));
            v23 = P;
          }
          v30 = (char *)*((_QWORD *)v23 + 11);
          if ( v30 )
          {
            PiSwQueuedCreateInfoFree(v30);
            *((_QWORD *)P + 11) = 0LL;
            v23 = P;
          }
          Data = PiSwQueuedCreateInfoCreate((PVOID *)v23 + 11, a1);
          if ( Data < 0 )
            goto LABEL_6;
          *((_DWORD *)P + 1) |= 2u;
          goto LABEL_38;
        }
      }
      v31 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)v23 + 14), 0x746C6644u);
      v32 = P;
      v3 = v31;
      if ( v31 && PiSwFindPdoAssociation((__int64)P, (__int64)v31, 1) )
      {
        ObfDereferenceObject(v33);
        v3 = 0LL;
        if ( (byte_140EF412C & 0x40) != 0 )
          McTemplateK0zz_EtwWriteTransfer(
            v34,
            (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_QueueCreate,
            v35,
            *((const wchar_t **)P + 1),
            *((const wchar_t **)P + 2));
        v36 = PiSwQueuedCreateInfoCreate((PVOID *)P + 11, a1);
        v17 = 0LL;
        Data = v36;
        if ( v36 < 0 )
          goto LABEL_6;
        v5 = 1;
LABEL_41:
        if ( !a2 )
          goto LABEL_45;
        if ( v5 )
        {
          _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)PiSwIrpCancelStartCreate);
          if ( !*(_BYTE *)(a2 + 68) )
          {
            *((_QWORD *)P + 18) = a2;
            *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
            goto LABEL_45;
          }
          Data = -1073741536;
        }
        else
        {
          v24 = RtlStringCbCopyW(
                  *(NTSTRSAFE_PWSTR *)(a2 + 24),
                  *(unsigned int *)(v2 + 8),
                  *((NTSTRSAFE_PCWSTR *)P + 10));
          LOBYTE(v17) = 0;
          Data = v24;
          if ( v24 >= 0 )
          {
            Data = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(a2 + 24), *(unsigned int *)(v2 + 8), &pcbLength);
            if ( Data >= 0 )
            {
LABEL_45:
              *((_DWORD *)P + 1) |= 1u;
              if ( a2 )
              {
                v14 = *(_QWORD **)(v2 + 48);
                v14[4] = P;
                P = v17;
              }
              if ( v3 )
              {
                IoInvalidateDeviceRelations(v3, SingleBusRelations);
                LOBYTE(v17) = 0;
              }
              if ( v4 )
              {
                IoInvalidateDeviceRelations(v4, SingleBusRelations);
                LOBYTE(v17) = 0;
              }
              if ( Data >= 0 )
                goto LABEL_6;
            }
          }
        }
LABEL_62:
        if ( NewElement != (_BYTE)v17 )
        {
          if ( (byte_140EF412C & 0x40) != 0 )
            McTemplateK0zz_EtwWriteTransfer(
              (__int64)v14,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InstanceTable_Remove,
              v15,
              *((const wchar_t **)P + 1),
              *((const wchar_t **)P + 2));
          RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &P);
          PiSwDeviceDereference(P);
          if ( *((_QWORD *)P + 14) )
            PiSwBusRelationRemove((const wchar_t **)P, v44, v45);
        }
        goto LABEL_6;
      }
      if ( wcsicmp(*(const wchar_t **)(v32[14] + 8LL), *(const wchar_t **)(a1 + 8)) )
      {
        RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
        v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
      }
      *((_DWORD *)P + 1) &= ~4u;
      PiSwBusRelationRemove((const wchar_t **)P, v37, v38);
      PiSwPnPInfoFree((__int64)P + 24);
      v39 = P;
      if ( *((_QWORD *)P + 19) )
      {
        ExFreePoolWithTag(*((PVOID *)P + 19), 0x57706E50u);
        *((_QWORD *)P + 19) = 0LL;
        *((_DWORD *)P + 40) = 0;
        v39 = P;
      }
      v40 = (PVOID *)*((_QWORD *)v39 + 21);
      if ( v40 )
      {
        PnpFreeDevPropertyArray(*((_DWORD *)v39 + 44), v40, 0x57706E50u);
        *((_DWORD *)P + 44) = 0;
        *((_QWORD *)P + 21) = 0LL;
        v39 = P;
      }
      PiSwFreeInterfaceList((_QWORD **)v39 + 23);
      Data = PiSwPnPInfoInit((char *)P + 24, a1);
      if ( Data < 0 )
        goto LABEL_6;
      *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
      if ( *(_QWORD *)(a1 + 96) )
      {
        *((_QWORD *)P + 19) = ExAllocatePool2(0x100uLL);
        v42 = (void *)*((_QWORD *)P + 19);
        if ( !v42 )
        {
          Data = -1073741670;
          goto LABEL_6;
        }
        memmove(v42, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
      }
      Data = PnpCopyDevPropertyArray(*(_DWORD *)(a1 + 104), *(_QWORD *)(a1 + 112), v41, (int)P + 176, (__int64)P + 168);
      if ( Data >= 0 )
      {
        Data = PiSwBusRelationAdd(*(_QWORD *)(a1 + 8));
        if ( Data >= 0 )
        {
          CurrentThreadProcessId = PsGetCurrentThreadProcessId();
          v14 = P;
          *((_DWORD *)P + 41) = CurrentThreadProcessId;
          *((_DWORD *)P + 1) &= ~2u;
          goto LABEL_39;
        }
      }
    }
  }
LABEL_6:
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( Data >= 0 && !v5 )
  {
    v11 = *(_QWORD *)(a1 + 112);
    if ( v11 )
    {
      Data = PiSwPropertySet(*(_QWORD *)(a2 + 24), 1u, v11, *(_DWORD *)(a1 + 104));
      if ( Data == -1073741772 )
        Data = 0;
    }
  }
LABEL_7:
  if ( a2 )
  {
    if ( Data < 0 )
    {
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    else
    {
      if ( v5 )
      {
        Data = 259;
        goto LABEL_9;
      }
      *(_QWORD *)(a2 + 56) = pcbLength + 2;
    }
    *(_DWORD *)(a2 + 48) = Data;
    IofCompleteRequest((PIRP)a2, 0);
  }
  else if ( Data >= 0 )
  {
    if ( (byte_140EF412C & 0x40) != 0 )
      McTemplateK0zztt_EtwWriteTransfer(
        v9,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_LifetimeChanged,
        v11,
        *((const wchar_t **)P + 1),
        *((const wchar_t **)P + 2),
        *((_DWORD *)P + 45),
        1);
    *((_DWORD *)P + 45) = 1;
    PiSwIrpCleanup((__int64)P, v8, v11);
  }
LABEL_9:
  if ( P )
    PiSwDeviceDereference(P);
  if ( Buffer )
    PiSwDeviceDereference(Buffer);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)Data;
}
