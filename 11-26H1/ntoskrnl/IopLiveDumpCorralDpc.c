/*
 * XREFs of IopLiveDumpCorralDpc @ 0x1405D14F0
 * Callers:
 *     <none>
 * Callees:
 *     IopLiveDumpProcessCorralStateChange @ 0x1404A0758 (IopLiveDumpProcessCorralStateChange.c)
 *     RtlCaptureContext @ 0x140536E40 (RtlCaptureContext.c)
 *     KiSaveProcessorControlState @ 0x14072BDE0 (KiSaveProcessorControlState.c)
 */

char __fastcall IopLiveDumpCorralDpc(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _CONTEXT *Context; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char result; // al
  unsigned int Number; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+24h] [rbp-14h]

  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0LL;
  Context = CurrentPrcb->Context;
  Number = CurrentPrcb->Number;
  RtlCaptureContext(Context);
  KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
  do
    result = IopLiveDumpProcessCorralStateChange(a2, (__int64)&Number, v5, v6);
  while ( (_DWORD)v9 != -1 );
  return result;
}
