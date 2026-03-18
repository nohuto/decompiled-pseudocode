/*
 * XREFs of ViIrqlExTryToAcquireFastMutex_Exit @ 0x140B8D5D0
 * Callers:
 *     <none>
 * Callees:
 *     VfKeIrqlLogRaise @ 0x140B98000 (VfKeIrqlLogRaise.c)
 */

__int64 __fastcall ViIrqlExTryToAcquireFastMutex_Exit(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    LOBYTE(a2) = 1;
    return VfKeIrqlLogRaise(KeGetCurrentIrql(), a2);
  }
  return result;
}
