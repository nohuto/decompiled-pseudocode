/*
 * XREFs of _lambda_4cf05917044c6be20516fdcd53e82ac0_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long_ @ 0x14019A510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_4cf05917044c6be20516fdcd53e82ac0_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long_(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        __int64 Tag)
{
  return ExAllocatePool2(258LL, NumberOfBytes, Tag);
}
