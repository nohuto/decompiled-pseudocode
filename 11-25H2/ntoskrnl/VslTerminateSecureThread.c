/*
 * XREFs of VslTerminateSecureThread @ 0x140704558
 * Callers:
 *     KeUnsecureThread @ 0x1405B3DC0 (KeUnsecureThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslTerminateSecureThread(int a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  __int64 result; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+30h] [rbp-78h]

  memset_0(v7, 0, 0x68uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = VslpEnterIumSecureMode(2u, 0xAu, a1, (__int64)v7);
  KeLeaveCriticalRegion();
  result = v5;
  *a2 = v8;
  return result;
}
