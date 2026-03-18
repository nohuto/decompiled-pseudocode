/*
 * XREFs of RIMDeviceClassNotify @ 0x14016C2C0
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d___ @ 0x14020B10C (W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d___.c)
 */

__int64 __fastcall RIMDeviceClassNotify(PVOID NotificationStructure, unsigned int **Context)
{
  unsigned int *v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = NotificationStructure;
  v2 = *Context;
  v4[1] = Context;
  return W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d_(*v2, v4);
}
