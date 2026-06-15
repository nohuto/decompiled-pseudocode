/*
 * XREFs of sub_140047AFC @ 0x140047AFC
 * Callers:
 *     sub_1400219B0 @ 0x1400219B0 (sub_1400219B0.c)
 *     sub_14002A8F8 @ 0x14002A8F8 (sub_14002A8F8.c)
 *     sub_14003D2CC @ 0x14003D2CC (sub_14003D2CC.c)
 *     sub_14004C7F4 @ 0x14004C7F4 (sub_14004C7F4.c)
 *     sub_14005F2B0 @ 0x14005F2B0 (sub_14005F2B0.c)
 * Callees:
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 */

void __noreturn sub_140047AFC()
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  pExceptionObject[2] = 0LL;
  pExceptionObject[1] = "bad array new length";
  pExceptionObject[0] = &std::bad_array_new_length::`vftable';
  throw (std::bad_array_new_length *)pExceptionObject;
}
