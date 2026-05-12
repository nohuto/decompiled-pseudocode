/*
 * XREFs of StorChildAdapterPdoPnpIrp @ 0x14012EFE0
 * Callers:
 *     RaDriverPnpIrp @ 0x140035490 (RaDriverPnpIrp.c)
 * Callees:
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddp_EtwWriteTransfer @ 0x14005D3D0 (McTemplateK0pddp_EtwWriteTransfer.c)
 *     StorChildAdapterPdoAcquireRemoveLock @ 0x14012EFB4 (StorChildAdapterPdoAcquireRemoveLock.c)
 *     StorChildAdapterPdoPnpQueryIdIrp @ 0x14012F1F8 (StorChildAdapterPdoPnpQueryIdIrp.c)
 *     StorChildAdapterPdoRemoveDevice @ 0x14012F524 (StorChildAdapterPdoRemoveDevice.c)
 *     StorChildAdapterPdoSurpriseRemoval @ 0x14012F604 (StorChildAdapterPdoSurpriseRemoval.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorChildAdapterPdoPnpIrp(ULONG_PTR BugCheckParameter2, PIRP Irp)
{
  char v4; // r14
  int v5; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int MinorFunction; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  unsigned int IdIrp; // eax
  __int64 v25; // [rsp+20h] [rbp-68h]
  GUID v26; // [rsp+40h] [rbp-48h] BYREF

  v26 = 0LL;
  v4 = 0;
  v5 = StorChildAdapterPdoAcquireRemoveLock(BugCheckParameter2);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v26);
    if ( MinorFunction > 0x16 || (v10 = 4718720, !_bittest(&v10, MinorFunction)) )
    {
      if ( (byte_140173442 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(v9, v8, &v26, Irp, MinorFunction, 0, *(_QWORD *)(BugCheckParameter2 + 8));
    }
  }
  if ( v5 >= 0 )
  {
    v4 = 1;
  }
  else if ( v5 != -1073741738 || MinorFunction != 2 && MinorFunction != 20 || *(_DWORD *)(BugCheckParameter2 + 60) != 5 )
  {
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = v5;
    IofCompleteRequest(Irp, 0);
    return (unsigned int)v5;
  }
  if ( MinorFunction > 7 )
  {
    v17 = MinorFunction - 8;
    if ( !v17 )
      goto LABEL_21;
    v18 = v17 - 1;
    if ( !v18 )
    {
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) &= 0xFFFFFFA7;
      goto LABEL_28;
    }
    v19 = v18 - 4;
    if ( !v19 )
      goto LABEL_21;
    v20 = v19 - 6;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( !v21 )
        goto LABEL_28;
      v22 = v21 - 2;
      if ( !v22 )
        goto LABEL_21;
      if ( v22 != 1 )
        goto LABEL_36;
      IdIrp = StorChildAdapterPdoSurpriseRemoval(BugCheckParameter2, Irp);
    }
    else
    {
      IdIrp = StorChildAdapterPdoPnpQueryIdIrp(BugCheckParameter2, Irp);
    }
    v16 = IdIrp;
LABEL_23:
    if ( v4 )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(BugCheckParameter2 + 64));
    return v16;
  }
  if ( MinorFunction == 7 )
  {
LABEL_21:
    v16 = -1073741637;
LABEL_22:
    Irp->IoStatus.Status = v16;
    IofCompleteRequest(Irp, 0);
    goto LABEL_23;
  }
  if ( !MinorFunction )
  {
    _InterlockedExchange((volatile __int32 *)(BugCheckParameter2 + 60), 1);
LABEL_28:
    v16 = 0;
    goto LABEL_22;
  }
  v12 = MinorFunction - 1;
  if ( !v12 )
    goto LABEL_21;
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_21;
    v15 = v14 - 1;
    if ( !v15 || v15 - 1 <= 1 )
      goto LABEL_21;
LABEL_36:
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(BugCheckParameter2 + 64));
    v4 = 0;
    if ( StorEtwLoggingEnabled && (byte_140173442 & 0x20) != 0 )
    {
      LODWORD(v25) = Irp->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v23, &EventPnpRequestComplete, &v26, Irp, v25);
    }
    goto LABEL_21;
  }
  return (unsigned int)StorChildAdapterPdoRemoveDevice(BugCheckParameter2, Irp);
}
