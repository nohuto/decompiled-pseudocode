/*
 * XREFs of ValidateHwndStrict @ 0x14006E310
 * Callers:
 *     <none>
 * Callees:
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHwndStrict(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = ValidateHwndEx(a1, 1LL);
  if ( result )
  {
    v2 = *(_QWORD *)(result + 40);
    if ( *(char *)(v2 + 20) < 0 || *(char *)(v2 + 19) < 0 )
    {
      UserSetLastError(1400LL);
      return 0LL;
    }
  }
  return result;
}
