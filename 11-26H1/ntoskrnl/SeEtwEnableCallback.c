/*
 * XREFs of SeEtwEnableCallback @ 0x14063E758
 * Callers:
 *     EtwpKernelProvEnableCallback @ 0x14082C6A0 (EtwpKernelProvEnableCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall SeEtwEnableCallback(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  BYTE3(RtlpBootStatHandleLock.Queue) = (a4 & 0x40) != 0;
}
