/*
 * XREFs of ExpValidateWorkItem @ 0x140203F4C
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402020DC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemExFromIo @ 0x1402030B4 (ExQueueWorkItemExFromIo.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140203E58 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemEx @ 0x140203EF0 (ExQueueWorkItemEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpValidateWorkItem(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // r9
  __int64 result; // rax

  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v2 = BugCheckParameter2[2];
  result = 0xFFFF800000000000uLL;
  if ( v2 < 0xFFFF800000000000uLL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v2, 0LL);
  return result;
}
