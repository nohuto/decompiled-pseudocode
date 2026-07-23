/*
 * XREFs of ExMoveFastResourceOwnershipWithFlags @ 0x14041E540
 * Callers:
 *     <none>
 * Callees:
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x14041E56C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExDisownFastResource @ 0x1404F1ED0 (ExDisownFastResource.c)
 */

__int64 __fastcall ExMoveFastResourceOwnershipWithFlags(__int64 *a1, ULONG_PTR a2, ULONG_PTR a3, char a4)
{
  __int64 result; // rax

  result = *a1;
  if ( (*a1 & 1) == 0 )
    return ExpMoveSharedFastResourceOwnershipWithFlags((ULONG_PTR)a1, a2, a3);
  if ( (a4 & 1) != 0 )
    return ExDisownFastResource((ULONG_PTR)a1, 0LL);
  return result;
}
