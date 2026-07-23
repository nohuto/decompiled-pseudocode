/*
 * XREFs of ExCreatePoolInternal @ 0x140780744
 * Callers:
 *     SmGlobalsStart @ 0x140C85428 (SmGlobalsStart.c)
 * Callees:
 *     ExpPoolCreate @ 0x140780790 (ExpPoolCreate.c)
 */

__int64 __fastcall ExCreatePoolInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 result; // rax

  result = ExpPoolCreate(a1);
  if ( (int)result >= 0 )
    *a5 = (unsigned __int64)&dword_140E6BF60 ^ qword_140E6BFA8;
  return result;
}
