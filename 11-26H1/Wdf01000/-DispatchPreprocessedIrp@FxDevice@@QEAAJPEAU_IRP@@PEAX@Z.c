/*
 * XREFs of ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x14004C9C8
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrp @ 0x14004C640 (imp_WdfDeviceWdmDispatchIrp.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x14004C7F0 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDevice::DispatchPreprocessedIrp(FxDevice *this, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _IO_STACK_LOCATION *v5; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 MinorFunction; // si
  _LIST_ENTRY *v9; // r12
  __int64 v10; // rax
  _LIST_ENTRY *v11; // r8
  unsigned int v12; // r10d
  unsigned int i; // edx
  _IO_STACK_LOCATION *v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // r14
  unsigned __int8 v17; // bp
  __int64 (__fastcall *v18)(unsigned __int64, _IRP *, _LIST_ENTRY *); // r9
  unsigned __int16 m_ObjectSize; // ax
  unsigned int v20; // eax
  unsigned int v21; // esi
  unsigned int MajorFunction; // ecx
  void *m_PkgWmi; // rcx
  unsigned int v25; // ecx
  NTSTATUS v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx

  --Irp->CurrentLocation;
  v5 = Irp->Tail.Overlay.CurrentStackLocation - 1;
  Irp->Tail.Overlay.CurrentStackLocation = v5;
  if ( v5->MajorFunction == 22 || v5->MajorFunction == 23 || v5->MajorFunction == 27 && v5->MinorFunction != 2 )
  {
    v26 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceObject.m_DeviceObject[1], Irp, a5, 1u, 0x20u);
    v21 = v26;
    if ( v26 < 0 )
    {
      Irp->IoStatus.Status = v26;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v21;
    }
  }
  while ( 1 )
  {
    do
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      if ( DispatchContext == &this->m_PreprocessInfoListHead )
      {
        MajorFunction = CurrentStackLocation->MajorFunction;
        if ( MajorFunction > 0xF )
        {
          v25 = MajorFunction - 16;
          if ( v25 )
          {
            v27 = v25 - 2;
            if ( v27 )
            {
              v28 = v27 - 4;
              if ( !v28 )
                goto LABEL_49;
              v29 = v28 - 1;
              if ( !v29 )
              {
                m_PkgWmi = this->m_PkgWmi;
                return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgWmi + 64LL))(m_PkgWmi, Irp);
              }
              if ( v29 == 4 )
              {
LABEL_49:
                m_PkgWmi = this->m_PkgPnp;
                if ( m_PkgWmi )
                  return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgWmi + 64LL))(m_PkgWmi, Irp);
              }
              goto LABEL_46;
            }
          }
        }
        else
        {
          if ( MajorFunction == 15 )
          {
LABEL_21:
            m_PkgWmi = this->m_PkgIo;
            return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgWmi + 64LL))(m_PkgWmi, Irp);
          }
          if ( CurrentStackLocation->MajorFunction )
          {
            v30 = MajorFunction - 2;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( !v31 )
                goto LABEL_21;
              v32 = v31 - 1;
              if ( !v32 || v32 == 10 )
                goto LABEL_21;
LABEL_46:
              m_PkgWmi = this->m_PkgDefault;
              return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgWmi + 64LL))(m_PkgWmi, Irp);
            }
          }
        }
        m_PkgWmi = this->m_PkgGeneral;
        return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgWmi + 64LL))(m_PkgWmi, Irp);
      }
      MinorFunction = CurrentStackLocation->MinorFunction;
      v9 = DispatchContext;
      v10 = CurrentStackLocation->MajorFunction;
      v11 = DispatchContext;
      DispatchContext = DispatchContext->Flink;
    }
    while ( !*((_QWORD *)&v9[1].Flink + 3 * v10) );
    v12 = *((_DWORD *)&v9[1].Blink + 6 * v10);
    if ( !v12 )
      break;
    for ( i = 0; i < v12; ++i )
    {
      if ( *(_BYTE *)(i + *((_QWORD *)&v11[2].Flink + 3 * v10)) == MinorFunction )
        goto LABEL_11;
    }
  }
LABEL_11:
  v14 = Irp->Tail.Overlay.CurrentStackLocation;
  v15 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  v16 = v14->MajorFunction;
  v17 = v14->MinorFunction;
  v18 = (__int64 (__fastcall *)(unsigned __int64, _IRP *, _LIST_ENTRY *))*((_QWORD *)&v9[1].Flink + 3 * v16);
  m_ObjectSize = this->m_ObjectSize;
  if ( LOBYTE(v11[43].Flink) )
  {
    if ( !m_ObjectSize )
      v15 = 0LL;
    v20 = v18(v15, Irp, DispatchContext);
  }
  else
  {
    if ( !m_ObjectSize )
      v15 = 0LL;
    v20 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *))v18)(v15, Irp);
  }
  v21 = v20;
  if ( (_DWORD)v16 == 22 || (_DWORD)v16 == 23 || (_DWORD)v16 == 27 && v17 != 2 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
  return v21;
}
