/*
 * XREFs of LpcSendWaitReceivePort @ 0x140ACD730
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x140ACD5FC (DbgkpSendApiMessageLpc.c)
 *     ExpRaiseHardError @ 0x140B3635C (ExpRaiseHardError.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
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
