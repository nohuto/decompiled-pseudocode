/*
 * XREFs of NtAcceptConnectPort @ 0x1408E6330
 * Callers:
 *     DifNtAcceptConnectPortWrapper @ 0x140668C20 (DifNtAcceptConnectPortWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     AlpcpAcceptConnectPort @ 0x1408E6A30 (AlpcpAcceptConnectPort.c)
 */

__int64 __fastcall NtAcceptConnectPort(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx
  char v10; // [rsp+58h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v10 = 1;
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpAcceptConnectPort(a1, 0LL, 0LL, 0LL, 0LL, a2, a3, 0LL, a4, a5, a6, v10);
  KeLeaveCriticalRegion();
  if ( v7 == -1073740029 )
    return (unsigned int)-1073741813;
  return v7;
}
