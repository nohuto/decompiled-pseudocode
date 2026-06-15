/*
 * XREFs of sub_14007EF4C @ 0x14007EF4C
 * Callers:
 *     sub_140079B90 @ 0x140079B90 (sub_140079B90.c)
 *     sub_14007A820 @ 0x14007A820 (sub_14007A820.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 */

__int64 __fastcall sub_14007EF4C(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 136), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    _InterlockedOr(v3, 0);
    v2 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 120) = 0LL;
    v5 = 0LL;
    v4 = v2;
    sub_1400125D4(&v4);
    return sub_1400125D4(&v5);
  }
  return result;
}
