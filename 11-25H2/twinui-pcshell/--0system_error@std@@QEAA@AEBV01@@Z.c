/*
 * XREFs of ??0system_error@std@@QEAA@AEBV01@@Z @ 0x1803143AC
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x1802DBECC (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

std::system_error *__fastcall std::system_error::system_error(
        std::system_error *this,
        const struct std::system_error *a2)
{
  __int128 v4; // xmm0
  std::system_error *result; // rax

  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::_System_error::`vftable';
  v4 = *(_OWORD *)((char *)a2 + 24);
  *(_QWORD *)this = &std::_System_error::`vftable';
  result = this;
  *(_OWORD *)((char *)this + 24) = v4;
  return result;
}
