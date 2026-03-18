/*
 * XREFs of ValidateHwndStrict @ 0x1401AC320
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ValidateHwndEx @ 0x1400BAF40 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwndStrict(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = ValidateHwndEx(a1, 1LL, 0);
  if ( result )
  {
    v2 = *(_QWORD *)(result + 40);
    if ( *(char *)(v2 + 20) < 0 || *(char *)(v2 + 19) < 0 )
    {
      UserSetLastError(1400);
      return 0LL;
    }
  }
  return result;
}
