/*
 * XREFs of ??1bad_cast@std@@UEAA@XZ @ 0x1800BB7CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  o___std_exception_destroy_0();
}
