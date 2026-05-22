/*
 * XREFs of ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x1800A7B80
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x18009DBF8 (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

std::bad_optional_access *__fastcall std::bad_optional_access::bad_optional_access(
        std::bad_optional_access *this,
        const struct std::bad_optional_access *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::bad_optional_access::`vftable';
  return this;
}
