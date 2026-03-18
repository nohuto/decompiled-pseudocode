/*
 * XREFs of ViDeadlockExTryToAcquireFastMutex_Exit @ 0x140B89550
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140B983E4 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockExTryToAcquireFastMutex_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return VfDeadlockAcquireResource(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
  return result;
}
