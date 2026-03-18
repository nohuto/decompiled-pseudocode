/*
 * XREFs of DpiDispatchPnp @ 0x1403C5890
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     LoadEtwStackLocation @ 0x1400469DC (LoadEtwStackLocation.c)
 *     McTemplateK0phbr1q_EtwWriteTransfer @ 0x140046B90 (McTemplateK0phbr1q_EtwWriteTransfer.c)
 *     DpiGdoDispatchGdiPnp @ 0x1400607D4 (DpiGdoDispatchGdiPnp.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDispatchPnp(__int64 a1, IRP *a2)
{
  bool v2; // r14
  _BYTE *EtwStackLocation; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  struct _IO_REMOVE_LOCK *v9; // r15
  int v10; // esi
  __int64 (__fastcall *v11)(__int64, IRP *); // rax
  UCHAR MinorFunction; // bl
  _BYTE v14[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v15; // [rsp+90h] [rbp-88h]
  __int128 v16; // [rsp+A0h] [rbp-78h]
  __int128 v17; // [rsp+B0h] [rbp-68h]
  __int128 v18; // [rsp+C0h] [rbp-58h]
  __int64 v19; // [rsp+D0h] [rbp-48h]

  v2 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation(v14, (__int64)a2);
    v15 = *(_OWORD *)EtwStackLocation;
    v16 = *((_OWORD *)EtwStackLocation + 1);
    v17 = *((_OWORD *)EtwStackLocation + 2);
    v18 = *((_OWORD *)EtwStackLocation + 3);
    v19 = *((_QWORD *)EtwStackLocation + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0phbr1q_EtwWriteTransfer(v6, &EventEnterDpiDispatchPnp, v7, a1);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = (struct _IO_REMOVE_LOCK *)(v8 + 64);
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, File, 1u, 0x20u);
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2822;
  }
  else
  {
    v11 = *(__int64 (__fastcall **)(__int64, IRP *))(v8 + 128);
    v2 = 1;
    if ( v11 )
    {
      MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
      v10 = v11(a1, a2);
      v2 = MinorFunction != 2;
      goto LABEL_7;
    }
    v10 = -1073741637;
    if ( *(_BYTE *)(v8 + 56) == 1 && *(_QWORD *)(v8 + 160) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v10 = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 160), a2);
      goto LABEL_8;
    }
    if ( *(_DWORD *)(v8 + 16) == 1953656900 && *(_DWORD *)(v8 + 20) == 6 )
      v10 = DpiGdoDispatchGdiPnp(a1, (__int64)a2);
  }
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
LABEL_7:
  if ( v2 )
LABEL_8:
    IoReleaseRemoveLockEx(v9, a2, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventExitDpiDispatchPnp);
  return (unsigned int)v10;
}
