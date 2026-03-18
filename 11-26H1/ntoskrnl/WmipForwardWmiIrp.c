/*
 * XREFs of WmipForwardWmiIrp @ 0x140A0F03C
 * Callers:
 *     WmipSendWmiIrp @ 0x140A0E708 (WmipSendWmiIrp.c)
 *     WmipQuerySetExecuteSI @ 0x140A0E7F8 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x140A0EAFC (WmipQueryAllData.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140B0BA58 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipSetTraceNotify @ 0x140B49CFC (WmipSetTraceNotify.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x1403B7080 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByProviderId @ 0x1403DD004 (WmipFindRegEntryByProviderId.c)
 *     IoGetAttachedDeviceReference @ 0x1403EB070 (IoGetAttachedDeviceReference.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     WmipUpdateDeviceStackSize @ 0x140ACDA74 (WmipUpdateDeviceStackSize.c)
 *     WmipTranslatePDOInstanceNames @ 0x140AEDE5C (WmipTranslatePDOInstanceNames.c)
 */

__int64 __fastcall WmipForwardWmiIrp(
        PIRP Irp,
        unsigned __int8 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  __int64 RegEntryByProviderId; // rax
  __int64 v10; // rdi
  int v11; // eax
  struct _DEVICE_OBJECT *v12; // rsi
  unsigned int v13; // ebx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // r13
  char v18; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v20; // rax
  struct _IO_STACK_LOCATION *v21; // rax
  __int64 v22; // rdx
  NTSTATUS Status; // esi
  __int64 v24; // rcx
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF

  v6 = a2;
  memset(&Event, 0, sizeof(Event));
  RegEntryByProviderId = WmipFindRegEntryByProviderId(a3);
  v10 = RegEntryByProviderId;
  if ( RegEntryByProviderId )
  {
    v11 = *(_DWORD *)(RegEntryByProviderId + 48);
    if ( (v11 & 0x20000000) == 0 )
    {
      v12 = *(struct _DEVICE_OBJECT **)(v10 + 16);
      if ( (v11 & 0x10000000) != 0 )
      {
        v13 = guard_dispatch_icall_no_overrides(v6, a4);
        Irp->IoStatus.Information = 0LL;
        Irp->IoStatus.Status = v13;
        WmipUnreferenceRegEntry(v10);
        return v13;
      }
      else
      {
        if ( (_BYTE)v6 != 8 && (unsigned __int8)(v6 - 10) > 3u )
        {
          v15 = *(_QWORD *)(a6 + 24) - WmipDataProviderPnpidGuid;
          if ( !v15 )
            v15 = *(_QWORD *)(a6 + 32) - *((_QWORD *)&WmipDataProviderPnpidGuid + 1);
          if ( !v15 )
            goto LABEL_35;
          v16 = *(_QWORD *)(a6 + 24) - WmipDataProviderPnPIdInstanceNamesGuid;
          if ( !v16 )
            v16 = *(_QWORD *)(a6 + 32) - *((_QWORD *)&WmipDataProviderPnPIdInstanceNamesGuid + 1);
          if ( !v16 )
          {
LABEL_35:
            if ( *(_QWORD *)(v10 + 24) )
              v12 = *(struct _DEVICE_OBJECT **)&EtwpSecurityLock.ForegroundLossTime;
          }
        }
        AttachedDeviceReference = IoGetAttachedDeviceReference(v12);
        v18 = AttachedDeviceReference->StackSize + 1;
        if ( v18 <= *(char *)(*(_QWORD *)&EtwpSecurityLock.ForegroundLossTime + 76LL)
          || AttachedDeviceReference == *(PDEVICE_OBJECT *)&EtwpSecurityLock.ForegroundLossTime )
        {
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)CmpCompleteFlushAndPurgeIrp;
          CurrentStackLocation[-1].Context = &Event;
          CurrentStackLocation[-1].Control = -32;
          v20 = Irp->Tail.Overlay.CurrentStackLocation;
          v20[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)a6;
          v20[-1].MajorFunction = 23;
          v20[-1].MinorFunction = v6;
          v20[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v12;
          v20[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)a4;
          v20[-1].Parameters.Read.ByteOffset.LowPart = a5;
          v21 = Irp->Tail.Overlay.CurrentStackLocation;
          Irp->IoStatus.Status = -1073741637;
          v21->Control |= 1u;
          Status = IofCallDriver(AttachedDeviceReference, Irp);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = Irp->IoStatus.Status;
          }
          if ( Status == -1073741637 )
          {
            Status = -1073741163;
            Irp->IoStatus.Status = -1073741163;
          }
          if ( ((_BYTE)v6 == 8 || (_BYTE)v6 == 11) && Status >= 0 && Irp->IoStatus.Information > 0x18 )
          {
            LOBYTE(v22) = v6;
            WmipTranslatePDOInstanceNames(Irp, v22, a5, v10);
          }
          WmipUnreferenceRegEntry(v10);
        }
        else
        {
          WmipUnreferenceRegEntry(v10);
          LOBYTE(v24) = v18;
          WmipUpdateDeviceStackSize(v24);
          Status = -1073741160;
        }
        ObfDereferenceObject(AttachedDeviceReference);
        return (unsigned int)Status;
      }
    }
    WmipUnreferenceRegEntry(v10);
  }
  result = 3221226134LL;
  if ( (unsigned __int8)(v6 - 1) > 1u )
    return 3221225473LL;
  return result;
}
