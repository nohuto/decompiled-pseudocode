/*
 * XREFs of ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x14020EF28
 * Callers:
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1400CC030 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     IOCPDispatcher_Destroy @ 0x140210EC0 (IOCPDispatcher_Destroy.c)
 *     KSTIOCPDispatcher_Destroy @ 0x140210F20 (KSTIOCPDispatcher_Destroy.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x140082720 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 */

HANDLE *__fastcall IOCPDispatcher::`scalar deleting destructor'(HANDLE *Buffer)
{
  *Buffer = &IOCPDispatcher::`vftable';
  IOCPDispatcher::Close(Buffer, 0);
  GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
