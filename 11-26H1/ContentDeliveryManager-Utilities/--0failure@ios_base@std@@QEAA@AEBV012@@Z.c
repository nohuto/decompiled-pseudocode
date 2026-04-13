/*
 * XREFs of ??0failure@ios_base@std@@QEAA@AEBV012@@Z @ 0x18004BC14
 * Callers:
 *     <none>
 * Callees:
 *     ??0system_error@std@@QEAA@AEBV01@@Z @ 0x18004BE4C (--0system_error@std@@QEAA@AEBV01@@Z.c)
 */

std::ios_base::failure *__fastcall std::ios_base::failure::failure(
        std::ios_base::failure *this,
        const struct std::ios_base::failure *a2)
{
  std::system_error::system_error(this, a2);
  *(_QWORD *)this = &std::range_error::`vftable';
  return this;
}
