/*
 * XREFs of ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x18000458C
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@@QEAA@AEBV0@@Z_0 @ 0x180021BA4 (--0exception@@QEAA@AEBV0@@Z_0.c)
 */

std::bad_alloc *__fastcall std::bad_alloc::bad_alloc(std::bad_alloc *this, const struct std::bad_alloc *a2)
{
  exception::exception(this, a2);
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
