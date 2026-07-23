/*
 * XREFs of DbgkExitProcess @ 0x14077DD00
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     DbgkpSendApiMessage @ 0x1409CEE1C (DbgkpSendApiMessage.c)
 */

struct _KTHREAD *DbgkExitProcess()
{
  _KPROCESS *Process; // rcx
  struct _KTHREAD *result; // rax
  int v2; // edx
  _BYTE v3[228]; // [rsp+54h] [rbp-E4h] BYREF

  memset_0(v3, 0, 0xDCuLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  result = KeGetCurrentThread();
  v2 = *((_DWORD *)&result[1].SwapListEntry + 2);
  if ( (v2 & 4) == 0 && Process[1].UserTime && (v2 & 2) != 0 )
  {
    Process[3].ReadyListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000014];
    return (struct _KTHREAD *)DbgkpSendApiMessage(Process);
  }
  return result;
}
