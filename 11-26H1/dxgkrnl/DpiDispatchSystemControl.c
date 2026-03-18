/*
 * XREFs of DpiDispatchSystemControl @ 0x14023E760
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     LoadEtwStackLocation @ 0x1400469DC (LoadEtwStackLocation.c)
 *     McTemplateK0phbr1q_EtwWriteTransfer @ 0x140046B90 (McTemplateK0phbr1q_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDispatchSystemControl(__int64 a1, IRP *a2)
{
  __int64 v2; // rbp
  char v3; // r14
  _BYTE *EtwStackLocation; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  NTSTATUS v9; // ebx
  __int64 (__fastcall *v11)(__int64, IRP *); // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _BYTE v13[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v14; // [rsp+90h] [rbp-88h]
  __int128 v15; // [rsp+A0h] [rbp-78h]
  __int128 v16; // [rsp+B0h] [rbp-68h]
  __int128 v17; // [rsp+C0h] [rbp-58h]
  __int64 v18; // [rsp+D0h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation(v13, (__int64)a2);
    v14 = *(_OWORD *)EtwStackLocation;
    v15 = *((_OWORD *)EtwStackLocation + 1);
    v16 = *((_OWORD *)EtwStackLocation + 2);
    v17 = *((_OWORD *)EtwStackLocation + 3);
    v18 = *((_QWORD *)EtwStackLocation + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0phbr1q_EtwWriteTransfer(v7, &EventEnterDpiDispatchSystemControl, v8, a1);
  }
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), a2, File, 1u, 0x20u);
  if ( v9 >= 0 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, IRP *))(v2 + 144);
    v3 = 1;
    if ( v11 )
    {
      v9 = v11(a1, a2);
      if ( v9 != -1073741637 )
        goto LABEL_7;
    }
    v9 = -1073741637;
    if ( *(_BYTE *)(v2 + 56) == 1 )
    {
      if ( *(_QWORD *)(v2 + 160) )
      {
        CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
        if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
        {
          ++a2->CurrentLocation;
          a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
          v9 = IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
          goto LABEL_7;
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3100;
  }
  a2->IoStatus.Status = v9;
  IofCompleteRequest(a2, 0);
  if ( v3 == 1 )
LABEL_7:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), a2, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventExitDpiDispatchSystemControl);
  return (unsigned int)v9;
}
