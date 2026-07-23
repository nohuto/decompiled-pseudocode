/*
 * XREFs of IovCompleteRequest @ 0x140C4BB00
 * Callers:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 * Callees:
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x1403FB3E8 (IopPerfCompleteRequest.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     IovpCompleteRequest1 @ 0x140C4BD80 (IovpCompleteRequest1.c)
 *     IovpLogStackTrace @ 0x140C4BE04 (IovpLogStackTrace.c)
 */

void __fastcall IovCompleteRequest(IRP *BugCheckParameter3, unsigned __int8 a2)
{
  __int64 v4; // rdx
  ULONG_PTR CancelRoutine; // r8
  ULONG_PTR Status; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  char Control; // al
  __int64 v9; // [rsp+40h] [rbp-59h] BYREF
  __int128 v10; // [rsp+48h] [rbp-51h]
  __int64 v11; // [rsp+58h] [rbp-41h]
  void *v12; // [rsp+60h] [rbp-39h]
  _QWORD v13[3]; // [rsp+68h] [rbp-31h] BYREF
  PIO_COMPLETION_ROUTINE CompletionRoutine; // [rsp+80h] [rbp-19h]
  __int128 v15; // [rsp+88h] [rbp-11h]
  __int128 v16; // [rsp+98h] [rbp-1h]
  __int128 v17; // [rsp+A8h] [rbp+Fh]
  __int128 v18; // [rsp+B8h] [rbp+1Fh]
  PVOID Context; // [rsp+C8h] [rbp+2Fh]
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  memset_0(v13, 0, 0x68uLL);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  IovpLogStackTrace(BugCheckParameter3);
  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( BugCheckParameter3->CurrentLocation > (char)(BugCheckParameter3->StackCount + 1)
      || BugCheckParameter3->Type != 6 )
    {
      CarReportRuleViolationFromNt(68, (__int64)BugCheckParameter3, 0x310uLL, 0LL, 0LL, 4u, 0LL);
    }
    CancelRoutine = (ULONG_PTR)BugCheckParameter3->CancelRoutine;
    if ( CancelRoutine )
      CarReportRuleViolationFromNt(201, 7LL, CancelRoutine, (ULONG_PTR)BugCheckParameter3, 0LL, 4u, 0LL);
    Status = BugCheckParameter3->IoStatus.Status;
    if ( (_DWORD)Status == 259 || (_DWORD)Status == -1 )
      CarReportRuleViolationFromNt(201, 6LL, Status, (ULONG_PTR)BugCheckParameter3, 0LL, 4u, 0LL);
    if ( KeGetCurrentIrql() > 2u )
      CarReportRuleViolationFromNt(201, 14LL, KeGetCurrentIrql(), (ULONG_PTR)BugCheckParameter3, 0LL, 4u, 0LL);
  }
  LOBYTE(v4) = a2;
  v12 = retaddr;
  IovpCompleteRequest1(BugCheckParameter3, v4, &v9);
  if ( (!IovpDisabledWithoutReboot || v9) && BugCheckParameter3->CurrentLocation <= BugCheckParameter3->StackCount )
  {
    CurrentStackLocation = BugCheckParameter3->Tail.Overlay.CurrentStackLocation;
    v13[2] = &v9;
    v13[1] = CurrentStackLocation->Context;
    v13[0] = CurrentStackLocation;
    v15 = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    v16 = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    v17 = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota + 6);
    v18 = *(_OWORD *)&CurrentStackLocation->FileObject;
    Context = CurrentStackLocation->Context;
    Control = CurrentStackLocation->Control;
    if ( BugCheckParameter3->IoStatus.Status >= 0 )
    {
      if ( (Control & 0x40) != 0 )
        goto LABEL_24;
    }
    else if ( Control < 0 )
    {
      goto LABEL_24;
    }
    if ( !BugCheckParameter3->Cancel || (Control & 0x20) == 0 )
    {
      CompletionRoutine = 0LL;
      CurrentStackLocation->Control |= 0xE0u;
LABEL_20:
      CurrentStackLocation->CompletionRoutine = (PIO_COMPLETION_ROUTINE)IovpLocalCompletionRoutine;
      CurrentStackLocation->Context = v13;
      goto LABEL_13;
    }
LABEL_24:
    CompletionRoutine = CurrentStackLocation->CompletionRoutine;
    goto LABEL_20;
  }
LABEL_13:
  if ( (IopFunctionPointerMask & 2) != 0 )
    IopPerfCompleteRequest((__int64)BugCheckParameter3, a2);
  else
    IopfCompleteRequest(BugCheckParameter3, a2);
}
