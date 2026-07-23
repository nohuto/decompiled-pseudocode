/*
 * XREFs of IopStartApcHardError @ 0x140A783F0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopStartApcHardError(PIRP *P)
{
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( (int)PsCreateSystemThreadEx(&Handle, 0LL, 0LL, 0LL, 0LL, IopApcHardError, P, 0LL, 0LL) < 0 )
  {
    IofCompleteRequest(P[4], 1);
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    ZwClose(Handle);
  }
}
