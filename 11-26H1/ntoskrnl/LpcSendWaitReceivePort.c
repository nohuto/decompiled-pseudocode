/*
 * XREFs of LpcSendWaitReceivePort @ 0x140ACB4F0
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x1409552D4 (DbgkpSendApiMessageLpc.c)
 *     ExpRaiseHardError @ 0x140B33F0C (ExpRaiseHardError.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     AlpcpProcessSynchronousRequest @ 0x1408F7730 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcSendWaitReceivePort(void *a1, int a2, ULONG_PTR a3, char *a4, __int64 *a5, _QWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpProcessSynchronousRequest(a1, a2 | 2u, a3, 0LL, a4, a5, 0LL, a6, 0);
  if ( v7 == -1073740029 )
  {
    v7 = -1073741769;
  }
  else if ( v7 == -1073740031 )
  {
    v7 = -1073741229;
  }
  KeLeaveCriticalRegion();
  return v7;
}
