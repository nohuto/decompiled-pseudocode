/*
 * XREFs of sub_14004A474 @ 0x14004A474
 * Callers:
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 * Callees:
 *     sub_140048310 @ 0x140048310 (sub_140048310.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 */

void __noreturn sub_14004A474()
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_140048310(pExceptionObject);
  throw (std::bad_array_new_length *)pExceptionObject;
}
