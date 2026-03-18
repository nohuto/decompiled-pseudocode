/*
 * XREFs of IopStartApcHardError @ 0x140A03660
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x140A03170 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopStartApcHardError(PIRP *P)
{
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( (int)PsCreateSystemThreadEx((__int64)&Handle, 0, 0LL, 0LL, 0LL, (__int64)IopApcHardError, (__int64)P, 0LL, 0LL) < 0 )
  {
    IofCompleteRequest(P[4], 1);
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    ZwClose(Handle);
  }
}
