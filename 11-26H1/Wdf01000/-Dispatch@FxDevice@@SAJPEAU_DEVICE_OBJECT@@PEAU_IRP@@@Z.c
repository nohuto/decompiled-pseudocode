/*
 * XREFs of ?Dispatch@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140051E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDevice::Dispatch(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  __int64 v3; // rbx
  _QWORD *v4; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 MinorFunction; // bp
  _QWORD *v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // r9
  unsigned int v10; // r11d
  unsigned int i; // edx
  _IO_STACK_LOCATION *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // r14
  unsigned __int8 v15; // bp
  __int16 v16; // ax
  unsigned int v17; // esi
  unsigned int MajorFunction; // ecx
  __int64 v20; // rcx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx

  v3 = *((_QWORD *)DeviceObject->DeviceExtension - 6);
  v4 = *(_QWORD **)(v3 + 368);
  while ( 1 )
  {
    do
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      if ( v4 == (_QWORD *)(v3 + 368) )
      {
        MajorFunction = CurrentStackLocation->MajorFunction;
        if ( MajorFunction > 0xF )
        {
          v21 = MajorFunction - 16;
          if ( v21 )
          {
            v22 = v21 - 2;
            if ( v22 )
            {
              v23 = v22 - 4;
              if ( !v23 )
                goto LABEL_43;
              v24 = v23 - 1;
              if ( !v24 )
              {
                v20 = *(_QWORD *)(v3 + 664);
                return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v20 + 64LL))(v20, Irp);
              }
              if ( v24 == 4 )
              {
LABEL_43:
                v20 = *(_QWORD *)(v3 + 648);
                if ( v20 )
                  return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v20 + 64LL))(v20, Irp);
              }
              goto LABEL_40;
            }
          }
        }
        else
        {
          if ( MajorFunction == 15 )
          {
LABEL_18:
            v20 = *(_QWORD *)(v3 + 640);
            return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v20 + 64LL))(v20, Irp);
          }
          if ( CurrentStackLocation->MajorFunction )
          {
            v25 = MajorFunction - 2;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( !v26 )
                goto LABEL_18;
              v27 = v26 - 1;
              if ( !v27 || v27 == 10 )
                goto LABEL_18;
LABEL_40:
              v20 = *(_QWORD *)(v3 + 672);
              return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v20 + 64LL))(v20, Irp);
            }
          }
        }
        v20 = *(_QWORD *)(v3 + 656);
        return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v20 + 64LL))(v20, Irp);
      }
      MinorFunction = CurrentStackLocation->MinorFunction;
      v7 = v4;
      v8 = CurrentStackLocation->MajorFunction;
      v9 = v4;
      v4 = (_QWORD *)*v4;
    }
    while ( !v7[3 * v8 + 2] );
    v10 = v7[3 * v8 + 3];
    if ( !v10 )
      break;
    for ( i = 0; i < v10; ++i )
    {
      if ( *(_BYTE *)(i + v9[3 * v8 + 4]) == MinorFunction )
        goto LABEL_9;
    }
  }
LABEL_9:
  v12 = Irp->Tail.Overlay.CurrentStackLocation;
  v13 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
  v14 = v12->MajorFunction;
  v15 = v12->MinorFunction;
  v16 = *(_WORD *)(v3 + 10);
  if ( *((_BYTE *)v9 + 688) )
  {
    if ( !v16 )
      v13 = 0LL;
  }
  else if ( !v16 )
  {
    v13 = 0LL;
  }
  v17 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *))v7[3 * v14 + 2])(v13, Irp, v4);
  if ( (_DWORD)v14 == 22 || (_DWORD)v14 == 23 || (_DWORD)v14 == 27 && v15 != 2 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(v3 + 144) + 336LL), Irp, 0x20u);
  return v17;
}
