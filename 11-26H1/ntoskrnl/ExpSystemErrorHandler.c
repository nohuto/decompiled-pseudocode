/*
 * XREFs of ExpSystemErrorHandler @ 0x1405376F0
 * Callers:
 *     ExpRaiseHardError @ 0x140B3635C (ExpRaiseHardError.c)
 * Callees:
 *     RtlCaptureContext @ 0x140536E40 (RtlCaptureContext.c)
 *     KiSaveProcessorControlState @ 0x14072BDE0 (KiSaveProcessorControlState.c)
 *     ExpSystemErrorHandler2 @ 0x140C056F0 (ExpSystemErrorHandler2.c)
 */

__int64 __fastcall ExpSystemErrorHandler(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  __int64 CurrentIrql; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _CONTEXT *Context; // r10
  __int64 v10[2]; // [rsp+28h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v10[0] = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  _InterlockedExchange64(v10, CurrentIrql);
  RtlCaptureContext(KeGetCurrentPrcb()->Context);
  KiSaveProcessorControlState(&KeGetCurrentPrcb()->ProcessorState);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->ProcessorState.SpecialRegisters.Cr8 = v10[0];
  Context = CurrentPrcb->Context;
  Context->Rcx = a1;
  *(_QWORD *)&Context->EFlags = v10[1];
  Context->Rsp = (unsigned __int64)&retaddr;
  Context->Rip = (unsigned __int64)ExpSystemErrorHandler;
  __writecr8(v10[0]);
  return ExpSystemErrorHandler2(a1, a5);
}
