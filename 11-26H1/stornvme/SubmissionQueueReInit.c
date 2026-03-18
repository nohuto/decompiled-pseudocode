/*
 * XREFs of SubmissionQueueReInit @ 0x140006A00
 * Callers:
 *     NVMeQueuesReInit @ 0x1400076B0 (NVMeQueuesReInit.c)
 * Callees:
 *     memset @ 0x140032A40 (memset.c)
 */

void *__fastcall SubmissionQueueReInit(__int64 a1, __int64 a2)
{
  void *v2; // r9
  void *result; // rax

  v2 = *(void **)a2;
  *(_DWORD *)(a2 + 52) = 0;
  *(_WORD *)(a2 + 56) = 0;
  *(_WORD *)(a2 + 136) = 0;
  if ( *(_WORD *)(a2 + 48) )
  {
    result = (void *)((unsigned int)(*(unsigned __int16 *)(a1 + 326) << 6) >> 2);
    if ( !(_DWORD)result )
      return result;
    return memset(v2, 0, 4LL * (unsigned int)result);
  }
  result = (void *)((unsigned int)(*(unsigned __int16 *)(a1 + 324) << 6) >> 2);
  if ( (_DWORD)result )
    return memset(v2, 0, 4LL * (unsigned int)result);
  return result;
}
