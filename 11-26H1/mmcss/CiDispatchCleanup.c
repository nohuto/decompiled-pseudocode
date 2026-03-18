/*
 * XREFs of CiDispatchCleanup @ 0x14000F740
 * Callers:
 *     <none>
 * Callees:
 *     CiThreadCleanup @ 0x14000EEF0 (CiThreadCleanup.c)
 */

__int64 __fastcall CiDispatchCleanup(__int64 a1, IRP *a2)
{
  __int64 FsContext; // rax

  FsContext = (__int64)a2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext;
  if ( FsContext )
  {
    if ( *(_DWORD *)FsContext )
    {
      if ( *(_DWORD *)FsContext != 1 )
        *(_QWORD *)(FsContext + 8) = 0LL;
    }
    else
    {
      CiThreadCleanup(FsContext);
    }
  }
  a2->IoStatus.Status = 0;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
