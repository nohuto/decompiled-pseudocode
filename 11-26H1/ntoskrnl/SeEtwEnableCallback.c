/*
 * XREFs of SeEtwEnableCallback @ 0x14063B63C
 * Callers:
 *     EtwpKernelProvEnableCallback @ 0x140826460 (EtwpKernelProvEnableCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall SeEtwEnableCallback(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  RtlpBootStatHandleLock.WaitBlockFill7[129] = (a4 & 0x40) != 0;
}
