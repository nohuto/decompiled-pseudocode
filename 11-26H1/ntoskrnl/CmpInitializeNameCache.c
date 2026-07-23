/*
 * XREFs of CmpInitializeNameCache @ 0x14085F6C8
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

struct _LIST_ENTRY *CmpInitializeNameCache()
{
  struct _LIST_ENTRY *result; // rax
  __int64 v1; // rcx

  result = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
  CmpKeyLockTracker.WaitListEntry.Flink = result;
  if ( !result )
    KeBugCheckEx(0x67u, 3uLL, 2uLL, 0LL, 0LL);
  v1 = 2048LL;
  do
  {
    result->Flink = 0LL;
    ++result;
    --v1;
  }
  while ( v1 );
  return result;
}
