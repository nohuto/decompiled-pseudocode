/*
 * XREFs of ?Create@CEventPool@@SAQEAV1@XZ @ 0x1401C1834
 * Callers:
 *     ?Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ @ 0x1401C16E8 (-Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ.c)
 * Callees:
 *     <none>
 */

union _SLIST_HEADER *CEventPool::Create(void)
{
  union _SLIST_HEADER *result; // rax
  struct CEventPool *v1; // rbx

  result = (union _SLIST_HEADER *)EngAllocMem(1u, 0x20u, 0x676D6466u);
  v1 = (struct CEventPool *)result;
  if ( result )
  {
    InitializeSListHead(result + 1);
    result = (union _SLIST_HEADER *)v1;
    *(_DWORD *)v1 = 0;
  }
  return result;
}
