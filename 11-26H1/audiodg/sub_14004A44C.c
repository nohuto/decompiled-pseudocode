/*
 * XREFs of sub_14004A44C @ 0x14004A44C
 * Callers:
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 * Callees:
 *     sub_14004A424 @ 0x14004A424 (sub_14004A424.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 */

void __noreturn sub_14004A44C()
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_14004A424(pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}
