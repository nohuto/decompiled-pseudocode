/*
 * XREFs of ViIrqlExTryToAcquireFastMutex_Exit @ 0x140C3C5A0
 * Callers:
 *     <none>
 * Callees:
 *     VfKeIrqlLogRaise @ 0x140C46D4C (VfKeIrqlLogRaise.c)
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
