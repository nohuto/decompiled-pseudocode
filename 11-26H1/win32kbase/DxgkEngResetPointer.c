/*
 * XREFs of DxgkEngResetPointer @ 0x14017E360
 * Callers:
 *     <none>
 * Callees:
 *     IsUserResetPointerSupported @ 0x14017E380 (IsUserResetPointerSupported.c)
 *     UserResetPointer @ 0x140182B30 (UserResetPointer.c)
 */

__int64 DxgkEngResetPointer()
{
  __int64 result; // rax

  result = IsUserResetPointerSupported();
  if ( (int)result >= 0 )
    return UserResetPointer();
  return result;
}
