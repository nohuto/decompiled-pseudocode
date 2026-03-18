/*
 * XREFs of DpiDispatchCreate @ 0x14039D3D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDispatchCreate(__int64 a1, IRP *a2)
{
  char v2; // r14
  __int64 v5; // rbp
  NTSTATUS v6; // ebx
  __int64 (__fastcall *v7)(__int64, IRP *); // rax

  v2 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventEnterDpiDispatchCreate);
  v5 = *(_QWORD *)(a1 + 64);
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), 0LL, File, 1u, 0x20u);
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2372;
  }
  else
  {
    v7 = *(__int64 (__fastcall **)(__int64, IRP *))(v5 + 104);
    v2 = 1;
    if ( v7 )
    {
      v6 = v7(a1, a2);
      goto LABEL_13;
    }
    if ( (a2->RequestorMode || (a2->Tail.Overlay.CurrentStackLocation->Flags & 1) != 0) && !*(_BYTE *)(v5 + 58) )
      v6 = -1073741790;
  }
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
LABEL_13:
  if ( v6 < 0 && v2 == 1 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), 0LL, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventExitDpiDispatchCreate);
  return (unsigned int)v6;
}
