/*
 * XREFs of sub_1400495E0 @ 0x1400495E0
 * Callers:
 *     sub_140049120 @ 0x140049120 (sub_140049120.c)
 * Callees:
 *     sub_14004A49C @ 0x14004A49C (sub_14004A49C.c)
 */

__int64 __fastcall sub_1400495E0(char a1)
{
  __int64 result; // rax

  result = sub_14004A49C();
  if ( (_DWORD)result )
  {
    if ( !a1 )
      _InterlockedExchange64(&qword_1400E7C98, 0LL);
  }
  return result;
}
