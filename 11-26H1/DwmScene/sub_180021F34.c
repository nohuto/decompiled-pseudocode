/*
 * XREFs of sub_180021F34 @ 0x180021F34
 * Callers:
 *     sub_180021A50 @ 0x180021A50 (sub_180021A50.c)
 *     sub_180024190 @ 0x180024190 (sub_180024190.c)
 * Callees:
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 */

__int64 sub_180021F34()
{
  __int64 result; // rax
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  result = o__aligned_malloc(160LL, 8LL);
  if ( !result )
  {
    pExceptionObject[1] = "bad allocation";
    pExceptionObject[0] = &stdext::bad_alloc::`vftable';
    throw (stdext::bad_alloc *)pExceptionObject;
  }
  return result;
}
