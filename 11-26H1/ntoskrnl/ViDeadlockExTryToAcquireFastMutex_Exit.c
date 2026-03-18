/*
 * XREFs of ViDeadlockExTryToAcquireFastMutex_Exit @ 0x140C377C0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140C47314 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockExTryToAcquireFastMutex_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return VfDeadlockAcquireResource(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
  return result;
}
