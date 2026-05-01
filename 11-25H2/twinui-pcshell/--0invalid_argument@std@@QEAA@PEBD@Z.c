/*
 * XREFs of ??0invalid_argument@std@@QEAA@PEBD@Z @ 0x1802DBFEC
 * Callers:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800AD1DC (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 * Callees:
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802DBF08 (--0exception@std@@QEAA@QEBD@Z.c)
 */

std::invalid_argument *__fastcall std::invalid_argument::invalid_argument(std::invalid_argument *this, const char *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::logic_error::`vftable';
  return this;
}
