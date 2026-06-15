/*
 * XREFs of sub_1400A9094 @ 0x1400A9094
 * Callers:
 *     sub_1400A4ED4 @ 0x1400A4ED4 (sub_1400A4ED4.c)
 * Callees:
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 */

void __noreturn sub_1400A9094()
{
  __int64 (__fastcall **pExceptionObject)(); // [rsp+20h] [rbp-28h] BYREF
  __int128 v1; // [rsp+28h] [rbp-20h]

  pExceptionObject = off_1400C1120;
  v1 = 0LL;
  throw (std::bad_weak_ptr *)&pExceptionObject;
}
