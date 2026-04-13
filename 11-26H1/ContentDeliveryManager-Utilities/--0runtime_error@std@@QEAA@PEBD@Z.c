/*
 * XREFs of ??0runtime_error@std@@QEAA@PEBD@Z @ 0x18004BD4C
 * Callers:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x18004BB80 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??0range_error@std@@QEAA@PEBD@Z @ 0x180067EB0 (--0range_error@std@@QEAA@PEBD@Z.c)
 * Callees:
 *     <none>
 */

std::runtime_error *__fastcall std::runtime_error::runtime_error(std::runtime_error *this, const char *a2)
{
  const char *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  exception::exception(this, &v4);
  *(_QWORD *)this = &std::range_error::`vftable';
  return this;
}
