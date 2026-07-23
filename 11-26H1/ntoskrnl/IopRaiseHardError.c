/*
 * XREFs of IopRaiseHardError @ 0x140B08B60
 * Callers:
 *     IopApcHardError @ 0x140B08B20 (IopApcHardError.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     ExRaiseHardError @ 0x140B08E60 (ExRaiseHardError.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopRaiseHardError(PIRP Irp, __int64 a2, __int64 a3)
{
  char v6; // r15
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v8; // r14
  NTSTATUS v9; // esi
  _KPROCESS *Process; // rcx
  unsigned int Status; // r10d
  unsigned int v12; // r11d
  __int64 v13; // r8
  int v14; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v16; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-45h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-41h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-31h] BYREF
  struct _LIST_ENTRY *v20; // [rsp+50h] [rbp-29h]
  struct _LIST_ENTRY *Flink; // [rsp+58h] [rbp-21h]
  _OWORD v22[3]; // [rsp+60h] [rbp-19h] BYREF

  v16 = 0;
  v17 = 0;
  v6 = 0;
  memset(v22, 0, sizeof(v22));
  DestinationString = 0LL;
  ObQueryNameStringMode(a3, 0LL, 0, &v17, 0);
  Pool2 = ExAllocatePool2(0x100uLL);
  v8 = (struct _LIST_ENTRY *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
LABEL_36:
    Irp->IoStatus.Status = v9;
LABEL_17:
    Irp->IoStatus.Information = 0LL;
LABEL_18:
    IofCompleteRequest(Irp, 1);
    return;
  }
  v9 = ObQueryNameStringMode(a3, Pool2, v17, &v16, 0);
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    goto LABEL_36;
  }
  if ( a2 && (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    DestinationString.MaximumLength = 64;
    DestinationString.Buffer = (wchar_t *)(a2 + 32);
    DestinationString.Length = *(_WORD *)(a2 + 6);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  Process = Irp->Tail.Overlay.Thread->Process;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    KiStackAttachProcess(Process, 0, (__int64)v22);
    v6 = 1;
  }
  Status = Irp->IoStatus.Status;
  switch ( Status )
  {
    case 0xC0000012:
      goto LABEL_8;
    case 0xC0000014:
    case 0xC0000013:
      goto LABEL_20;
    case 0xC00000A2:
LABEL_8:
      v20 = v8;
      p_DestinationString = &DestinationString;
      v12 = 3;
      v13 = 3LL;
      Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      break;
    case 0xC00000A3:
    case 0xC00000B5:
LABEL_20:
      v12 = 2;
      p_DestinationString = (UNICODE_STRING *)v8;
      Flink = 0LL;
      v13 = 1LL;
      v20 = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      break;
    default:
      v12 = 0;
      v13 = 0LL;
      break;
  }
  if ( ExReadyForErrors )
  {
    v14 = ExRaiseHardError(Status, v12, v13, &p_DestinationString, 8, &v16);
  }
  else
  {
    v14 = -1073741823;
    v16 = 0;
  }
  if ( v6 )
    KiUnstackDetachProcess((__int64)v22, 0);
  ExFreePoolWithTag(v8, 0);
  if ( v14 < 0 || v16 != 9 )
  {
    if ( v16 == 3 )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      if ( CurrentStackLocation->MajorFunction == 13 && CurrentStackLocation->MinorFunction == 1 )
        Irp->IoStatus.Information = 1LL;
      else
        Irp->IoStatus.Status = -1073741248;
    }
    if ( (Irp->Flags & 0x40) == 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  guard_dispatch_icall_no_overrides((__int64)Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, (__int64)Irp);
}
