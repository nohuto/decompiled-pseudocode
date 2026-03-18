/*
 * XREFs of DxgkEngResetPointer @ 0x140146170
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported @ 0x140146190 (IsUserResetPointerSupported.c)
 *     UserResetPointer @ 0x140146B5C (UserResetPointer.c)
 */

__int64 DxgkEngResetPointer()
{
  __int64 result; // rax

  result = IsUserResetPointerSupported();
  if ( (int)result >= 0 )
    return UserResetPointer();
  return result;
}
