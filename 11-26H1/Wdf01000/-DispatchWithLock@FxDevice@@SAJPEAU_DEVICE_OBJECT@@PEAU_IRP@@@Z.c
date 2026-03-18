/*
 * XREFs of ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140050350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDevice::DispatchWithLock(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS v5; // esi
  _IO_STACK_LOCATION *v6; // rax
  NTSTATUS v7; // eax
  unsigned int v8; // ebp
  __int64 v9; // r14
  _QWORD *v10; // r8
  _IO_STACK_LOCATION *v11; // rax
  unsigned __int8 MinorFunction; // di
  _QWORD *v13; // r12
  _QWORD *v14; // r15
  _QWORD *v15; // r11
  unsigned int v16; // r10d
  unsigned int i; // eax
  _IO_STACK_LOCATION *v18; // rax
  unsigned __int64 v19; // rcx
  __int64 MajorFunction; // rsi
  unsigned __int8 v21; // bp
  __int16 v22; // ax
  unsigned int v23; // edi
  int v25; // ecx
  __int64 v26; // rcx
  _IO_STACK_LOCATION *v27; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 22 || CurrentStackLocation->MajorFunction == 23 )
    goto LABEL_30;
  if ( CurrentStackLocation->MajorFunction != 27 )
  {
    if ( ((__int64)DeviceObject[1].CurrentIrp & 1) == 0 )
      goto LABEL_12;
    v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
    if ( v5 >= 0 )
    {
      v6 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v6[-1].MajorFunction = *(_OWORD *)&v6->MajorFunction;
      *(_OWORD *)&v6[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v6->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v6[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v6->Parameters.SetQuota + 6);
      v6[-1].FileObject = v6->FileObject;
      v6[-1].Control = 0;
      if ( IoSetCompletionRoutineEx(
             DeviceObject,
             Irp,
             FxDevice::_CompletionRoutineForRemlockMaintenance,
             DeviceObject,
             1u,
             1u,
             1u) < 0 )
      {
        v27 = Irp->Tail.Overlay.CurrentStackLocation;
        v27[-1].CompletionRoutine = FxDevice::_CompletionRoutineForRemlockMaintenance;
        v27[-1].Context = DeviceObject;
        v27[-1].Control = -32;
      }
      --Irp->CurrentLocation;
      --Irp->Tail.Overlay.CurrentStackLocation;
      goto LABEL_12;
    }
LABEL_31:
    Irp->IoStatus.Status = v5;
    IofCompleteRequest(Irp, 0);
    return (unsigned int)v5;
  }
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
LABEL_30:
    v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
    if ( v5 >= 0 )
      goto LABEL_12;
    goto LABEL_31;
  }
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
  v8 = v7;
  if ( v7 < 0 )
  {
    Irp->IoStatus.Status = v7;
    IofCompleteRequest(Irp, 0);
    return v8;
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, 0x20u);
LABEL_12:
  v9 = *((_QWORD *)DeviceObject->DeviceExtension - 6);
  v10 = *(_QWORD **)(v9 + 368);
  while ( 1 )
  {
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    if ( v10 == (_QWORD *)(v9 + 368) )
      break;
    MinorFunction = v11->MinorFunction;
    v13 = v10;
    v14 = v10;
    v10 = (_QWORD *)*v10;
    v15 = &v13[3 * v11->MajorFunction];
    if ( v15[2] )
    {
      v16 = *((_DWORD *)v15 + 6);
      if ( !v16 )
      {
LABEL_20:
        v18 = Irp->Tail.Overlay.CurrentStackLocation;
        v19 = v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
        MajorFunction = v18->MajorFunction;
        v21 = v18->MinorFunction;
        v22 = *(_WORD *)(v9 + 10);
        if ( *((_BYTE *)v14 + 688) )
        {
          if ( !v22 )
            v19 = 0LL;
        }
        else if ( !v22 )
        {
          v19 = 0LL;
        }
        v23 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *))v13[3 * MajorFunction + 2])(v19, Irp, v10);
        if ( (_DWORD)MajorFunction == 22 || (_DWORD)MajorFunction == 23 || (_DWORD)MajorFunction == 27 && v21 != 2 )
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(v9 + 144) + 336LL), Irp, 0x20u);
        return v23;
      }
      for ( i = 0; i < v16; ++i )
      {
        if ( *(_BYTE *)(i + v15[4]) == MinorFunction )
          goto LABEL_20;
      }
    }
  }
  v25 = v11->MajorFunction;
  if ( v25 == 15 )
  {
LABEL_28:
    v26 = *(_QWORD *)(v9 + 640);
  }
  else if ( v25 == 16 )
  {
LABEL_33:
    v26 = *(_QWORD *)(v9 + 656);
  }
  else
  {
    switch ( v11->MajorFunction )
    {
      case 0u:
      case 2u:
      case 0x12u:
        goto LABEL_33;
      case 3u:
      case 4u:
      case 0xEu:
        goto LABEL_28;
      case 0x16u:
      case 0x1Bu:
        v26 = *(_QWORD *)(v9 + 648);
        if ( !v26 )
          goto LABEL_36;
        return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v26 + 64LL))(v26, Irp);
      case 0x17u:
        v26 = *(_QWORD *)(v9 + 664);
        return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v26 + 64LL))(v26, Irp);
      default:
LABEL_36:
        v26 = *(_QWORD *)(v9 + 672);
        break;
    }
  }
  return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v26 + 64LL))(v26, Irp);
}
