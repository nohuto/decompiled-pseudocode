/*
 * XREFs of ??0system_error@std@@QEAA@AEBV01@@Z @ 0x18004BE4C
 * Callers:
 *     ??0failure@ios_base@std@@QEAA@AEBV012@@Z @ 0x18004BC14 (--0failure@ios_base@std@@QEAA@AEBV012@@Z.c)
 * Callees:
 *     ??0runtime_error@std@@QEAA@AEBV01@@Z @ 0x18004BD1C (--0runtime_error@std@@QEAA@AEBV01@@Z.c)
 */

std::system_error *__fastcall std::system_error::system_error(
        std::system_error *this,
        const struct std::system_error *a2)
{
  std::system_error *result; // rax

  std::runtime_error::runtime_error(this, a2);
  *(_QWORD *)this = &std::range_error::`vftable';
  result = this;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  return result;
}
