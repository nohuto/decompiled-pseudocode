/*
 * XREFs of __GSHandlerCheckCommon @ 0x14053C858
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x14053B29C (__GSHandlerCheck_SEH.c)
 *     __GSHandlerCheck @ 0x14053C834 (__GSHandlerCheck.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall _GSHandlerCheckCommon(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx

  result = *(_QWORD *)(a2 + 8);
  v3 = *(unsigned __int8 *)(*(unsigned int *)(*(_QWORD *)(a2 + 16) + 8LL) + result + 3);
  if ( (v3 & 0xF) != 0 )
    return v3 & 0xFFFFFFF0;
  return result;
}
