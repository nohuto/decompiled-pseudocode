/*
 * XREFs of ExCreatePoolInternal @ 0x14077DC44
 * Callers:
 *     SmGlobalsStart @ 0x140C7F428 (SmGlobalsStart.c)
 * Callees:
 *     ExpPoolCreate @ 0x14077DC90 (ExpPoolCreate.c)
 */

__int64 __fastcall ExCreatePoolInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 result; // rax

  result = ExpPoolCreate(a1);
  if ( (int)result >= 0 )
    *a5 = (unsigned __int64)&dword_140E6BC60 ^ qword_140E6BCA8;
  return result;
}
