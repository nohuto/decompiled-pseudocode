/*
 * XREFs of ?SetAbsoluteBeginTime@CAnimationResource@@UEAAJT_LARGE_INTEGER@@@Z @ 0x1800A75F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationResource::SetAbsoluteBeginTime(union _LARGE_INTEGER *this, union _LARGE_INTEGER a2)
{
  __int64 result; // rax

  this[7] = a2;
  result = 0LL;
  BYTE1(this[8].LowPart) = 1;
  return result;
}
