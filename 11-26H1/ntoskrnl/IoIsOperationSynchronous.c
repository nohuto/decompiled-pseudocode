/*
 * XREFs of IoIsOperationSynchronous @ 0x1404722B0
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140AA46C0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsOperationSynchronous(PIRP Irp)
{
  ULONG v1; // eax

  v1 = Irp->Flags & 0x42;
  if ( (Irp->Flags & 4) == 0 && (Irp->Tail.Overlay.CurrentStackLocation->FileObject->Flags & 2) == 0 )
    return v1 == 66;
  else
    return v1 != 2;
}
