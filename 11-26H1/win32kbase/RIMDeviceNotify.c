/*
 * XREFs of RIMDeviceNotify @ 0x140190060
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___ @ 0x14020B1D4 (W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436___.c)
 */

__int64 __fastcall RIMDeviceNotify(PVOID NotificationStructure, _QWORD *Context)
{
  unsigned int *v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = NotificationStructure;
  v2 = (unsigned int *)Context[40];
  v4[1] = Context;
  return W32AttachToSessionAndExecute__lambda_d5a4a1cec4c6c6aaf1690ff01b233436_(*v2, v4);
}
