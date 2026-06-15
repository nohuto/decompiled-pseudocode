/*
 * XREFs of sub_14002C640 @ 0x14002C640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14002C640(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    result = *a3;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 4LL * a2 + 48), result);
  }
  return result;
}
