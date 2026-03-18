/*
 * XREFs of ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x140218448
 * Callers:
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x140110B64 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     IOCPDispatcher_Destroy @ 0x140218AE0 (IOCPDispatcher_Destroy.c)
 *     KSTIOCPDispatcher_Destroy @ 0x140218B40 (KSTIOCPDispatcher_Destroy.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1400E9D80 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 */

HANDLE *__fastcall IOCPDispatcher::`scalar deleting destructor'(HANDLE *Buffer)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  *Buffer = &IOCPDispatcher::`vftable';
  IOCPDispatcher::Close(Buffer, 0);
  GreDeleteFastMutex((char *)Buffer, v2, v3, v4);
  return Buffer;
}
