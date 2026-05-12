/*
 * XREFs of sub_14013C48C @ 0x14013C48C
 * Callers:
 *     __GSHandlerCheck @ 0x14013C468 (__GSHandlerCheck.c)
 *     __GSHandlerCheck_SEH @ 0x14013C4F4 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14013C48C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx

  result = *(_QWORD *)(a2 + 8);
  v3 = *(unsigned __int8 *)(*(unsigned int *)(*(_QWORD *)(a2 + 16) + 8LL) + result + 3);
  if ( (v3 & 0xF) != 0 )
    return v3 & 0xFFFFFFF0;
  return result;
}
