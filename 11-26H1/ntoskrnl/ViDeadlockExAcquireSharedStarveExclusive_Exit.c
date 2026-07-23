/*
 * XREFs of ViDeadlockExAcquireSharedStarveExclusive_Exit @ 0x140C3D6F0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockExAcquireSharedStarveExclusive_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
    return VfDeadlockAcquireResource(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
  return result;
}
