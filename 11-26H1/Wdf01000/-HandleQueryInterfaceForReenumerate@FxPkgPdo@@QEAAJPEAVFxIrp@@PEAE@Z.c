/*
 * XREFs of ?HandleQueryInterfaceForReenumerate@FxPkgPdo@@QEAAJPEAVFxIrp@@PEAE@Z @ 0x14007DBD0
 * Callers:
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x140041338 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPdo::HandleQueryInterfaceForReenumerate(
        FxPkgPdo *this,
        FxIrp *Irp,
        unsigned __int8 *CompleteRequest)
{
  _IRP *m_Irp; // rax
  unsigned int v4; // edx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _LARGE_INTEGER ByteOffset; // rax

  m_Irp = Irp->m_Irp;
  v4 = 0;
  *CompleteRequest = 1;
  if ( this->m_Static )
    return (unsigned int)m_Irp->IoStatus.Status;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.QueryInterface.Version == 1
    && CurrentStackLocation->Parameters.QueryInterface.Size >= 0x28u )
  {
    ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
    *(_QWORD *)(ByteOffset.QuadPart + 8) = this;
    *(_QWORD *)(ByteOffset.QuadPart + 16) = FxDeviceBase::AddChildList;
    *(_QWORD *)(ByteOffset.QuadPart + 24) = FxDeviceBase::AddChildList;
    *(_QWORD *)(ByteOffset.QuadPart + 32) = FxPkgPdo::_RemoveAndReenumerateSelf;
    *(_DWORD *)ByteOffset.QuadPart = 65576;
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v4;
}
