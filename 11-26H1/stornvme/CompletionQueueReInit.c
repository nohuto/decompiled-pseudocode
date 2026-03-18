/*
 * XREFs of CompletionQueueReInit @ 0x140006A60
 * Callers:
 *     NVMeQueuesReInit @ 0x1400076B0 (NVMeQueuesReInit.c)
 * Callees:
 *     memset @ 0x140032A40 (memset.c)
 */

void *__fastcall CompletionQueueReInit(__int64 a1, __int64 a2)
{
  void *v2; // r9
  void *result; // rax

  v2 = *(void **)a2;
  *(_DWORD *)(a2 + 170) = 0;
  if ( *(_WORD *)(a2 + 168) )
  {
    result = (void *)((16 * (unsigned int)*(unsigned __int16 *)(a1 + 326)) >> 2);
    if ( !(_DWORD)result )
      return result;
    return memset(v2, 0, 4LL * (unsigned int)result);
  }
  result = (void *)((16 * (unsigned int)*(unsigned __int16 *)(a1 + 324)) >> 2);
  if ( (_DWORD)result )
    return memset(v2, 0, 4LL * (unsigned int)result);
  return result;
}
