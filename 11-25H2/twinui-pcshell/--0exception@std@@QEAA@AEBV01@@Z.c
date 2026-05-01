/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x1802DBECC
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x1802DBDC4 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x1802DBEA4 (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x1802DBFC4 (--0logic_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_array_new_length@std@@QEAA@AEBV01@@Z @ 0x1802DF97C (--0bad_array_new_length@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x1802E3984 (--0bad_optional_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0_System_error@std@@QEAA@AEBV01@@Z @ 0x1803141D4 (--0_System_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z @ 0x180314214 (--0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z.c)
 *     ??0system_error@std@@QEAA@AEBV01@@Z @ 0x1803143AC (--0system_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x18041A554 (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x1802D2E02 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  return this;
}
