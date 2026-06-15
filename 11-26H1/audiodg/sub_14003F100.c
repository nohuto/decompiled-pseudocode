/*
 * XREFs of sub_14003F100 @ 0x14003F100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003F100(__int64 a1)
{
  __int64 result; // rax

  result = a1 + 16;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 32));
  return result;
}
