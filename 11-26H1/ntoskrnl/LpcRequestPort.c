/*
 * XREFs of LpcRequestPort @ 0x1409BCEB0
 * Callers:
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 */

__int64 __fastcall LpcRequestPort(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD v8[6]; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+50h] [rbp-18h]

  memset_0(v8, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8[0] = a1;
  v9 = 65538;
  LODWORD(a1) = AlpcpSendMessage(v8, a2, 0LL, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6);
  return (unsigned int)a1;
}
