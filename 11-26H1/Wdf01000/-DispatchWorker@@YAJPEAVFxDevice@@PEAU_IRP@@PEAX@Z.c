/*
 * XREFs of ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x140050780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DispatchWorker(unsigned __int64 Device, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 MinorFunction; // bl
  _LIST_ENTRY *v7; // r15
  _LIST_ENTRY *v8; // rdi
  char *v9; // r11
  unsigned int v10; // r10d
  unsigned int i; // eax
  _IO_STACK_LOCATION *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int8 v15; // bp
  unsigned __int16 v16; // ax
  unsigned int v17; // edi
  int MajorFunction; // ecx
  void *v20; // rcx

  while ( 1 )
  {
    do
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      if ( DispatchContext == (_LIST_ENTRY *)(Device + 368) )
      {
        MajorFunction = CurrentStackLocation->MajorFunction;
        if ( MajorFunction == 15 )
        {
LABEL_16:
          v20 = *(void **)(Device + 640);
        }
        else
        {
          if ( MajorFunction == 16 )
            return (*(__int64 (__fastcall **)(_QWORD, _IRP *))(**(_QWORD **)(Device + 656) + 64LL))(
                     *(_QWORD *)(Device + 656),
                     Irp);
          switch ( CurrentStackLocation->MajorFunction )
          {
            case 0u:
            case 2u:
            case 0x12u:
              return (*(__int64 (__fastcall **)(_QWORD, _IRP *))(**(_QWORD **)(Device + 656) + 64LL))(
                       *(_QWORD *)(Device + 656),
                       Irp);
            case 3u:
            case 4u:
            case 0xEu:
              goto LABEL_16;
            case 0x16u:
            case 0x1Bu:
              v20 = *(void **)(Device + 648);
              if ( v20 )
                return (*(__int64 (__fastcall **)(void *, _IRP *))(*(_QWORD *)v20 + 64LL))(v20, Irp);
              goto LABEL_22;
            case 0x17u:
              return (*(__int64 (__fastcall **)(_QWORD, _IRP *))(**(_QWORD **)(Device + 664) + 64LL))(
                       *(_QWORD *)(Device + 664),
                       Irp);
            default:
LABEL_22:
              v20 = *(void **)(Device + 672);
              break;
          }
        }
        return (*(__int64 (__fastcall **)(void *, _IRP *))(*(_QWORD *)v20 + 64LL))(v20, Irp);
      }
      MinorFunction = CurrentStackLocation->MinorFunction;
      v7 = DispatchContext;
      v8 = DispatchContext;
      DispatchContext = DispatchContext->Flink;
      v9 = (char *)v7 + 24 * CurrentStackLocation->MajorFunction;
    }
    while ( !*((_QWORD *)v9 + 2) );
    v10 = *((_DWORD *)v9 + 6);
    if ( !v10 )
      break;
    for ( i = 0; i < v10; ++i )
    {
      if ( *(_BYTE *)(i + *((_QWORD *)v9 + 4)) == MinorFunction )
        goto LABEL_8;
    }
  }
LABEL_8:
  v12 = Irp->Tail.Overlay.CurrentStackLocation;
  v13 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
  v14 = v12->MajorFunction;
  v15 = v12->MinorFunction;
  v16 = *(_WORD *)(Device + 10);
  if ( LOBYTE(v8[43].Flink) )
  {
    if ( !v16 )
      v13 = 0LL;
  }
  else if ( !v16 )
  {
    v13 = 0LL;
  }
  v17 = (*((__int64 (__fastcall **)(unsigned __int64, _IRP *, _LIST_ENTRY *))&v7[1].Flink + 3 * v14))(
          v13,
          Irp,
          DispatchContext);
  if ( (_DWORD)v14 == 22 || (_DWORD)v14 == 23 || (_DWORD)v14 == 27 && v15 != 2 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(Device + 144) + 336LL), Irp, 0x20u);
  return v17;
}
