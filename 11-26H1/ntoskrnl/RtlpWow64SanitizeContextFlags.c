/*
 * XREFs of RtlpWow64SanitizeContextFlags @ 0x140A8925C
 * Callers:
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1403D9B20 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpWow64SanitizeContextFlags(int *a1, char a2)
{
  __int64 result; // rax

  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741811 )
      return result;
  }
  else
  {
    if ( (*a1 & 0x10000) != 0 )
      return result;
    result = 3221225485LL;
  }
  if ( a2 )
  {
    *a1 = *a1 & 0xD800007F | 0x10000;
    return 0LL;
  }
  return result;
}
