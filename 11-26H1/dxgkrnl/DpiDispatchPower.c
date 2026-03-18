/*
 * XREFs of DpiDispatchPower @ 0x1403B8B20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     LoadEtwStackLocation @ 0x1400469DC (LoadEtwStackLocation.c)
 *     McTemplateK0phbr1q_EtwWriteTransfer @ 0x140046B90 (McTemplateK0phbr1q_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDispatchPower(__int64 a1, IRP *a2)
{
  char v2; // r14
  _BYTE *EtwStackLocation; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbp
  NTSTATUS v9; // edi
  __int64 (__fastcall *v10)(__int64, IRP *); // rax
  NTSTATUS v11; // eax
  _BYTE v13[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v14; // [rsp+90h] [rbp-88h]
  __int128 v15; // [rsp+A0h] [rbp-78h]
  __int128 v16; // [rsp+B0h] [rbp-68h]
  __int128 v17; // [rsp+C0h] [rbp-58h]
  __int64 v18; // [rsp+D0h] [rbp-48h]

  v2 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation(v13, (__int64)a2);
    v14 = *(_OWORD *)EtwStackLocation;
    v15 = *((_OWORD *)EtwStackLocation + 1);
    v16 = *((_OWORD *)EtwStackLocation + 2);
    v17 = *((_OWORD *)EtwStackLocation + 3);
    v18 = *((_QWORD *)EtwStackLocation + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0phbr1q_EtwWriteTransfer(v6, &EventEnterDpiDispatchPower, v7, a1);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, File, 1u, 0x20u);
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2974;
    goto LABEL_14;
  }
  v10 = *(__int64 (__fastcall **)(__int64, IRP *))(v8 + 136);
  v2 = 1;
  if ( !v10 )
  {
    v9 = 0;
    if ( *(_QWORD *)(v8 + 160) )
    {
      PoStartNextPowerIrp(a2);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v11 = PoCallDriver(*(PDEVICE_OBJECT *)(v8 + 160), a2);
      goto LABEL_7;
    }
LABEL_14:
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = v9;
    IofCompleteRequest(a2, 0);
    if ( v2 != 1 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v11 = v10(a1, a2);
LABEL_7:
  v9 = v11;
LABEL_8:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, 0x20u);
LABEL_9:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventExitDpiDispatchPower);
  return (unsigned int)v9;
}
