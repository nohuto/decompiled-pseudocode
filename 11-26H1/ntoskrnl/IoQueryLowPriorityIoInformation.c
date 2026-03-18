/*
 * XREFs of IoQueryLowPriorityIoInformation @ 0x140B3D4BC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 */

__int64 __fastcall IoQueryLowPriorityIoInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4, char a5)
{
  unsigned int v6; // ebx
  _DWORD Src[7]; // [rsp+28h] [rbp-40h] BYREF
  void *FirstArgument; // [rsp+44h] [rbp-24h]
  int TrapFrame; // [rsp+4Ch] [rbp-1Ch]

  v6 = 0;
  *a4 = 0;
  if ( a3 >= 0x28 )
  {
    Src[0] = IoLowPriorityReadOperationCount;
    Src[1] = IoLowPriorityWriteOperationCount;
    Src[2] = IoKernelIssuedIoBoostedCount;
    Src[3] = IopSessionNotificationLock.InitialStack;
    Src[4] = HIDWORD(IopSessionNotificationLock.QuantumTarget);
    Src[5] = IopSessionNotificationLock.StackLimit;
    Src[6] = HIDWORD(IopSessionNotificationLock.InitialStack);
    FirstArgument = IopSessionNotificationLock.FirstArgument;
    TrapFrame = (int)IopSessionNotificationLock.TrapFrame;
    if ( a5 )
      RtlCopyToUser(a2, Src, 0x28uLL);
    else
      RtlCopyVolatileMemory(a2, Src, 0x28uLL);
  }
  else
  {
    v6 = -1073741789;
  }
  *a4 = 40;
  return v6;
}
